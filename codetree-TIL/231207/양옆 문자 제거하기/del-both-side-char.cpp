#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    s = s.substr(0, 1) + s.substr(2);
    s = s.substr(0, s.length()-2) + s.substr(s.length()-1);

    cout << s;
    // 여기에 코드를 작성해주세요.
    return 0;
}