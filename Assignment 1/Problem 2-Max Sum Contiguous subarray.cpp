#include <iostream>
#include<algorithm>
using namespace std;
int maxSubArray(int*nums,int n) 
{
	if(n==0)
		return 0;
		
	int maxSum = nums[0];
    int currentMax = nums[0];
    for(int i = 1; i < n; i++)
	{
        currentMax = max(nums[i], nums[i]+currentMax);
        maxSum = max(maxSum, currentMax);
    }
    
	return maxSum;
         
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
	
	cout<<maxSubArray(arr,n);
}
