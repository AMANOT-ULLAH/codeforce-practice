# Link: https://codeforces.com/contest/1601/problem/A

t = int(input()) 
for _ in range(t):
    n=int(input())
    #arr = list(map(int, input().split()))
    arr = [int(x) for x in input().split()]

    #print(*arr)
    
    cnt_odd,cnt_even=0,0
    
    for i in arr :
        if i%2==0:cnt_even+=1
        else: cnt_odd+=1
    
    if (cnt_odd==2 and cnt_even==0) or(cnt_odd==0 and cnt_even==2):
        print("YES") 
        continue
    elif cnt_odd%2==0 :
        print("YES")
        continue
    else: 
        print("NO")
        continue
    
    
            
        
              
    
        
