package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxSpriteUtil;
import flash.display.BitmapData;
import flixel.util.FlxDestroyUtil;
import flixel.util.FlxColor;
import flixel.util.FlxRandom;
import flixel.util.FlxColorUtil;
import flixel.addons.ui.FlxUIButton;
import flixel.addons.ui.FlxUIText;
import flixel.system.FlxSound;
import flixel.util.FlxSave;

/**
 * A FlxState which can be used for the actual gameplay.
 */
class PlayState extends FlxState
{
    public static var rotationAmount:Float;
    public static var diff:Difficulty;
    
    private var GameOver:Bool = false;
    private var StartGame:Bool = true;
    private var StartButton:FlxUIButton;
    private var MusicButton:FlxUIButton;
    private var music:Bool = true;
    private var sound:Bool = true;
    private var SoundButton:FlxUIButton;
    private var GameOverText:FlxText;
    
    private var ballSfx:FlxSound;
    private var lifeSfx:FlxSound;
    private var deathSfx:FlxSound; 
    private var overSfx:FlxSound; 
    private var diffSfx:FlxSound; 
    private var rotateSfx:FlxSound; 
    private var matchSfx:FlxSound;
    
    private var score:UInt;
    private var lives:Int;
    private var extralifecounter:Int = 0;
    private var diffCounter:Int = 0;
    private var scoreText:FlxText;
    private var livesText:FlxText;
    private var discs:Array<DiscSprite>;
    
    private var pipes:Array<FlxSprite>;
    private var ball:Array<Ball>;
    private var bg:FlxSprite;
    private var border:FlxSprite;
    private var margin:FlxSprite;
    
    private var hiscoreText:FlxText;
    private var hiScore:Int = 0;
    private var scoreSave:FlxSave;

	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{
        diff = new Difficulty();
        FlxG.sound.playMusic("assets/music/background.wav", 1, true);
        lifeSfx = FlxG.sound.load("assets/sounds/extralife.wav");
        ballSfx = FlxG.sound.load("assets/sounds/BallDrop.wav");
        deathSfx = FlxG.sound.load("assets/sounds/LifeLost.wav");
        overSfx = FlxG.sound.load("assets/sounds/GameOver.wav");
        diffSfx = FlxG.sound.load("assets/sounds/IncreaseDifficulty.wav");
        rotateSfx = FlxG.sound.load("assets/sounds/rotate.wav");
        matchSfx = FlxG.sound.load("assets/sounds/Match.wav");
        
        rotationAmount = (360 / 8);
        score = 0;
    
        //create background
        bg = new FlxSprite();
        bg.loadGraphic("assets/images/bg.png");
        add(bg);
        
        //create discs
        discs = new Array();
        for (i in 0...9)
        {
            discs[i] = new DiscSprite(0,0,null,i);
            discs[i].loadGraphic("assets/images/OuterCircle"+(i+1)+".png");
            add(discs[i]);
        }
        //create pipes
        pipes = new Array();
        var angle:Float = -45;
        for (i in 0...4)
        {
            pipes[i] = new FlxSprite();
            pipes[i].loadGraphic("assets/images/pipe.png");
            pipes[i].angle = angle;
            angle += 90;
            add(pipes[i]);
        }
        pipes[0].x = 25;
        pipes[0].y = -50;
        pipes[1].x = 650;
        pipes[1].y = -50;
        pipes[2].x = 625;
        pipes[2].y = 550;
        pipes[3].x = 35;
        pipes[3].y = 565;
        
        //create ball array
        ball = new Array();
        
        //create margin for score
        margin = new FlxSprite();
        margin.makeGraphic(200, 700, FlxColor.BLACK);
        margin.x = 700;
        margin.y = 0;
        add(margin);
        
        border = new FlxSprite();
        border.makeGraphic(3,700,FlxColor.PLUM);
        border.x = 700;
        border.y = 0;
        scoreText = new FlxText(705,48,0,""+score,20);
        
        lives = 5;
        livesText = new FlxText(705,90,0,"Lives: " + lives, 24);
        add(livesText);
        
        add(border);
        add(new FlxText(705,0,0,"Score:",32));
        add(scoreText);
        
        GameOverText = new FlxText(705, 450, 0, "GAME OVER!", 26);
        GameOverText.color = FlxColor.RED;
        
        StartButton = new FlxUIButton(725,500, "", Start);
        StartButton.setLabel(new FlxUIText(0,0,0,"Start Game", 8));
        StartButton.resize(150,100);
        StartButton.onUp.sound = FlxG.sound.load("assets/sounds/buttonclick.wav");
        
        MusicButton = new FlxUIButton(725,625, "", ToggleMusic);
        MusicButton.setLabel(new FlxUIText(0,0,0,"Music Off", 8));
        MusicButton.resize(75,50);
        MusicButton.onUp.sound = FlxG.sound.load("assets/sounds/buttonclick.wav");
        add(MusicButton);
        
        SoundButton = new FlxUIButton(810,625, "", ToggleSoundFx);
        SoundButton.setLabel(new FlxUIText(0,0,0,"Sound Off", 8));
        SoundButton.resize(75,50);
        SoundButton.onUp.sound = FlxG.sound.load("assets/sounds/buttonclick.wav");
        add(SoundButton);
        
        scoreSave = new FlxSave();
        scoreSave.bind("ScoreSave");
        if (scoreSave.data.HiScore == null)
        {
            scoreSave.data.HiScore = 0;
            scoreSave.flush();
        }
        hiScore = scoreSave.data.HiScore;
        
        add(new FlxText(705, 150, 0, "High Score:", 26));
        hiscoreText = new FlxText(705,200,0,""+hiScore,20);
        add(hiscoreText);
        
		super.create();
	}
	
