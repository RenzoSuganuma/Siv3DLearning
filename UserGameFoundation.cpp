#include "UserGameFoundation.h"

leonidas::Level* level = new leonidas::Level(U"level_0");

leonidas::GameObject* go =
new leonidas::GameObject(leonidas::Transform(s3d::Vec3(1, 1, 1)
	, s3d::Vec3(1, 1, 1), s3d::Vec3(1, 1, 1)), U"gObj");

UserGameFoundation::UserGameFoundation() {}

void UserGameFoundation::Setup() {

}

void UserGameFoundation::Validation() {

}

void UserGameFoundation::Init() {
	_levels.at(_activeLevelIndex)->Init();
}

void UserGameFoundation::Update() {
	_levels.at(_activeLevelIndex)->Update();
}

void UserGameFoundation::End() {
	_levels.at(_activeLevelIndex)->End();
}
