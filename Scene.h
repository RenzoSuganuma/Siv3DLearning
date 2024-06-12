#pragma once

#include"GameObject.h"

// ゲームシーン
class Scene
{
protected:
	Array< GameObject* > _sceneObjects;
	String _sceneName;

public:
	// Default Constructor
	Scene();

	Scene(String sceneName);

	// ゲームオブジェクトの生成
	void InstantiateGameObject(GameObject* objectInstance);

	// ゲームオブジェクトの破棄
	void DeleteGameObject(GameObject* objectInstance);
};
