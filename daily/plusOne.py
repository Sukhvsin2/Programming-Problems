class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        digits[-1] = digits[-1] + 1
        carry = 0
        if(digits[-1] > 9):
            carry = 1
            digits[-1] = digits[-1] % 10
            
        i = len(digits)-2
        while(i > -1 and carry):
            digits[i] = digits[i] + carry
            carry = 0
            if(digits[i] > 9):
                carry = 1
                digits[i] = digits[i] % 10
            i = i-1
        if carry:
            digits.insert(0, carry)
        return digits
