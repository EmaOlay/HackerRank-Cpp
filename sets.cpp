#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int Q,y,x;
    set<int>s;
    cin>>Q;
    for (int i = 0; i<Q; i++) {
        cin>>y>>x;
        //cout<<"y="<<y;
        //cout<<"x="<<x;
        if (y==1) {
            s.insert(x);
        }else if (y==2) {
            s.erase(x);
        }else if (y==3){
            set<int>::iterator itr=s.find(x);//search for x in s
            if (itr ==s.end()) {
                cout<<"No"<<endl;
            }else {
                cout<<"Yes"<<endl;
            }
        }
    }
    return 0;
}



