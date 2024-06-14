#include "stdafx.h"
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

void Level::Init() {
	for (auto go : _sceneObjects) {
		go->Init();
	}
}

void Level::Update() {
	for (auto go : _sceneObjects) {
		go->Update();
	}
}

void Level::End() {
	for (auto go : _sceneObjects) {
		go->End();
	}
}
