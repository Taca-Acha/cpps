#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

string Daneo[] = {"amazing", "blueWhale", "buddhist", "carry", "coconut", "cotton", "crow", "dolphin", "drop", "experiment"};
string Ddut[] = {"놀라운", "대왕고래", "불교", "나르다", "코코넛", "면", "까마귀", "돌고래", "떨어뜨리다", "실험"};
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
            int a = rand() % 10;

            cout << "맞춘 수 : " << oSu << endl;
            cout << Daneo[a] << endl;
            cout << "답을 맞추시오 : ";
            cin >> b;
            if (b == Ddut[a]) {
                cout << "정답!\n";
                oSu++;
                Sleep(3000);
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
            int a = rand() % 10;

            cout << "맞춘 수 : " << oSu << endl;
            cout << Ddut[a] << endl;
            cout << "답을 맞추시오 : ";
            cin >> b;
            if (b == Daneo[a]) {
                cout << "정답!\n";
                oSu++;
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
