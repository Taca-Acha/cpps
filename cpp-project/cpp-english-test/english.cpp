//Made by T.aca Studio
//사용시 int main() 쪽을 수정하면 안됩니다.
//상단의 주석을 지우지 마세요. 수정할걸 다 아는 사람이라면 지우셔도 됩니다.
//#002

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
