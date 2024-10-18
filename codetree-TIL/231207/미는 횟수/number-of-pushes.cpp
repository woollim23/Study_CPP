#include <iostream>
#include <string>
using namespace std;

int main() {
    int n = 0;
    string a, b;
    cin >> a >> b;

    for(int i = 0; i < a.length()-1; i++)
    {
        if(a == b) break;
        
        a = a.substr(a.length()-1, 1) + a.substr(0, a.length()-1);
        n++;
    }

    if(n >= a.length()-1) cout << -1;
    else cout << n;

    // 여기에 코드를 작성해주세요.
    return 0;
}