#include "stdafx.h"
#include "TesterComponent.h"
#include "leonidas_macros.h"

using leonidas::TesterComponent;

TesterComponent::TesterComponent(){}

void TesterComponent::__Initialize() {
	PRINT("Initialize");
}

void TesterComponent::__Update() {
	PRINT("Update");
}

void TesterComponent::__Finalize() {
	PRINT("Finalize");
}
