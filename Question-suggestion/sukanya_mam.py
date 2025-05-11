n=5
count=0
for i in range(n+1):
    for j in range(i):
        count+=1
        if(j%2!=0):
            print(count,end=" ")
        else:
            print(chr(count+64),end=' ')
    print("\n")