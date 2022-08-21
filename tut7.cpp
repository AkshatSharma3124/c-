#include<iostream>
using namespace std;
int c=40;
int main(){
    float d=34.4f;
    float e=34.4l;
    cout<<"The value of d is: "<<d;
    cout<<"\nThe value of e is: "<<e;
    cout<<"\nThe size of 34.4 is "<<sizeof(34.4);
    
    cout<<"\nThe size of 34.4f is "<<sizeof(34.4f);
    
    cout<<"\nThe size of 34.4F is "<<sizeof(34.4F);
    
    cout<<"\nThe size of 34.4l is "<<sizeof(34.4l);
    
    cout<<"\nThe size of 34.4L is "<<sizeof(34.4L);
    
    int a, b, c;
    cout<<"\n ENTER THE VALUE OF A: "<<a;
    cin>>a;
    cout<<"\n Enter the value of B: "<<b;
    cin>>b;
    c=a+b;
    cout<<"\n Sum of a and b is c: "<<c;
    cout<<"\n Global c is "<<::c;

     // REFERRENCE VARIABLE
    int x=123;
    int & y=x;
    cout<<x;
    cout<<"\n"<<y;
    

     // TYPECASTING
     float a=45.46;
     float b=50.00;
     cout<<"The value of a "<<int(a);
     cout<<"\n The value of b is "<<int(b);

     cout<<"\n The sum is "<<a+int(b);
     cout<<"\n The sum is "<<int(a)+b;
     cout<<"\n The expression is "<<a+b;




    return 0;
}