	/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
        FlxDestroyUtil.destroy(StartButton);
        FlxDestroyUtil.destroy(SoundButton);
        FlxDestroyUtil.destroy(MusicButton);
        
        FlxDestroyUtil.destroy(livesText);
        FlxDestroyUtil.destroy(scoreText);
        
        FlxDestroyUtil.destroy(border);
        FlxDestroyUtil.destroy(margin);
        
        for (i in 0...discs.length)
        {
            FlxDestroyUtil.destroy(discs[i]);
        }
        for (i in 0...pipes.length)
        {
            FlxDestroyUtil.destroy(pipes[i]);
        }
        
        FlxDestroyUtil.destroy(StartButton);
        FlxDestroyUtil.destroy(StartButton);
        
        FlxDestroyUtil.destroy(bg);
        
        FlxDestroyUtil.destroy(ballSfx);
        FlxDestroyUtil.destroy(diffSfx);
        FlxDestroyUtil.destroy(overSfx);
        FlxDestroyUtil.destroy(lifeSfx);
        FlxDestroyUtil.destroy(deathSfx);
        FlxDestroyUtil.destroy(rotateSfx);
        FlxDestroyUtil.destroy(matchSfx);
		super.destroy();
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{
        if (StartGame)
        {
            if (GameOver)
            {
                if (sound) overSfx.play();
                scoreSave.data.HiScore = hiScore;
                scoreSave.flush();
                add(GameOverText);
                StartButton.setLabel(new FlxUIText(0,0,0,"Try Again", 8));
                GameOver = false;
            }
            add(StartButton);
        }
        else
        {    
            if (FlxG.mouse.justReleased || FlxG.mouse.wheel > 0) 
            {      
                var d:Int = SelectDisc(FlxG.mouse.screenX,FlxG.mouse.screenY);
                if (d >= 0)
                {
                    discs[d].angle += rotationAmount;
                    discs[d].rotate(false);
                    rotateSfx.play(true);
                }
            }
            else if (FlxG.mouse.justReleasedRight || FlxG.mouse.wheel < 0)
            {
                var d:Int = SelectDisc(FlxG.mouse.screenX,FlxG.mouse.screenY);
                if (d >= 0)
                {
                    discs[d].angle += -rotationAmount;
                    discs[d].rotate(true);
                    rotateSfx.play(true);
                }
            }
            
            for (i in 0...ball.length)
            {
                ball[i].HandleMovement();
                updateScore(i);
            }
            
            if (diff.ShouldSpawn())
            {
                if (FlxRandom.intRanged(1,100) <= diff.getBallSpawnPercent())
                {
                    var b:Ball = new Ball(diff.getBallSpeed(), FlxRandom.intRanged(0,3));
                    b.color = getRandColor(FlxRandom.intRanged(1,8));
                    ball.push(b);
                    add(b);
                    if (sound) ballSfx.play();
                }   
            }
            
            if (diffCounter >= 25000)
            {
                diff.IncreaseDifficulty();
                diffCounter = 0;
                if (sound) diffSfx.play();
            }
            
            if (extralifecounter >= 10000)
            {
                extralifecounter = 0;
                lives++;
                //play soundfx
                if (sound) lifeSfx.play();
            }
            
            if (score > hiScore)
            {
                hiScore = score;
            }
            
            scoreText.text = ""+score;
            livesText.text = "Lives: " + lives;
            hiscoreText.text = ""+hiScore;
        }
		super.update();
	}
    
