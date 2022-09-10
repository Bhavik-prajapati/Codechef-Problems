#include<bits/stdc++.h>
using namespace std;

int deleteElementsInRange(int arr[], int n, int l, int r) {
   int i, newIndex = 0;
   for (i = 0; i < n; i++) {
      // adding updating element if it is not in the given range
      if (i <= l || i >= r) {
         arr[newIndex] = arr[i];
         newIndex++;
      }
   }
   // returing the updated index
   return newIndex;
}

int main(){
   int t;
   cin>>t;
   while (t--)
   {
      int n,k;
      cin>>n;
      int a[n];
      for (int i = 0; i < n; i++)
      {
         cin>>a[i];
      }
      cin>>k;
      int b[k];
      for (int i = 0; i < k; i++)
      {
         cin>>b[i];
         n = deleteElement(a, n, b[i]);

         
      }
int updatedArrayLength = deleteElementsInRange(arr, n, l, r);
for (int i = 0; i < updatedArrayLength; i++) {
      cout << arr[i] << " ";
   }
   cout << endl;


   
   }
}