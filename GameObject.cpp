#include "stdafx.h"
#include "GameObject.h"

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

}

void GameObject::Update() {

}

void GameObject::Finalize() {

}
