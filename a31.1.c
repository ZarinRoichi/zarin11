/*Course Name:Elementary Structured Programming Lab, Assignment No.3,Semester:1.1,Group:C1,ID:20210104111*/
#include<stdio.h>
int main()
{
    int i, j, n, l, sum = 0;
    printf("Enter the term n:\n");
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
{
    for(l = 1, j = 1; j <= i; j++, l += 2)

    {
        sum += l*l;
    }
}
    printf("sum = %d",sum);

    return 0;
}
