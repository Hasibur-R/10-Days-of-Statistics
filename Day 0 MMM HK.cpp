#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int maxRepeating(int* x, int o, int k){
    for (int i=1; i<=o; i++)
        x[x[i]%k]+=k;

    int max=x[0], result=0;
    for (int i = 1; i <o; i++){
        if (x[i]>max){
            max = x[i];
            result = i;
        }
    }
    if(result>0){
    return result;
    }
    else return x[1];
}

int main() {
     int n,i,j;
     long double mea=0,mea2,med2,temp;
     cin>>n;
     int x[n];
     for(i=1; i<=n; i++){
        cin>>x[i];
     }
     ///Mean
    for(i=1; i<=n; i++){
      mea=mea+x[i];
    }
    mea2=mea/n;
    cout<<fixed<<setprecision(1)<<mea2<<"\n";

   for(i=1; i<=n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(x[j] < x[i])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    ///Median
    if(n%2==0){
       j=n/2;
       med2=(x[j]+x[j+1])/2.0;
       cout<<fixed<<setprecision(1)<<med2<<"\n";
    }
   if(n%2!=0){
       j=(n/2)+(1);
       med2=x[j]/2.0;
       cout<<setprecision(1)<<med2<<"\n";
       }

    ///Mode
    int o= sizeof(x)/sizeof(x[0]);
    int k = n;
    cout<<maxRepeating(x,o,k)<<endl;


    return 0;
}
