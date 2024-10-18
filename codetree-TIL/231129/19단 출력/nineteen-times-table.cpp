#include <iostream>
using namespace std;

int main() {
    int cnt = 0;
    for(int i = 1; i <= 19; i++)
    {
        for(int j = 1; j <= 19; j++)
        {
            cout <<  i << " * " << j << " = " << i * j;
            cnt++;
            if((cnt != 1) || (j == 19))
            {
                cout << endl;
                cnt = 0;
            }
            else
            {
                cout << " / ";
            }
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}