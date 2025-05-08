#pragma once
#include "IEventListener.h"

class ScoreSystem : public IEventListener {
public:
    void handleAttack(Enemy& enemy) override;
};