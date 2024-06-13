#include "stdafx.h"
#include "GameObject.h"

using leonidas::GameObject;
using leonidas::Transform;

void GameObject::SetTransform(Transform t) {
	_transform = t;
}

Transform GameObject::GetTransform() {
	return _transform;
}

// default constructor
GameObject::GameObject() {}

GameObject::GameObject(Transform Transform, String Name)
	: _transform(Transform), _objectName(Name) {}

void GameObject::AddComponent(Component* component) {
	_components.emplace_back(component);
}

void GameObject::RemoveComponent(Component* component) {
	_components.remove(component);
}

void GameObject::Init() {
	for (int i = 0; i < _components.size(); ++i) {
		_components.at(i)->Initialize();
	}
}

void GameObject::Update() {
	for (int i = 0; i < _components.size(); ++i) {
		_components.at(i)->Update();
	}
}

void GameObject::Finalize() {
	for (int i = 0; i < _components.size(); ++i) {
		_components.at(i)->Finalize();
	}
}
