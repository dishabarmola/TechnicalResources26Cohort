# include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the marks: "<< endl ;
    cin>> a;
    if ( 0<=a && a<=60)
    {
        cout<<"below par"<< endl;
    }
    else if (60<a && a<=70)
    {
        cout<<" meets expectations "<< endl;

    }
    else if (70< a && a <=80)
    {
        cout<<" fair"<< endl;

    }
    else if (80< a && a <= 90)
    {
        cout<<" good "<< endl;

    }
    else if (90< a && a <= 100)
    {
        cout<<" excellent"<< endl;
    }
    else
    {
        cout<<" the grades not available "<< endl;
    }
return 0;

    
}
