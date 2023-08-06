#include <stdio.h>
 
int main() {
 
    int m,n;
    int sum=0, min=10000;
    int a[10000];
    scanf("%d %d",&m,&n);
 
    for(int i=0; i<=n; i++) {
        a[i]=i*i;    
 
        if(m<=a[i]&&a[i]<=n){ 
        sum+=a[i];
        if(min>a[i])
            min=a[i];
        }
    }
    if(sum == 0)printf("-1");
    else printf("%d\n%d", sum, min);
}