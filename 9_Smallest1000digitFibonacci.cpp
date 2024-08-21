// What is the index of the first term in the Fibonacci sequence to contain 1000 digits?

#include<iostream>
#include<math.h>
#include<conio.h>
#include<vector>
#include<algorithm>
using namespace std;
int count(int num)
{
    int count{0};
    while(num!=0){
        num/=10;
        count+=1;       
    }
return count;
}


int main()
{
    long unsigned int f1{1},f2{1};
    vector <long unsigned int> vect{1,1};
    long unsigned int next_term=f1+f2;
    for(long unsigned int i{3};i<=10000;i++){
        vect.push_back(next_term);
        if (count(next_term)==1000) break;
        f1=f2;
        f2=next_term;
        next_term=f1+f2;
        
    }
int n=vect.size();
cout<<"The smallest thousand digit fibonacci number is : "<<vect[n-1]<< " and its index is "<<n;   

return 0;   
}