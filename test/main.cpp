#include <iostream>
#include <header.h>
using namespace std;

int calculate(int income)
{
    int tax;

    if(income > 0 && income <= 37500)
    {
        tax = income * 0.2;
    }
    else if (income > 37500 && income <= 150000)
    {
        tax = income * 0.4;
    }
    else
    {
        tax = income *  0.45;
    }

    return tax;
}
