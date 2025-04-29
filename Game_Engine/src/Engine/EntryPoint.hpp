#pragma once
#include "Engine.hpp"

#ifdef PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();

int main(int argc, char** argv)
{
    Engine::Log::Init();
    CORE_WARN("Initialized Log!");
    APP_INFO("Hello app!!");

    auto app = Engine::CreateApplication();
    app->Run();
    delete app;
    return 0;
}

#endif
