cmake_minimum_required(VERSION 3.14)
include(pico_sdk_import.cmake)
project(cppPicoTemplate VERSION 1.0.0)
add_executable(cppPicoTemplate
               main.cpp)

pico_sdk_init()

pico_enable_stdio_usb(cppPicoTemplate 1)
pico_enable_stdio_uart(cppPicoTemplate 1)
pico_add_extra_outputs(cppPicoTemplate)

target_link_libraries(cppPicoTemplate
                      pico_stdlib
                      hardware_gpio
                      hardware_i2c
                      hardware_spi
                      hardware_adc
                      hardware_uart)
