cmake_minimum_required(VERSION 3.14)
include(pico_sdk_import.cmake)
project(ServoMover VERSION 1.0.0)
add_executable(ServoMover
               main.cpp)

pico_sdk_init()

pico_enable_stdio_usb(ServoMover 1)
pico_enable_stdio_uart(ServoMover 1)
pico_add_extra_outputs(ServoMover)

target_link_libraries(ServoMover
                      pico_stdlib
                      hardware_gpio
                      hardware_i2c
                      hardware_spi
                      hardware_adc
                      hardware_uart
                      hardware_pwm
                      )
