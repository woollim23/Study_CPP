#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    char c, b;
    cin >> s;
    
    c = s[0];
    b = s[1];
    for(int i = 0; i < s.length(); i++)
    {
        if(c == s[i]) s[i] = b;
        else if(b == s[i]) s[i] = c;
    }

    cout << s;
    // 여기에 코드를 작성해주세요.
    return 0;
}