#include<iostream>
#include<math.h>
#include<conio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{   int sum{};
    for(int i{1};i<1000;i++){
        if(i%3==0 or i%5==0){
            sum+=i;

        }




    }
cout<<"The Sum of all multiples of 3 or 5 below 1000: "<<sum;

}