#include<iostream>
#include<math.h>
#include<conio.h>
#include<vector>
#include<algorithm>
using namespace std;

int isPrime(int num)
{
    for (int i{2};i*i<=num;i++){
        if (num%i==0) return 0;       
    }

    return 1;
}


int main()
{
    vector <int> vect{};
    for(int i{2};i<=1000000;i++){
        if(isPrime(i)){
            vect.push_back(i);
        }
    }

// cout<<"The 1001st prime number is "<<vect.at(1000);
cout<<"The 6th prime number is "<<vect.at(5)<<endl;
cout<<"The 10001th prime number is "<<vect.at(10000)<<endl;
return 0;    
}

