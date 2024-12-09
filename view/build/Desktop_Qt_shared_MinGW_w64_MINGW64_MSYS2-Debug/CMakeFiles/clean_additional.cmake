# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\view_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\view_autogen.dir\\ParseCache.txt"
  "view_autogen"
  )
endif()
