#pragma once

#ifdef SM_PLATFORM_WINDOWS

extern Smith::Application* Smith::CreateApplication();

int main(int argc, char** argv) {
	printf("Smith Engine\n");
	auto app = Smith::CreateApplication();
	app->Run();
	delete app;
}

#else
#error Smith only supports Windows at this time...
#endif // SM_PLATFORM_WINDOWS
