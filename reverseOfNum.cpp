#include<iostream>
using namespace std;
int reverseNum(int num,int rev){
    if(num==0)
        return rev;
    int digit = num%10;
    rev = rev * 10 + digit;
    return reverseNum(num/10,rev);
}
int main(){

    int num,reverse=0;
    cin>>num;
    cout<<reverseNum(num ,reverse);
    return 0;
}
