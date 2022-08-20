#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*My code*/
class Matrix {
    public:
    vector<vector<int>> a;
    Matrix operator+ (Matrix obj) {
        Matrix aux;
        aux=*this;
        //cout<<"obj.a["<<1<<"].size()="<<obj.a[1].size()<<endl;
        for (int i = 0; i<obj.a.size(); i++) {
            //cout<<"obj.a.size()="<<obj.a.size()<<endl;
            for (int j = 0; j<obj.a[i].size(); j++) {
                //cout<<"obj.a["<<i<<"].size()="<<obj.a[i].size()<<endl;
                //cout<<"ojb.a["<<i<<"]["<<j<<"]="<<obj.a[i][j]<<" ";
                aux.a[i][j]=this->a[i][j]+obj.a[i][j];
            }
        }
        return aux;
    }  
};
/*End of my code*/
int main () {
   int cases,k;
   cin >> cases;
   for(k=0;k<cases;k++) {
      Matrix x;
      Matrix y;
      Matrix result;
      int n,m,i,j;
      cin >> n >> m;
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         x.a.push_back(b);
      }
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         y.a.push_back(b);
      }
      result = x+y;
      for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            cout << result.a[i][j] << " ";
         }
         cout << endl;
      }
   }  
   return 0;
}
