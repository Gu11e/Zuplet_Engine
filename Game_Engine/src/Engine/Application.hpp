#pragma once

#include "Engine/Core.hpp"
#include "Events/Event.hpp"


namespace Engine
{
    class ENGINE_API Application {
    public:
        Application();
        ~Application();

        void Run();
    };

    // definida en un cliente
    Application* CreateApplication();
}

