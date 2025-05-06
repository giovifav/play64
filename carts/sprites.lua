function init()
    -- Initialize the game
    sprite1 = [[
        0 0 0 0 0 0 0 0 0 0
        0 1 1 1 1 1 1 1 1 0
        0 1 0 0 0 0 0 0 1 0
        0 1 0 1 1 1 1 0 1 0
        0 1 0 1 0 0 1 0 1 0
        0 1 0 1 1 1 1 0 1 0
        ]]
    sprite.add("sprite1", sprite1)
    draw.background(0)
end

function run()
    draw.color(1)
    sprite.draw("sprite1", 10, 10)
end