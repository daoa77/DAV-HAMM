#include "Enemy.h"

Enemy::Enemy(int hp) : health(hp) {}

void Enemy::takeDamage(int amount) {
    health -= amount;
}

bool Enemy::isDead() const {
    return health <= 0;
}