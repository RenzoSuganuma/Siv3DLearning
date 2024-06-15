#include "Siv3D.hpp" // Siv3D v0.6.14
#include "UserGameFoundation.h"
#include "functional"
#include "list"
#include "leonidas_macros.h"
#include "stdafx.h"

Object_Ptr<UserGameFoundation> game;

void Main()
{

	//game->Setup();
	//game->Validation();
	//game->Init();

	game.Instance->Setup();
	game.Instance->Validation();
	game.Instance->Init();

	while (System::Update())
	{
		//game->Update();
	}

	//game->End();
}
