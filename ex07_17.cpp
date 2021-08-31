/*ex07_17.cpp*/

#include <iostream>
using std::cout;
using std::fixed;
using std::endl;

#include <iomanip>
using std::setw;
using std::setprecision;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

const int numSize = 36000;

void printArr(int[], int);
double percentage(int);

int main()
{
   //const int numSize = 36000;
   const int sumSize = 12;
   int sum, num1, num2;
   int myArr[sumSize] = {0};

   srand(time(0));

   for(int i = 0; i < numSize; i++)
   {
      num1 = 1 + rand() % 6;
      num2 = 1 + rand() % 6;
      sum = num1 + num2;
      myArr[sum -1]++;
   }

   printArr(myArr, sumSize);

   return 0;
}

void printArr(int arr[], int num)
{
   for(int i = 1; i < num; i++)
   {
      cout << fixed << setw(3) << i + 1 << setw(5)<< arr[i] << setw(8) << setprecision(1) << percentage(arr[i]) << '%' << endl;
   }
}

double percentage(int val)
{
   return 100.00 / static_cast<double>(numSize) * static_cast<double>(val);
}
