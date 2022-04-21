//Q5) Write a program to display the odd numbers from 1 to 101, and also to display their sum.
#include <iostream>
using namespace std;
int main(){
    int sum=0;
    for(int i=1;i<=101;i++){
        if(i%2!=0){
            cout << i << " ";
            sum=sum+i;
        }
        else{
            continue;
        }
    }
    cout << endl << "Sum of all odd number from 1 to 101 is: " << sum << endl;
    return 0;
}