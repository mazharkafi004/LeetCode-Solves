class Solution(object):
    def decrypt(self, code, k):
        """
        :type code: List[int]
        :type k: int
        :rtype: List[int]
        """
        n = len(code)
        result = [0]*n
        for i in range(n):
            if k>0 :
                for j in range(1, k+1):
                    result[i]+=code[(i+j)%n]
            elif k<0 :
                for j in range(1,abs(k)+1,):
                    result[i]+=code[(i-j)%n]
        return result
        
