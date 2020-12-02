#include <stdio.h>
int fa(n){
    if(n==0){
        return;
    }
    return n + fa(n-1);
}
int main () {
   int n;
   scanf("%d",&n);

   printf("faktpriel od %d e %d",n,fa(n));
}

#include<stdio.h>
#define MAX 100
int main() {
    int n, i, temp;
    int a[MAX];
    printf("Golemina na niza:  ");
    scanf("%d", &n);

    for(i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }

    temp = a[n-1];
    for(i = n - 1; i > 0; i--) {
        a[i] = a[i-1];
    }
    a[0] = temp;

    for(i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    return 0;
}

#include <stdio.h>
int main(){

    int n,i,a[100];
    scanf("%d", &n);

    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0) a[i]++;
        else if(a[i]%2!=0) a[i]--;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
