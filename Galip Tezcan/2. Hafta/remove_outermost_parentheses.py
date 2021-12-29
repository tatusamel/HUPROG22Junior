class queue:
    def __init__(self):
        self.items = []

    def isEmpty(self):
        return self.items == []

    def push(self, item):
         self.items.append(item)

    def pop(self):
        if self.items != []:
            return self.items.pop(0)

    def peek(self):
        if self.items != []:
            return self.items[0]

    def size(self):
        return len(self.items)

class Solution:
    def removeOuterParentheses(self, s: str) -> str:
        kapali = 0
        acik = 0
        queuelist= queue()
        outputlist=[]
        for i in range(len(s)):
            if s[i] ==")":
                kapali+=1
            else:
                acik+=1
            if kapali == acik:
                queuelist.pop()
                for j in queuelist.items:
                    outputlist.append(j)
                queuelist.items=[]
            else:
                queuelist.push(s[i])
            
            
        return "".join(outputlist)
            