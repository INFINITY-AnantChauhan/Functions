#include<iostream>
using namespace std;

bool isprime(int n) {
    if (n <= 1) {
        return false; 
    }
    for (int i = 2; i * i <= n; i++) { 
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a, b;
    cout << "Enter two numbers between which you want to find prime numbers: ";
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (isprime(i)) {
            cout << i << " is a prime number\n";
        } else {
            cout << i << " is not a prime number\n";
        }
    }
    return 0;
}