cmake_minimum_required(VERSION 3.20)
include(FetchContent)
FetchContent_Declare(cpr GIT_REPOSITORY https://github.com/libcpr/cpr.git
                         GIT_TAG 3b15fa82ea74739b574d705fea44959b58142eb8) 
FetchContent_MakeAvailable(cpr)
project(TimeServer CXX)
add_executable(TimeServer TimeServer.cpp)
target_link_libraries(TimeServer PRIVATE cpr::cpr)