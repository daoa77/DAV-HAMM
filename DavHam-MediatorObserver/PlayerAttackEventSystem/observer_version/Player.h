#pragma once
#include <vector>
class IObserver;
class Enemy;

class Player {
private:
    std::vector<IObserver*> observers;
public:
    void addObserver(IObserver* obs);
    void attack(Enemy& enemy);
};