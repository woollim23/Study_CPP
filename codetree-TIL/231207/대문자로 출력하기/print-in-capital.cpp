#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++)
    {
        if(isalpha(s[i]))
        {
           if(isupper(s[i])) cout << s[i];
           else cout << (char)toupper(s[i]); 
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}