#include<iostream>
#include<iomanip>

using namespace std;
int main(){
    const int a=3;
    const int b=5;
    cout<<"The constant value of a: "<<a;
    cout<<"\n The value of b is: "<<b;
    // MANIPULATORS IN C++
    int c=1,d=12,e=1233;
    cout<<"\n The value of c is: "<<c;  
    cout<<"\n The value of d is: "<<d;
    cout<<"\n The value of e is: "<<e;


    cout<<"\n The value of c with setw is: "<<setw(4)<<c;
    cout<<"\n The value of d with setw is: "<<setw(4)<<d;
    cout<<"\n The value of e with setw is: "<<setw(4)<<e;

    //Operator precedence
    
    int f=3,g=4;
    int h= (f*5)+g;  // VISIT CPP REFERRENCE WEBSITE FOR INFORMATION REGARDING PRECEDENCE
    int i= ((((f*5)+g)-45)+20);
    cout<<h;
    cout<<i; 
    





     
    
    
    return 0;
}