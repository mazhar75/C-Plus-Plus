
#include <iostream>
#include<cstdio>
#include<vector>
using namespace std;

// Naive function to find the maximum length subarray with sum `S` present
// in a given array
void findMaxLenSubarray(vector<int>& nums, int n, int S)
{
    // `len` stores the maximum length of subarray with sum `S`
    int len = 0;

    // stores ending index of the maximum length subarray having sum `S`
    int ending_index = -1;

    // consider all subarrays starting from `i`
    for (int i = 0; i < n; i++)
    {
        int target = 0;

        // consider all subarrays ending at `j`
        for (int j = i; j < n; j++)
        {
            // sum of elements in the current subarray
            target += nums[j];

            // if we have found a subarray with sum `S`
            if (target == S)
            {
                // update length and ending index of max length subarray
                if (len < j - i + 1)
                {
                    len = j - i + 1;
                    ending_index = j;
                }
            }
        }
    }

    // print the subarray
    printf("[%d, %d]", ending_index - len + 1, ending_index);
}

int main(void)
{
    //int nums[] = { 5, 6, -5, 5, 3, 5, 3, -2, 0 };
    //int target = 8;

    //int n = sizeof(nums)/sizeof(nums[0]);
    vector<int>nums;
    int target,n;
    cin>>target>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        nums.push_back(val);
    }

    findMaxLenSubarray(nums, n, target);

    return 0;
}

