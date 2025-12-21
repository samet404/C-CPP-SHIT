#include <iostream>
#include <vector>
#include <cmath>

typedef std::vector<std::string> string_list_t;

namespace first {
  int x = 1;
}

namespace second {
  int x = 2;  
}

int main() {
  long age;
  age = 203920390299;
  std::cout << age;

  std::cout << "\nI like to take my estrogens\n";
  

  string_list_t string_list;

  /*
   *
   *  THIS IS A COMMENT
   *  
   *
  */


  std::cout << first::x;


  const int a = pow(2, 2);

  std::cout << "\n" << a << "\n";


  // double
  double funnyNumber = 69.0;
  std::cout << '\n' << funnyNumber << '\n';

  // char
  char justAchar = 'A';
  std::cout << '\n' << justAchar << '\n';
  
  // booleans
  bool amIdumb = true;
  std::cout << '\n' << amIdumb << '\n';

  // string
  std::string name = "Alya";
  std::cout << '\n' << name << '\n';
  
  const double pi = 3.14159;
  double radius = 10;
  double circumference = 2 * pi * radius;
  
  std::cout << circumference << "cm";

  
  int urmom = 0;
  urmom += 30;

  std::cout << urmom;




  double urmom2 = (int) 3.13;
  
  std::cout << urmom2 << "urmom2";


  std::string mail;
 
  std::cout << "\nWhat's your email address?";
 
  std::cin >> mail; 
  
  if (mail != "urmom@myhome.com") {
    std::cout << "Wrong email!";
  } else {  
    std::cout << ":>";
  }
 
  std::cout << mail;

  return 0;
}
