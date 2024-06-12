#pragma once

#include"GameObject.h"

// ゲームシーン
class Level
{
protected:
	Array< GameObject* > _sceneObjects;
	String _sceneName;

public:
	// Default Constructor
	Level();

	Level(String SceneName);

	// ゲームオブジェクトの生成
	void InstantiateGameObject(GameObject* ObjectInstance);

	// ゲームオブジェクトの破棄
	void DeleteGameObject(GameObject* ObjectInstance);
};
