#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, cnt = 0;
    string s;

    cin >> a >> b;

    s = to_string(a+b);

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '1') cnt++;
    }

    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}