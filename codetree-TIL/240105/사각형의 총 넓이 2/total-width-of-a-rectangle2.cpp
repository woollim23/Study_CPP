#include <iostream>
#define OFFSET 100
#define MAX 200
using namespace std;

int main() {
    int arr[MAX + 1][MAX + 1] = {0, };
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
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
                arr[i][j] = 1;
            }
        }
    }

    int sum = 0;
    for(int i = 0; i <= MAX; i++)
    {
        for(int j = 0; j <= MAX; j++)
        {
            sum += arr[i][j];
        }
    }

    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}