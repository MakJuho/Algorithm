
#include<iostream>

using namespace std;

const int MAX = 100;

int ary[MAX];


int GCD(int a,int b){
    if(a%b==0)
        return b;
    else{
        return GCD(b, a%b);
    }
}

int main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
   
    int T;
    cin >> T;

    for(int i=0; i<T; i++){
        
        int cnt;
        cin >> cnt;
        for(int j=0; j<cnt; j++){
            cin >> ary[j];
            // cout << ary[j] << endl;
        }

        long long sum=0;
        for(int a=0; a<cnt; a++){
            for(int b=a+1; b<cnt; b++){
            //    cout << "Sum:" << sum << endl; 
                sum+=GCD(ary[a],ary[b]);
            }
        }
        cout << sum << endl;
    }
    return 0;
}