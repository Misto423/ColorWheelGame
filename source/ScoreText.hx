package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.util.FlxAngle;
import flixel.util.FlxTimer;
import flixel.text.FlxText;

class ScoreText extends FlxText
{
    public var lifetime:FlxTimer;
    
    public function new (?X:Float = 0, ?Y:Float = 0, ?FieldWidth:Float = 0, ?Text:String = null, ?Size:Int = 8, ?EmbeddedFont:Bool = true):Void
    {
        super (X, Y, FieldWidth, Text, Size, EmbeddedFont);
        this.borderStyle = FlxText.BORDER_OUTLINE_FAST;
        this.borderColor = FlxColor.WHITE;
        this.color = FlxColor.BLACK;
        this.borderSize = 1;
        lifetime = new FlxTimer(2.5);
    }
    
    override public function update():Void
    {
        this.setPosition(this.x, this.y-0.5);
        if (lifetime.finished)
        {
            this.destroy();
            return;
        }
    }
    
}