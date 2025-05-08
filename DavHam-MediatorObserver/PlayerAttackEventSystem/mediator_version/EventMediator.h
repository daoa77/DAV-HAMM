#pragma once
#include <vector>
class Enemy;
class IEventListener;

class EventMediator {
private:
    std::vector<IEventListener*> listeners;
public:
    void registerListener(IEventListener* listener);
    void notifyAttack(Enemy& enemy);
};