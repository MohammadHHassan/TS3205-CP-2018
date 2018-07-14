#include <stdio.h>
#include <string.h>
#define LENGTH 10

void selsort(int n, char v[][LENGTH]) 
{
   char temp[LENGTH];
   int j, k, smallest;
   for (j=0 ; j<n-1 ; j++) 
   {
      smallest = j;
	
      for (k=j+1 ; k<n ; k++) 
      {
         if (strncmp(v[smallest],v[k],LENGTH)>0)
            smallest = k; 
      }
       //Swap v[j] with v[smallest]
      strncpy(temp, v[j], LENGTH);
      strncpy(v[j], v[smallest], LENGTH);
      strncpy(v[smallest], temp, LENGTH);
   }
}

int main()
{
   int j;
   char v[][LENGTH]={"John","Alice","Zoe","Joe","Bob","Tom","Bobby"};
   selsort(7,v);
   for (j=0 ; j<7 ; j++) 
      printf(" %s", v[j]);
   return 0;
}

