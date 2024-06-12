# include <Siv3D.hpp> // Siv3D v0.6.14

#include"TesterComponent.h"

TesterComponent* tester = new TesterComponent();

void Main()
{
	// up-cast
	Component* comp = static_cast<Component*>(tester);

	comp->Initialize();

	while (System::Update())
	{
		comp->Update();
	}

	comp->Finalize();
}
