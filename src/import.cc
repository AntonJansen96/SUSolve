#include "susolve.ih"

std::vector<Sudoku> import(std::string const &fileName)
{
    std::vector<Sudoku> sudokus;        // Initialize vector of Sudoku objects.

    std::ifstream file(fileName);       // Initialize input filestream object.

    std::vector<std::vector<int>> tmpSudoku; // Temporary Sudoku vector.
    int count = 0;                      // Reset every nine lines.

    std::string line;                   // Mold for reading lines.
    while (getline(file, line))
    {                                   // Ignore lines with "Grid".
        if (line.find("Grid") == std::string::npos)
        {
            std::vector<int> tmpLine;
            for (int idx = 0; idx != 9; ++idx)
                tmpLine.push_back(static_cast<int>(line[idx]) - '0');

            tmpSudoku.push_back(tmpLine);       // Add line to temp.
            ++count;
        }

        if (count == 9)                         // Reset every nine lines.
        {
            Sudoku next(tmpSudoku);             // Initialze next Sudoko object.
            sudokus.push_back(next);            // Add to Sudoku object vector.
            
            count = 0;                          // Reset count and vector.
            tmpSudoku.clear();
        }
    }
                                                
    std::vector<Sudoku>(sudokus).swap(sudokus); // Shed excess capacity.

    return sudokus;                             // Return sudoku vector.
}
