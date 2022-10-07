// Problem Description

// Program to Find Intersection of Two Arrays in C++

//Input and Output

// Enter the no. of elements of the 1st array: 5
// Enter the elements of the 1st array: -4 1 3 0 8

// Enter the no. of elements of the 2nd array: 8
// Enter the elements of the 2nd array: 3 -7 -4 9 6 0 17 5

// The intersection of the two arrays: -4 3 0


#include<iostream>
using namespace std;

int main()
{
  int n1,n2,i,j;
  cout<<"Enter the no. of elements of the 1st array: ";
  cin>>n1;
  
  /* declaring arr1 of size n1 */
  int arr1[n1];

  /* Enter distinct elements */
  cout<<"Enter the elements of the 1st array: ";
  for(i=0;i<n1;i++)
  {
    cin>>arr1[i];
  }
  
  cout<<"\nEnter the no. of elements of the 2nd array: ";
  cin>>n2;
  
  /* declaring arr2 of size n2 */
  int arr2[n2];

  /* Enter distinct elements */
  cout<<"Enter the elements of the 2nd array: ";
  for(i=0;i<n2;i++)
  {
    cin>>arr2[i];
  }
  
  /* printing elements that are common in both the arrays */
  cout<<"\nThe intersection of the two arrays: ";
  for(i=0;i<n1;i++)
  {
    for(j=0;j<n2;j++)
    {
      if(arr1[i]==arr2[j])
      {
        cout<<arr1[i]<<" ";
      }
    }
  }
  
  return 0;
}