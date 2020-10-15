#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <cstdlib>
#include <string>

using namespace std;

void bin_last_k(int n, int k)
{
    int j=0,N=n;
    int a[100]; for(int i=0;i<100;i++)a[i]=0;
    while(n>0){a[j]=n%2;n/=2;j++;}
    int start = k-j;
    if(start<=0) start=k;
    else start=k-1;
    cout<<N<<" :";
    for(int i=start;i>start-k;i--)cout<<a[i];
    cout<<endl;
}
 
int main()
{
    for(int k=3;k<10;k++)
    {
        char fname[100] = "int_2_bin_";
        fname[10]='0'+k;
        fname[11]='.';
        fname[12]='t';
        fname[13]='x';
        fname[14]='t';
        fname[15]='\0';
        freopen(fname, "w", stdout);
        for(int i=0;i<1<<k;i++)
        {
            bin_last_k(i,k);
        }
        fclose(stdout);
    }
}
