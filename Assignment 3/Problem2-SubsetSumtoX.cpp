#include <bits/stdc++.h>
using namespace std;

bool checkSubsetSumtoX(int A[], int arr_size, int sum)
{
    int l, r;
    
    sort(A, A + arr_size);
 
    for (int i = 0; i < arr_size - 2; i++) 
	{
        l = i + 1; 
 
        r = arr_size - 1; 
        while (l < r) 
		{
            if (A[i] + A[l] + A[r] == sum) 
			{
                return true;
            }
            else if (A[i] + A[l] + A[r] < sum)
                l++;
            else
                r--;
        }
    }
    return false;
}

int main()
{
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	int *arr=new int[n];
	cout<<"Enter the elements: "
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
    int X;
    cout<<"Enter the integer: ";
    cin>>X;
 
    if(checkSubsetSumtoX(arr, n, X))
    	cout<<"1";
    else
    	cout<<"-1";
 
    return 0;
}
