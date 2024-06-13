#include "stdafx.h"
#include "Transform.h"

using leonidas::Transform;

// Default Constructor
Transform::Transform() {}

Transform::Transform(s3d::Vec3 Position, s3d::Vec3 Rotation, s3d::Vec3 Scale)
	: _position(Position), _rotation(Rotation), _scale(Scale) {}
