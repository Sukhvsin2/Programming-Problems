class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if len(s) != len(t):
            return False
        setC = {}
        setT = {}
        for i in range(len(s)):
            setC[s[i]] = 1 + setC.get(s[i], 0)
            setT[t[i]] = 1 + setT.get(t[i], 0)
        if setC == setT:
            return True
        return False
