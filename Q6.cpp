#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    cout<<"enter the number to reverse"<<endl;
    cin>> a;
    int b = a.length();
    int i = 0;
    while(i<(b/2)){
        swap(a[i],a[b-i-1]);
        i++;

    }
    cout<<a;
    return 0;
}
