#include <Engine.hpp>

class ExampleLayer : public Zuplet::Layer
{
public:
    ExampleLayer()
        : Layer("Example")
    {
    }

    void OnUpdate() override
    {
        ZP_INFO("ExampleLayer::Update");
    }

    void OnEvent(Event& event) override
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
    }

    ~Sandbox()
    {

    }
};

Zuplet::Application* Zuplet::CreateApplication()
{
    return new Sandbox();
}
