#include <iostream>
using namespace std;

int subArraySum(int arr[],int size,int sum){
    int current;
    for (int i = 0; i < size; i++)
    {
        current = arr[i];
        for (int j = i+1; j <= size; j++)
        {
            if (current == sum)
            {
                cout<< "Sum found between indexes " << i << " and " << j-1;
                return 1;
            }
            if (current > sum || j == size)
            {
                break;
            }
            current = current + arr[j];
        }
    }
    cout << "No subarray found"<<endl;
    return 0;
}

int main()
{
    int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 23;
    subArraySum(arr, size, sum);
    return 0;
}

//-----------------------------------------------------------------------------

#include <iostream>
#include <vector>
using namespace std;

int subArraySum(vector<int> arr, int n, int sum)
{
	int curr_sum;
	for (int i = 0; i < n; i++) {
		curr_sum = arr[i];
		for (int j = i + 1; j <= n; j++) {
			if (curr_sum == sum) {
				cout <<"Sum found between indexes " <<i+1 << " and " << j - 1 +1;
				return 1;
			}
			if (curr_sum > sum || j == n)
				break;
			curr_sum = curr_sum + arr[j];
		}
	}

	cout << "No subarray found";
	return 0;
}

int main()
{
	vector<int> arr;
    arr.push_back(1);//0
    arr.push_back(2);//1
    arr.push_back(3);//2
    arr.push_back(7);//3
    arr.push_back(5);//4
	int size = arr.size();
	int sum = 12;
	subArraySum(arr, size, sum);
	return 0;
}

//--------------------------------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        int curr_sum;
        for (int i = 0; i < n; i++) {
            curr_sum = arr[i];
            for (int j = i + 1; j <= n; j++) {
                if (curr_sum == s) {
                    return {i+1,j - 1+1};
                }
                if (curr_sum > s || j == n)
                    break;
                curr_sum = curr_sum + arr[j];
            }
        }
	    return {-1};
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
    }
	return 0;
}