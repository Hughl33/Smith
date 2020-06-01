#include <Smith.h>

class Sandbox : public Smith::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Smith::Application* Smith::CreateApplication() {
	return new Sandbox();
}