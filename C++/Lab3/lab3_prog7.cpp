//Program name : lab3_prog7.cpp
#include <iostream>
using namespace std;

main ()
{
  char myString[40];

  cout << "What's your name? ";
  cin.getline(myString, 40);

  cout << "Hello " << myString << ".\n";

  cout << "Which is your favourite drink?";
  cin.getline(myString, 40);
  cout << myString;
}