    private function ToggleMusic():Void
    {
        if (music)
        {
            MusicButton.setLabel(new FlxUIText(0,0,0,"Music On", 8));
            FlxG.sound.pause();
        }
        else
        {
            MusicButton.setLabel(new FlxUIText(0,0,0,"Music Off", 8));
            FlxG.sound.resume();
        }
        music = !music;
    }
    
    private function ToggleSoundFx():Void
    {
        if (sound)
        {
            SoundButton.setLabel(new FlxUIText(0,0,0,"Sound On", 8));
        }
        else
        {
            SoundButton.setLabel(new FlxUIText(0,0,0,"Sound Off", 8));
        }
        sound = !sound;
    }
    
    private function Start():Void
    {
        StartGame = false;
        GameOver = false;
        lives = 5;
        score = 0;
        extralifecounter = 0;
        diffCounter = 0;
        for (i in 0...ball.length)
        {
            ball[i].destroy();
        }
        ball = new Array();
        remove(StartButton);
        remove(GameOverText);
    }

    private function SelectDisc(x:Int, y:Int):Int
    {
        var cData:UInt;
        
        for (i in 0...discs.length)
        {
            cData = discs[i].pixels.getPixel32(x,y);
            if ((cData >> 24) > 50)
            {
                return i;
            }
        }
        
        return -1;
    }
    
    private function updateScore(ballIndex:Int):Void
    {
        var x:Int = Std.int(ball[ballIndex].x + (25/2));
        var y:Int = Std.int(ball[ballIndex].y + (25/2));
        var discColor:Int;
        var discIndex:Int = SelectDisc(x,y);
               
        if (discIndex >= 0)
        {
            discColor = discs[discIndex].getColor(ball[ballIndex].start);
            
            if (!ball[ballIndex].IsDiscTriggered(discIndex))
            {
                if (discColor == 0)
                {
                    lives--;
                    if (sound) deathSfx.play();
                    ball[ballIndex].shouldDestroy = true;
                    if (lives <= 0)
                    {
                        StartGame = true;
                        GameOver = true;
                    }
                }
                else
                {
                    var s:Int = addScore(discColor, ball[ballIndex].color);
                    if (s > 0)
                    {
                        add(new ScoreText(ball[ballIndex].x, ball[ballIndex].y, 0, ""+s, 20));
                        score += s;
                        extralifecounter += s;
                        diffCounter += s;
                    }
                }
                ball[ballIndex].TriggerDisc(discIndex);
            }
        }
    }
    
    private function addScore(discColor:Int, ballColor:Int):Int
    { 
        var s:Int = 0;
        if (discColor == ballColor)
        {
            s += 500;
            if (sound) matchSfx.play(true);
        }
        else
        {
            s += colorCompare(FlxColorUtil.getRed(discColor),FlxColorUtil.getRed(ballColor));
            s += colorCompare(FlxColorUtil.getGreen(discColor),FlxColorUtil.getGreen(ballColor));
            s += colorCompare(FlxColorUtil.getBlue(discColor),FlxColorUtil.getBlue(ballColor));
        }
        return s;
    }
    
    private function colorCompare(c1:Int, c2:Int):Int
    {
        if ((c1 == c2) && (c1 > 0) && (c2 > 0))
        {
            return 250;
        }
        else
        {
            return Std.int((c1 & c2) / 10 * 10);
        }
    }

    private function getRandColor(i:Int):Int
    {
        switch(i) {
        case 1:
            return 0xff0000;
        case 2:
            return 0x00ff00;
        case 3:
            return 0x0000ff;
        case 4:
            return 0xff8000;
        case 5:
            return 0xffff80;
        case 6:
            return 0x800080;
        case 7:
            return 0xff0080;
        case 8:
            return 0x408080;
        default:
            return 0xff0000;
            }
    }
}