class nodes():
    def __init__(self, num = None, fret, next = None) -> None:
        self.num = num
        self.fret = fret
        self.next = next
class linked():
    def __init__(self) -> None:
        self.head = None
    def release(self):
        pass
    def push(self, str):
        new_val = nodes(str)
        if not self.head:
            self.head = new_val
        else:
            new_val.next = self.head
            self.head = new_val
    def pop(self):
        pass
tone, frets = map(int, input().split())
llist = linked()
for _ in range(tone):
    str, fret = map(int, input().split())
    tone = nodes(str, fret)
    llist.push(tone)