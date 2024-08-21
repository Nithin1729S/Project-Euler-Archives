#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main()
{
    int num{}, i{}, sum{};
    for (int num{1}; num <= 10; num++)
    {

        while (num > 0)
        {
            i = num % 10;
            sum = sum + (pow(i, 4));
            num /= 10;
        }

        cout << sum;
    }
}