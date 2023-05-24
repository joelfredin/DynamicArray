cmake_minimum_required(VERSION 3.12)
project(YourProjectName)

set(CMAKE_CXX_STANDARD 11)

# Add the executable
add_executable(ExecuteDynamicArray main.cpp DynamicArray.cpp)

# Include the header file
# target_include_directories(YourExecutable PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Add any additional libraries or dependencies if needed
# target_link_libraries(YourExecutable YourLibraries)
