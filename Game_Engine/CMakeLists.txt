project(Game_Engine)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/Game_Engine/${CMAKE_BUILD_TYPE})

add_library(Game_Engine SHARED
        src/Engine/Application.cpp
        src/Engine/Log.cpp
        src/enpch.hpp
        src/enpch.cpp
)

target_precompile_headers(Game_Engine PRIVATE src/enpch.hpp src/enpch.cpp)

target_include_directories(Game_Engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/vendor/spdlog/include)
target_include_directories(Game_Engine PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)

target_compile_definitions(Game_Engine PRIVATE PLATFORM_WINDOWS BUILD_DLL)
