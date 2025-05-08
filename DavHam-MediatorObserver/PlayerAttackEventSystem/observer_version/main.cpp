#include "Player.h"
#include "UI.h"
#include "SoundSystem.h"
#include "ScoreSystem.h"
#include "Enemy.h"

int main() {
    Enemy enemy(20);

    Player player;
    UI ui;
    SoundSystem sound;
    ScoreSystem score;

    player.addObserver(&ui);
    player.addObserver(&sound);
    player.addObserver(&score);

    player.attack(enemy);
    player.attack(enemy);
    return 0;
}