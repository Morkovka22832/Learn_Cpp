// UsProject.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

int lineWriting()
{
    std::cout << "Write line" << std::endl;
    int line;
    std::cin >> line;
    return line;
}
int columnWriting()
{
    std::cout << "Write column" << std::endl;
    int column;
    std::cin >> column;
    return column;
}
void conclusionMassiv(int mline, int mcolumn, std::vector<std::vector<int>>& MassivOutMain)
{
    MassivOutMain[mline][mcolumn] = 1;

    for (size_t i = 0; i < MassivOutMain.size(); ++i) {
        for (size_t j = 0; j < MassivOutMain[i].size(); ++j) {
            std::cout << MassivOutMain[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    int i = 0;

    std::vector<std::vector<int>> mainmassiv = { { 3, 3, 3 }, {3, 3, 3}, { 3, 3, 3 } };

    do {
        int line = lineWriting();
        int column = columnWriting();
        conclusionMassiv(line, column, mainmassiv);
        ++i;
    } while (i <= 9);
}