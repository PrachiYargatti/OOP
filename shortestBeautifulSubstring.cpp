class Solution:
    def shortestBeautifulSubstring(self, s: str, k: int) -> str:
        if s.count('1') < k:
            return ""
        
        ans = ""
        left = 0
        ones = 0
        
        for right in range(len(s)):
            if s[right] == '1':
                ones += 1
            
            while ones == k:
                sub = s[left : right + 1]
                
                if not ans or len(sub) < len(ans) or (len(sub) == len(ans) and sub < ans):
                    ans = sub
                
                if s[left] == '1':
                    ones -= 1
                left += 1
                
        return ans
