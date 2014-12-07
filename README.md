ColorWheelGame
==============

Game made during Ludum Dare 31
Theme: Entire Game On One Screen

Created with Haxe and the HaxeFlixel library.  It was my first usage of this language but it was nice to try something new.
Although since it was my first time using it, the code is probably awful.  But at least it works!

There are Windows, Linux, and Mac builds included but note that the Linux and Mac builds are untested.  The Windows build
was tested on Windows 7.

Instructions
============

The game is a simple arcade style game where balls drop into the circle from the four corners.  You get points based on
how closely the color of the ball matches the colors of the discs it passes.  If you touch a white space you pass through
it freely (no points).  However, the black spaces destroy the ball and you lose a life.

You start with five lives and gain an extra life every 10000 points.
The difficulty increases (fast ball spawn rate, faster movement speed) every 25000 points.  There are five difficulties total.

Playing the game is simple.  You use the mouse to select which disc you wish to rotate.  Left click and scrolling up on the mouse wheel
while hovering over a disc rotates it clockwise.  Right click and scrolling down on the mouse wheel while hovering over a disc rotates it counter-clockwise.

The goal is to get as high a score as possible!

