#Kod çalışıyo site bozuk
def ultimateFinder(divider, remainder, ultimate):
    ud = ultimate % divider
    return ultimate - (ud - remainder if remainder <= ud else divider - (remainder - ud))
cases = int(input("cases:"))
final = ""
for i in range(cases):
    x,y,n = tuple(map(int,input().split(" ")))
    final += str(ultimateFinder(x,y,n)) + "\n"
print(final)
