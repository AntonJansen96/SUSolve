file(GLOB sudoku_SRC *.cc)          # Add all .cc files to Sudoku_SRC.
add_library(sudoku ${sudoku_SRC})   # Add Sudoku_SRC to Sudoku libary.

install(TARGETS sudoku DESTINATION /usr/lib)
install(FILES sudoku.h DESTINATION /usr/include)
