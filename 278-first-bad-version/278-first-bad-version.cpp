// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       long i=0;
        long j=n;
        long mid=0;
        while(i<=j)
        {
             mid=(i+j)/2;
            if(isBadVersion(mid))
                j=mid-1;
            else
                i=mid+1;
        }
        if(j<mid)
            return mid;
        else if(i>mid)
            return mid+1;
        else return -1;
    }
};