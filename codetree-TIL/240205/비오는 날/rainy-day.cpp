#include <iostream>
#define MAX 100
using namespace std;

class Test
{
public:
    string date;
    string day;
    string weather;

    Test(string date = "yyyy-mm-dd", string day = "Sun", string weather = "Rain")
        :date(date)
        ,day(day)
        ,weather(weather)
    {

    }
};

Test test[MAX];

int main() {
    int n, fast = 0;
    string fast_date = "2100-12-31";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> test[i].date >> test[i].day >> test[i].weather;
        if((test[i].weather == "Rain") && (test[i].date < fast_date))
        {
            fast = i;
            fast_date = test[i].date;
        }
    }

    cout << test[fast].date << " " << test[fast].day << " " << test[fast].weather;
    // 여기에 코드를 작성해주세요.
    return 0;
}