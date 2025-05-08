#pragma once
#include "IObserver.h"

class UI : public IObserver {
public:
    void onAttack(Enemy& enemy) override;
};