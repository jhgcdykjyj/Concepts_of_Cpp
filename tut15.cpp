#include<iostream>
using namespace std;

// Function prototype
// type function-name (arguments);

//int sum(int a, int b);---> Acceptable.
//int sum(int a, b);---> Not Acceptable.
int sum(int, int); //---> Acceptable.
//void g(void); ---> Acceptable.
void g(); //---> Acceptable.

int main(){
    int num1, num2;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    // num1 and num2 are actuall parameters.
    cout<<"The sum is "<<sum(num1, num2);
    g();
    return 0;
}
    
int sum(int a, int b){
    // Formal parameters a and b will be talking values of 
    // actual parameters num1 and num2.
    int c = a+b;
    return c;
    }

void g(){
    cout<<"\nHello, Good Morning";
}
   