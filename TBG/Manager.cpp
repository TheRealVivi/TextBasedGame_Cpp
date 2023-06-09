#include "Manager.h"

bool Manager::TogglePause() {
	return paused = !paused;
}

bool Manager::IsPaused() {
	return paused;
}

bool Manager::IsRunning() {
	return running;
}