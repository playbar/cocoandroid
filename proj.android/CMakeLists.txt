cmake_minimum_required(VERSION 3.4.1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -frtti -DCC_ENABLE_CHIPMUNK_INTEGRATION=1 -std=c++11 -fsigned-char -Wno-extern-c-compat")



add_library(cocos2dx_static STATIC
            ../cocos2d/cocos/cocos2d.cpp
         )

target_include_directories(cocos2dx_static PRIVATE
                          ${CMAKE_CURRENT_SOURCE_DIR}
                          ${CMAKE_CURRENT_SOURCE_DIR}/../cocos2d/cocos/
                          ${CMAKE_CURRENT_SOURCE_DIR}/
                          ${CMAKE_CURRENT_SOURCE_DIR}/base
                          ${ANDROID_NDK}/sources/third_party/shaderc/include)

#////////////////////

 add_library(MyGame SHARED
            libcocos2dx/src/main/cpp/main.cpp
            ../Classes/AppDelegate.cpp
            ../Classes/HaowanLibScene.cpp
            ../Classes/Caretaker.cpp
            ../Classes/VisibleRect.cpp
            )

 target_include_directories(MyGame PRIVATE
                           ${CMAKE_CURRENT_SOURCE_DIR}
                           ${CMAKE_CURRENT_SOURCE_DIR}/../cocos2d/cocos/
                           ${CMAKE_CURRENT_SOURCE_DIR}/../Classes
                           ${CMAKE_CURRENT_SOURCE_DIR}/libcocos2dx/src/main/cpp
                           ${CMAKE_CURRENT_SOURCE_DIR}/../cocos2d/cocos/audio/include
                           ${ANDROID_NDK}/sources/third_party/shaderc/include)


target_link_libraries(MyGame
                      android
                      log
                      cocos2dx_static)
