#include<iostream>
using namespace std;

void fib(int n) {
    int t1 = 0;
    int t2 = 1;
    int nextterm;

    cout << "Fibonacci sequence up to " << n << " terms: ";

    for (int i = 1; i <= n; i++) {
        cout << t1 << " ";
        nextterm = t1 + t2;
        t1 = t2;
        t2 = nextterm;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    fib(n);
    return 0;
}