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
    int n;
    cout<<"enter the number whose factorial u want to find  ";
    cin>>n;
    int ans =fact(n);
    cout<<"factorial of "<<n<<"  -  "<<ans<<endl;
    return 0;
}