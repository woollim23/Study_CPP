#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;

    getline(cin, s1);
    getline(cin, s2);

    for(int i = 0; i < s1.length(); i++)
    {
        if(s1[i] == ' ') continue;
        cout << s1[i];
    }

    for(int i = 0; i < s2.length(); i++)
    {
        if(s2[i] == ' ') continue;
        cout << s2[i];
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}