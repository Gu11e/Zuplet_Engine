#pragma once

#include "Zuplet/Core.hpp"

#include "Zuplet/Window.hpp"
#include "Zuplet/Events/Event.hpp"
#include "Events/ApplicationEvent.hpp"
#include "Zuplet/LayerStack.hpp"

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

