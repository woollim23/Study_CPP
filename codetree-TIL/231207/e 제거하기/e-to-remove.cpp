#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.find('e');

    s = s.substr(0, n) + s.substr(n + 1);

    cout << s;
    
    // 여기에 코드를 작성해주세요.
    return 0;
}