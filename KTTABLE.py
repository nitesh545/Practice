if __name__ == "__main__":
    T = int(input())
    P = 0
    
    if T <= 10 and T >= 1:
        for i in range(T):
            k = 0
            P = 0
            lst1 = []
            lst2 = []
        
            N = int(input())
            
            if N <= pow(10, 4) and N >= 1:
                lst1 = list(map(int, input().split(' ')))
                lst2 = list(map(int, input().split(' ')))
        
            for j in range(len(lst1)):
                if lst1[j] - k >= lst2[j] and lst1[j] > k and lst1[j] < pow(10, 9) and lst2[j] <= 10**9 and lst2[j] >=1:
                    P = P + 1
                k = lst1[j]
        
            print (P)