#pragma once
class Manager
{
public:
    bool TogglePause();
    bool IsPaused();
    bool IsRunning();

protected:
    bool paused = false;
    bool running = false;
};

