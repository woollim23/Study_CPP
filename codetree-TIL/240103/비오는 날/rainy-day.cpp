#include <iostream>
#include <string>
#define max 100
using namespace std;

class Test
{
    public:
        int y;
        int m;
        int d;
        string day;
        string weather;

        Test(int y = 0000, int m = 00, int d = 00, string day = "sun", string weather = "Snow")
        {
            this->y = y;
            this->m = m;
            this->d = d;
            this->day = day;
            this->weather = weather;
        }
};

Test test[max];

int main() {
    int y;
    int m;
    int d;
    char a;
    string day;
    string weather;

    string min;
    int idx;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> y >> a >> m >> a >> d >> day >> weather;

        test[i] = Test(y, m, d, day, weather);
        if(test[i].weather == "Rain")
        {
            idx = i;
        }

    }

    for(int i = 0; i < n; i++)
    {
        if(test[i].weather == "Rain" && idx != i)
        {
            if(test[i].y < test[idx].y)
            {
                idx = i;
            }
            else if(test[i].y == test[idx].y)
            {
                if(test[i].m < test[idx].m)
                {
                    idx = i;
                }
                else if(test[i].m == test[idx].m)
                {
                    if(test[i].d < test[idx].d)
                    {
                        idx = i;
                    }
                }
            }
        }
    }

    cout << test[idx].y << "-";
    if(test[idx].m < 10)
    {
        cout << 0 << test[idx].m;
    }
    else
        cout << test[idx].m;

    cout << "-";
    
    if(test[idx].d < 10)
    {
        cout << 0 << test[idx].d;
    }
    else
        cout << test[idx].d;
     
    cout << " " << test[idx].day << " " << test[idx].weather;
    
    return 0;
}