#include <algorithm>
#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;

int main() {
    string arr[100];
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    for(int i = 0; i < n; i++)
        cout << arr[i] << endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}