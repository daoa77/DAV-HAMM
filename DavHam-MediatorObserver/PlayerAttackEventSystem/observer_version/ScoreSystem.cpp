#include "ScoreSystem.h"
#include "Enemy.h"
#include <iostream>

void ScoreSystem::onAttack(Enemy& enemy) {
    if (enemy.isDead()) {
        std::cout << "Score Added if Enemy Dead\n";
    }
}