//
// Created by NilsMurrugarra-Llerena on 1/18/23.
//
#include<iostream>

using namespace std;

int fact(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return n * fact(n-1);
}

int fact_iter(int n)
{
    int fact = 1;
    while(n>0)
    {
        fact = n * fact;
        n -= 1;
    }
    return fact;
}

void main_fact()
{
    int n = 4;
    int fact_recursive = fact(n);
    int fact_iterative = fact_iter(n);
    cout<<"[factorial] recursive: "<<fact_recursive<<", iterative: "<<fact_iterative<<endl;
}

int fib(int n)
{
    if(n==0 || n==1)
        return n;
    else
        return fib(n-1) + fib(n-2);
}

int fib_iter(int n)
{
    int fib, fib_a, fib_b, i;
    if (n==0 || n==1)
        fib = n;
    else
    {
        fib_a = 0;
        fib_b = 1;
        i = 2;

        while(i<=n)
        {
            fib = fib_a + fib_b;
            fib_a = fib_b;
            fib_b = fib;
            i += 1;
        }
    }
    return fib;
}

void main_fib()
{
    int n = 4;
    int fib_recursive = fib(n);
    int fib_iterative = fib_iter(n);
    cout<<"[Fibonacci] recursive: "<<fib_recursive<<", iterative: "<<fib_iterative<<endl;
}

void print_first(int num)
{
    cout<<num<<", ";
    if(num == 1)
        return;
    else
        print_first(num-1);
}

void print_last(int num)
{
    if(num == 1)
        return;
    else
        print_last(num-1);
    cout<<num<<", ";
}

void main_print()
{
    int n = 5;
    cout<<endl<<"[print_first]"<<endl;
    print_first(n);
    cout<<endl<<"[print_last]"<<endl;
    print_last(n);
}

int main(void)
{
//    main_fact();
//    main_fib();
    main_print();
    return 0;
}
