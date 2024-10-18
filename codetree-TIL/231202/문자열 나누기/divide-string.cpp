#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s, res;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> s;
        res += s;
    }

    for(int i = 0; i < res.length(); i++)
    {
        cout << res[i];
        
        if((i+1) % 5 == 0) cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}