#include<iostream>
#include<math.h>
#include<conio.h>
#include<vector>
#include<algorithm>
using namespace std;

int isPrime(int num)
{
    for(int i{2};i*i<=num;i++){
        if(num%i==0) return 0;

    }
    return 1;
}



int main()
{
    long long int sum{};
    int num=2000000;
    for(int i{2};i<num;i++){
        if(isPrime(i)) sum+=i;
        }

cout<<sum;
}
