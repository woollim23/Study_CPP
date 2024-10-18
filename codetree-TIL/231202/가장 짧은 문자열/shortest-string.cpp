#include <iostream>
#include <string>
using namespace std;

int main() {
    int max = 0, min = 20;
    int n[3];
    string s[3];

    cin >> s[0] >> s[1] >> s[2];

    n[0] = s[0].length();
    n[1] = s[1].length();
    n[2] = s[2].length();

    for(int i = 0; i < 3; i++)
    {
        if(n[i] >= max) max = n[i];
        if(n[i] <= min) min = n[i];
    }

    cout << max - min;
    // 여기에 코드를 작성해주세요.
    return 0;
}