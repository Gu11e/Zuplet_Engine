#pragma once

#include "enpch.hpp"

#include "Engine/Core.hpp"
#include "Engine/Events/Event.hpp"

namespace Zuplet
{
    struct WindowProps
    {
        std::string Title;
        unsigned int Width;
        unsigned int Height;

        WindowProps(std::string title = "Engine Window", unsigned int width = 1280, unsigned int height = 720)
            : Title(title), Width(width), Height(height)
        {
        }
    };

    class ZUPLET_API Window
    {
    public:
        using EventCallbackfn = std::function<void(Event&)>;

        virtual ~Window() {}

        virtual void OnUpdate() = 0;

        virtual unsigned int GetWidth() const = 0;
        virtual unsigned int GetHeight() const = 0;

        virtual void SetEventCallback(const EventCallbackfn& callback) = 0;
        virtual void SetVSync(bool enabled) = 0;
        virtual bool IsVSync() const = 0;

        static Window* Create(const WindowProps& props = WindowProps());
    };
}
