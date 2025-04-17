#pragma once

#include "Core.hpp"

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

