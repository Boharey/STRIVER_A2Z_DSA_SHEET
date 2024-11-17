#include<bits/stdc++.h>
using namespace std;

int binarySearchSortedArray(vector<int> nums,int target)
{
  int low = 0;
  int high = nums.size() - 1;
  while(low <= high)
  {
    int mid = (low + high) / 2;
    if(nums[mid] == target){
      return mid;
    }
    else if(nums[mid] > target){ 
      high = mid - 1; //take left part
    }
    else{
      low = mid + 1; // take right part 
    }
  }
  return -1; //if not found until end of condition
}

int main()
{
  int size;
  cout << "size : ";
  cin >> size;
  vector<int> arr(size);
  cout << "enter " << size << " numbers(ascending order) : " ;
  for(int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  int target;
  cout << "enter target : ";
  cin >> target ;
  cout << binarySearchSortedArray(arr,target) << endl;
}