#include <bits/stdc++.h>
using namespace std;

bool isPossible(int weights[], int N, int days, int mx)
{
    int st = 1;
    int sum = 0;
 
    // Traverse all the weights
    for (int i = 0; i < N; i++) {
        sum += weights[i];
 
        if (sum > mx) {
            st++;
            sum = weights[i];
        }
 
        if (st > days)
            return false;
    }

    return true;
}

// Function to find the least weight capacity of a boat to ship all the weights within "days" days
void shipWithinDays(int weights[], int days,
                    int N)
{
    // total weights to be shipped
    int sum = 0;
 
    // sum of weights
    for (int i = 0; i < N; i++)
        sum += weights[i];
    
    int s = weights[0];
    for (int i = 1; i < N; i++) {
        s = max(s, weights[i]);
    }
 
    int e = sum;
 
    //result
    int res = -1;
 
    //binary search
    while (s <= e) 
	{
        int mid = s + (e - s) / 2;
 
        if (isPossible(weights, N, days, mid)) {
            res = mid;
            e = mid - 1;
        }
        else
            s = mid + 1;
    }
 
    // Print the result
    cout << res;
}

int main()
{
	int N;
	cout<<"Enter the number of packages : ";
	cin>>N;
	int *weights=new int[N];
	cout<<"Enter the weights of the packages: ";
	for(int i=0;i<N;i++)
	{
		cin>>weights[i];
	}
	
	int days;
	cout<<"Enter the number of days: ";
	cin>>days;
    
	shipWithinDays(weights, days, N);
 
    return 0;
}
