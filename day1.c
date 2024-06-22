/*Problem Statement:
Alice is working on an array manipulation program. She enters an array of integers and a multiplier. The program then multiplies each array element by the given multiplier, sorts the array in descending order, and outputs the result.Write a program to solve the problem.

Input 1 :
5
10 50 20 30 40
2

Output 1 :
100 80 60 40 20 
*/

#include<stdio.h>
int main()
{
    int n,a[100],m,b[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
        b[i]=a[i]*m;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(b[i]<b[j])
            {
                int t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
}