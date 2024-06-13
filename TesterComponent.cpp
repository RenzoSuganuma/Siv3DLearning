#include "stdafx.h"
#include "TesterComponent.h"

using leonidas::TesterComponent;

TesterComponent::TesterComponent(){}

void TesterComponent::__Initialize() {
	Print << U"init";
}

void TesterComponent::__Update() {
	Print << U"tester";
}

void TesterComponent::__Finalize() {
	Print << U"final";
}
