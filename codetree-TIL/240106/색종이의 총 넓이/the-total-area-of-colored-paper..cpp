#include <iostream>
#define OFFSET 100
#define MAX 200
using namespace std;

int main() {
    int arr[MAX + 1][MAX + 1] = {0,};

    int n;
    cin >> n;
    for(int idx = 0; idx < n; idx++)
    {
        int x, y;
        cin >> x >> y;
        x += OFFSET;
        y += OFFSET;
        for(int i = (x+1); i <= (x+8); i++)
        {
            for(int j = (y+1); j <= (y+8); j++)
            {
                arr[i][j] = 1;
            }
        }
    }

    int sum = 0;
    for(int i = 0; i <= MAX; i++)
    {
        for(int j = 0; j <= MAX; j++)
        {
            if(arr[i][j] == 1) sum++;
        }
    }
    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}