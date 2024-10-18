#include <iostream>
using namespace std;

int main() {
    int arr[11] = {0,};

    for(;;)
    {
        int a;
        cin >> a;

        if(a == 0) break;
        
        arr[a/10]++;
    }

    for(int i = 10; i >= 1; i--)
    {
        cout << i << "0 - " << arr[i] << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}