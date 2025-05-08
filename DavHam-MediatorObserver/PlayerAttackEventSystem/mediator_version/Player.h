#pragma once
class EventMediator;
class Enemy;

class Player {
private:
    EventMediator& mediator;
public:
    Player(EventMediator& m);
    void attack(Enemy& enemy);
};