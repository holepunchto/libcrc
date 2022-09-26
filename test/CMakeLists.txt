list(APPEND tests
  basic
)

foreach(test IN LISTS tests)
  add_executable(${test} ${test}.c)

  target_link_libraries(${test} crc_shared)

  add_test(
    NAME ${test}
    COMMAND ${test}
    WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
  )
endforeach()
