#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[10] = {0,};
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        arr[a]++;
    }

    for(int i = 1; i <= 9; i++)
    {
        cout << arr[i] << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}