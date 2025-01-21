class Solution:
    def check_brackets(self,stacked_bracket, bracket)-> bool:
        
        if(stacked_bracket == '(' and bracket == ')'):
            return False
        elif (stacked_bracket == '{' and bracket == '}'):
            return False
        elif (stacked_bracket == '[' and bracket == ']'):
            return False
        else:
            return True
        
        
    def isValid(self, s: str) -> bool:
        
        stack = []
        
        for bracket in s:
            if(bracket in ['(', '{', '[']):
                stack.append(bracket)
            else:
                if len(stack) <=0:
                    return False
                
                if self.check_brackets(stack.pop(), bracket):
                    return False
        
        if (len(stack) != 0 ):
            return False
        return True
        