#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int len = s. length();

    for(int i = 0; i < len; i++)
    {
        cout << s << endl;
        s = s.substr(len - 1, 1) + s.substr(0, len - 1);
    }
    cout << s << endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}