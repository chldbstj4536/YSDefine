cmake_minimum_required(VERSION 3.25)

project(YSDefine
    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

install(FILES ysDefine.hpp
    DESTINATION ${CMAKE_INSTALL_PREFIX}/inc)