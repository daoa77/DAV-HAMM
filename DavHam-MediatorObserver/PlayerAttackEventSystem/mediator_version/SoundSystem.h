#pragma once
#include "IEventListener.h"

class SoundSystem : public IEventListener {
public:
    void handleAttack(Enemy& enemy) override;
};