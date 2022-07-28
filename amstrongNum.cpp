#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int originalNum=num;
    int sum=0;
    while(num>0){
        int digit=num%10;
        sum = sum + digit*digit*digit;
        num/=10;
    }
    if(sum==originalNum)
        cout<<"amstrong"<<endl;
    else
        cout<<"not amstrong "<<endl;
    return 0;
}