#include <iostream>
using namespace std;
#include <array>

//function for removing consecutive duplicate elements from an array
int removeDuplicates(int *arr,int n) 
{
    
    if (n==0 || n==1)
        return n;
 
    int temp[n];
 
    int j = 0;
    for (int i=0; i<n-1; i++)
    {
    	if (arr[i] != arr[i+1])
            temp[j++] = arr[i];	
	}
    temp[j++] = arr[n-1];
 
    for (int i=0; i<j; i++)
        arr[i] = temp[i];
 
    return j;
}

int main() 
{
	int n;
	cout<<"Enter size of array: "<<endl;
	cin>>n;
	int* arr=new int[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

    n=removeDuplicates(arr,n);
    for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
}
