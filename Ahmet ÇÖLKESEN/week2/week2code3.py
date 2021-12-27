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
    def is_empty(self):
        if self.stack == None:
            return True
        else:
            return False
    def write(self):
        lst = []
        while self.stack:
            lst.append(self.stack.num)
            self.stack =self.stack.next
        return "".join(lst[::-1])
class Solution:
    def __init__(self) -> None:
        self.stack = stack()
    def removeDuplicates(self, s: str) -> str:
        for c in s:
            if not self.stack.is_empty() and c == self.stack.stack.num :
                self.stack.pop()
            else: self.stack.push(c)
        return self.stack.write()