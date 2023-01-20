#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the number: "<< endl;
    cin>> a;
    int i = 0;
    int c;
    int count = 1;
    while(i<a){
        a=a/10;
        count=count+1;
        i++;
    }
    cout<<"the count of digits is "<< count;
    return 0;


}
