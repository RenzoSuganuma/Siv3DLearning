#pragma once

#include "stdafx.h"
#include "leonidas.h"

// ユーザーのゲームコンテンツ開発をこのヘッダファイル内の関数に構築する
class UserGameFoundation
{

protected:
	s3d::Array<leonidas::Level*> _levels;
	int _activeLevelIndex = 0;
public:
	UserGameFoundation();
	void Setup();
	void Validation();
	void Init();
	void Update();
	void End();
};

