#include <iostream>
using namespace std;

int main(void)
{
    int schoolNum;
    string name, major;

    cout << "�̸��� �Է��ϼ���: "
        << " ";
    cin >> name;
    cout << "�й��� �Է��ϼ���: "
        << " ";
    cin >> schoolNum;
    cout << "�а��� �Է��ϼ���: "
        << " ";
    cin >> major;
 

    cout << "\n<���>" << endl;
    cout << "�̸�: " << name << endl;
    cout << "�й�: " << schoolNum << endl;
    cout << "�а�: " << major << endl;

    return 0;
}