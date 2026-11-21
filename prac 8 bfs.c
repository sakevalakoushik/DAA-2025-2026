#include<stdio.h>
int main()
{
    int a[10][10],v[10]={0},q[10];
    int n,i,j,s,f=0,r=0,x;

    printf("Enter n: ");
    scanf("%d",&n);

    printf("Enter matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    printf("Enter start: ");
    scanf("%d",&s);

    q[r++]=s;
    v[s]=1;

    while(f<r)
    {
        x=q[f++];
        printf("%d ",x);

        for(i=0;i<n;i++)
            if(a[x][i]==1 && v[i]==0)
            {
                q[r++]=i;
                v[i]=1;
            }
    }

    return 0;
}