#include <iostream>
using namespace std;

int main(void)
{
    int schoolNum;
    string name, major;

    cout << "이름을 입력하세요: "
        << " ";
    cin >> name;
    cout << "학번을 입력하세요: "
        << " ";
    cin >> schoolNum;
    cout << "학과를 입력하세요: "
        << " ";
    cin >> major;
 

    cout << "\n<출력>" << endl;
    cout << "이름: " << name << endl;
    cout << "학번: " << schoolNum << endl;
    cout << "학과: " << major << endl;

    return 0;
}