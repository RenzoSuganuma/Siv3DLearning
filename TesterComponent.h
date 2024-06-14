#pragma once

#include "Component.h"
#include "Siv3D.hpp"

using leonidas::Component;

namespace leonidas {

	class TesterComponent : public Component
	{

	private:
		void __Initialize() override;
		void __Update() override;
		void __Finalize() override;

	public:
		// default constructor
		TesterComponent();
	};
}
