#include <iostream>
#include <string>
using namespace std;

int main() {
    string s[10];
    char c;
    bool ch = false;

    for(int i = 0; i < 10; i++)
    {
        cin >> s[i];
    }

    cin >> c;

    for(int i = 0; i < 10; i++)
    {
        if(s[i][s[i].length()-1] == c)
        {
            ch = true;
            cout << s[i] << endl;
        }
    }

    if(!ch) cout << "None";
    // 여기에 코드를 작성해주세요.
    return 0;
}