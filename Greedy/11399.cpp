#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;

    cin >> n;

    int ary[n]={0,};
    int sum=0;
    for( int i=0; i<n; i++)
        cin >> ary[i];

    // 오름차순 
    for(int k=0; k<n; k++){
        for ( int i =1; i<n; i++){
            for( int j=i-1; j<n; j++){
                if(ary[j]>ary[i])
                {
                    int tmp;
                    tmp = ary[j];
                    ary[j] = ary[i];
                    ary[i] = tmp;
                }
            }
        }
    }

    for(int i=0; i<n; i++){
        sum+=ary[i]*(n-i);
        // cout << sum << endl;
        // cout << ary[i];
    }

    cout << sum;


}