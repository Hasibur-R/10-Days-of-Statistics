#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j,x,z,k,temp;
    double q1,q2,q3;
    cin>>n;
    int a[n];
    for(i=1; i<=n; i++){
        cin>>a[i];
    }
   for(i=1; i<=n; i++){
        for(j=1; j<=n-1; j++){
    if(a[j]>a[j+1]){
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
        }
      }
   }

    if(n%2==0){
        j=n/2;
        q2=(double)(a[j]+a[j+1])/2.0;
        if(j%2!=0){
            z=(j+1)/2;
            q1=(double)a[z];
            k=j+z;
            q3=(double)a[k];
        }
        else{
            z=j/2;
            q1=(double)((a[z]+a[z+1])/2.0);
            k=j+z;
            q3=(double)((a[k]+a[k+1])/2.0);
        }
        cout<<q1<<endl<<q2<<endl<<q3<<endl;
    }
    else{
        j=(n+1)/2;
        q2=(double)a[j];
        if(j%2==0){
            int z=j/2;
            q1=(double)a[z];
            int k=j+z;
            q3=(double)a[k];
        }
        else{
            z=j/2;
            q1=(double)(a[z]+a[z+1])/2;
            k=j+z;
            q3=(double)(a[k]+a[k+1])/2;
        }

        cout<<q1<<endl<<q2<<endl<<q3<<endl;
    }
}
