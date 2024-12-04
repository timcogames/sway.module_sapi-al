# Мета-информация о проекте
set(META_SAPI_AL_PRJNAME_TESTS "module_sapi_tests")
set(META_SAPI_AL_EXENAME_TESTS "${META_SAPI_AL_PRJNAME_TESTS}")

project(${META_SAPI_AL_PRJNAME_TESTS} CXX)

enable_testing()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)

set(GTEST_ROOT "${GLOB_GTEST_ROOT_DIR}")
set(GTEST_INC_DIR "${GTEST_ROOT}/include")
set(GTEST_SRC_DIR "${GTEST_ROOT}/src")

set(GMOCK_ROOT "${GLOB_GMOCK_ROOT_DIR}")
set(GMOCK_INC_DIR "${GMOCK_ROOT}/include")

find_package(Threads REQUIRED)

include_directories(${GTEST_INC_DIR} ${GMOCK_INC_DIR})

# Получаем пути ко всем исходникам с тестами
file(GLOB MODULE_SAPI_AL_SOURCE_TESTS ${PROJECT_SOURCE_DIR}/*.cpp)

add_executable(${META_SAPI_AL_EXENAME_TESTS} ${MODULE_SAPI_AL_SOURCE_TESTS} "${GTEST_SRC_DIR}/gtest_main.cc")
target_link_libraries(${META_SAPI_AL_EXENAME_TESTS}
  module_sapi_al_obj module_core_obj
  pthread
  ${GLOB_GTEST_LIB_DIR}/libgtest.a ${GLOB_GTEST_LIB_DIR}/libgmock.a ${CMAKE_DL_LIBS})

add_test(NAME ${META_SAPI_AL_EXENAME_TESTS} COMMAND ${META_SAPI_AL_EXENAME_TESTS})
