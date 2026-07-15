cmake_minimum_required(VERSION 3.20)

project(DesignPatternsCpp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#
# Place all executables inside ./bin
#
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

add_executable(
        DesignPatternsCpp
        src/main.cpp
        src/notification/EmailNotification.cpp
        src/notification/SmsNotification.cpp
        src/notification/WhatsAppNotification.cpp

        include/notification/NotificationService.h
        include/notification/EmailNotification.h
        include/notification/SmsNotification.h
        include/notification/WhatsAppNotification.h
)

target_include_directories(
        DesignPatternsCpp
        PRIVATE include
)