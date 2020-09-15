# Does the application run
add_test(NAME Runs COMMAND susolve "${CMAKE_SOURCE_DIR}/tests/sudoku2.txt")

# Does it solve Project Euler problem 96
add_test(NAME Solves_pEuler_p96 COMMAND susolve "${CMAKE_SOURCE_DIR}/tests/sudoku1.txt")
