#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Tell me your age:";
    cin>>age;
    if(age<18){
        cout<<"\n You can not come into the party ";
    }
    else if(age=18){
        cout<<"\n You can come to the  kid ";
    }
    else{
        cout<<"\n You are welcome an let's have fun ";
    }
    return 0;
}