#include <iostream>
#include <locale.h>

enum class months {
    Январь = 1,
    Февраль = 2,
    Март = 3,
    Апрель = 4,
    Май = 5,
    Июнь = 6,
    Июль = 7,
    Август = 8,
    Сентябрь = 9,
    Октябрь = 10,
    Ноябрь = 11,
    Декабрь = 12
};

int main() {
    int num = 0;
    setlocale(LC_ALL, "Russian");
    do {
        std::cout << "Введите номер месяца: ";
        std::cin >> num;
        if (num < 0 || num > 12) {
            std::cout << "Неправильный номер!" << std::endl;
            continue;
        }
        months month = static_cast<months> (num);
        switch (static_cast<int>(month)) {
        case 1: std::cout << "Январь." << std::endl; break;
        case 2: std::cout << "Февраль." << std::endl; break;
        case 3: std::cout << "Март." << std::endl; break;
        case 4: std::cout << "Апрель." << std::endl; break;
        case 5: std::cout << "Май." << std::endl; break;
        case 6: std::cout << "Июнь." << std::endl; break;
        case 7: std::cout << "Июль." << std::endl; break;
        case 8: std::cout << "Август." << std::endl; break;
        case 9: std::cout << "Сентябрь." << std::endl; break;
        case 10: std::cout << "Октябрь." << std::endl; break;
        case 11: std::cout << "Ноябрь." << std::endl; break;
        case 12: std::cout << "Декабрь." << std::endl; break;
        }
    } while (num != 0);
    std::cout << "До свидания." << std::endl;
}