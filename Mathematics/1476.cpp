#include<iostream>

using namespace std;

int main(){
    int E,S,M;
    int goal=0;
    cin >> E >> S >> M;

    while(1){
        if(goal%15==E && goal%28==S && goal%19==M){
            cout << goal << endl;
            break;
        }
    }


    return 0;
}