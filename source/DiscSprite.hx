package;
import flixel.FlxSprite;

class DiscSprite extends FlxSprite
{
    public var colors:Array<Int>;
    public var topLeft:Int;

    public function new (?X:Float = 0, ?Y:Float = 0, ?SimpleGraphic:Dynamic = null, ?index:Int = 8)
    {
        colors = new Array();
        setupArray(index);
        topLeft = 0;
    
        super (X, Y, SimpleGraphic);
    }
    
    public function getColor(pos:Int):Int
    {
        if (pos == 0)
            return colors[topLeft];
        else if (pos == 1)
            if ((topLeft + 2) >= 8)
                return colors[(topLeft+2) - 8];
            else
                return colors[topLeft + 2];
        else if (pos == 2)
            if ((topLeft + 4) >= 8)
                return colors[(topLeft+4) - 8];
            else
                return colors[topLeft + 4];
        else
            if ((topLeft + 6) >= 8)
                return colors[(topLeft+6) - 8];
            else
                return colors[topLeft + 6];                
    }
    
    public function rotate(direction:Bool):Void
    {
        if (direction)
        {
            if (topLeft < 7) topLeft++;
            else topLeft = 0;
        }
        else
        {
            if (topLeft > 0) topLeft--;
            else topLeft = 7;
        }
    }

    private function setupArray(index:Int):Void
    {
        //setup disc colors
        if (index == 0)
        {
            colors[0] = 0xff0000;
            colors[1] = 0x800080;
            colors[2] = 0xff0080;
            colors[3] = 0xff8000;
            colors[4] = 0x00ff00;
            colors[5] = 0x0000ff;
            colors[6] = 0xffff80;
            colors[7] = 0x408080;
        }
        else if (index == 1)
        {
            colors[0] = 0x0000ff;
            colors[1] = 0xffff80;
            colors[2] = 0x800080;
            colors[3] = 0xff0000;
            colors[4] = 0x00ff00;
            colors[5] = 0xff0080;
            colors[6] = 0xff8000;
            colors[7] = 0x408080;
        }
        else if (index == 2)
        {
            colors[0] = 0x800080;
            colors[1] = 0x0000ff;
            colors[2] = 0x00ff00;
            colors[3] = 0x408080;
            colors[4] = 0xff0080;
            colors[5] = 0xff0000;
            colors[6] = 0xffff80;
            colors[7] = 0xff8000;
        }
        else if (index == 3)
        {
            colors[0] = 0x000000;
            colors[1] = 0xffffff;
            colors[2] = 0x000000;
            colors[3] = 0x000000;
            colors[4] = 0xffffff;
            colors[5] = 0x000000;
            colors[6] = 0xffffff;
            colors[7] = 0x000000;
        }
        else if (index == 4)
        {
            colors[0] = 0x0000ff;
            colors[1] = 0xff8000;
            colors[2] = 0xff0000;
            colors[3] = 0xffff80;
            colors[4] = 0xff0080;
            colors[5] = 0x800080;
            colors[6] = 0x00ff00;
            colors[7] = 0x408080;
        }
        else if (index == 5)
        {
            colors[0] = 0x800080;
            colors[1] = 0x408080;
            colors[2] = 0xff8000;
            colors[3] = 0xff0080;
            colors[4] = 0x0000ff;
            colors[5] = 0xff0000;
            colors[6] = 0x00ff00;
            colors[7] = 0xffff80;
        }
        else if (index == 6)
        {
            colors[0] = 0xff8000;
            colors[1] = 0x800080;
            colors[2] = 0xff0080;
            colors[3] = 0xff0000;
            colors[4] = 0x408080;
            colors[5] = 0xffff80;
            colors[6] = 0x0000ff;
            colors[7] = 0x00ff00;
        }
        else if (index == 7)
        {
            colors[0] = 0x000000;
            colors[1] = 0xffffff;
            colors[2] = 0x000000;
            colors[3] = 0x000000;
            colors[4] = 0xffffff;
            colors[5] = 0x000000;
            colors[6] = 0xffffff;
            colors[7] = 0x000000;
        }
        else
        {
            colors[0] = 0xff8000;
            colors[1] = 0xff0000;
            colors[2] = 0xff0080;
            colors[3] = 0x800080;
            colors[4] = 0x0000ff;
            colors[5] = 0x408080;
            colors[6] = 0x00ff00;
            colors[7] = 0xffff80;
        }
    }
}