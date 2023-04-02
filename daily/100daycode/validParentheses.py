class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        stack = []
        seq = {
            ')': '(',
            ']': '[',
            '}': '{'
        }
        for p in s:
            if p in seq:
                if stack and stack[-1] == seq[p]:
                    stack.pop()
                else:
                    return False
            else:
                stack.append(p)
        return True if not stack else False
        
