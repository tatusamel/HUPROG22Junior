class queue():
    def __init__(self) -> None:
        self.head = None
        self.tail = None
        self.len = 0
    def enqueue(self, val):
        new_tail = nodes(val)
        if not self.head:
            self.head = new_tail
            self.tail = self.head
        else:
            if self.head == self.tail:
                self.head.next = self.tail
            self.tail.next = new_tail
            self.tail = new_tail
        self.len += 1
    def dequeue(self):
        if self.head:
            val = self.head.num
            self.head = self.head.next
            self.len -= 1
            return val
    def leng(self):
        return self.len

class nodes():
    def __init__(self, num = None, next = None) -> None:
        self.num = num
        self.next = next
class RecentCounter:
    def __init__(self):
        self.requests = queue()
    def ping(self, t: int) -> int:
        self.requests.enqueue(t)
        while self.requests.head.num < t - 3000:
            self.requests.dequeue()
        return self.requests.len