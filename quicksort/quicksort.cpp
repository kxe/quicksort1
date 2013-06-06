// quicksort.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void quicks(int* A, int low, int high)
{
      int i = low;                
      int j = high;
      int x = A[(low+high)/2]; 
      do {
          while(A[i] < x) ++i;  
          while(A[j] > x) --j;  
          if(i <= j)
		  {           
              int temp = A[i];
              A[i] = A[j];
              A[j] = temp;
              i++; j--;
          }
      } while(i < j);
      if(low < j) quicks(A, low, j);
      if(i < high) quicks(A, i, high);
}

int main()
{
	int mas[5]={12,10,9,6,7};
	quicks(mas,0,4);
	for (int i=0;i<5;i++)
	{
		cout << mas[i] << " ";
	}
	system("pause");
	return 0;
}
