total = int(input())
while(total>0):
    j, k = input().split(" ")
    
    j = int(j)
    k = int(k)
    
    if j%2 == 0 and k%2 == 0:
        print("yes")
    elif j%2 == 1 and k%2 == 1:
        print("yes")
    else:
        print("no")
        
    total = total - 1