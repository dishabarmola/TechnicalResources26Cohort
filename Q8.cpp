#include<iostream>
#include<string>
using namespace std;
int main(){
    int b,c;
    string a,d,e;
    cout<<"enter the number you want to rotate"<< endl;
    cin>> a;
    b= a.length();
    cout<<"enter the value of k"<< endl;
    cin>> c;
    if(c<b,c>0){
        d = a.substr(0,b-c);
        e = a.substr((b-c),c);
        cout<< e+d;
    }
    else if(c<b,c<0){
        int r= -1*c;
        d= a.substr(0,r);
        e= a.substr(r,(b-r));
        cout<< e+d;
    }
    else{
        cout<<"error";
        
    }

   
    return 0;
}
