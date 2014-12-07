package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.util.FlxAngle;

class Ball extends FlxSprite
{
    public var vel:Float = 500;
    public var accel:Float = 3.0;
    public var start:Int;
    private var DiscsTriggered:Array<Bool>;
    public var shouldDestroy:Bool = false;

    public function new(spd:Int,?p:Int=0)
    {
        var x, y:Float;
        if (p == 0)
        {
            x = y = 0;
        }
        else if (p == 1)
        {
            x = 700;
            y = 0;
        }
        else if (p == 2)
        {
            x = y = 700;
        }
        else
        {
            x = 0;
            y = 700;
        }   
    
        super(x,y);
        start = p;
        vel = spd;
        loadGraphic("assets/images/ball.png");
        DiscsTriggered = new Array();
        for (i in 0...9)
        {
            DiscsTriggered[i] = false;
        }
    }
    
    public function TriggerDisc(discIndex:Int):Void
    {
        DiscsTriggered[discIndex] = true;
    }
    public function IsDiscTriggered(discIndex:Int):Bool
    {
        return DiscsTriggered[discIndex];
    }

    public function HandleMovement():Void
    { 
        if (this.x > 290 && this.x < 410 && this.y > 290 && this.y < 410)
        {
            this.destroy();
            return;
        }
        if (shouldDestroy)
        {
            this.destroy();
            return;
        }
        drag.x = drag.y = 1600;
        velocity.x = vel;
        velocity.y = vel;
        FlxAngle.rotatePoint(vel, 0, 0, 0, CalcMoveAngle(), velocity);
    }

    private function CalcMoveAngle():Float
    {
        if (start == 0)
        {
            return 45;
        }
        else if (start == 1)
        {
            return 135;
        }
        else if (start == 2)
        {
            return -135;
        }
        else
        {
            return -45;
        }
    }
}