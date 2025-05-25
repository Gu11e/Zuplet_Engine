#pragma once
#include "Zuplet/Layer.hpp"

namespace Zuplet
{
    class ZUPLET_API ImGuiLayer : public Layer
    {
    public:
        ImGuiLayer();
        ~ImGuiLayer();

        void OnAttach();
        void OnDetach();

        void OnUpdate();
        void OnEvent(Event& event);

    private:
        float m_Time = 0.0f;
    };
}
