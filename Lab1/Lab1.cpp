#include <iostream>
#include <windows.h>

int main() {
    // �������� ���������� ������
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // ������ ������� ���� � ������
    SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);


    // �������� ����� � ������ ���������
    std::cout << "background and text!" << std::endl;



    return 0;
}