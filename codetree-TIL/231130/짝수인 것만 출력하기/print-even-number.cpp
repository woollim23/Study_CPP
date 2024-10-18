#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    int arr[100];
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if(a % 2 == 0)
        {
            arr[cnt] = a;
            cnt++;
        }
    }

    for(int j = 0; j < cnt; j++)
    {
        cout << arr[j] << " ";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}