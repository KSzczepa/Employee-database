cmake_minimum_required(VERSION 3.14)
project(database)
add_executable(${PROJECT_NAME} src/main.cpp)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
    # googletest
    # GIT_REPOSITORY "https://github.com/google/googletest.git"
    # GIT_TAG        master    #release-1.15.0
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(${PROJECT_NAME}-ut src/test.cpp)
target_link_libraries(${PROJECT_NAME}-ut GTest::gtest main)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME}-ut)