project(Sandbox)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin/${CMAKE_BUILD_TYPE})

add_executable(Sandbox
        src/main.cpp
)

target_link_libraries(Sandbox PRIVATE Game_Engine)

target_include_directories(Sandbox PRIVATE
        ${CMAKE_SOURCE_DIR}/Game_Engine/src
)

add_custom_command(TARGET Sandbox POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        $<TARGET_FILE:Game_Engine>
        $<TARGET_FILE_DIR:Sandbox>
)
