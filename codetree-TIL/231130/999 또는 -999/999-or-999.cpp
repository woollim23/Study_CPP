#include <iostream>
#include <climits>
using namespace std;

int main() {
    int min = INT_MAX, max = INT_MIN;
    int arr[100];

    for(int i = 0; i < 100; i++)
    {
        cin >> arr[i];

        if((arr[i] == 999) || (arr[i] == -999)) break;

        if(min > arr[i]) min = arr[i];
        if(max < arr[i]) max = arr[i];
    }

    cout << max << " " << min;
    // 여기에 코드를 작성해주세요.
    return 0;
}