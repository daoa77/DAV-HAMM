#include "EventMediator.h"
#include "Enemy.h"
#include "IEventListener.h"

void EventMediator::registerListener(IEventListener* listener) {
    listeners.push_back(listener);
}

void EventMediator::notifyAttack(Enemy& enemy) {
    for (auto listener : listeners) {
        listener->handleAttack(enemy);
    }
}