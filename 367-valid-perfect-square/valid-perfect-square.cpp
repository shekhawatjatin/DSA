class Solution {
public:
    bool isPerfectSquare(int num) {
        long low = 1;
        long high = num;
        while(low<=high){
            long mid = (low + high)/2;
            long square = mid*mid;
            if(num == square ) return true;
            else if(square<num) low = mid+1;
            else high = mid-1;
        }return false;
    }
};