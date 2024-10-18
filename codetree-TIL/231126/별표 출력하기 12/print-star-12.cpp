#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        if(i == 1)
        {
            for(int j = 0; j < n; j++)
            {
                cout << "* ";
            }
            cout << endl;
            continue;
        }
        for(int j = 1; j <= n; j++)
        {
            if((j >= i) && (j % 2 == 0))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}