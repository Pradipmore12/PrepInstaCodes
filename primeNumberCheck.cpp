#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    bool prime=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=false;
            cout<<"not prime"<<endl;
        }

    }
    if(prime)
        cout<<"prime"<<endl;
    return 0;
}