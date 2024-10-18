#include <iostream>
#define OFFSET 1000
#define MAX 2000
using namespace std;

int main() {
    int arr[MAX + 1][MAX + 1] = {0, };
    int x1_1, x1_2, y1_1, y1_2;
    int x2_1, x2_2, y2_1, y2_2;
    
    cin >> x1_1 >> y1_1 >> x1_2 >> y1_2;
    cin >> x2_1 >> y2_1 >> x2_2 >> y2_2;
    
    x1_1 += OFFSET;
    y1_1 += OFFSET;
    x1_2 += OFFSET;
    y1_2 += OFFSET;

    x2_1 += OFFSET;
    y2_1 += OFFSET;
    x2_2 += OFFSET;
    y2_2 += OFFSET;

    for(int i = x1_1; i < x1_2; i++)
    {
        for(int j = y1_1; j < y1_2; j++)
        {
            arr[i][j] = 1;
        }
    }

    for(int i = x2_1; i < x2_2; i++)
    {
        for(int j = y2_1; j < y2_2; j++)
        {
            arr[i][j] = 0;
        }
    }

    bool check = false;
    int min_x = 2000, max_x = 0;
    int min_y = 2000, max_y = 0;
    for(int i = 0; i <= MAX; i++)
    {
        for(int j = 0; j <= MAX; j++)
        {
            if(arr[i][j] == 1)
            {
                check = true;
                if(i < min_x) min_x = i;
                if(i > max_x) max_x = i;
                if(j < min_y) min_y = j;
                if(j > max_y) max_y = j;
            }
        }
    }

    if(check)
        cout << (max_x + 1 - min_x) * (max_y + 1 - min_y);
    else
        cout << 0;
    // 여기에 코드를 작성해주세요.
    return 0;
}