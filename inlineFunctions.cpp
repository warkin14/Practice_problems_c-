#include<iostream>
using namespace std;

class Person{
    string name;
    char add[50];
    int age;
    float salary;

  public:
        void takeInput(){
            cout << "Enter your name.\n";
            getline(cin, name);
            cout << "Enter your address. \n";
            cin.getline(add, sizeof(add));
            cout << "Enter your age.\n";
            cin >> age;
            cout << "Enter your salary.\n";
            cin >> salary;
          }
        void display(){
            cout<<"Name:" << name <<endl;
            cout<<"address:" << add << endl;
            cout<<"Age:" << age << endl;
            cout<<"Salary:" << salary << endl;
          }
};

int main(){
  Person person;
  person.takeInput();
  person.display();
}
