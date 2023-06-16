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
	DebugUtils::Log("test", Severity::Warning, "Application is running");
}

