#include <iostream>
#include <string>
using namespace std;

class Test
{
public:
    string id;
    int lv;

    Test(string id = "codetree", int lv = 10)
    {
        this->id = id;
        this->lv = lv;
    }
};

int main() {
    Test test = Test();

    cout << "user " << test.id << " lv " << test.lv << endl;

    cin >> test.id >> test.lv;

    cout << "user " << test.id << " lv " << test.lv;
    // 여기에 코드를 작성해주세요.
    return 0;
}