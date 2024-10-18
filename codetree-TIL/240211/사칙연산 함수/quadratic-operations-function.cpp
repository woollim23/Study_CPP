#include <iostream>
using namespace std;

int Plus(int a, int c)
{
    return a + c;
}

int Minus(int a, int c)
{
    return a - c;
}

int Division(int a, int c)
{
    return a / c;
}

int Multiplication(int a, int c)
{
    return a * c;
}

int main() {
    int a, c;
    char o;
    cin >> a >> o >> c;

    if((o == '+') || (o == '-') || (o == '/') || (o == '*'))
        cout << a << " " << o << " " << c << " = ";
    else
        cout << "False";

    if(o == '+')
        cout << Plus(a, c);
    else if(o == '-')
        cout << Minus(a, c);
    else if(o == '/')
        cout << Division(a, c);
    else if(o == '*')
        cout << Multiplication(a, c);


    // 여기에 코드를 작성해주세요.
    return 0;
}