#include <iostream>
#include <string>
using namespace std;

string s1, s2;

int Test()
{
    if(s1.find(s2) == string::npos)
        return -1;
    return s1.find(s2);
}

int main() {
    cin >> s1 >> s2;

    cout << Test();
    // 여기에 코드를 작성해주세요.
    return 0;
}