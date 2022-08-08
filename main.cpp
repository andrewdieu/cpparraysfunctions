#include <iostream>
#include <cmath>

using namespace std;

/* enter a data type here */ 
int charArraytoInt(char myValue[])
{
   /* finish your function definition here */
   int total = 0;
   int alarm = 0;
   for (int i=0; myValue[i] != '\0'; i++) {
      if (myValue[i] >= '0' && myValue[i] <= '9') {
         continue;
      }
      else {
         total = -1;
         alarm = 1;
         break;
      }
   }
   if (alarm == 1) {
      cout << "-1";
   }
   else {
      for (int i=0; myValue[i] != '\0'; i++) {
         cout << myValue[i];
      }
   }
}

int main()
{
   const int MAX_SIZE = 100;
   char myNumber[MAX_SIZE];
   cin >> myNumber;
   charArraytoInt(myNumber);
}