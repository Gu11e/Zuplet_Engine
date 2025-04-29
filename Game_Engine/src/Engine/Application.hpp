#pragma once

#include "Engine/Core.hpp"
#include "Engine/Events/Event.hpp"
#include "Engine/Window.hpp"

namespace Engine
{
    class ENGINE_API Application {
    public:
        Application();
        ~Application();

        void Run();

    private:
        std::unique_ptr<Window> m_Window;
        bool m_Running = true;
    };

    // definida en un cliente
    Application* CreateApplication();
}

