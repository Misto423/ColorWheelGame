package;
import flixel.util.FlxTimer;
class Difficulty
{
    public var curDiff:Int;
    private var spawnTimer:FlxTimer;
    public function new (?start:Int = 1):Void
    {
        curDiff = start;
        InitSpawnTimer();
    }
    
    private function InitSpawnTimer():Void
    {
        switch (curDiff) 
        {
            case 1:
                spawnTimer = new FlxTimer(2.5);
            case 2:
                spawnTimer = new FlxTimer(2.25);
            case 3:
                spawnTimer = new FlxTimer(2);
            case 4:
                spawnTimer = new FlxTimer(1.75);            
            case 5:
                spawnTimer = new FlxTimer(1.25);           
            default:
                spawnTimer = new FlxTimer(2.5);
        }
    }
    
    public function IncreaseDifficulty():Void
    {
        if (curDiff < 5) 
        {
            curDiff++;
            InitSpawnTimer();
        }   
    }
    
    public function ShouldSpawn():Bool
    {
        if (spawnTimer.finished)
        {     
            spawnTimer.reset();
            return true;
        }
        return false;
    }
    
    public function getBallSpeed():Int
    {
        switch (curDiff) 
        {
            case 1:
                return 50;
            case 2:
                return 75;
            case 3:
                return 100;
            case 4:
                return 125;           
            case 5:
                return 175;          
            default:
                return 50;
        }
    }
    
    public function getBallSpawnPercent():Int
    {
        switch (curDiff) 
        {
            case 1:
                return 75;
            case 2:
                return 70;
            case 3:
                return 65;
            case 4:
                return 60;           
            case 5:
                return 50;           
            default:
                return 75;
        }
    }   
}