#pragma once

class Enemy {
public:
    int health;
    Enemy(int hp);
    void takeDamage(int amount);
    bool isDead() const;
};