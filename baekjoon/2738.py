N,M=map(int,input().split())
n_list=[]
m_list=[]
for i in range(N):
    n_list+=list(map(int,input().split()))
for i in range(M):
    m_list+=list(map(int,input().split()))
for i in range(1,len(n_list)+1):
    print(m_list[i-1]+n_list[i-1], end=' ')
    if i%3==0:
        print()