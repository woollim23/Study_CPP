#include <iostream>
#define MAX 100
using namespace std;

bool InRange(int x, int y, int n, int m) {
    return (0 <= x && x < n && 0 <= y && y < m);
}

int main() {
    int arr[MAX + 1][MAX + 1] = {0, };
    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
    int n, m, num = 1;
    cin >> n >> m;

    int x = 0, y = 0;
    int dr = 0;
    for(int i = 0; i < n*m; i++)
    {
        arr[x][y] = num;
        num++;

        if(InRange(x + dx[dr], y + dy[dr], n, m) && arr[x + dx[dr]][y + dy[dr]] == 0)
        {
            x += dx[dr];
            y += dy[dr];
        }
        else
        {
            dr = (dr + 1) % 4;
            x += dx[dr];
            y += dy[dr];
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
    return 0;
}