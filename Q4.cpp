#include <iostream>
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
int main()
{
    int n;
    cout<<"enter the number till which prime numbers are to be found"<< endl ;
    cin>> n;
    
    for(int t = 1;t<=n;t++){
        if(prime(t)==1){
            cout<< t<< endl;


        }
        

    }
    return 0;
}

