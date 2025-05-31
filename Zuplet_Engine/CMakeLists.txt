cmake_minimum_required(VERSION 3.31)
project(Zuplet_Engine)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/Zuplet_Engine/${CMAKE_BUILD_TYPE})

add_library(Zuplet_Engine SHARED
        src/Zuplet/Application.cpp
        src/Zuplet/Log.cpp
        src/Platform/Windows/WindowsWindow.cpp
        src/Zuplet/Layer.cpp
        src/Zuplet/LayerStack.cpp
        src/Zuplet/ImGui/ImGuiLayer.cpp
        src/Zuplet/ImGui/ImGuiLayer.hpp
        src/Platform/OpenGL/ImGuiOpenGLRenderer.cpp
        src/Zuplet/Input.hpp
        src/Platform/Windows/WindowsInput.cpp
        src/Platform/Windows/WindowsInput.hpp
        src/Zuplet/KeyCodes.hpp
        src/Zuplet/MouseButtonCodes.hpp
)

target_precompile_headers(Zuplet_Engine PRIVATE src/zppch.hpp src/zppch.cpp)

target_link_libraries(Zuplet_Engine PRIVATE glfw Glad imgui opengl32.lib)

target_include_directories(Zuplet_Engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/vendor/spdlog/include)
target_include_directories(Zuplet_Engine PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/vendor/GLFW/include)
target_include_directories(Zuplet_Engine PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/vendor/Glad/include)
target_include_directories(Zuplet_Engine PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/vendor/imgui)
target_include_directories(Zuplet_Engine PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)

target_compile_definitions(Zuplet_Engine PRIVATE PLATFORM_WINDOWS BUILD_DLL ENABLE_ASSERTS GLFW_INCLUDE_NONE)

if(MSVC)
    # Usa el runtime dinámico en Debug (/MDd) y Release (/MD)
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreadedDLL")
endif()
