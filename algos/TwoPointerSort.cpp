void swap(vector<int>&r, int start, int end){
  int temp = r[start];
  r[start] = r[end];
  r[end] = temp;
}
vector<int> move(vector<int>&nums){
  int pt1 = 0;
  int pt2 = nums.size() - 1;
  while (pt1 < pt2){
    swap(nums,pt1,pt2);
    pt1++;
    pt2++;
  }
  return nums;
}
