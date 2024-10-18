#include <iostream>
using namespace std;

int main() {
    int arr[10] = {0,};

    for(;;)
    {
        int a;
        cin >> a;

        if(a == 0) break;
        
        arr[a/10]++;
    }

    for(int i = 1; i <= 9; i++)
    {
        cout << i << " - " << arr[i] << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}