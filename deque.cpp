#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
    // int largest;
    // for (int i =0; i<(n-k+1); i++) {
    //     //cout<<"i="<<i<<endl;
    //     largest=arr[i];
    //     for (int j=1; j<k; j++) {
    //         if (largest<arr[i+j]) {
    //             largest=arr[i+j];
    //         }
    //     }
    //     cout<< largest<<" ";
    // }
    // cout<<endl;
	deque<int> dk;
    dk.push_back(0);
    for (int i = 1; i <= n; ++i) {
        while (dk.front() < i - k) dk.pop_front();
        
        if (i >= k)
            cout << arr[dk.front()] << ' ';
        
        while (i<n and dk.size() and arr[i] > arr[dk.back()])
            dk.pop_back();
        
        dk.push_back(i);
    }
    cout << '\n';
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}