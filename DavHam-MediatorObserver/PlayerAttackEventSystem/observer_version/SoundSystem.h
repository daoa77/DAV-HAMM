#pragma once
#include "IObserver.h"

class SoundSystem : public IObserver {
public:
    void onAttack(Enemy& enemy) override;
};