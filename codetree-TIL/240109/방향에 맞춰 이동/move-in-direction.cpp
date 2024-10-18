#include <iostream>
#define MAX 1000
using namespace std;

int main() {
    int dx[MAX + 1] = {0, }, dy[MAX + 1] = {0, };
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        char d;
        int s;
        cin >> d >> s;

        dx[i] = dx[i-1];
        dy[i] = dy[i-1];

        if(d == 'W')
        {
            dx[i] = dx[i] - s;
        }
        else if(d == 'S')
        {
            dy[i] = dy[i] - s;
        }
        else if(d == 'N')
        {
            dy[i] = dy[i] + s;
        }
        else if(d == 'E')
        {
            dx[i] = dx[i] + s;
        }
    }

    cout << dx[n] << " " << dy[n];
    // 여기에 코드를 작성해주세요.
    return 0;
}