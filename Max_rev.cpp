#include <iostream>
#include <vector>
#include <algorithm>


using std::vector;
using std::cin;
using std::cout;
using std::sort;


int main(){
	int n; //total number of ads and slots
	
	int sum = 0;
	cin>>n;
    
    vector<int> ad(n);
	vector<int> slot(n);

	for (int i = 0; i<n; i++){
		cin>>ad[i];
	}

	for(int i = 0; i<n; i++){
		cin>>slot[i];
	}

	
	std::sort(ad.begin(), ad.end());
	std::sort(slot.begin(), slot.end());
	
	for(int i = 0; i<n; i++){
		int prod = ad[i]*slot[i];
		sum += prod;
	}
	cout<<sum<<"\n";
	return 0;
}

