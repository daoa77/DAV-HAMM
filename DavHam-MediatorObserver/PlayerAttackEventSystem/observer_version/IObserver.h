#pragma once
class Enemy;

class IObserver {
public:
    virtual void onAttack(Enemy& enemy) = 0;
    virtual ~IObserver() {}
};