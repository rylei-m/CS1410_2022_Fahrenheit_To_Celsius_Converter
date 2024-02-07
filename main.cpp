#include <iostream>
using namespace std;

char response = 'a';



int main()
{
   cout << "would you like to convert from Fahrenheit to Celcius (F) or Celcius to Fahrenheit? (C)";


//Farenheit to Celcius

   cin >> response;
  
   if (response == 'F')
    {
      cout << "Enter your number: ";
      double C;
      cin >> C;
      
      double F = (C - 32) * (5 / 9.0);

      cout << "The temperature in Celcius is: " << F << endl;
      
      cin >> F; 
    }
//Celcius to Farenheit

    else if (response == 'C')
      {
        cout << "Enter your number: ";
        double F; 
        cin >> F;
        
        double C = (F * 9/5) + 32;

        cout << "The temperature in Farenheit is: " << C << endl;
        
        cin >> C;
      }
  return 0;
}