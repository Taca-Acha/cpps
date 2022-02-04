
#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

string Daneo[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};
string Ddut[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
int a;
int oSu = 0;
string b;

int main() {
    system("cls");
    cout << "뜻풀려면 1번, 단어풀려면 2번을 입력해주세요 : ";
    string c;
    cin >> c;
    if (c == "1") {
        while (true) {
            system("cls");
            srand((unsigned int)time(NULL));
            int a = 0;

            cout << "맞춘 수 : " << oSu << endl;
            cout << Daneo[a] << endl;
            cout << "답을 맞추시오 : ";
            cin >> b;
            if (b == Ddut[a]) {
                cout << "정답!\n";
                oSu++;
                Sleep(3000);
                a++;
                continue;
            } else if (b != Ddut[a]) {
                cout << "실패.\n";
                cout << "정답 : " << Ddut[a] << endl;
                Sleep(3000);
                break;
            }
        }
    } else if (c == "2") {
        while (true) {
            system("cls");
            srand((unsigned int)time(NULL));
            int a = 0;

            cout << "맞춘 수 : " << oSu << endl;
            cout << Ddut[a] << endl;
            cout << "답을 맞추시오 : ";
            cin >> b;
            if (b == Daneo[a]) {
                cout << "정답!\n";
                oSu++;
                a++;
                Sleep(3000);
                continue;
            } else if (b != Daneo[a]) {
                cout << "실패.\n";
                cout << "정답 : " << Daneo[a] << endl;
                Sleep(3000);
                break;
            }
        }
    }
}
