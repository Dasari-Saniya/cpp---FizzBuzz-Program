#include <iostream>
using namespace std;
void fizzBuzz(int number) {
    // Write your code here.
     if(number%3==0 && number%5==0)
        cout<<"FizzBuzz\n";
    else if (number%3==0)
    {
        cout<<"Fizz\n";
    }
    else if (number%5==0)
    {
        cout<<"Buzz\n";
    }
    else
    {
        cout<<number<<"\n";
    }
}
int main() {
    int n;
    cin >> n;
    fizzBuzz(n);
    return 0;
}
