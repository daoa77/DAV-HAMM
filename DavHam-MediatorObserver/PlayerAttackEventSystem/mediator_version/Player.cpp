#include "Player.h"
#include "EventMediator.h"
#include "Enemy.h"

Player::Player(EventMediator& m) : mediator(m) {}

void Player::attack(Enemy& enemy) {
    enemy.takeDamage(10);
    mediator.notifyAttack(enemy);
}