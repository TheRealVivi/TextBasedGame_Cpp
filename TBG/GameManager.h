#pragma once
class GameManager
{
public:
    GameManager();
    GameManager(const GameManager& obj) = delete;
    ~GameManager();
    static GameManager* Get();
    void RunApplication();
    bool TogglePause();
    bool IsPaused();
    bool IsRunning();
private:
    static GameManager* instance;
    bool paused = false;
    bool running = false;
};

