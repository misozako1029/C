#include<stdio.h>

int main(void){
        int n,i,add,x;
        printf("n=");
        scanf("%d",&n);
        int a[n];
        printf("a=");
        for(i=0;i<n;i++){
                scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++){
                for(x=i+1;x<n;x++){
                        if(a[i]>a[x]){
                                add=a[x];
                                a[x]=a[i];
                                a[i]=add;
                        }
                }
        }
        for(i=0;i<n;i++){
                printf("%d ",a[i]);
        }
        return 0;
}