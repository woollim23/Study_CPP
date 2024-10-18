#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    if(s.length() % 2 == 0)
    {
        for(int i = s.length()-1; i >= 0; i--)
        {
            if(i % 2 != 0) cout << s[i];
        }
    }
    else
    {
        for(int i = s.length()-2; i >= 0; i--)
        {
            if(i % 2 != 0) cout << s[i];
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}