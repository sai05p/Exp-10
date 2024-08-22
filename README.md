# Exp-10
# Aim
To study and implement Pointer Operations (Call by value and Call by reference).
# Software
Visual Studio Code
# Theory 
Make a value call.
By duplicating the value of the real parameter and leaving the original values unaltered, the call-by-value technique transfers function arguments.
Copies of the value are made in the formal parameter.
The initial values outside of the function are unaffected by modifications made to its parameters.

Make a reference call.
By providing the function with the memory address (reference) of the real argument, the call-by-reference approach enables direct access to and alteration of the initial values.
The memory address is the same for both the formal and actual parameters.

The initial values outside the function instantly reflect any modifications made to its parameters.

CODES:
1. Printing values using call by value
```
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
```

O/P:

![image](https://github.com/user-attachments/assets/97d34c6f-30f2-4fba-97c4-9b411af8ddb3)


2. Swapping values:
```
#include<iostream> 
using namespace std; 
void swap(int *x, int *y) 
{
    int *swap;
    swap=x;
    x=y;
    y=swap;
}

int main() 
{
    int a=5,b=8;
    swap(a,b);
    cout<<"Value of a is: "<<a<<"\n";
    cout<<"Value of b is: "<<b<<"\n";
    return 0;
}
```

O/P:

![image](https://github.com/user-attachments/assets/0acc9c7e-5e8a-4f93-adfc-63122cc17c5c)


3. Swapping the values using call by reference:
```
#include<iostream> 
using namespace std; 
void swap(int *x, int *y) 
{
    int swap;
    swap=*x;
    *x=*y;
    *y=swap;
}

int main() 
{
    int a=5,b=8;
    swap(&a,&b);
    cout<<"Value of a is: "<<a<<"\n";
    cout<<"Value of b is: "<<b<<"\n";
    return 0;
}
```

O/P:

![image](https://github.com/user-attachments/assets/acbfdcce-8c40-426e-95ad-9d33f7cbf845)


# Conclusion
Since the function parameters in the first code are supplied by value, swapping is ineffective and changes are not reflected in the original variables. The second code uses pointers, but it calls the function wrongly without giving addresses, and the swap logic is flawed since it tries to swap the pointers rather than the values they link to. Through the use of pointers and dereferencing, the third code effectively exchanges the values of a and b.

