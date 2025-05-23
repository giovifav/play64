-- Snake Class
local Snake = object:extend()

function Snake:new()
    self.body = {{
        x = 1,
        y = 1
    }}
    self.direction = "right"
    self.canMove = true
end

function Snake:update()
    if not self.canMove then
        return
    end

    local head = self.body[1]
    local newHead = {
        x = head.x,
        y = head.y
    }

    if self.direction == "right" then
        newHead.x = newHead.x + 1
    elseif self.direction == "left" then
        newHead.x = newHead.x - 1
    elseif self.direction == "up" then
        newHead.y = newHead.y - 1
    elseif self.direction == "down" then
        newHead.y = newHead.y + 1
    end

    table.insert(self.body, 1, newHead)
end

function Snake:checkCollision()
    local head = self.body[1]

    -- Check collision with walls
    if head.x < 1 or head.x > 32 or head.y < 1 or head.y > 32 then
        return true
    end

    -- Check collision with itself
    for i = 2, #self.body do
        if head.x == self.body[i].x and head.y == self.body[i].y then
            return true
        end
    end

    return false
end

function Snake:shrink()
    table.remove(self.body)
end

function Snake:draw()
    draw.color(3)
    for _, segment in ipairs(self.body) do
        draw.rect(segment.x * 2 - 2, segment.y * 2 - 2, 2, 2)
    end
end

-- Food Class
local Food = object:extend()

function Food:new()
    self.x = math.random(1, 32)
    self.y = math.random(1, 32)
end

function Food:relocate()
    self.x = math.random(1, 32)
    self.y = math.random(1, 32)
end

function Food:draw()
    draw.color(2)
    draw.rect(self.x * 2 - 2, self.y * 2 - 2, 2, 2)
end

-- Game Class
local Game = object:extend()

function Game:new()
    self.snake = Snake()
    self.food = Food()
    self.score = 0
    self.gameOver = false
    self.highscore = tonumber(app.load("highscore"))
    if self.highscore == nil then
        self.highscore = 0
    end
    self.scoreScreen = false
    self.startScreen = true
end

function Game:update()
    if self.startScreen then
        if input.pressed() == "a" then
            self.startScreen = false
            self:reset()
        end
        return
    end
    if self.gameOver then
        self.startScreen = true
        delayTimer:stop()
        if self.score > self.highscore then
            app.save("highscore", tostring(self.score))
            self.highscore = self.score
            self.scoreScreen = true
            self.gameOver = false
            timer.delay(function()
                self.startScreen = true
                self:reset()
            end, 5)
            return
        else
            self.startScreen = true

            self:reset()
            return
        end
        return
    end
    if self.scoreScreen then
        return
    end


    -- Handle input
    local key = input.down()
    if key == "right" and self.snake.direction ~= "left" then
        self.snake.direction = "right"
    elseif key == "left" and self.snake.direction ~= "right" then
        self.snake.direction = "left"
    elseif key == "up" and self.snake.direction ~= "down" then
        self.snake.direction = "up"
    elseif key == "down" and self.snake.direction ~= "up" then
        self.snake.direction = "down"
    end

    -- Move the snake
    if self.snake.canMove then
        self.snake:update()

        -- Check collision with food
        local head = self.snake.body[1]
        if head.x == self.food.x and head.y == self.food.y then
            sound.play("powerup")
            self.food:relocate()
            self.score = self.score + 1
            draw.background(1)
            timer.delay(function()
                draw.background(0)
            end, 0.3)
        else
            self.snake:shrink()
        end

        -- Check collision with walls or itself
        if self.snake:checkCollision() then
            self.gameOver = true
            sound.play("explosion")

        end

        -- Delay movement
        self.snake.canMove = false
        delayTimer = timer.delay(function()
            self.snake.canMove = true
        end, 0.1)
    end
end

function Game:draw()
    if self.scoreScreen then
        draw.background(0)
        draw.color(2)
        draw.text("New", 10, 10, 10)
        draw.text("high", 10, 20, 10)
        draw.text("Score!", 10, 30, 10)
        draw.color(3)
        draw.text(self.score, 10, 40, 10)
        return
    end
    if self.startScreen then
        draw.background(0)
        draw.color(3)
        draw.text("Snake", 3, 5, 14)
        draw.color(2)
        draw.text("Press A", 3, 20, 10)
        draw.text("to Start.", 3, 30, 10)
        draw.color(1)
        draw.text("Highscore:", 3, 40, 10)
        draw.color(2)
        draw.text(self.highscore, 3, 50, 10)
        return
    end
    self.snake:draw()
    self.food:draw()
    draw.color(1)
    draw.text(self.score, 2, 2, 5)
end

function Game:reset()
    self.snake = Snake()
    self.food = Food()
    self.score = 0
    self.gameOver = false
    self.scoreScreen = false
end

-- Main Game Loop
local game = Game()

function init()
    app.title("Snake Example")
    math.randomseed(os.time())
    draw.background(0)
end

function run()
    game:update()
    game:draw()
end
