list(APPEND tests
  basic
)

foreach(test IN LISTS tests)
  add_executable(
    test_${test}
    ${test}.c
    $<TARGET_OBJECTS:crc>
  )

  add_test(${test} test_${test})
endforeach()
