#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */      
    long long int n,a,b,c,count=0,curr,pr,i=1;
    bool r=false;
    int inf=1<<31;
    cin>>n>>a>>b>>c;
    pr=a%inf;
    do{
        curr=(pr%inf*b%inf+c%inf)%inf;
        if(curr!=pr){
            pr=curr;
            count++;
        }
        else{
            r=true;
        }
        i++;
    }while(i<n && !r);
    cout<<count+1<<endl;
    return 0;
}