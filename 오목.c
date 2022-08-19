#include <stdio.h>
int a[20][20],i,j,k,cut=1,cnt,t;
int dx[5]={0,1,1,1,0}, dy[5]={-1,-1,0,1,1};
int main()
{
    for(i=1;i<20;i++)
        for(j=1;j<20;j++)
            scanf("%d",&a[i][j]);
    for(j=1;j<20&&cut;j++)
        for(i=1;i<20&&cut;i++)
            if(a[i][j]>0)
            {
                t=a[i][j];
                for(k=0;k<5;k++)
                {
                    for(cnt=0;a[i+dy[k]*cnt][j+dx[k]*cnt]==t;cnt++){}
                    if(cnt==5&&a[i-dy[k]][j-dx[k]]!=t)
                    {
                        cut--;
                        k=5;
                        printf("%d\n%d %d",t,i,j);
                        return 0;
                    }
                }
            }
    puts("0");
    return 0;
}
