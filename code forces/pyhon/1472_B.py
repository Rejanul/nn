i=input()
t=int(i)

while(t):
    t-=1
    n=int(input())
    a = list((input().split()))
    if((a.count(2)%2==0 and a.count(1)%2==0) or (a.count(2)%2==1 and a.count(1)%2==0 and a.count(1)>1)):
        print("yes")
    else:
        print("no")
    
        
        



