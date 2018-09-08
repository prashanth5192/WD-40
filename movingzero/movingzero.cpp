//////////////////////////////////////////////////
//Program moves the non zero values to one end of 
//array and zeros to the other end of the array
//
//Time Complexity::
//Space Complexity::
//
//Author::Prashanth Thina
//Mail::prashanth.thina@gmail.com
//Dated::9th April 2013
//
//////////////////////////////////////////////////
#include <iostream>
using namespace std;
int* returnzero (int* arr, int size);

main ()
{
  int* k;
 int arr[]={1,2,3,4,5,0,9,1,0,2,0,9,0,10};
 int size=14;
 cout<<"Before sorting 0"<<"\n";
 for(int i=0;i<size;i++)
      cout<<arr[i]<<"\t";
 cout<<"\n";
 k=returnzero(arr,size);
 cout<<"After sorting 0"<<"\n";
 for(int i=0;i<size;i++)
   cout<<k[i]<<"\t";
 cout<<"\n";
 return 0;
}

int* returnzero (int* arr, int size)
{
 int p1,p2;
 p1=p2=0;
 for(int i=0;i<size;i++)
 {
   if(arr[p1]!=0)
   {
     arr[p2]=arr[p1];
     p2++;
   }
p1++;
 }
 for(int i=p2;i<size;i++)
 {
   arr[p2]=0;
   p2++;
 }
 return arr; 
}
