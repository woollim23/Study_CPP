#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int sum = 0;
    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++)
    {
        if(isdigit(s[i])) sum += (s[i] - '0');
    }
    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}