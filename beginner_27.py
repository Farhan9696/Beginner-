a=int(input())
b=list(map(int,input().split()))[:a]
for i in range(0,a):
  print(b[i],i)
