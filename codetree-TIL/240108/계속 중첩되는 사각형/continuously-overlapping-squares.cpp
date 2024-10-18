#include <iostream>
#define OFFSET 100
#define MAX 200
using namespace std;

int main() {
    int arr[MAX + 1][MAX + 1] = {0, };
    int x1[MAX + 1], x2[MAX + 1], y1[MAX + 1], y2[MAX + 1];
    // 짝수 - 빨강 - 2, 홀수 - 파랑 - 1
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        x1[i] += OFFSET;
        y1[i] += OFFSET;
        x2[i] += OFFSET;
        y2[i] += OFFSET;

        if(i % 2 == 0)// 빨강
        {
            for(int j = x1[i]; j < x2[i]; j++)
            {
                for(int k = y1[i]; k < y2[i]; k++)
                {
                    arr[j][k] = 2;
                }
            }
        }
        else//파랑
        {
            for(int j = x1[i]; j < x2[i]; j++)
            {
                for(int k = y1[i]; k < y2[i]; k++)
                {
                    arr[j][k] = 1;
                }
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
    return 0;
}