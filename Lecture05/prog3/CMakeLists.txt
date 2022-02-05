cmake_minimum_required (VERSION 3.7)
project(ex1_cmakeproject)

include_directories(${CMAKE_SOURCE_DIR}/include)
link_directories(${CMAKE_SOURCE_DIR}/lib)

set(SOURCES math/prog.c)
add_executable(myexe ${PROJECT_SOURCE_DIR}/${SOURCES})

target_link_libraries(myexe libc.so libmaths.a)

install(TARGETS myexe DESTINATION /usr/bin)
install(FILES man/add.3 DESTINATION /usr/share/man/man3)


include(InstallRequiredSystemLibraries)
set(CPACK_GENERATOR "DEB")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Amol_Gajbhiye")
include(CPack)

