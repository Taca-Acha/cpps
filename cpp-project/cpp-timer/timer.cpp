/*
*Made by T.aca Studio
*/

#include <iostream>
#include <Windows.h>

using namespace std;

int minute;
int second;

int arr[] = {minute, second};

int main() {

    cout << "몇분으로 하실건가요?\n";
    cin >> minute;
    cout << "몇초로 하실건가요?\n";
    cin >> second;

    second++;

    for (int chongSecond = minute * 60 + second; chongSecond--; chongSecond >= 1) {
        Sleep(1000);
        second--;
        system("cls");

        cout << minute << " 분 " << second << " 초 남음.\n";

        if (second <= 0) {
            minute--;
            second += 60;
        }

    }

    Sleep(1000);
    cout << "종료되었습니다.\n";
    Sleep(100000);

    return 0;
}
