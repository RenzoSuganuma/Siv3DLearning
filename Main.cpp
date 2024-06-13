# include <Siv3D.hpp> // Siv3D v0.6.14

#include"GameObject.h"
#include"Component.h"
#include"TesterComponent.h"

using shivext::Component;
using shivext::GameObject;
using shivext::TesterComponent;
using shivext::Transform;

TesterComponent* tester = new TesterComponent();
Transform* t = new Transform(s3d::Vec3(1, 1, 1), s3d::Vec3(1, 1, 1), s3d::Vec3(1, 1, 1));
String name = U"name";
GameObject* go = new GameObject(*t, name);

void Main()
{
	go->AddComponent(static_cast<Component*>(tester));

	go->Init();

	while (System::Update())
	{
		go->Update();
	}

	go->Finalize();

}
