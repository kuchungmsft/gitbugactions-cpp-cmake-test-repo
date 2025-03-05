# Find all source files
file(GLOB SOURCES "*.cc" "*.c" "*.hpp" "*.cpp", "*.cxx")

# Add the static library
add_library(math STATIC ${SOURCES})