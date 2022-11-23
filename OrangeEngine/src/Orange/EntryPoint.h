#pragma once

#ifdef OG_PLATFORM_WINDOWS

extern Orange::Application* Orange::CreateApplication();

int main(int argc, char** argv) {
	printf("LOL\n");
	auto app = Orange::CreateApplication();
	app->Run();
	delete app;
}

#endif