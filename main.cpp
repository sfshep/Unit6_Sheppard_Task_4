#include <iostream>
#include <algorithm>
#include "accounts.h"
using namespace std;

void printArray (int [], int);
void sortArrAsc(int[], int);

int main() 
{
  
  //Sort Method

cout << "\nStart: " << cpuTime() << endl;
sort(accountBalances, accountBalances+maxAccounts);
printArray (accountBalances, maxAccounts);
cout << "\nEnd: " << cpuTime() << endl;


    return 0;
}

void printArray (int arrayVals[], int size)
{ 
    cout << "\nPrinted Values in Array: " << endl;
    for (int i = 0; i < size; i++)
    {
     //csv list
     cout << arrayVals[i] << ",";


    }
  

}

