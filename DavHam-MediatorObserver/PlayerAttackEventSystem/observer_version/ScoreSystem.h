#pragma once
#include "IObserver.h"

class ScoreSystem : public IObserver {
public:
    void onAttack(Enemy& enemy) override;
};