#include<iostream> 
using namespace std; 
void swap(int x, int y) 
{
    int swap;
    swap=x;
    x=y;
    y=swap;
}

int main() 
{
    int a=5, b=8;
    swap(a,b);
    cout<<"Value of a is: "<<a<<"\n";
    cout<<"Value of b is: "<<b<<"\n";
    return 0;
}