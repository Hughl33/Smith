#pragma once

#include "Core.h"

namespace Smith {
	class SMITH_API Application {
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in client
	Application* CreateApplication();
}
