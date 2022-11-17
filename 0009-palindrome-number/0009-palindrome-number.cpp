class Solution {
public:
    bool isPalindrome(int x) {
        long sum=0,rem=0,c=0,temp=x;
        while(x>0){
            rem=x%10;
            sum=sum*10+rem;
            x/=10;
        }
        if(sum==temp){
            return true;
        }
        else
            return false;
    }
};