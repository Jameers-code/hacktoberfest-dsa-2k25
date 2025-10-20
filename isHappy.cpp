 class Solution {
public:
    bool isHappy(int n) {
        // map se bhi kar sakte hai
        unordered_set<int> visit;
        
        while (visit.find(n) == visit.end()) {
            visit.insert(n);
            n = getNextNumber(n);
            if (n == 1) {
                return true;
            }
        }
        
        return false;
    }

private:
    int getNextNumber(int n) {
        int output = 0;
        // ye logic bhi imp
        while (n > 0) {
            int digit = n % 10;
            output += digit * digit;
            n = n / 10;
        }
        
        return output;
    }
};
