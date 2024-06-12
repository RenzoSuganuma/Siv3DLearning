#pragma once

namespace Sarissa {
	// Siv3D上で構築するコンテンツの最上基底クラス
	// 2D,3D共用クラス
	class Object
	{
	public:
		String _objectName;

		s3d::Vec3 _position;
		s3d::Vec3 _rotation;
	};
}
