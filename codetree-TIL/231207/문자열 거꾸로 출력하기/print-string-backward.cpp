#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;

    cin >> s;

    do{
        for(int i = 0; i < (s.length()/2); i++)
        {
            char tmp = s[i];
            s[i] = s[s.length()-i-1];
            s[s.length()-i-1] = tmp;
        }

        cout << s << endl;

        cin >> s;
    }while(s != "END");
    // 여기에 코드를 작성해주세요.
    return 0;
}