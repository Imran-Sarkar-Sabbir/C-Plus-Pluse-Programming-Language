#include <iostream>
using namespace std;

std::pair<int, int> point(char board[][8])
{
    bool flag = false;
    bool inMiddle = false;
    bool isFound = false;
    std::pair<int, int> coord;
    for (int i = 0; i < 8; i++)
    {
        flag = false;

        for (int j = 0; j < 8; j++)
        {
            if (board[i][j] == '#')
            {
                if (flag)
                {
                    inMiddle = true;
                }
                flag = !flag;
                isFound = true;
            }

            if (inMiddle && flag && isFound)
            {
                coord.first = i + 1;
                coord.second = j + 1;
                return coord;
            }
        }
    }
    return coord;
}

int main()
{

    char board[8][8] = {
        {'#', '.', '#', '.', '.', '.', '.', '.'},
        {'.', '#', '.', '.', '.', '.', '.', '.'},
        {'#', '.', '#', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '#', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '#', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '#', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '#', '.'},
    };

    char board_b[8][8] = {
        {'.', '.', '.', '.', '#', '.', '.', '.'},
        {'.', '.', '.', '#', '.', '.', '.', '.'},
        {'#', '.', '#', '.', '.', '.', '.', '.'},
        {'.', '#', '.', '.', '.', '.', '.', '.'},
        {'#', '.', '#', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '#', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '#', '.', '.', '.'},
    };

    auto result = point(board_b);

    std::cout << result.first << " " << result.second << std::endl;
    system("pause");
    return 0;
}