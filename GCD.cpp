#include <iostream>

using namespace std;

using std::cin;
using std::cout;


int GCD(int a, int b){ 
	long int new_gcd; 
	long int rem = a % b;

	if(rem != 0){
		new_gcd = GCD(b, rem);
	}
	else {return b;}
	

}

int main(){
	long int a, b; 
	long int gcd; 
	cin>>a; //take in the two integers
	cin>>b;
	if(a>b){gcd = GCD(a,b); } //arrange them so that the bigger integer comes first
	else{ gcd = GCD(b,a); }

	cout<<gcd<<"\n";
	
    return 0;
}
 