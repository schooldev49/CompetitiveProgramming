class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for (int i=0; i<nums2.size(); i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int size = nums1.size();
        double answer = 0;
        if (nums1.size() % 2 == 0){
            answer = (nums1[size/2-1] + nums1[size/2]) / 2.0;
        } else {
            answer = (double)nums1[size / 2];
        }
        return answer;
    }
};
