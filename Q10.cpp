#include<iostream>
using namespace std;
int prime(int a){
    
    int p;
    int i = 1;
    int count = 0;
    
    while (i<=a)
    {
        
        if(a%i==0)
        {
            count = count + 1;
        }
        i = i+1;
    }
    if(count == 2){
        p = 1;

    }
    else{
        p = 0;
    }
    return p;
}

int main(){
    int a,c,i;
    cout<<"enter the number to factorise "<<endl;
    cin>> a;
    i=1;
    c=1;
    while(i<a){
        if(prime(i)==1){
            if(a%i==0){
            c=a/i;
            cout<<i<<endl;
            }
        }
        i=i+1;

        }
    return 0;   

    }
