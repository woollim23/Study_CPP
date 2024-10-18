#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int q;

    cin >> s >> q;

    int len = s.length();

    for(int i = 0; i < q; i++)
    {
        int n;
        cin >> n;

        if(n == 1)
        {
            s = s.substr(1) + s.substr(0, 1);
        }
        else if(n == 2)
        {
            s = s.substr(len-1, 1) + s.substr(0, len-1);
        }
        else if(n == 3)
        {
            for(int j = 0; j < len/2; j++)
            {
                int tmp = s[j];
                s[j] = s[len-1-j];
                s[len-1-j] = tmp;
            }
        }
        cout << s << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}