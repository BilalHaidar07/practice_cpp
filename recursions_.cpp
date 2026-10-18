#include<iostream>
using namespace std;
int factorial(int r){
    {if(r==0)
    
    return 1;}
    return r*factorial(r-1);
    
}

int main(){
    int r;
            cout<<"enter a number  "<<endl;
            cin>>r;
            cout<<"factorial of a "<<r<<"is"<<factorial(r)<<endl;
            return 0;
}