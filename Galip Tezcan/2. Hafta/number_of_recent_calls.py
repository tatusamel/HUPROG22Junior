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




class RecentCounter:

    def __init__(self):
        self.queue_list = queue()

    def ping(self, t: int):
        self.queue_list.push(t)

        while self.queue_list.peek() < t - 3000:
            self.queue_list.pop()

        return self.queue_list.size()