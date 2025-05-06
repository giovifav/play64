local enemySprite = [[
    1 1 1 1 1 1 1 1 1 1
    1 0 0 0 0 0 0 0 0 1
    1 0 0 1 1 1 1 0 0 1
    1 0 0 1 0 0 1 0 0 1
    1 0 0 1 1 1 1 0 0 1
    1 0 0 0 0 0 0 0 0 1
    1 1 1 1 1 1 1 1 1 1
    ]]
sprites.add("enemy", enemySprite)

Player = object:extend()
function Player:new(x, y)
    self.x = x
    self.y = y
    local sprite = [[
        0 0 0 0 0 0 0 0 0 0
        0 1 1 1 1 1 1 1 1 0
        0 1 0 0 0 0 0 0 1 0
        0 1 0 1 1 1 1 0 1 0
        0 1 0 1 0 0 1 0 1 0
        0 1 0 1 1 1 1 0 1 0
        ]]
    self.sprite = sprites.add("player", sprite)
    self.color = 1
end

function Player:draw()
    draw.color(self.color)
    draw.sprite(self.sprite, self.x, self.y)
end

function Player:update()
    if input.down() == "up" then
        self.y = self.y - 1
    end
    if input.down() == "down" then
        self.y = self.y + 1
    end 
    if input.down() == "left" then
        self.x = self.x - 1
    end
    if input.down() == "right" then
        self.x = self.x + 1
    end
    camera.target(self.x, self.y)
    
end





Enemy = object:extend()

function Enemy:new(x, y)
    self.x = x
    self.y = y

    self.sprite = "enemy"
end

function Enemy:draw()
    draw.color(2)
    draw.sprite(self.sprite, self.x, self.y)
end

Enemies = object:extend()
function Enemies:new()
    self.enemies = {}
    for i = 1, 100, 1 do
        table.insert(self.enemies, Enemy(math.random(-200, 200), math.random(-200, 200)))
    end
end

function Enemies:draw()
    for _, enemy in ipairs(self.enemies) do
        enemy:draw()
    end
end

function Enemies:collision(sprite,x,y)
    for _, enemy in ipairs(self.enemies) do
        if sprites.collision(sprite, x, y, "enemy", enemy.x,enemy.y) == 1 then
            return true
        end
    end
end

function init()
    -- Initialize the player and enemy objects
    player = Player(0,0)
    enemies = Enemies()
    camera.offset(32, 32)
    
end

function run()
    
    -- Update the player and enemy objects
    player:update()
    player:draw()
    enemies:draw()
    if enemies:collision("player",player.x, player.y) then
        player.color = 3
    else
        player.color = 1
    end

end