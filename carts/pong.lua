
-- Constants
local WINDOW_WIDTH, WINDOW_HEIGHT = 64, 64
local PADDLE_WIDTH, PADDLE_HEIGHT = 2, 10
local BALL_SIZE = 2
local PADDLE_SPEED = 2
local AI_SPEED = 1

-- Paddle Class
local Paddle = object:extend()

function Paddle:new(x, y)
    self.x = x
    self.y = y
    self.dy = 0
    self.score = 0
end



function Paddle:update()
    self.y = math.max(0, math.min(WINDOW_HEIGHT - PADDLE_HEIGHT, self.y + self.dy))
end

function Paddle:draw()
    draw.color(2) -- Set color for the paddle
    draw.rect(self.x, self.y, PADDLE_WIDTH, PADDLE_HEIGHT)
end

-- Ball Class
local Ball = object:extend()

function Ball:new()
    self.x = WINDOW_WIDTH / 2 - BALL_SIZE / 2
    self.y = WINDOW_HEIGHT / 2 - BALL_SIZE / 2
    self.dx = (math.random(2) == 1 and 1 or -1)
    self.dy = (math.random(2) == 1 and 1 or -1)
end

function Ball:update()
    self.x = self.x + self.dx
    self.y = self.y + self.dy

    -- Wall collision
    if self.y <= 0 or self.y + BALL_SIZE >= WINDOW_HEIGHT then
        self.dy = -self.dy
    end
end

function Ball:reset()
    self.x = WINDOW_WIDTH / 2 - BALL_SIZE / 2
    self.y = WINDOW_HEIGHT / 2 - BALL_SIZE / 2
    self.dx = (math.random(2) == 1 and 1 or -1)
    self.dy = (math.random(2) == 1 and 1 or -1)
end

function Ball:draw()
    draw.color(3) -- Set color for the ball
    draw.rect(math.floor(self.x+0.5),math.floor(self.y+0.5) , BALL_SIZE, BALL_SIZE)
end

function Ball:checkCollision(paddle)
    return self.x < paddle.x + PADDLE_WIDTH and
           paddle.x < self.x + BALL_SIZE and
           self.y < paddle.y + PADDLE_HEIGHT and
           paddle.y < self.y + BALL_SIZE
end

function Ball:deflect(paddle)
    -- Calculate hit position: -1 (top) to 1 (bottom)
    local paddleCenter = paddle.y + PADDLE_HEIGHT / 2
    local ballCenter = self.y + BALL_SIZE / 2
    local offset = (ballCenter - paddleCenter) / (PADDLE_HEIGHT / 2)

    -- Max deflection angle (in radians)
    local maxAngle = math.rad(45) -- 45 degrees

    -- Calculate angle
    local angle = offset * maxAngle

    -- Set a constant speed for the ball
    local constantSpeed = 2 -- Adjust this value for desired ball speed

    -- Flip direction
    local direction = self.dx < 0 and 1 or -1

    -- Update ball velocity
    self.dx = constantSpeed * math.cos(angle) * direction
    self.dy = constantSpeed * math.sin(angle)

    -- Prevent too-horizontal motion (dy too small)
    local minDY = 0.5 -- Adjust this value for minimum vertical speed
    if math.abs(self.dy) < minDY then
        self.dy = minDY * (self.dy < 0 and -1 or 1)
    end
end

-- Game Class
local Game = object:extend()

function Game:new()
    self.player = Paddle(2, WINDOW_HEIGHT / 2 - PADDLE_HEIGHT / 2)
    self.ai = Paddle(WINDOW_WIDTH - PADDLE_WIDTH - 2, WINDOW_HEIGHT / 2 - PADDLE_HEIGHT / 2)
    self.ball = Ball()
end

function Game:update()
    -- Player input
    if input.down() == "up" then
        self.player.dy = -PADDLE_SPEED
    elseif input.down() == "down" then
        self.player.dy = PADDLE_SPEED
    else
        self.player.dy = 0
    end

    -- Update player paddle
    self.player:update()

    -- AI movement
    local tolerance = 4 -- pixel dead zone
    local ballCenter = self.ball.y + BALL_SIZE / 2
    local aiCenter = self.ai.y + PADDLE_HEIGHT / 2

    if math.abs(ballCenter - aiCenter) > tolerance then
        if ballCenter < aiCenter then
            self.ai.dy = -AI_SPEED
        else
            self.ai.dy = AI_SPEED
        end
    else
        self.ai.dy = 0
    end

    -- Update AI paddle
    self.ai:update()

    -- Update ball
    self.ball:update()

    -- Paddle collisions
    if self.ball:checkCollision(self.player) then
        self.ball.x = self.player.x + PADDLE_WIDTH
        self.ball:deflect(self.player)
    elseif self.ball:checkCollision(self.ai) then
        self.ball.x = self.ai.x - BALL_SIZE
        self.ball:deflect(self.ai)
    end

    -- Ball reset
    if self.ball.x < 0  then
        self.ball:reset()
        self.player.score = self.player.score + 1
    end
    if self.ball.x > WINDOW_WIDTH  then
        self.ball:reset()
        self.ai.score = self.ai.score + 1
    end

    if self.player.score >= 5 or self.ai.score >= 5 then
        -- Reset scores and ball position
        self.player.score = 0
        self.ai.score = 0
        self.ball:reset()
    end


    
end

function Game:draw()
    draw.background(0)
    draw.color(1) -- Set color for the score
    draw.text(self.player.score, 2, 2)        
    draw.text(self.ai.score, WINDOW_WIDTH - 7, 2) -- Adjust position for AI score
    self.player:draw()
    self.ai:draw()
    self.ball:draw()

end

-- Main Game Loop
local game = Game()

function init()
    math.randomseed(os.time())
end

function run()
    game:update()
    game:draw()
end
