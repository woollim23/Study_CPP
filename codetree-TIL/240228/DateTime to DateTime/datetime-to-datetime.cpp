#include <iostream>
using namespace std;

int main() {
    int a2, b2, c2;
    cin >> a2 >> b2 >> c2;
    
    int sum = ((a2 * 1440) + (b2 * 60) + c2) - 16511;

    if(sum >= 0)
        cout << sum;
    else
        cout << -1;
    return 0;
}