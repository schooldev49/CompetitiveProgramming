// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1;
        int mid;
        int end = n;
            
        while (start <= end){
            mid = start + (end - start) / 2;
            
            if (!isBadVersion(mid)){
                start = mid + 1;
            } else {
                if (mid - 1 >= 0 && !isBadVersion(mid - 1)) return mid;
                end = mid - 1;
            }
        }
        return -1;
    }
}; 



/*

n versions


[1,2,...,n]

which is bad



*/
