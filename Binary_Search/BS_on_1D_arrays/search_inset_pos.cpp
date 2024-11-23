#include<bits/stdc++.h>
using namespace std;

int insert_pos_brute(vector<int> nums,int target)
{
  int n = nums.size();
  int pos = INT_MAX;
  //finding index
  for(int ind = 0 ; ind < n ; ind++)
  {
    if(nums[ind] >= target)
    {
      pos = min(pos,ind); //minimum of the all possible indices
    }
  }
  
  // if no index found
  if(pos == INT_MAX){
    return nums.size();
  }
  else{
    return pos;
  }
}

int insert_pos_BS(vector<int> nums,int target){
  int high = nums.size() - 1;
  int low = 0;
  int pos = INT_MAX;

  while(low <= high){
    int mid = (low+high)/2;
    if(nums[mid] >= target){
      pos = mid;
      //look for other smaller index on the left
      high = mid - 1; 
    }
    else{
      low = mid + 1;
    }
  }
  
  if(pos == INT_MAX){
    return nums.size();
  }
  else{
    return pos;
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
  cout << "using brute insert pos : ind : " << insert_pos_brute(arr,target) << endl;
  cout << "using BS insert pos : ind : " << insert_pos_BS(arr,target) << endl;
}