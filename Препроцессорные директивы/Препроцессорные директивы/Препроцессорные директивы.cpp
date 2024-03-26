#include <iostream>

#define MODE 0

#ifndef MODE
#error "Необходимо определить MODE"
#endif

#if MODE == 0
#define TRAINING_MODE
#elif MODE == 1
#define BATTLE_MODE
#endif

#ifdef BATTLE_MODE
void add(int a, int b) {
    std::cout << "Работаю в боевом режиме" << std::endl;
    std::cout << "Введите число 1: ";
    std::cin >> a;
    std::cout << "Введите число 2: ";
    std::cin >> b;
    std::cout << "Результат сложения: " << (a + b) << std::endl;
}
#endif

int main() {
    setlocale(LC_ALL, "Russian");
#if MODE == 0
    std::cout << "Работаю в режиме тренировки" << std::endl;
#elif MODE == 1
    add(0, 0);
#else
    std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif

    return 0;
}