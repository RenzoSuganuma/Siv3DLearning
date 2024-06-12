#include "stdafx.h"
#include "TesterComponent.h"

TesterComponent::TesterComponent(){}

void TesterComponent::__Initialize() {
	Print << U"init";
}

void TesterComponent::__Update() {
	Print << U"upd";
}

void TesterComponent::__Finalize() {
	Print << U"final";
}
