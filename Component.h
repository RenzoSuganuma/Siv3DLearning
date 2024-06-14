#pragma once

namespace leonidas {

	// コンポーネント
	class Component
	{

	protected:
		virtual void __Initialize() = 0;
		virtual void __Update() = 0;
		virtual void __Finalize() = 0;
	public:
		// default constructor
		Component();
		// 初期化処理
		void Initialize();
		// 毎フレーム処理
		void Update();
		// 破棄処理
		void Finalize();
	};
}
