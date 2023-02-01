if(CMAKE_SOURCE_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR)
    message(FATAL_ERROR YSDefine must be subdirectory)
endif()

target_sources(${target_name} PUBLIC FILE_SET ysDefine TYPE HEADERS FILES ysDefine.h)

install(FILES ysDefine.h DESTINATION ${CMAKE_SOURCE_DIR}/inc)