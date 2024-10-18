#include <iostream>
using namespace std;

int main() {
    int arr[7] = {0,};

    for(int i = 0; i < 10; i++)
    {
        int a;
        cin >> a;

        arr[a]++;
    }

    for(int i = 1; i <= 6; i++)
    {
        cout <<i << " - " << arr[i] << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}