#include<iostream>
using namespace std;
int fact(int n){
    int factorial =1;
    for(int i =2;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}
int main(){
    int n,r;
    cout<<"enter the value of nand r  ";
    cin>>n>>r;
    int ans = fact(n)/(fact(r)*fact(n-r));
    cout<<"ncr of "<<n<<" and "<<r<<" is "<<ans;
    return 0;
}