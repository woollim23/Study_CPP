#include <iostream>
#define MAX 1000
using namespace std;

int Direct(char d)
{
    if(d == 'E') return 0;
    else if(d == 'S') return 1;
    else if(d == 'W') return 2;
    else if(d == 'N') return 3;
}

bool InRange(int x, int y, int n, int m)
{
    return (0 <= x && x <= MAX  && 0 <= y && y <= MAX);
}

int main() {
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, -0, 1};
    int n, time = 0;
    cin >> n;

    bool check = false;
    int x = 0, y = 0;
    for(int i = 1; i <= n; i++)
    {
        char d; //방향
        int l; //거리
        cin >> d >> l;

        int dr = Direct(d); //방향 정수형

        while(l--)
        {
            x += dx[dr];
            y += dy[dr];
            time++;

            if(x == 0 && y == 0)
            {
                check = true;
                cout << time;
                break;
            }
        }
        if(check) break;
    }

    if(!check) cout << -1;
    return 0;
}