#include <iostream>
using namespace std;

int main() {
    int arr[100][100];
    int n, m, cnt = 1;
    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            arr[i][j] = cnt++;
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

    // 여기에 코드를 작성해주세요.
    return 0;
}