#pragma once

#include "Engine/Core.hpp"
#include "Engine/Events/Event.hpp"
#include "Engine/Window.hpp"
#include "Events/ApplicationEvent.hpp"

namespace Engine
{
    class ENGINE_API Application {
    public:
        Application();
        ~Application();

        void Run();

        void OnEvent(Event& e);

    private:
        bool OnWindowClosed(WindowCloseEvent& e);

        std::unique_ptr<Window> m_Window;
        bool m_Running = true;
    };

    // definida en un cliente
    Application* CreateApplication();
}

