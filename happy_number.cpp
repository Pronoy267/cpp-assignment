class Solution {
public:
    int nxt(int n){
        int sum = 0;
        while(n > 0){
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
    unordered_set<int>s;
    while(n != 1){
    s.insert(n);
    n = nxt(n);
    if(s.count(n)){
        return false;
    } 
    }
    return true;
    }
};
