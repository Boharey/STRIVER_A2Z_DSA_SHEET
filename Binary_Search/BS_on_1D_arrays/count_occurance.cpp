#include<bits/stdc++.h>
using namespace std;


//TC : O(n) , SC : O(1)
int count_occurance_brute(vector<int> nums, int target)
{
  int n = nums.size();
  int count = 0;
  for(int i = 0; i < n;i++)
  {
    if(nums[i] == target)
    {
      count += 1;
    }
  }
  return count;
}




int main()
{
  int size;
  cout << "size : ";
  cin >>size;

  vector<int> arr(size);
  cout <<"numbers : ";
  for(int i = 0 ; i < size; i++)
  {
    cin >> arr[i];
  }

  int target;
  cout << "target : ";
  cin >> target ;
  cout << "occurance is : " << count_occurance_brute(arr,target) << endl; 
}