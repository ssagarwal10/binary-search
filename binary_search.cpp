
//TITLE: Design and implement Binary search algorithm using 'Divide and Conquer' method for a given input. 

//CODE:

#include<iostream>

using namespace std;
int lin(int n,int arr[],int s,int f, int l, int m);   //function declaration
int main()
{
int n,arr[5],f,l,m,temp=0,s,ret;
cout<<"\nEnter the array size\n";
cin>>n;

cout<<"Enter the array elements\n";			//accepting array elements from the user
for(int i=0;i<n;i++)
{
  cin>>arr[i];
}

for(int i=0;i<n;i++)					//sorting the array using bubble sort
{
  for(int j=0;j<n-1;j++)
  {
    if(arr[j]>arr[j+1])
    {
      temp=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=temp;
    }
  }
}
cout<<"\nThe sorted array is:\n";			//printing the sorted array
for(int i=0;i<n;i++)
{
  cout<<arr[i]<<"\n";
}
cout<<"\nEnter the element to be searched\n";
cin>>s;

m=(n-1)/2;
l=n-1;
f=0;

ret=lin(n,arr,s,f,l,m);					//function call

cout<<"Element found at "<<ret;
}


int lin(int n,int arr[],int s,int f, int l ,int m)      //function
{

    if(arr[m]==s)
    {
      return(m+1);
    }

    if(s>arr[m])
    {
      f=m+1;
      m=(f+l)/2;
      return(lin(n,arr,s,f,l,m));			//recursive call to function
    }
    else
    {
      l=m-1;
      m=(f+l)/2;
      return(lin(n,arr,s,f,l,m));			//recursive call to function
    }
  return(-1);
}

//OUTPUT:


Enter the array size
6
Enter the array elements
1
2
3
4
5
6

The sorted array is:
1
2
3
4
5
6

Enter the element to be searched
5
Element found at 5

