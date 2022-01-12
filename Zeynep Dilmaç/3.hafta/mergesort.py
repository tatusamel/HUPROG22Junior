list1=[2,1,4,3,90,45,32,64]
def sorting(A,l,r):
        a=b=i=0
        while a<len(l) and b<len(r):
            if l[a]<r[b]:
                A[i]=l[a]
                a+=1
            else:
                A[i]=r[b]
                b+=1
            i+=1
        while a<len(l):
            A[i]=l[a]
            a+=1
            i+=1
        while b<len(r):
            A[i]=r[b]
            b+=1
            i+=1
def mergesort(A):
    if len(A)>1:
        half=len(A)//2
        l=A[:half]
        r=A[half:]
        mergesort(l)
        mergesort(r)
        sorting(A,l,r)
mergesort(list1)
print(list1)