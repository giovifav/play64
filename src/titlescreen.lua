title ={text = "play64", x = 3, y = -10, font = 10}


function init()
    app.title("Play64")
    sound.play("Thunder")

    t = tween.new(2, title, {x = 3, y = 20})
    draw.background(0)

end


function run()
    local complete = t:update()
    draw.color(3)
    draw.text(title.text, title.x, title.y, title.font)
    draw.color(2)
    draw.text("Fantasy", title.x, title.y + 13, title.font)
    draw.color(2)
    draw.text("Console", title.x, title.y + 24, title.font)

    if complete then
        timer.delay(function()
            sound.play("Menu_In")

            app.reset()
            draw.background(3)
        end, 1)
        

    end
end
