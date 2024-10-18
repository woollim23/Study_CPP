#include <iostream>
#define MAX 100
using namespace std;

bool InRange(int x, int y, int n) {
    return (0 <= x && x < n && 0 <= y && y < n);
}

int main() {
    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
    int arr[MAX + 1][MAX + 1] = {0,};
    int n, res = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int cnt = 0;
            for(int d = 0; d < 4; d++)
            {
                int nx = i + dx[d];
                int ny = j + dy[d];
                if(InRange(nx, ny, n) && arr[nx][ny] == 1) cnt++;
            }
            if(cnt >= 3) res++;
        }
    }

    cout << res;
    return 0;
}