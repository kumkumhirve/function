#include<iostream>
using namespace std;
void swap(int a ,int b );
int main(){
    int y,z;
    cout<<"hello india"<<endl;
    cout<<"enter y z"<<endl;
    cin>>y;
    cin>>z;
    swap(y,z);
    
    cout<<"tank you"<<endl;


}
    void swap(int a,int b)
    {
        int temp;
        temp=a;
        a=b;
        b=temp;
        cout<<a << endl;        
        cout<<b << endl;
    }

