#include <iostream>
using namespace std;

int main() {
    int n, cnt = 1;
    cin >> n;

    for(int i = n; i > 0 ; i--)
    {
        for(int j = n - i; j > 0; j--)
        {
            cout << "  ";
        }
        for(int j = i; j > 0; j--)
        {
            cout << cnt++ << " ";
            if(cnt > 9) cnt = 1;
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}