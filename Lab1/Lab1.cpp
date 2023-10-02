#include <iostream>
#include <windows.h>

using namespace std;
    

int main() {
    SetConsoleTitle(L"Іван");
    int a = 0;
    int b = 0;
    char c;
    cout << "vedit 1 number = ";
    cin >> a;
    cout << "vedit 2 number = ";
    cin >> b;
    cout << "vedit znak = ";
    cin >> c;
    switch (c)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;


    }
    


    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


    SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);



    cout << "background and text!" << std::endl;


    system("pause");
    return 0;
}