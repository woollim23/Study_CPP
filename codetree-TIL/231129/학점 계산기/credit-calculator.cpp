#include <iostream>
using namespace std;

int main() {
    double arr[5];
    double n, sum = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    cout << fixed;
    cout.precision(1);
    cout << sum/n << endl;

    if(sum/n >= 4.0) cout << "Perfect";
    else if(sum/n >= 3.0) cout << "Good";
    else cout << "Poor";
    // 여기에 코드를 작성해주세요.
    return 0;
}