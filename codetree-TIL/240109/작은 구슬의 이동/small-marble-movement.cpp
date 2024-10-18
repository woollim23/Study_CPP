#include <iostream>
#define MAX 50
using namespace std;

int Direct(char d)
{   int dr;

    if(d == 'R' )
        dr = 0;
    else if(d == 'D')
        dr = 1;
    else if(d == 'L')
        dr = 2;
    else if(d == 'U')
        dr = 3;

    return dr;
}
bool InRange(int x, int y, int n) {
    return (0 < x && x <= n && 0 < y && y <= n);
}

int main() {
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int arr[MAX + 1][MAX + 1] = {0,};
    int n, t;// 격자크기, 시간
    cin >> n >> t;

    int r, c;// 행, 열
    char d;// 방향
    cin >> r >> c >> d;

    int dr = Direct(d);

    for(int i = 1; i <= t; i++)
    {
        if(InRange(r+dx[dr], c+dy[dr], n))
        {
            r += dx[dr];
            c += dy[dr];
        }
        else
        {
            if(dr < 2) dr += 2;
            else dr -= 2;
        }
    }
    
    cout << r << " " << c << endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}