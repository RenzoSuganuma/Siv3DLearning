#include "Siv3D.hpp" // Siv3D v0.6.14
#include "UserGameFoundation.h"
#include "functional"
#include "list"
#include "leonidas_macros.h"

UserGameFoundation* game = new UserGameFoundation();

void Main()
{
	CLog("UNNKo");

	game->Setup();
	game->Validation();
	game->Init();

	while (System::Update())
	{
		game->Update();
	}

	game->End();
}
