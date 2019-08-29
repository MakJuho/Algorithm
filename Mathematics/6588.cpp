#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1000000;
int minFactor[MAX];
vector<int> prime; //소수


//에라토스테네스의 체
void eratosthenes(void)
{
    minFactor[0] = minFactor[1] = -1;
    for (int i = 2; i < MAX; i++)
        minFactor[i] = i;

    for (int i = 2; i*i < MAX; i++)
        if (minFactor[i] == i)
            for (int j = i * i; j < MAX; j += i)
                if (minFactor[j] == j)
                    // 소수가 아니면 0으로 변경
                    minFactor[j] = 0;

    //홀수인 소수를 저장
    for (int i = 3; i < MAX; i++)
        if (minFactor[i] != 0)
            prime.push_back(i);
}

 

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    eratosthenes();

    while (1)
    {
        int N;
        cin >> N;
        if (N == 0)
            break;

        // cout << "prime.size():"<< prime.size() << endl;
        //소수를 탐색하며
        for(int i=0; i<prime.size(); i++)
            //N - prime[i]도 소수인 수를 찾는다
            if (minFactor[N - prime[i]] == N - prime[i])
            {
                cout << N << " = " << prime[i] << " + " << N - prime[i] << "\n";
                break;
            }
    }
    return 0;
}