#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s;
    cin >> s;

    while(s.length() != 1)
    {
        cin >> n;

        if(n >= s.length())
        {
            s = s.substr(0, s.length()-1);
        }
        else
        {
            s = s.substr(0, n) + s.substr(n+1);
        }

        cout << s <<endl;
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}