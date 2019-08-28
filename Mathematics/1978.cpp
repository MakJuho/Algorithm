#include<iostream>

using namespace std;

int primary(int a){
    if(a==1) return 0;
    if(a==2) return 1;
    if(a>2){
        for(int i=2; i<a; i++){
            if(a%i == 0)
                return 0;
        }
    }
    return 1;
}

int main(){
    int T;
    cin >> T;
    // cout << "T" << T << endl;
    int num;
    int sum=0;
    for(int i=0; i<T; i++){
        cin >> num;
        // cout << "num: " << num << endl;
        sum += primary(num);
        // cout << "sum: " << sum << endl;
    }

    cout << sum << endl;
    return 0;
}