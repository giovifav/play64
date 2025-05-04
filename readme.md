# Play64















# input

### input.down()

Return a string with the key that is pressed

```lua
print(input.down()) 
-- print up or down or left or right or z or x
```

### input.pressed()

Return a string with the key that has been pressed

```lua
print(input.pressed()) 
-- print up or down or left or right or z or x
```

### input.released()

Return a string with the key that has been released

```lua
print(input.released()) 
-- print up or down or left or right or z or x
```

# draw

### colors palette

4 shades of green like the original gameboy
0 = lightest, 3 = darkest

### draw.background(color:Int)

Change the color of background

```lua
draw.background(0)
```

### draw.color(color:Int)

set the color of the draw command

### draw.point(x:Int, y:int )

Draw a pixel

```lua
--draw a point 
draw.point(32,18) 

```

### draw.line(startx:Int, startY:Int, endX:Int, endY:Int)

Draw a line

```lua
--draw a line
draw.line(0,0,18,36) 
```

### draw.rect(x:Int, y:Int, Width:Int, height:Int)

Draw a rectangle

```lua
--draw a rectangle 
draw.rect(0,0,20,20) 
```

### draw.text(text:String, x:Int, y:Int, size:Int)

Print a string of text

```lua 
draw.text("a string of text",0,0,15) 
```

### draw.circle(x:Int, y:Int, Radius:Int)

Draw a circle

```lua
--draw a circle 
draw.rect(30,30,10) 
```

# app

### app.dt()

Return the delta time in seconds
The default game target fps is 30 frame per second.

### app.title(title:String)

set the title of the window

### app.width(width:Int)

set the width of the window

### app.height(heigth:Int)

set the height of the window

### app.fullscreen()

toggle the fullscreen mode

### app.reset()

reset the cart and go back to selection screen

### app.restart()   

restart the current cart


# Sound 

### sound.play(sound:String)

play a built-in sound by name

the values can be:
blip click click hit powerup jump pickup laser random synth

# Timer

### timer.delay(fn, delay)

Calls the function `fn` after the given `delay` time has passed. Returns the associated event.

```lua
-- Prints "Hello world!" after 2 seconds 
timer.delay(function() print("Hello world!") end, 2)
```

### timer.recur(fn, delay)

Calls the function `fn` at an interval of `delay`. Returns the associated event.

```lua
-- Prints  timer!" every half-second
 timer.recur(function() print( timer!") end, .5)
```

### Chaining events

To avoid having to deeply nest several functions when creating chains of events, the `:after()` method can be called on an event returned by
 `timer.delay()`. You can keep using the `:after()` method to create complex timed sequences.

```lua
-- Prints "cat", "dog", then "owl", waiting 1 second between each print timer.delay(function() print("cat") end, 1)
  :after(function() print("dog") end, 1)
  :after(function() print("owl") end, 1)
```

### Stopping events

An event can be stopped and removed at any point by calling its `:stop()` method. To do this the event must be assigned to a variable when it is created.

```lua
-- Create a new event
local t = timer.delay(function() print( timer!") end, 10)
-- Remove the event before it has a chance to run
t:stop()
```

### Groups timer provides the ability to create event groups; these are objects which can

have events added to them, and which are in charge of updating and handling their contained events. A group is created by calling the  timer.group()` function.

```lua
local group = timer.group()
```

Once a group is created it acts independently of the  timer` object, and must be updated each frame using its own update method.

```lua
group:update()
```

To add a events to a group, the group's `:delay()` or `:recur()` methods should be used.

```lua
group:delay(function() print("hello world") end, 4)
```

A good example of where groups are useful is for games where you may have a set of events which effect objects in the game world and which you want to pause when the game is paused.  A group's events can be paused by simply neglecting to call its `update()` method; when a group is destroyed its events are also destroyed.

# object

The object module offer an interface for OOP programming

### Creating a new class

```lua
Point = object:extend()

function Point:new(x, y)
  self.x = x or 0
  self.y = y or 0
end
```

### Creating a new object

```lua
local p = Point(10, 20)
```

### Extending an existing class

```lua
Rect = Point:extend()

function Rect:new(x, y, width, height)
  Rect.super.new(self, x, y)
  self.width = width or 0
  self.height = height or 0
end
```

### Checking an object's type

```lua
local p = Point(10, 20)
print(p:is(Object)) -- true
print(p:is(Point)) -- true
print(p:is(Rect)) -- false 
```

### Using mixins

```lua
PairPrinter = object:extend()

function PairPrinter:printPairs()
  for k, v in pairs(self) do
    print(k, v)
  end
end


Point = object:extend()
Point:implement(PairPrinter)

function Point:new(x, y)
  self.x = x or 0
  self.y = y or 0
end


local p = Point()
p:printPairs()
```

### Using static variables

```lua
Point = object:extend()
Point.scale = 2

function Point:new(x, y)
  self.x = x or 0
  self.y = y or 0
end

function Point:getScaled()
  return self.x * Point.scale, self.y * Point.scale
end
```

### Creating a metamethod

```lua
function Point:__tostring()
  return self.x .. ", " .. self.y
end
```

# Tween

## Tween creation

``` lua
local t = tween.new(duration, subject, target, [easing])
```

