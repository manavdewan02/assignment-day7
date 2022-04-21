/*Q7) The powers of 2 are: 1, 2, 4, 8, 16, 32, … . 
Write a program to display the first power of 2, which is bigger than 1000.*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int i=0;
    while(pow(2,i)<=1000){
        i++;
    }
    cout << "first power of two greater than 1000 is " << "2^" << i << " = " << pow(2,i) <<endl;
    return 0;
}
