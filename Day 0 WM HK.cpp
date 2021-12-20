#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,sum2=0;
    cin>>n;
    int x[n],w[n];
    for(i=0; i<n; i++){
        cin>>x[i];
    }
    float sum=0;
    for(i=0; i<n; i++){
        cin>>w[i];
        sum=sum+w[i];
    }

    for(i=0; i<n; i++){
        j=x[i]*w[i];
        sum2=sum2+j;
    }
    float z=(sum2/sum);
    cout<<fixed<<setprecision(1)<<z<<"\n";

    return 0;
}
