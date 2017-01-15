#include <iostream>



using std::cin;
using std::cout;


int main(){
	long long array[2] = {0,1};
	
	int n;
	long long Fib;

	
	cin>>n;

	

	if (n <= 1){cout<<array[n];}
	else{ 
		for (int i = 1; i<n; i++){

			Fib = (array[0] + array[1]);
			array[0]= array[1];
			array[1] = Fib;		
		}
	cout<<(Fib);
	}

	
	
	return 0;
}

