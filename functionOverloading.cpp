#include <iostream>
using namespace std;

float area(float base, float height){
  return (base*height)/2;
}
float area(float radius){
  return (radius*radius*22)/7;
}
float area(double length, double width){
  return length*width;
}

int main(){
  int choice;
  float height,base,radius;
  double length,width;
  cout<< "Select the shape.\n" << "1. Triangle\n" << "2. Circle\n" <<"3. Rectangle\n";
  cin >> choice;
    if (choice == 1 ){
      cout << "Enter base.\n";
      cin >> base;
      cout << "Enter height.\n";
      cin >> height;
      cout << "area of triangle:" << area(base,height);

    }
    else if(choice == 2){
      cout <<"Enter radius.\n";
      cin >> radius;
      cout<<"area of circle:" << area(radius);
    }
    else if(choice == 3){
      cout << "Enter Length.\n";
      cin >> length;
      cout << "Enter width.\n";
      cin >> width;
      cout << "area of rectangle:" << area(length,width);
    }
    else(
      exit(0)
  );
}
