/*
*Made by T.aca Studio
*절대로 코드의 내용을 변경하지 마세요!
*코드를 변경하면 오류가 생길 수 있습니다!
*#002
*/

#include <iostream>
#include <Windows.h>

using namespace std;

int minute;
int second;

// 이건 사실 필요없습니다..
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