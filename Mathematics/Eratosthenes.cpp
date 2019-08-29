#include<iostream>

using namespace std;

void PrimeNumberSieve(int Size){
    int* ary;
    ary = (int*)malloc(sizeof(int)*Size);

    int i =2;

    for(i=2; i<=Size; i++){
        ary[i]= i;
    }

    for(i=2; i<=Size; i++){
        if(ary[i]==0)   continue;
        for(int j=i+i; j<= Size; j+=i){
            // cout << "j:" << j <<endl;
            // cout << "i:" << i << endl;
            ary[j] = 0;
        }
    }

    

    for(i=2; i<=Size; i++){
        if(ary[i] !=0)
        {
            cout << ary[i] << " ";
        }
    }
}
int main(void){
    int Size;
    char Repeat;
    while(1){
        cout << "Enter the upper bound: ";
        cin >> Size;
        PrimeNumberSieve(Size);
        cout << "\nDo you want to repeat? (Y/N) :";
        cin >> Repeat;
        if(Repeat!='Y')
            break;
    }
    system("pause");
    return 0;

}