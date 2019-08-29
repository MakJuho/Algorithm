    #include<iostream>
    #include<algorithm>

    using namespace std;

    #define N 9
    #define MAX 100

    int getSum(int* ary){
        int sum=0;
        for(int i=0; i<N; i++){
            sum+=ary[i];
        }
        return sum;
    }

    int Solution(int *ary){
        int sum = getSum(ary);

         for(int i=0; i<N-1; i++){
            for(int j=i+1; j<N; j++){
                if(sum - (ary[i] + ary[j])==MAX)
                {
                    ary[i]=-1;
                    ary[j]=-1;
                    return 0;
                }
            }
        }
        return -1;
    }

    int main(){
        int ary[N];
        int tobe100;
        // int cnt=0;

        for(int i=0; i<N; i++){
            cin >> ary[i];
        }

        tobe100=getSum(ary);

       
        Solution(ary);

        sort(ary, ary+N);

        for(int i=2; i<9; i++){
            cout << ary[i] << endl;
        }

    }