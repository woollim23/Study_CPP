#include <iostream>
using namespace std;

int main() {
    char arr[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
    char c;
    int n = -1;

    cin >> c;

    for(int i = 0; i < 6; i++)
    {
        if(c == arr[i]) n = i;
    }

    if(n == -1) cout << "None";
    else cout << n;
    // 여기에 코드를 작성해주세요.
    return 0;
}