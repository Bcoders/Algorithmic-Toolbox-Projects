//This program calculates the max pairwise product 

#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;

long long max_prod(const vector<long long>& numbers){
	int n = numbers.size();
	long long result = 0;
	long long max_ind = 0; 
	long long sec_max_ind = 0;

	for(int i = 0; i<n; i++){
	if((long long)numbers[i] >= max_ind){
		sec_max_ind = max_ind;
		max_ind = numbers[i];
		}
	else if((long long)numbers[i] > sec_max_ind){

		sec_max_ind = numbers[i];
		}
    }
	
	return ((long long )max_ind*sec_max_ind);
}

int main() {
	long long a;
	int num_of_item;
	std::vector<long long> v;
	cin>> num_of_item;
	for (int i = 0;i < num_of_item;i++){
		cin>>a;
		v.push_back(a);
	}
	
    long long result = max_prod(v);
    cout << result << "\n";
    return 0;
}

