#include <iostream>
#include <string>
using namespace std;

int main() {
    string s[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char c;
    int cnt = 0;

    cin >> c;

    for(int i = 0; i < 5; i++)
    {
        bool ch = false;

        for(int j = 0; j < s[i].length(); j++)
        {
            if((s[i][2] == c) || (s[i][3] == c)) ch = true;
        }

        if(ch)
        {
            cnt++;
            cout << s[i] << endl;
        }
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}