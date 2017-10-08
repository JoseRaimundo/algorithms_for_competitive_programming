 
#include<bits/stdc++.h>
using namespace std;
#define LL long long
LL a[200009];
LL ans=0;
void Merge(LL left_begin,LL left_end,LL right_begin,LL right_end)
{
    LL pos=0,pp=left_begin;
    LL temp[right_end-left_begin+3];
    while(left_begin<=left_end&&right_begin<=right_end)
    {
        if(a[left_begin]<=a[right_begin])
            temp[pos++]=a[left_begin++];
									   
  
            ans=ans+(left_end-left_begin+1);
            temp[pos++]=a[right_begin++];
        }
    }
    while(left_begin<=left_end) temp[pos++]=a[left_begin++];
    while(right_begin<=right_end) temp[pos++]=a[right_begin++];
    for(LL i=0;i<pos;i++)
        a[pp+i]=temp[i];
    return;
}
 
void MergeSort(LL left,LL right)
{
    LL mid=(left+right)>>1;
    if(left<right)
    {
        MergeSort(left,mid);
        MergeSort(mid+1,right);
        Merge(left,mid,mid+1,right);
    }
}
 
int main()
{
    LL i,j,k,n,m,d,test,t=0;
    scanf("%lld",&test);
    while(test--)
    {
        ans=0;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        MergeSort(0,n-1);
        printf("%lld\n",ans);
    }
    return 0;
}