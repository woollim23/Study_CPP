#include <iostream>
using namespace std;

bool func2(int j){
    int a[3]={};
    int stack = 0;

    while(j > 0){
        a[stack] = j%10;
        j /= 10;
        stack++;
    }

    int sum = 0;

    for(int i = 0; i < 3; i++){
        sum += a[i];
    }

    if(sum%2==0) return true;
    else return false;
}

bool func(int i){
    bool check = true;
    for(int j = 2; j < i; j++){
        if(i%j == 0) check = false;
    }
    if(check){
        if(func2(i)) return true;
        else return false;
    }
    else return false;
}

int main() {
    int a, b, cnt = 0;

    cin >> a >> b;

    for(int i = a; i <= b; i++){
        if(func(i)) cnt++;
    }

    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}