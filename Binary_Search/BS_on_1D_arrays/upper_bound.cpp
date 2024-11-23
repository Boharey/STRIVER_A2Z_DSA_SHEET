#include<bits/stdc++.h>
using namespace std;

int upper_bound_brute(vector<int> nums,int target)
{
  int n = nums.size();
  int res = INT_MAX;
  //finding index
  for(int ind = 0 ; ind < n ; ind++)
  {
    if(nums[ind] > target)
    {
      res = min(res,ind); //minimum of the all possible indices
    }
  }
  
  // if no index found
  if(res == INT_MAX){
    return nums.size();
  }
  else{
    return res;
  }
}

int upperbound(vector<int> nums,int target){
  int high = nums.size() - 1;
  int low = 0;
  int res = INT_MAX;

  while(low <= high){
    int mid = (low+high)/2;

    if(nums[mid] > target){
      res = mid;
      //look for lower index on the left dont't need to use min(res,mid) that is done by going left 
      high = mid - 1;
    }
    // else if(nums[mid] == target){
    //   low = mid + 1;
    // }
    else{
      //look on right
      low = mid + 1;
    }
  }
  if(res == INT_MAX){
    return nums.size();
  }
  else{
    return res;
  }
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
  cout << "target : " ;
  cin >> target;
  cout << "using brute upper bound : ind : " << upper_bound_brute(arr,target) << endl;
  cout << "using BS upper bound : ind : " << upperbound(arr,target) << endl;
}