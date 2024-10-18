#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    int arr[100];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < q; i++)
    {
        int a, b, c;
        cin >> c;

        if(c == 1)
        {
            cin >> a;
            cout << arr[a-1];
        }
        else if(c == 2)
        {
            cin >> a;
            int idx = 0;
            for(int j = 0; j < n; j++)
            {
                if(arr[j] == a)
                {
                    idx = j+1;
                    break;
                }
            }
            cout << idx;
        }
        else if(c == 3)
        {
            cin >> a >> b;
            for(int j = a-1; j < b; j++)
            {
                cout << arr[j] << " ";
            }

        }
        cout << endl;
    }
    return 0;
}