Creates a new tween.

* `duration` means how much the change will take until it's finished. It must be a positive number.
* `subject` must be a table with at least one key-value. Its values will be gradually changed by the tween until they look like `target`. All the values must be numbers, or tables with numbers.
* `target` must be a table with at least the same keys as `subject`. Other keys will be ignored.
* `easing` can be either a function or a function name (see the easing section below). It's default value is `'linear'`
* `t` is the object that must be used to perform the changes - see the "Tween methods" section below.

This function only creates and returns the tween. It must be captured in a variable and updated via `t:update(dt)` in order for the changes to take place.

## Tween methods

``` lua
local complete = t:update()
```

Gradually changes the contents of `subject` to that it looks more like `target` as time passes.

* `t` is a tween returned by `tween.new`
* `complete` is `true` if the tween has reached its limit (its *internal clock* is `>= duration`). It is false otherwise.

When the tween is complete, the values in `subject` will be equal to `target`'s. The way they change over time will depend on the chosen easing function.



``` lua
local complete = t:set(clock)
```

Moves a tween's internal clock to a particular moment.

* `t` is a tween returned by `tween.new`
* `clock` is a positive number or 0. It's the new value of the tween's internal clock.
* `complete` works like in `t:update`; it's `true` if the tween has reached its end, and `false` otherwise.

If clock is greater than `t.duration`, then the values in `t.subject` will be equal to `t.target`, and `t.clock` will
be equal to `t.duration`.


``` lua
t:reset()
```

Resets the internal clock of the tween back to 0, resetting `subject`.

* `t` is a tween returned by `tween.new`

This method is equivalent to `t:set(0)`.

# Easing functions

Easing functions are functions that express how slow/fast the interpolation happens in tween.

`tween.lua` comes with 45 default easing functions already built-in (adapted from [Emmanuel Oga's easing library](https://github.com/EmmanuelOga/easing)).

The easing functions can be found in the table `tween.easing`.

They can be divided into several families:

* `linear` is the default interpolation. It's the simplest easing function.
* `quad`, `cubic`, `quart`, `quint`, `expo`, `sine` and `circle` are all "smooth" curves that will make transitions look natural.
* The `back` family starts by moving the interpolation slightly "backwards" before moving it forward.
* The `bounce` family simulates the motion of an object bouncing.
* The `elastic` family simulates inertia in the easing, like an elastic gum.

Each family (except `linear`) has 4 variants:
* `in` starts slow, and accelerates at the end
* `out` starts fast, and decelerates at the end
* `inOut` starts and ends slow, but it's fast in the middle
* `outIn` starts and ends fast, but it's slow in the middle

| family      | in        | out        | inOut        | outIn        |
|-------------|-----------|------------|--------------|--------------|
| **Linear**  | linear    | linear     | linear       | linear       |
| **Quad**    | inQuad    | outQuad    | inOutQuad    | outInQuad    |
| **Cubic**   | inCubic   | outCubic   | inOutCubic   | outInCubic   |
| **Quart**   | inQuart   | outQuart   | inOutQuart   | outInQuart   |
| **Quint**   | inQuint   | outQuint   | inOutQuint   | outInQuint   |
| **Expo**    | inExpo    | outExpo    | inOutExpo    | outInExpo    |
| **Sine**    | inSine    | outSine    | inOutSine    | outInSine    |
| **Circ**    | inCirc    | outCirc    | inOutCirc    | outInCirc    |
| **Back**    | inBack    | outBack    | inOutBack    | outInBack    |
| **Bounce**  | inBounce  | outBounce  | inOutBounce  | outInBounce  |
| **Elastic** | inElastic | outElastic | inOutElastic | outInElastic |

When you specify an easing function, you can either give the function name as a string. The following two are equivalent:

```lua
local t1 = tween.new(10, subject, {x=10}, tween.easing.linear)
local t2 = tween.new(10, subject, {x=10}, 'linear')
```

But since `'linear'` is the default, you can also do this:

```lua
local t3 = tween.new(10, subject, {x=10})
```

## Custom easing functions

You are not limited to tween's easing functions; if you pass a function parameter in the easing, it will be used.

The passed function will need to take 4 parameters:

* `t` (time): starts in 0 and usually moves towards duration
* `b` (begin): initial value of the of the property being eased.
* `c` (change): ending value of the property - starting value of the property
* `d` (duration): total duration of the tween

And must return the new value after the interpolation occurs.



``` lua
local cubicbezier = function (x1, y1, x2, y2)
  local curve = love.math.newBezierCurve(0, 0, x1, y1, x2, y2, 1, 1)
  return function (t, b, c, d) return c * curve:evaluate(t/d) + b end
end

local label = { x=200, y=0, text = "hello" }
local labelTween = tween.new(4, label, {y=300}, cubicbezier(.35, .97, .58, .61))
```


# Credits

Engine written in [BlitzMax NG](https://blitzmax.org/).  
Carts written in [Lua 5.1](https://www.lua.org/).  
The graphic library is [Raylib](https://www.raylib.com/).  
[Classic by rxi](https://github.com/rxi/classic) for lua OOP.  
[Tween by kikito](https://github.com/kikito/tween.lua).  
[Tick by rxi](https://github.com/rxi/tick).  