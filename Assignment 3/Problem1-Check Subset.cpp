#include<iostream>
#include<algorithm>
using namespace std;
 
int binarySearch(int arr[], int low,int high, int x)
{
    if (high >= low)
    {
        int mid = (low + high) / 2;
 
        if ((mid == 0 || x > arr[mid - 1]) && (arr[mid] == x))
            return mid;
        else if (x > arr[mid])
            return binarySearch(arr, (mid + 1), high, x);
        else
            return binarySearch(arr, low, (mid - 1), x);
    }
    return -1;
}

bool isSubset(int arr1[], int arr2[],
              int m, int n)
{
    int i = 0;
 
    sort(arr1, arr1+m);
    for (i = 0; i < n; i++) 
	{
        if (binarySearch(arr1, 0, m - 1,arr2[i])== -1)
            return 0;
    }
 
    return 1;
}

int main()
{
	int m;
	cout<<"Enter size of array 1: ";
	cin>>m;
	int *arr1=new int[m];
	cout<<"Enter the elements of array 1: "
	for(int i=0;i<m;i++)
	{
		cin>>arr1[i];
	}
	
	int n;
	cout<<"Enter size of array 2: ";
	cin>>n;
	int *arr2=new int[n];
	cout<<"Enter the elements of array 2: "
	for(int i=0;i<n;i++)
	{
		cin>>arr2[i];
	}
 
    if (isSubset(arr1, arr2, m, n))
        cout << "Yes";
    else
        cout << "No";
 
    return 0;
}
