#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N,Q,query,low;
    
    cin>>N;
    int vec[N];
    for (int i =0; i<N; i++) {
        cin>>vec[i];
    }
    vector<int> v(vec,vec+N);//necesario para el lower bound
    cin>>Q;
    for (int j=0; j<Q; j++) {
        cin>>query;
        low=lower_bound (v.begin(), v.end(), query)-v.begin();
        if (query!=vec[low]){
            cout<< "No "<<low +1<<endl;
        }else{
            cout<< "Yes "<<low +1<<endl;
        }
    }
        
    return 0;
}
