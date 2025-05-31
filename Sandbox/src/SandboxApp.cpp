#include <Zuplet.hpp>
#include "Zuplet/ImGui/ImGuiLayer.hpp"

class ExampleLayer : public Zuplet::Layer
{
public:
    ExampleLayer()
        : Layer("Example")
    {
    }

    void OnUpdate() override
    {
        // ZP_INFO("ExampleLayer::Update");
    }

    void OnEvent(Zuplet::Event& event) override
    {
        ZP_TRACE("{0}", event);
    }
};

class Sandbox : public Zuplet::Application
{
public:
    Sandbox()
    {
        PushLayer(new ExampleLayer());
        PushLayer(new Zuplet::ImGuiLayer());
    }

    ~Sandbox()
    {

    }
};

Zuplet::Application* Zuplet::CreateApplication()
{
    return new Sandbox();
}
