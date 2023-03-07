cmake_minimum_required(VERSION 3.16)
project(bluez-inc)

include(FindPkgConfig)
pkg_check_modules(GLIB REQUIRED IMPORTED_TARGET glib-2.0 gio-2.0)

add_library(Binc
        src/adapter.c
        src/advertisement.c
        src/agent.c
        src/application.c
        src/characteristic.c
        src/descriptor.c
        src/device.c
        src/logger.c
        src/parser.c
        src/service.c
        src/utility.c
        )

target_compile_features(Binc PUBLIC c_std_99)
# Show all the warnings
target_compile_options(Binc PRIVATE $<$<COMPILE_LANGUAGE:C>:-Wall -Werror -Wextra -Wno-unused-function -Wno-unused-parameter>)
# All headers are under the `binc/` subdirectory when imported by an application,
# but this subdirectory is ommited privately within the library.
target_include_directories (Binc PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories (Binc PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include/binc)
target_link_libraries(Binc PkgConfig::GLIB m)

# add_subdirectory(examples/central)
# add_subdirectory(examples/peripheral)

