#include<iostream>
using namespace std;
int main(){
    int i=1,j=6;
    while(i<=10){
        cout<<"\n"<<i*j;
        i++;
    }
    int b=6;
    for(int a=1; a<=10; a++){
        cout<<"\n"<<a*b;

    }
    int x=1,y=6;
    do{ 
        cout<<"\n"<<x*y;
        x++;
    }while (x<=10);
    return 0;
}