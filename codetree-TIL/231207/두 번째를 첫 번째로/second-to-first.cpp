#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    char a1 = s[0];
    char a2 = s[1];

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == a2) s[i] = a1;
    }

    cout << s;
    // 여기에 코드를 작성해주세요.
    return 0;
}