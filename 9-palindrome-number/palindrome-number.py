class Solution(object):
    def isPalindrome(self, x):
        num = x
        total = 0
        while num > 0:
            ld = num%10
            total = total*10+ld
            num = num//10
        
        return total == x