#include <iostream> //we use this library and not stdio.h because we are using cin and cout for input and output instead of scanf and printf

using namespace std; //this line enable cin and cout to work without std:: before them

// this is a void and parameterised function.
void agecheck(int age){
     if (age > 18){
          cout << "You can vote also" << endl;
     }
}

int main(){
     int age;
     string name;
     cout << "Enter name: " ;
     cin >> name;
     cout << "Enter age: " ;
     cin >> age;
     cout << "Hello " << name <<  "!!" << endl;
     cout << "You are " << age << " years old." << endl;
//this is how u take input and output in c++ and this is how u use if else statements and loops in c++

     for (int i = 0; i < 5; i++){
          cout << "I love " << name << endl;
     }

     if(age < 18){
          cout << "You are not an Adult" << endl;
     }
     else{
          cout << "You are an Adult" ;
          if(age >=21){
               cout << " and you can marry" << endl;
          }
     }
// this is how u use functions in c++ and this is how u pass parameters to functions in c++
     agecheck(age);
     return 0;
}