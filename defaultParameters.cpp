#include<iostream>
using namespace std;

 //function to find power
double pow(double m, int n =2){
  double result=1;
  while(n != 0){  //loops until exponent becomes 0
    result *= m;
    n--;
  }
  return result;
}
//power function ends

int main(){
  int exponent;
  int choice;
  double base;

  reset:
  cout << "Choose from the following options." << endl;
  cout << "1. Calculating square." << endl;
  cout << "2. Custom exponent." << endl;
  cout << "3. Quit" << endl;
  cin >> choice;

  switch(choice){
    case 1:
        cout << "Enter the base.\n";
        cin >> base;
        cout <<  pow(base);
        break;
    case 2:
        cout << "Enter the base and exponent respectively." << endl;
        cin >> base >> exponent;
        cout << pow(base, exponent);
        break;
    case 3:
        exit(0);

    default:
        cout<< "Entered Value is Invalid, Try again\n";
        goto reset;
    }

}
