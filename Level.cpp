﻿#include "stdafx.h"
#include "Level.h"

using leonidas::Level;

// Default Constructor
Level::Level() {}

Level::Level(String SceneName) : _sceneName(SceneName) {}

// ゲームオブジェクトの生成
void Level::InstantiateGameObject(GameObject* ObjectInstance) {
	_sceneObjects.emplace_back(ObjectInstance);
}

// ゲームオブジェクトの破棄
void Level::DeleteGameObject(GameObject* ObjectInstance) {
	_sceneObjects.remove(ObjectInstance);
}
