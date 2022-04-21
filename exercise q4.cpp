//Q4) Write a program to calculate the average of the integer numbers between 15 and 25, inclusive.
#include <iostream>
using namespace std;
int main(){
    int count=0;
    int sum=0;
    for(int i=15;i<=25;i++){
        sum=sum+i;
        count++;
    }
    float average=(sum/count);
    cout << "Average = " << average << endl;
    return 0;
}