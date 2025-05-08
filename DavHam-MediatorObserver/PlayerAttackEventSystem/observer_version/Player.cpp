#include "Player.h"
#include "IObserver.h"
#include "Enemy.h"

void Player::addObserver(IObserver* obs) {
    observers.push_back(obs);
}

void Player::attack(Enemy& enemy) {
    enemy.takeDamage(10);
    for (auto obs : observers) {
        obs->onAttack(enemy);
    }
}