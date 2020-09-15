#include "susolve.ih"

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "Please specify path to sudoku file.\n";
        return 1;
    }

    std::string const path = argv[1];

    std::vector<Sudoku> sudokus(import(path));

    size_t sum = 0;

    for (Sudoku &sudoku : sudokus)
    {
        sudoku.solve();
        sum += sudoku.topleftnum();
        std::cout << sudoku;
    }
        
    std::cout << sum << '\n';
}
