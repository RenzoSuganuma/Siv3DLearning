#pragma once

// コンポーネント
class Component
{
protected:
	virtual void __Initialize();

	virtual void __Update();

	virtual void __Finalize();

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

