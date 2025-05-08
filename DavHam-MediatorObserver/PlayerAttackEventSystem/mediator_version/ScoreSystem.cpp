#include "ScoreSystem.h"
#include "Enemy.h"
#include <iostream>

void ScoreSystem::handleAttack(Enemy& enemy) {
    if (enemy.isDead()) {
        std::cout << "Score Added if Enemy Dead\n";
    }
}