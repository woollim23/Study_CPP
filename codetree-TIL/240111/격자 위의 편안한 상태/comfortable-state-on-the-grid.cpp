#include <iostream>
#define MAX 100
using namespace std;

bool InRange(int x, int y)
{
    return (0 <= x && x < MAX  && 0 <= y && y < MAX);
}

int main() {
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};
    int arr[MAX + 1][MAX + 1] = {};
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++)
    {
        int r, c;
        cin >> r >> c;
        r -= 1;
        c -= 1;

        arr[r][c] = 1;

        int cnt = 0;

        if(InRange(r + dx[0], c + dy[0]) && arr[r + dx[0]][c + dy[0]] == 1)// 오른쪽
            cnt++;
        if(InRange(r + dx[1], c + dy[1]) && arr[r + dx[1]][c + dy[1]] == 1)// 아래
            cnt++;
        if(InRange(r + dx[2], c + dy[2]) && arr[r + dx[2]][c + dy[2]] == 1)// 왼쪽
            cnt++;
        if(InRange(r + dx[3], c + dy[3]) && arr[r + dx[3]][c + dy[3]] == 1)// 위
            cnt++;
        
        if(cnt == 3) cout << 1 << endl;
        else cout << 0 << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}