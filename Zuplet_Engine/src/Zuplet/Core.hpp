#pragma once

#ifdef PLATFORM_WINDOWS

    #ifdef BUILD_DLL
        #define ZUPLET_API __declspec(dllexport)
    #else
        #define ZUPLET_API __declspec(dllimport)
    #endif

#else
#error The Zuplet only support windows
#endif

#ifdef ENABLE_ASSERTS
    #define ZP_ASSERT(x, ...) { if (!(x)) { ZP_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
    #define ZP_CORE_ASSERT(x, ...) { if (!(x)) { ZP_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
    #define ZP_ASSERT(x, ...)
    #define ZP_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)