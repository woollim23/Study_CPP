#include <iostream>
using namespace std;

int main() {
    int arr[4] = {0,};
    int cnt = 0;

    for(int i = 0; i < 3; i++)
    {
        char c;
        int n;

        cin >> c >> n;

        if(c == 'Y')
        {
            if(n >= 37)
            {
                arr[0]++;
            }
            else
            {
                arr[2]++;
            }
        }
        else if(c == 'N')
        {
            if(n >= 37)
            {
                arr[1]++;
            }
            else
            {
                arr[3]++;
            }
        }
    }

    for(int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    
    if(arr[0] >= 2) cout << "E";
    // 여기에 코드를 작성해주세요.
    return 0;
}