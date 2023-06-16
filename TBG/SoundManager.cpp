#include "SoundManager.h"
#include "GameManager.h"
#include "DebugUtils.h"

AudioManager* AudioManager::instance = nullptr;

AudioManager::AudioManager() {
	running = true;
	paused = false;
}

AudioManager::~AudioManager() {

}

AudioManager* AudioManager::Get() {
	if (instance == nullptr) {
		instance = new AudioManager();
	}

	return instance;
}

void AudioManager::PlayAudio() {
	DebugUtils::Log("AudioManager", Severity::Info, "Hello, this is the audio manager");
	GameManager::Get()->RunApplication();
	//mciSendString("open \"*.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);


}