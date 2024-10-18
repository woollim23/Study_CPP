#include <iostream>
using namespace std;

int main() {
    int arr[100][100] = {0,};
    int n, m, cnt = 1;

    cin >> n >> m;

    int i = 0, j = 0;
    while(1)
    {
        arr[i][j] = cnt++;

        if(cnt == n*m + 1) break;
        
        i++;
        j--;

        if((j < 0) || (i >= n))
        {
            while(1)
            {
                i--;
                j++;
                if(j == m)
                {
                    j--;
                    i+=2;
                    break;
                }
                if(i == 0) 
                {
                    j++;
                    if(j==m)
                    {
                        j--;
                        i++;
                    }
                    break;
                }
            } 
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}