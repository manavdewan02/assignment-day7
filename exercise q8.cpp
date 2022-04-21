//Q8) Write a program to calculate the sum of: 1^2 + 2^2 + 3^2 .+ … + Ν^2
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long int sum=0;
    long int n;
    cout << "enter the last term: " << endl;
    cin >> n;
    for(int i=1;i<=n;i++){
        sum=sum+pow(i,2);
    }
    cout << "sum = " << sum << endl;
    return 0;
}