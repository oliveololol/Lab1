#include <iostream>
#include <windows.h>

int main() {
    // Отримуємо дескриптор консолі
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Задаємо кольори фону і тексту
    SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);


    // Виводимо текст з новими кольорами
    std::cout << "background and text!" << std::endl;



    return 0;
}