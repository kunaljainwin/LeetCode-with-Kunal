class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        n=0
        for i in range(0,len(t)):
            if n<len(s):
                if s[n]==t[i]:
                    n+=1
                
        if n==len(s):
            return True
        
        return False