#pragma once

#include "Engine/Core.hpp"

#include "Engine/Window.hpp"
#include "Engine/Events/Event.hpp"
#include "Events/ApplicationEvent.hpp"
#include "Engine/LayerStack.hpp"

namespace Zuplet
{
    class ZUPLET_API Application {
    public:
        Application();
        ~Application();

        void Run();

        void OnEvent(Event& e);

        void PushLayer(Layer* layer);
        void PushOverlay(Layer* overlay);

    private:
        bool OnWindowClosed(WindowCloseEvent& e);

        std::unique_ptr<Window> m_Window;
        bool m_Running = true;

        LayerStack m_LayerStack;
    };

    // definida en un cliente
    Application* CreateApplication();
}

