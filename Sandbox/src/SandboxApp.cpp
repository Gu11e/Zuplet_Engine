#include <Engine.hpp>

class ExampleLayer : public Engine::Layer
{
public:
    ExampleLayer()
        : Layer("Example")
    {
    }

    void OnUpdate() override
    {
        APP_INFO("ExampleLayer::Update");
    }

    void OnEvent(Event& event) override
    {
        APP_TRACE("{0}", event);
    }
};

class Sandbox : public Engine::Application
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

Engine::Application* Engine::CreateApplication()
{
    return new Sandbox();
}
