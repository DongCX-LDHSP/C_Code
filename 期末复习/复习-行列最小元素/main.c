#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10],m,n;
    int i,j,k,nRow,nCol,flag=1;
    printf("请输入数组的行数[1,10]和列数[1,10]，空格隔开\n");
    scanf("%d%d",&m,&n);
    printf("请输入%d×%d数组元素的值\n",m,n);
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            printf("%3d",a[i][j]);
        printf("\n");
    }
    for(i=0; i<m; i++,flag=1)
    {
        nRow=i;
        nCol=0;
        for(j=0; j<n; j++) ///to find the min number in a line
            if(a[i][j]<a[nRow][nCol])
            {
                nRow=i;
                nCol=j;
            }
        for(k=0; k<m; k++)
            if(a[k][nCol]<a[nRow][nCol])
                flag=0;
        if(flag)
            printf("%d行%d列的元素%d满足条件\n",nRow,nCol,a[nRow][nCol]);
    }
    return 0;
}
