#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<string>
#include<vector>
#include<list>
#include<set>
#include<map>
#include<utility>
#include<stack>
#include<queue>
#include<unordered_set>
#include<unordered_map>
#include<chrono>
#define MAXN 10000000
using namespace std;
double a[MAXN+1],e,time_taken;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t,n,x;
    scanf("%d",&t);
    for(int T=1;T<=t;T++){
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%lf",&a[i]);
        scanf("%lf",&e);
        auto start=chrono::high_resolution_clock::now();
        sort(a,a+n);
        x=0;
        printf("Intervals for test case %d:\n",T);
        for(int i=1;i<n;i++){
            if((a[i]-a[i-1])>e){
                printf("%lf %lf\n",a[x],a[i-1]);
                x=i;
            }
        }
        printf("%lf %lf\n",a[x],a[n-1]);
        auto end = chrono::high_resolution_clock::now();
        time_taken=chrono::duration_cast<chrono::nanoseconds>(end - start).count();
        printf("Time taken: %lf nanoseconds\n",time_taken);
    }
    return 0;
}