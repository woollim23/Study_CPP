#include <iostream>
using namespace std;

int main() {
    int max = -1;
    int arr[10];
    
    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < 10; i++)
    {
        if(max < arr[i]) max = arr[i];
    }

    cout << max;
    // 여기에 코드를 작성해주세요.
    return 0;
}