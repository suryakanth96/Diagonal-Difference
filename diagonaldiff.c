#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int s1=0,s2=0;
int differ(int n,int a[n][n])
{
    int d;
    for(int i=0;i<n;i++)
    {
        s1+=a[i][i];
        s2+=a[i][n-i-1];
    }
    d=abs(s1-s2);
    return d;
}

int main(){
    int n; 
    scanf("%d",&n);
    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          
          scanf("%d",&a[a_i][a_j]);
       }
    }
   int dif=differ(n,a);
    printf("%d",dif);
    return 0;
}
