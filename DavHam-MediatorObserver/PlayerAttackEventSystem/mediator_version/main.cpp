#include "Player.h"
#include "EventMediator.h"
#include "UI.h"
#include "SoundSystem.h"
#include "ScoreSystem.h"
#include "Enemy.h"

int main() {
    Enemy enemy(20);
    EventMediator mediator;

    UI ui;
    SoundSystem sound;
    ScoreSystem score;

    mediator.registerListener(&ui);
    mediator.registerListener(&sound);
    mediator.registerListener(&score);

    Player player(mediator);
    player.attack(enemy);
    player.attack(enemy);
    return 0;
}