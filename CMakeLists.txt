cmake_minimum_required(VERSION 3.14)
project(DynamicArrayProj)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add the executable
add_executable(ExecuteDynamicArray main.cpp DynamicArray.cpp)

# Include the header file
# target_include_directories(YourExecutable PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Add any additional libraries or dependencies if needed
# target_link_libraries(YourExecutable YourLibraries)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)









# Add Google Test
# add_subdirectory(googletest)

# Link the Google Test library
# target_link_libraries(ExecuteDynamicArray gtest)

# Specify the include directory for Google Test
# target_include_directories(ExecuteDynamicArray PRIVATE ${GTEST_DIR}/googletest/include)
