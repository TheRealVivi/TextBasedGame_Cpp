#pragma once

#include "Manager.h"

class GameManager : Manager
{
public:
    GameManager();
    GameManager(const GameManager& obj) = delete;
    ~GameManager();
    static GameManager* Get();

    void RunApplication();

private:
    static GameManager* instance;
};

