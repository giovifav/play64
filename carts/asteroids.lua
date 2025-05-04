
-- Constants
local SCREEN_WIDTH, SCREEN_HEIGHT = 64, 64
local MAX_SPEED = 1

-- Ship Class
local Ship = Class:extend()

function Ship:new()
    self.x = SCREEN_WIDTH / 2
    self.y = SCREEN_HEIGHT / 2
    self.angle = 0
    self.radius = 2
    self.dx = 0
    self.dy = 0
    self.alive = true
end

function Ship:update()
    local turnSpeed = 0.1
    local accel = 0.1

    if input.down() == "left" then
        self.angle = self.angle - turnSpeed
    elseif input.down() == "right" then
        self.angle = self.angle + turnSpeed
    end

    if input.down() == "up" then
        self.dx = self.dx + math.cos(self.angle) * accel
        self.dy = self.dy + math.sin(self.angle) * accel
        self.dx, self.dy = clampVelocity(self.dx, self.dy, MAX_SPEED)
    end

    self.x = (self.x + self.dx) % SCREEN_WIDTH
    self.y = (self.y + self.dy) % SCREEN_HEIGHT
end

function Ship:draw()
    local x, y, a = self.x, self.y, self.angle
    local frontX = x + math.cos(a) * 4
    local frontY = y + math.sin(a) * 4
    local leftX = x + math.cos(a + 2.5) * 3
    local leftY = y + math.sin(a + 2.5) * 3
    local rightX = x + math.cos(a - 2.5) * 3
    local rightY = y + math.sin(a - 2.5) * 3

    draw.color(1)
    draw.line(frontX, frontY, leftX, leftY)
    draw.line(frontX, frontY, rightX, rightY)
    draw.line(leftX, leftY, rightX, rightY)
end

-- Bullet Class
local Bullet = Class:extend()

function Bullet:new(x, y, angle)
    self.x = x
    self.y = y
    self.dx = math.cos(angle)
    self.dy = math.sin(angle)
end

function Bullet:update()
    self.x = self.x + self.dx
    self.y = self.y + self.dy
end

function Bullet:isOffScreen()
    return self.x < 0 or self.x > SCREEN_WIDTH or self.y < 0 or self.y > SCREEN_HEIGHT
end

function Bullet:draw()
    draw.color(3)
    draw.point(self.x, self.y)
end

-- Asteroid Class
local Asteroid = Class:extend()

function Asteroid:new(x, y, dx, dy, radius)
    self.x = x
    self.y = y
    self.dx = dx
    self.dy = dy
    self.radius = radius
end

function Asteroid:update()
    self.x = (self.x + self.dx) % SCREEN_WIDTH
    self.y = (self.y + self.dy) % SCREEN_HEIGHT
end

function Asteroid:draw()
    draw.color(2)
    draw.circle(self.x, self.y, self.radius)
end

-- Game Class
local Game = Class:extend()

function Game:new()
    self.ship = Ship()
    self.bullets = {}
    self.asteroids = {}
    self.fireCooldown = 0
    self.wave = 1
    self.score = 0

    self:spawnAsteroids(5)
end

function Game:spawnAsteroids(count)
    for i = 1, count do
        table.insert(self.asteroids, Asteroid(
            math.random(0, SCREEN_WIDTH),
            math.random(0, SCREEN_HEIGHT),
            math.random(-1, 1) / 2,
            math.random(-1, 1) / 2,
            2 + math.random() * 2
        ))
    end
end

function Game:update()
    if not self.ship.alive then
        app.restart()
    end

    if #self.asteroids == 0 then
        self.wave = self.wave + 1
        self:spawnAsteroids(4 + self.wave)
    end

    self.ship:update()

    self.fireCooldown = self.fireCooldown - 1
    if input.down() == "z" and self.fireCooldown <= 0 then
        table.insert(self.bullets, Bullet(self.ship.x, self.ship.y, self.ship.angle))
        sound.play("laser")
        self.fireCooldown = 10
    end

    for i = #self.bullets, 1, -1 do
        local b = self.bullets[i]
        b:update()
        if b:isOffScreen() then
            table.remove(self.bullets, i)
        else
            for j = #self.asteroids, 1, -1 do
                local a = self.asteroids[j]
                if dist(b.x, b.y, a.x, a.y) < a.radius then
                    table.remove(self.asteroids, j)
                    table.remove(self.bullets, i)
                    sound.play("hit")
                    self.score = self.score + 1
                    break
                end
            end
        end
    end

    for _, a in ipairs(self.asteroids) do
        a:update()
        if dist(self.ship.x, self.ship.y, a.x, a.y) < a.radius + self.ship.radius then
            self.ship.alive = false
            sound.play("explosion")
        end
    end
end



function Game:draw()
    draw.background(0)
    draw.color(1)
    draw.text(self.score, 3, 3, 10)
    self.ship:draw()

    for _, b in ipairs(self.bullets) do
        b:draw()
    end

    for _, a in ipairs(self.asteroids) do
        a:draw()
    end


end

-- Utility Functions
function dist(x1, y1, x2, y2)
    return math.sqrt((x2 - x1)^2 + (y2 - y1)^2)
end

function clampVelocity(dx, dy, max)
    local speed = math.sqrt(dx * dx + dy * dy)
    if speed > max then
        local scale = max / speed
        return dx * scale, dy * scale
    end
    return dx, dy
end



function init()
    game = Game()
end

function run()
    game:update()
    game:draw()
end