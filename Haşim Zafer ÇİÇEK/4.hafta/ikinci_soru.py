t = int(input())
for i in range(t):
    a_b = list(map(int,input().split()))
    a = a_b[0]
    b = a_b[1]
    remainder = a%b
    print(min(remainder,b-remainder))

"""
kodun tek yaptığı a % b yi hesaplayıp sonucun b ye mi yakın yoksa 0 a mı yakın olduğunu bulmak bu sayede en az adımla
a%b = 0 ı sağlıyoruz. time complexity = O(1)
"""