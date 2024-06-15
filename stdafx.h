#pragma once

#include "Siv3D.hpp"

// 指定したクラスのオブジェクトを宣言時に同時にポインタとして保持する
template <class T> class Object_Ptr {
public:
	T* Instance;
	Object_Ptr() {
		Instance = new T;
	}
};
