cmake_minimum_required(VERSION 3.30)
project(LanternExampleMod)
set(CMAKE_CXX_STANDARD 20)

set(SRC_FILES
        pch.h
        pch.cpp
        framework.h
        TestMod.cpp
        TestMod.h
        LanternExampleMod.cpp
        LanternExampleMod.h

        Hooks/FJ/L10N.cpp
        Hooks/FJ/L10N.h
        Hooks/Minecraft.World/item/Item.cpp
        Hooks/Minecraft.World/item/Item.h
        Hooks/Minecraft.World/item/SwordItem.cpp
        Hooks/Minecraft.World/item/SwordItem.h
)

add_subdirectory(lib/Lantern)
include_directories(lib/Lantern/lantern lib/Lantern/lantern/lib/detours .)
link_directories(${CMAKE_SOURCE_DIR}/out/build/lib/Lantern ${CMAKE_SOURCE_DIR}/out/build/lib/Lantern/lib/detours)

add_library(LanternExampleMod SHARED ${SRC_FILES})
target_link_libraries(LanternExampleMod PRIVATE lib_detours ${CMAKE_SOURCE_DIR}/out/build/lib/Lantern/Lantern.lib)
