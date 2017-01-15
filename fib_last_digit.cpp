#include <iostream>



using std::cin;
using std::cout;


int main(){
	long long int array[2] = {0,1};
	
	long long int n;
	

	cin>>n;

	if (n <= 1){cout<<array[n];}
	else{ 
		for (int i = 1; i<n; i++){
			long long int Fib;

			Fib = (array[0] + array[1])% 10;
			array[0]= (array[1]%10);
			array[1] = Fib;		
		}
	cout<<(array[1]);
	}

	
	return 0;
}