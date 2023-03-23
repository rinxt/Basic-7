#include <iostream>

#define MODE 1

#ifndef MODE
    #error Please specify MODE
#else
    #if MODE == 0
        #define TRAINING_MODE
    #elif MODE == 1
        #define COMBAT_MODE
        int add(int a, int b) {
            return a + b;
        }
    #else
        #define UNKNOWN_MODE
    #endif
#endif

int main() {
    int a;
    int b;
    int result;

    system("chcp 1251");
    #ifdef TRAINING_MODE
        std::cout << "Работаю в режиме тренировки\n";
    #elif defined(COMBAT_MODE)
        std::cout << "Работаю в боевом режиме\n";
        std::cout << "Введите два числа: ";
        std::cin >> a >> b;
        result = add(a, b);
        std::cout << "Результат сложения: " << result << std::endl;
    #elif defined(UNKNOWN_MODE)
        std::cout << "Неизвестный режим. Завершение работы.\n";
    #endif

    return 0;
}
