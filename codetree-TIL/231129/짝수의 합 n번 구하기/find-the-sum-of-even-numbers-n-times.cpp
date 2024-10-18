#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        int sum = 0;
        
        for(int j = a; j <= b; j++)
        {
            if(j % 2 ==0) sum += j;
        }

        cout << sum << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}