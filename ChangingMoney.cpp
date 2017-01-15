#include <iostream>

using std::cout;
using std::cin;

long int ChangingMoney(long long int n){

	long long int Remainder = n;
	long int NoCoin; 
	long int count = 0;

	while(Remainder != 0){
		if(Remainder >= 10){
			NoCoin = (Remainder/10);
			Remainder -= 10* NoCoin;
			count += NoCoin;
		}
		else if (Remainder >= 5){
			NoCoin = (Remainder/5);
			Remainder -= 5* NoCoin;
			count += NoCoin;
		}
     	else{
			count += Remainder;
			Remainder = 0;
		}
	}
	return count;
}

int main(){
	long long int n;
	cin>>n;
	long int NoCoin = ChangingMoney(n);
	cout<<NoCoin<<"\n";
	return 0;
}