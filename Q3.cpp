#include<iostream>
using namespace std;
int main()
{
    int a;
    int i = 1;
    int count = 0;
    cout<<"enter the number"<< endl;
    cin>> a;
    while (i<=a)
    {
        
        if(a%i==0)
        {
            count = count + 1;
        }
        i = i+1;
    }
    if(count == 2){
        cout<<"the number is prime"<< endl;

    }
    else{
        cout<<"the number is not prime "<< endl;
    }
    return 0;
        
}
