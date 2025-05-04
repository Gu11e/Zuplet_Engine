project(Sandbox)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/Sandbox/${CMAKE_BUILD_TYPE})

add_executable(Sandbox
        src/SandboxApp.cpp
)

target_link_libraries(Sandbox PRIVATE Zuplet_Engine)

target_include_directories(Sandbox PRIVATE
        ${CMAKE_SOURCE_DIR}/Zuplet_Engine/src
)

add_custom_command(TARGET Sandbox POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        $<TARGET_FILE:Zuplet_Engine>
        $<TARGET_FILE_DIR:Sandbox>
)

target_compile_definitions(Sandbox PRIVATE PLATFORM_WINDOWS)

