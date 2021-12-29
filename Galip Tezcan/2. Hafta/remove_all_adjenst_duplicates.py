class Stack:
    def __init__(self):
        self.items = []

    def isEmpty(self):
        return self.items == []

    def push(self, item):
        self.items.append(item)

    def pop(self):
        return self.items.pop()

    def peek(self):
        if self.items != []:
            return self.items[len(self.items)-1]

    def size(self):
        return len(self.items)

class Solution:
    def __init__(self):
        self.stack_list = Stack()
    def removeDuplicates(self, s: str) -> str:
        for i in s:
            if self.stack_list.peek() == i:
                self.stack_list.pop()
            else:
                self.stack_list.push(i)
        return "".join(self.stack_list.items)
            