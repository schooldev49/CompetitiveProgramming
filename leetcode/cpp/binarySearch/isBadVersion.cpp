// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1; // starting index
        int mid; // middle index
        int end = n; // ending index
            
        while (start <= end){ 
            mid = start + (end - start) / 2; // middle is the start + difference
            
            if (!isBadVersion(mid)){ // if the middle is not bad
                start = mid + 1; // we can root out the solutions left of the middle index
            } else {
                if (mid - 1 >= 0 && !isBadVersion(mid - 1)) return mid; // if the index before mid is not bad, but mid is bad return mid
                end = mid - 1; // if mid is bad, root out everything right of middle index
            }
        }
        return -1; // bad version not found
    }
}; 



/*
n versions
[1,2,...,n]
which is bad
*/
