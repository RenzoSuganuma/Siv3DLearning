#include "Siv3D.hpp" // Siv3D v0.6.14
#include "UserGameFoundation.h"
#include "functional"
#include "list"

UserGameFoundation* game = new UserGameFoundation();

std::list<std::function<void(void)>> func_list;

void Main()
{
	func_list.emplace_back([]() {Console << U"p"; });
	func_list.emplace_back([]() {Console << U"p1"; });
	func_list.emplace_back([]() {Console << U"p2"; });
	func_list.emplace_back([]() {Console << U"p3"; });
	func_list.emplace_back([]() {Console << U"p4"; });
	func_list.emplace_back([]() {Console << U"p5"; });
	func_list.emplace_back([]() {Console << U"p6"; });

	auto itr = func_list.begin();

	Console << &(*itr);
	itr++;
	Console << &(*itr);

	game->Setup();
	game->Validation();
	game->Init();

	while (System::Update())
	{
		game->Update();
	}

	game->End();
}
