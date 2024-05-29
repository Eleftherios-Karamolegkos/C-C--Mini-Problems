#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool findWord(std::vector<std::string>& grid, const std::string& word) {
    int rows = grid.size();
    int cols = grid[0].size();

    int dx[] = {1, 1, 0, -1, -1, -1, 0, 1};
    int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};

    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < cols; ++c) {
            for (int dir = 0; dir < 8; ++dir) {
                int rd = r + dx[dir];
                int cd = c + dy[dir];
                int k;

                for (k = 1; k < word.length(); ++k) {
                    if (rd >= rows || rd < 0 || cd >= cols || cd < 0)
                        break;

                    if (grid[rd][cd] != word[k])
                        break;

                    rd += dx[dir];
                    cd += dy[dir];
                }

                if (k == word.length())
                    return true;
            }
        }
    }
    return false;
}

int main() {
    std::vector<std::string> grid = {
        "ABCE",
        "SFCS",
        "ADEE"
    };

    std::string word;
    std::cout << "Enter the word to search: ";
    std::cin >> word;

    std::transform(word.begin(), word.end(), word.begin(), ::toupper);

    if (findWord(grid, word)) {
        std::cout << "Word found!" << std::endl;
    } else {
        std::cout << "Word not found!" << std::endl;
    }

    return 0;
}