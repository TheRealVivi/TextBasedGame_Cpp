#include "GameManager.h"
#include "DebugUtils.h"

GameManager* GameManager::instance = nullptr;

GameManager::GameManager() {
	
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

