#include <iostream>
#include <string>
#include <algorithm>
#include <functional>

#define max 10

using namespace std;

class Test
{
    public:
        string name;
        int kor;
        int eng;
        int mth;

        Test(string name = "name", int kor = 100, int eng = 100, int mth = 100)
        {
            this->name = name;
            this->kor = kor;
            this->eng = eng;
            this->mth = mth;
        }
};

Test test[max];

bool Cmp(Test a, Test b)
{
    
    return a.kor+a.eng+a.mth < b.kor+b.eng+b.mth; 
}

int main() {
    string name;
    int kor;
    int eng;
    int mth;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> name >> kor >> eng >> mth;

        test[i] = Test(name, kor, eng, mth);
    }

    sort(test, test + n, Cmp);  

    for(int i = 0; i < n; i++)
    {
        cout << test[i].name << " " << test[i].kor << " " << test[i].eng << " " << test[i].mth << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}