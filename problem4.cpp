#include<iostream>
    using namespace std;
int main(){
    int n;
    cout << "Enter your number";
    cin >> n;
    if(n == 1){
        cout << "One";
    } else if(n == 2){
        cout << "Two";
    } else if(n == 3){
        cout << "Three";
    } else if(n == 4){
        cout << "Four";
    } else if(n == 5){
        cout << "Five";
    } else if(n == 6){
        cout << "Six";
    } else if(n == 7){
        cout << "Seven";
    } else if(n == 8){
        cout << "Eight";
    } else if(n == 9){
        cout << "Nine";
    } else if(n > 9){
        cout << "The number is greater than nine";
    } else {
        cout << "Please enter a valid number";
    }
    return 0;
}