#include "sudoku.ih"

Sudoku::Sudoku(grid const &elements)
{
    for (std::vector<int> const &row : elements)
        d_elements.push_back(row);
}
