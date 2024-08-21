#include<iostream>
#include<math.h>
#include<conio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector <long unsigned int> vect{1,2};
    long unsigned int f1{1},f2{2};
    long unsigned int next_term{f1+f2};

    for(long unsigned int i{3};i<=100;i++){
        vect.push_back(next_term);
        f1=f2;
        f2=next_term;
        next_term=f1+f2;
        if (next_term>4000000){
            break;
        }
    }
int sum{};    
for (auto element : vect){
    if(element%2==0){
        sum+=element;
    }
    
}
cout<<sum<<endl;
}