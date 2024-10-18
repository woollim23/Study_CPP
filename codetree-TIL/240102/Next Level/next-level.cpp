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
    string id;
    int lv;
    cin >> id >> lv;

    Test test1 = Test();
    Test test2 = Test(id, lv);

    cout << "user " << test1.id << " lv " << test1.lv << endl;
    cout << "user " << test2.id << " lv " << test2.lv << endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}