#include <iostream>
using namespace std;

int main() {\
    int arr[100][100];
    int n, cnt = 1;
    cin >> n;                                  

    for(int i = n-1; i >= 0; i--)
    {
        if(((i % 2 == 0) && (n % 2 ==0)) || ((i % 2 != 0) && (n % 2 !=0)))
        {
            for(int j = 0; j < n; j++)
            {
                arr[j][i] = cnt++;
            }
        } 
        else
        {
            for(int j = n-1; j >= 0; j--)
            {
                arr[j][i] = cnt++;
            }
        }                                           
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}