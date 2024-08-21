#include<iostream>
#include<math.h>
#include<conio.h>
#include<vector>
#include<algorithm>
using namespace std;

int isPalindrome(int num)
{
    int reverse{};
    int remainder{};
    int n=num;
    do{
        remainder=num%10;
        reverse=(reverse*10)+remainder;
        num=num/10;
    }while(num!=0);

    if(n==reverse)
     return 1;    
    else
     return 0;

}

int main()
{
    int prod{};
    vector <int> vect{};
    for(int i{99};i<=999;i++){
        for(int j{99};j<=999;j++){           
            prod=i*j;
            if (isPalindrome(prod)) vect.push_back(prod);   
                   
        }

    }

// for(auto i : vect){
//     cout<<i<<endl;
// }

cout<<"The largest palindrome made from the product of two 2-digit numbers is "<<*max_element(vect.begin(), vect.end())<<endl;

}



