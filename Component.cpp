﻿#include "stdafx.h"
#include "Component.h"

using leonidas::Component;

// default constructor
Component::Component(){}

// 初期化処理
void Component::Initialize() {
	__Initialize();
}

// 毎フレーム処理
void Component::Update() {
	__Update();
}

// 破棄処理
void Component::Finalize() {
	__Finalize();
}
