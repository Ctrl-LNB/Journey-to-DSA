//Write a Function to Find the product of 2 numbers- a & b.
// #include <iostream>
// using namespace std;
// int prod(int a, int b){
//     return a * b;
// }
//  int main(){
//     cout << prod(10,20) << endl;
//     return 0;
//  }

 //Write a Function to print a number is odd or even
// #include <iostream>
// using namespace std;

// int prod(int a, int b){
//     return a * b;
// }

// bool isEven(int n){
//     if(n % 2 == 0){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// int main(){
//     cout << isEven(19) << endl;
//     return 0;
// }

//Write a function to printthe factorial of a number n.
#include <iostream>
using namespace std;
int prod(int a, int b){
    return a * b;
}

int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    cout << "factorial(" << n << ") = " << fact << endl;
    return fact; 
}
 int main(){
    factorial(0);
    factorial(1);
    factorial(2);
    factorial(3);
    factorial(4);
    factorial(5);
    factorial(6);
    return 0;
 }