/*представление массива на c++*/

list <int> this_list = {4, 6, 3, 2};


/*представление стека списка*/
#include <iostream>
#include <vector>

int main() {
    // Создание пустого вектора, аналогичного Python []
    std::vector<int> ls;

    // Добавление элементов
    ls.push_back(10);
    ls.push_back(20);

    // Вывод содержимого
    for (int num : ls) {
        std::cout << num << " ";
    }

    return 0;
}