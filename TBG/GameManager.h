#pragma once
class GameManager
{
public:
    GameManager();
    GameManager(const GameManager& obj) = delete;
    ~GameManager();
    static GameManager* Get();
    void RunApplication();
private:
    static GameManager* instance;
    bool paused = false;
    bool running = false;
};

