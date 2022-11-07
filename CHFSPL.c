#include<stdio.h>
int main(){
    int n,a,b,c;
    scanf("%d", &n);

    while(n--){
        scanf("%d %d %d", &a, &b, &c);
        int small=0;
        if(a<b && a<c) small=a;
        else if(b<c) small=b;
        else small=c;

        printf("%d\n", ((a+b+c)-small));
    }

    return 0;
}
