#pragma once

//#include <Mmsystem.h>
//#include <mciapi.h>
//these two headers are already included in the <Windows.h> header
//#pragma comment(lib, "Winmm.lib")

#include "GameManager.h"

class AudioManager : public Manager
{
public:
	AudioManager();
	AudioManager(const AudioManager& obj) = delete;
	~AudioManager();
	static AudioManager* Get();

	void PlayAudio();

private:
	static AudioManager* instance;
};

