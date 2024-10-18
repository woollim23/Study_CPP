#include <iostream>
#include <string>
using namespace std;

int main() {
    int cnt1 = 0, cnt2 = 0;
    string s;
    cin >> s;

    for(int i = 0; i < s.length()-1; i++)
    {
        if((s[i] == 'e') && (s[i+1] == 'e'))
        {
            cnt1++;
        }
        if((s[i] == 'e') && (s[i+1] == 'b'))
        {
            cnt2++;
        }
    }
    
    cout << cnt1 << " " << cnt2;
    // 여기에 코드를 작성해주세요.
    return 0;
}