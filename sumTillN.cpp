#include<iostream>
using namespace std;
int sumfun(int n){
    if(n==0){
        return 0;
    }
    return n + sumfun(n-1);
}
int main(){
    int n,sum=0;
    cin>>n;
    /*
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum<<endl;
    */
   /*2nd method recursion*/
   cout<<sumfun(n)<<endl;

    return 0;
}