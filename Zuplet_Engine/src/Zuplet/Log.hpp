#pragma once

#include "enpch.hpp"

#include "Zuplet/Core.hpp"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"
#include "spdlog/sinks/stdout_color_sinks.h"


namespace Zuplet {

    class ZUPLET_API Log
    {
    public:
        static void Init();

        inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
        inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
    private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger;
    };

}

// Core log macros
#define ZP_CORE_TRACE(...)    ::Zuplet::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define ZP_CORE_INFO(...)     ::Zuplet::Log::GetCoreLogger()->info(__VA_ARGS__)
#define ZP_CORE_WARN(...)     ::Zuplet::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define ZP_CORE_ERROR(...)    ::Zuplet::Log::GetCoreLogger()->error(__VA_ARGS__)
#define ZP_CORE_FATAL(...)    ::Zuplet::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define ZP_TRACE(...)	      ::Zuplet::Log::GetClientLogger()->trace(__VA_ARGS__)
#define ZP_INFO(...)	      ::Zuplet::Log::GetClientLogger()->info(__VA_ARGS__)
#define ZP_WARN(...)	      ::Zuplet::Log::GetClientLogger()->warn(__VA_ARGS__)
#define ZP_ERROR(...)	      ::Zuplet::Log::GetClientLogger()->error(__VA_ARGS__)
#define ZP_FATAL(...)	      ::Zuplet::Log::GetClientLogger()->fatal(__VA_ARGS__)