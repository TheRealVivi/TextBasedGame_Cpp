#include "GameManager.h"
#include "DebugUtils.h"

GameManager* GameManager::instance = nullptr;

GameManager::GameManager() {
	running = true;
	paused = false;
}

GameManager::~GameManager() {

}

GameManager* GameManager::Get() {
	if (instance == nullptr) {
		instance = new GameManager();
	}

	return instance;
}

void GameManager::RunApplication() {
	DebugUtils::Log("Application is running");
}

bool GameManager::TogglePause() {
	return paused = !paused;
}

bool GameManager::IsPaused() {
	return paused;
}

bool GameManager::IsRunning() {
	return running;
}