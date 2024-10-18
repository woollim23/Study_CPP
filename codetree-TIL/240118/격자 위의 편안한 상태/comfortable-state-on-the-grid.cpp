#include <iostream>
#define MAX 100
using namespace std;

int arr[MAX + 1][MAX + 1] = {};

bool InRange(int x, int y)
{
    return (0 <= x && x < MAX  && 0 <= y && y < MAX);
}

bool Check(int r, int c)
{
    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
    bool check = true;
    int cnt = 0;

    for(int i = 0; i < 4; i++)
    {
        int x = r + dx[i];
        int y = c + dy[i];
        if(InRange(x, y) && (arr[x][y] == 1))
            cnt++;
    }

    return (cnt == 3);
}

int main()
{
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++)
    {
        int r, c;
        cin >> r >> c;
        r--;
        c--;
        arr[r][c] = 1;

        // 왼쪽, 위쪽, 오른쪽, 아래쪽 방향 배열의 값 확인
        if(Check(r, c)) cout << 1 << endl;
        else cout << 0 << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}