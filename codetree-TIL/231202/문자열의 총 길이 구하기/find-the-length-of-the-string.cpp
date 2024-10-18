#include <iostream>
#include <string>
using namespace std;

int main() {
    int sum = 0;
    string s[10];

    for(int i = 0; i < 10; i++)
    {
        cin >> s[i];
    }

    for(int i = 0; i < 10; i++)
    {
        sum += s[i].length();
    }
    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}