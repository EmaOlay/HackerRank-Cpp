#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int Q,mode,y;
    string X;
    cin>>Q;
    map<string,int>m;//se especifica no mas de 6 nombres
    for (int i =0; i<Q; i++) {
        cin>>mode>>X;
        //cout<<mode<<" "<<X<<" "<<y<<endl;;
        
        if (mode==1) {
            cin>>y;
            map<string,int>::iterator itr=m.find(X);
            if (itr!=m.end()) {
                m[X]=m[X]+y;
            }else{
                m.insert(make_pair(X,y));
            }     
        }else if (mode==2) {
            m[X]=0;
        }else if (mode==3) {
            cout<<m[X]<<endl;
        }
    }
    return 0;
}