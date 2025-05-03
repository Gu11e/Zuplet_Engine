#pragma once

#ifdef PLATFORM_WINDOWS

    #ifdef BUILD_DLL
        #define ZUPLET_API __declspec(dllexport)
    #else
        #define ZUPLET_API __declspec(dllimport)
    #endif

#else
#error The Engine only support windows
#endif

#ifdef ENABLE_ASSERTS
    #define APP_ASSERT(x, ...) { if (!(x)) { APP_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
    #define CORE_ASSERT(x, ...) { if (!(x)) { CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
    #define ZP_ASSERT(x, ...)
    #define ZP_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)