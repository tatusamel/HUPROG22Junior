class nodes():
    def __init__(self, num = None, next = None) -> None:
        self.num = num
        self.next = next
class stack():
    def __init__(self) -> None:
        self.stack = None
    def push(self, val):
        new_val = nodes(val)
        new_val.next = self.stack
        self.stack = new_val
    def peek(self):
        head = self.stack
        if head:
            return head.num
    def pop(self):
        head = self.peek()
        if head:
            self.stack = self.stack.next
            return head
class Solution:
    def __init__(self) -> None:
        self.stack = stack()
    def removeOuterParentheses(self, s: str) -> str:
        left=right= 0
        answer = ""
        for i, let in enumerate(s):
            if let == "(":
                left += 1
                if left > 1:
                    self.stack.push(let)
            elif left == right + 1:
                left = 0
                right = 0
            elif let == ")":
                right += 1
                self.stack.push(let)
        while self.stack.stack != None:
            answer += self.stack.peek()
            self.stack.pop()
        return answer[::-1]