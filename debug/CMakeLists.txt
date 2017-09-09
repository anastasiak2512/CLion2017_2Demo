# Add -DCMAKE_MODULE_PATH=<path to your Qt5 installation> to
# CMake options under Settings/Preferences | Build, Execution, Deployment | CMake

find_package(Qt5Widgets REQUIRED)

set(SOURCE_FILES simple_qt_app.cpp)
add_executable(simple_qt_ap ${SOURCE_FILES})
target_link_libraries(simple_qt_ap Qt5::Widgets)

set(SOURCE_FILES2 long_array.cpp)
add_executable(long_array_debug ${SOURCE_FILES2})
