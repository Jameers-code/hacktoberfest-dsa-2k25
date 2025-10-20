class Solution {
public:
    bool isPowerOfTwo(int n) {
        //simple
        return n>0 && (n & n-1) == 0 ;
    }
};
