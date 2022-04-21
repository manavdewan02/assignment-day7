/*Q6) Write a program to read the radius of a circle, check if it is bigger than zero,
and if it is to calculate and display the perimeter of the circle using the formula P=2*3.14*R,
where P is the perimeter and R is the radius of the circle.
Otherwise it should prompt for the radius again until it is bigger than zero.*/
#include <iostream>
using namespace std;
int main(){
    int R;
    float P=0;
    do{cout << "enter the radius of circle: ";
    cin >> R;
    if(R>0){
        P=2*3.14*R;
        cout << P << endl;
    }
    }while(R<0);

    return 0;
}