#include "Application.hpp"

#include "Events/ApplicationEvent.hpp"
#include "Log.hpp"

namespace Engine
{
    Application::Application()
    {

    }

    Application::~Application()
    {

    }

    void Application::Run()
    {
        WindowResizeEvent e(1280, 720);
        CORE_TRACE(e);

        while (true);
    }


}