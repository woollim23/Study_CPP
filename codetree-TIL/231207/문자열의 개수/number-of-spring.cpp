#include <iostream>
#include <string>
using namespace std;

int main() {
    string a[200];
    string s;
    int cnt = 0, i = 0;

    cin >> s;

    do{
        cnt++;
        if(cnt % 2 != 0)
        {
            a[i] = s;
            i++;
        }

        cin >> s;
    }while(s != "0");

    cout << cnt << endl;

    for(int i = 0; i < (cnt/2+1); i++)
    {
        cout << a[i] << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}