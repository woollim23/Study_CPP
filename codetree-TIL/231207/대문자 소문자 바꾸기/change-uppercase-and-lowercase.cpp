#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++)
    {
        if(islower(s[i])) cout << (char)toupper(s[i]);
        else cout << (char)tolower(s[i]); 
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}