import math as m
t = int(input()) 
for _ in range(t):
    n=int(input())
    arr = list(map(int, input().split()))
    
    arr1=[]
    
    for i in range(0,n-1):
        arr1.append(arr[i+1]-arr[i])        
        
    a=min(arr1)
    if(a<0): print("0")
    elif(a<=1): print("1")
    elif(a==2): print("2")
    else: print(m.floor(a/2+1))    
   
