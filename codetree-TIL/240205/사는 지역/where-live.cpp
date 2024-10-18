#include <iostream>
#define MAX 10
using namespace std;

class Test
{
public:
    string name;
    string ad;
    string ar;

    Test(string name = "kim", string ad = "XXX-XXX", string ar = "Seoul")
        :name(name)
        ,ad(ad)
        ,ar(ar)
    {

    }
};

Test test[MAX];

int main() {
    int n, max = 0;
    string max_name = "a";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> test[i].name >> test[i].ad >> test[i].ar;
        if(test[i].name > max_name)
        {
            max = i;
            max_name = test[i].name;
        }
    }

    cout << "name " << test[max].name << endl;
    cout << "addr " << test[max].ad << endl;
    cout << "city " << test[max].ar << endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}