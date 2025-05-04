#pragma once
#include "Application.hpp"
#include "Zuplet.hpp"

#ifdef PLATFORM_WINDOWS

extern Zuplet::Application* Zuplet::CreateApplication();

int main(int argc, char** argv)
{
    Zuplet::Log::Init();
    ZP_CORE_WARN("Initialized Log!");
    ZP_INFO("Hello app!!");

    auto app = Zuplet::CreateApplication();
    app->Run();
    delete app;
    return 0;
}

#endif
