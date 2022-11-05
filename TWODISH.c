#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    int n,a,b,c;
    while(t--){
        scanf("%d %d %d %d", &n, &a, &b, &c);
        if(b<n) printf("NO\n");
        else if(b>=n && (a+c)>=n) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
