#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    int a, b, c, d;
    cin >> n;

    for(int i = 0 ; i < n; i++)
    {
        int arr[4];
        int sum = 0;
        for(int j = 0; j < 4; j++)
        {
            cin >> arr[j];
            sum += arr[j];
        }

        if(sum/4 >= 60)
        {
            cnt++;
            cout << "pass" << endl;
        }
        else cout << "fail" << endl;
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}