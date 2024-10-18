#include <iostream>
#define OFFSET 1000
#define MAX 2000
using namespace std;

//A - 1, B - 2, M - 3
int main() {
    int arr[MAX + 1][MAX + 1] = {0,};

    for(int idx = 1; idx <= 3; idx++)
    {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1 += OFFSET;
        y1 += OFFSET;
        x2 += OFFSET;
        y2 += OFFSET;

        for(int i = x1; i < x2; i++)
        {
            for(int j = y1; j < y2; j++)
            {
                arr[i][j] = idx;
            }
        }
    }

    int sum = 0;
    for(int i = 0; i <= MAX; i++)
    {
        for(int j = 0; j <= MAX; j++)
        {
            if((arr[i][j] != 0)&&(arr[i][j] != 3)) sum++;
        }
    }
    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}