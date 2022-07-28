#include<iostream>
using namespace std;
int main(){

    int num ,reverse=0;
    cin>>num;
    int originalNum=num;
    while(num>0){
        int digit=num%10;
        reverse=reverse*10+digit;
        num/=10;
    }
    if(reverse==originalNum)
        cout<<"pallindrome"<<endl;
    else
        cout<<"not pallindrome"<<endl;



    return 0;
}