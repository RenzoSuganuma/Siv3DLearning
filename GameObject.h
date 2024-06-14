#pragma once

#include "Transform.h"
#include "Component.h"

namespace leonidas {

	// Siv3D上で構築するゲームオブジェクトの最上基底クラス
	// 2D,3D共用クラス
	class GameObject
	{

	protected:
		Transform _transform;
		String _objectName;
		Array<Component*> _components;

	public:
		// default constructor
		GameObject();
		GameObject(Transform Transform, String Name);
		void SetTransform(Transform t);
		Transform GetTransform();
		void AddComponent(Component* component);
		void RemoveComponent(Component* component);
		void Init();
		void Update();
		void End();
	};
}
