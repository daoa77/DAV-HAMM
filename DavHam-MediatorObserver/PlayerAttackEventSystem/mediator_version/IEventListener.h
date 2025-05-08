#pragma once
class Enemy;

class IEventListener {
public:
    virtual void handleAttack(Enemy& enemy) = 0;
    virtual ~IEventListener() {}
};