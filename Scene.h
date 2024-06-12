#pragma once

#include"Object.h"

namespace Sarissa {
	// ゲームシーン
	class Scene
	{
	public:
		String _sceneName;
		Array< Object > _sceneObjects;

		// Default Constructor
		Scene();
		Scene( String sceneName );
	};
}
