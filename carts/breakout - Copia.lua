
Paddle = Class:extend()

function Paddle:new(x, y)
    self.x = x
    self.y = y
    self.width = 10
    self.height = 2
    self.speed = 2
end

function Paddle:update()
    local key = input.down()
    if key == "left" then
        self.x = math.max(0, self.x - self.speed )
    elseif key == "right" then
        self.x = math.min(64 - self.width, self.x + self.speed )
    end
end

function Paddle:draw()
    draw.color(2)
    draw.rect(self.x, self.y, self.width, self.height)
end

Ball = Class:extend()

function Ball:new(x, y)
    self.x = x
    self.y = y
    self.width = 2
    self.height = 2
    self.dx = 1
    self.dy = -1
end

function Ball:update()
    self.x = self.x + self.dx 
    self.y = self.y + self.dy 

    if self.x <= 0 then
        self.x = 0
        self.dx = -self.dx
    elseif self.x + self.width >= 64 then
        self.x = 64 - self.width
        self.dx = -self.dx
    end

    if self.y <= 0 then
        self.y = 0
        self.dy = -self.dy
    end
end

function Ball:draw()
    draw.color(2)
    draw.rect(self.x, self.y, self.width, self.height)
end

function Ball:collides(obj)
    return self.x < obj.x + obj.width and
           self.x + self.width > obj.x and
           self.y < obj.y + obj.height and
           self.y + self.height > obj.y
end

Brick = Class:extend()

function Brick:new(x, y)
    self.x = x
    self.y = y
    self.width = 12
    self.height = 5
    self.hit = false
end

function Brick:draw()
    if not self.hit then
        draw.color(2)
        draw.rect(self.x, self.y, self.width, self.height)
    end
end

function resetBall()
    ball = Ball(31, 40)
end

function generateLevel(rows, cols)
    bricks = {}
    local brickW = 12
    local brickH = 5
    local spacing = 1
    local offsetX = (64 - (cols * (brickW + spacing) - spacing)) / 2
    for row = 0, rows - 1 do
        for col = 0, cols - 1 do
            local x = offsetX + col * (brickW + spacing)
            local y = 10 + row * (brickH + spacing)
            table.insert(bricks, Brick(x, y))
        end
    end
end

function init()

    math.randomseed(os.time())
    paddle = Paddle(22, 58)
    resetBall()
    level = 1
    lives = 3
    generateLevel(2, 4)
    draw.background(0)

end

function run()

    paddle:update()
    ball:update()

    if ball:collides(paddle) and ball.dy > 0 then
        local hit = (ball.x + ball.width / 2 - paddle.x) / paddle.width
        ball.dy = -math.abs(ball.dy)
        ball.dx = (hit - 0.5) * 3
        ball.y = paddle.y - ball.height
    end

    for _, brick in ipairs(bricks) do
        if not brick.hit and ball:collides(brick) then
            brick.hit = true
            ball.dy = -ball.dy
            break
        end
    end

    -- Drop below screen = lose life
    if ball.y > 64 then
        lives = lives - 1
        resetBall()
    end

    -- Check if all bricks are hit
    local allHit = true
    for _, b in ipairs(bricks) do
        if not b.hit then
            allHit = false
            break
        end
    end

    if allHit then
        level = level + 1
        resetBall()
        local rows = 2 + (level % 3)
        local cols = 3 + (level % 4)
        generateLevel(rows, cols)
    end

    paddle:draw()
    ball:draw()
    for _, brick in ipairs(bricks) do
        brick:draw()
    end

    draw.text(lives, 2, 2, 10)
    if lives <= 0 then
        app.restart()
    end
end

