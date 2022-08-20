#include<iostream>
using namespace std;
int main(){
    int a=4,b=5;
    cout<<"Use of operators in C++\n";
    cout<<"print a+b "<<a+b;
    cout<<"\n print a-b "<<a-b;
    cout<<"\n print a*b "<<a*b;
    cout<<"\n print a/b "<<a/b;
    cout<<"\n print a%b "<<a%b;
    cout<<"\n print a++ "<<a++;
    cout<<"\n print a-- "<<a--;
    cout<<"\n print ++a "<<++a;
    cout<<"\n print --a "<<--a;
    cout<<"\n";
    cout<<"\n is a==b "<<(a==b);
    cout<<"\n is a!=b "<<(a!=b);

    cout<<"\n The value of the logical operator is "<<((a==b)) && ((a<b));
    cout<<"\n The value of the logical operator is "<<((a==b)) || ((a<b));
    
    cout<<"\n The value of the logical operator is "<<(!(a==b));
    
     


    return 0;

}