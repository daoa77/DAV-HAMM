#pragma once
#include "IEventListener.h"

class UI : public IEventListener {
public:
    void handleAttack(Enemy& enemy) override;
};