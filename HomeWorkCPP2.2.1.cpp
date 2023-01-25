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
        switch (month) {
        case months::Январь: std::cout << "Январь." << std::endl; break;
        case months::Февраль: std::cout << "Февраль." << std::endl; break;
        case months::Март: std::cout << "Март." << std::endl; break;
        case months::Апрель: std::cout << "Апрель." << std::endl; break;
        case months::Май: std::cout << "Май." << std::endl; break;
        case months::Июнь: std::cout << "Июнь." << std::endl; break;
        case months::Июль: std::cout << "Июль." << std::endl; break;
        case months::Август: std::cout << "Август." << std::endl; break;
        case months::Сентябрь: std::cout << "Сентябрь." << std::endl; break;
        case months::Октябрь: std::cout << "Октябрь." << std::endl; break;
        case months::Ноябрь: std::cout << "Ноябрь." << std::endl; break;
        case months::Декабрь: std::cout << "Декабрь." << std::endl; break;
        }
    } while (num != 0);
    std::cout << "До свидания." << std::endl;
}