#include <iostream>
#include <string>
using namespace std;

bool Test(string &s)
{
    bool check = true;
    int size = s.length();

    for(int i = 0; i <= size/2; i++)
    {
        if(s[i] != s[size - 1 - i]) check = false;
    }

    if(check) return true;
    else return false;
} 

int main() {
    string s;
    cin >> s;

    if(Test(s)) cout << "Yes";
    else cout << "No";
    // 여기에 코드를 작성해주세요.
    return 0;
}