#pragma once

namespace leonidas {

	// 座標と回転とスケールを保持するクラス
	class Transform
	{

	protected:
		s3d::Vec3 _position;
		s3d::Vec3 _rotation;
		s3d::Vec3 _scale;

	public:
		// Default Constructor
		Transform();
		Transform(s3d::Vec3 Position, s3d::Vec3 Rotation, s3d::Vec3 Scale);
	};
}
