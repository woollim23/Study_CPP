#include <iostream>
#define max 10
using namespace std;

class Test
{
    public:
        string name;
        string code;
        string region;

        Test(string name, string code, string region)
        {
            this->name = name;
            this->code = code;
            this->region = region;
        }
        Test(){}
};

Test test[max];

int main() {
    int n;
    string name;
    string code;
    string region;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> name >> code >> region;
        test[i] = Test(name, code, region);
    }

    int idx = 0;

    for(int i = 0; i < n; i++)
    {
        if(test[idx].name < test[i].name ) idx = i;
    }

    cout << "name " << test[idx].name << endl << "addr " << test[idx].code << endl << "city " << test[idx].region;
    // 여기에 코드를 작성해주세요.
    return 0;
}