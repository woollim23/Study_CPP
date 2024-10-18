#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    s[1] = 'a';
    s[s.length()-2] = 'a';

    cout << s;
    // 여기에 코드를 작성해주세요.
    return 0;
}