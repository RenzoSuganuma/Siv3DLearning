#pragma once

#include"Transform.h"

// Siv3D上で構築するゲームオブジェクトの最上基底クラス
// 2D,3D共用クラス
class GameObject
{
protected:
	Transform* _transform;

public:
	String _objectName;
};
