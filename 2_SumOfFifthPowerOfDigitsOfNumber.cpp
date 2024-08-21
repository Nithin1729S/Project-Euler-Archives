#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
    int num{},i{},sum{};
    cout<<"Enter the number: "<<endl;
    cin>>num;

    while(num>0){
        i=num%10;
        sum=sum+(pow(i,5));
        num/=10;
    }

    cout<<sum;

}