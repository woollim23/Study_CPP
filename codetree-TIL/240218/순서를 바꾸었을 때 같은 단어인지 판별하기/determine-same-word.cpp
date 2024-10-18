#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    bool check = true;

    if(s1.length() == s2.length())
    {
        for(int i = 0; i < s1.length(); i++)
        {
            if(s1[i] != s2[i])
                check = false;
        }
    }
    else
        check = false;

    if(check)
        cout << "Yes";
    else
        cout << "No";
    // 여기에 코드를 작성해주세요.
    return 0;
}