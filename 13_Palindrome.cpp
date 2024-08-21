#include<iostream>
#include<iomanip>
#include<string.h>
#include<stdio.h>
#include<cstring>
using namespace std;

int main()
{
    char word[100];
    char word2[100];
    cout<<"Enter a word: "<<endl;
    cin>>word;
    strcpy(word2,word);
    strrev(word2);
    
    if((strcmpi(word2,word))==0)
    cout<<"It's a palindrome"<<endl;
    else
    cout<<"It's not a palindrome"<<endl;

    return 0;
    
    


    

    


}