if __name__ == "__main__":
    R = int(input())
    g = 0
    
    if R in range(1, 501):
        for i in range(R):
            g = 0
            L = int(input())
            if L in range(1, 501):
                lst = input()
                for j in range(L):
                    if lst[j] == 'H':
                        g = g + 1
                    elif lst[j] == 'T':
                        g = g - 1
                    if g > 1 or g < 0:
                        print ("Invalid")
                        break
                if g == 0:
                    print ("Valid")
                elif g == 1:
                    print ("Invalid")