#include<iostream>

using namespace std;

int E,S,M;

int calculateYear(){
    int goal=1;
    while(1){
        if((goal-E)%15==0 && (goal-S)%28==0 && (goal-M)%19==0)
        {
            return goal;
        }  
        goal++;
    }


}

int main(){
    cin >> E >> S >> M;

    cout << calculateYear() << endl;

    return 0;
}