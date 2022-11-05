#include<stdio.h>
int main(void){
    int t; scanf("%d", &t);

    int n,x,si,ri;
    while(t--){
        int max=0;
        scanf("%d %d", &n, &x);
        while(n--){
            scanf("%d %d", &si, &ri);
            if(si>x) continue;
            else if(ri>max) max=ri;
        } printf("%d\n", max);
    }
}
