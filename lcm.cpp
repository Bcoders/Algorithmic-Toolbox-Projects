#include <iostream>

using namespace std;

using std::cin;
using std::cout;




long long int GCD(int a, int b){ 
	long int new_gcd; 
	long int rem = a % b;

	if(rem != 0){
		new_gcd = GCD(b, rem);
	}
	else {return b;}
}
	
long long int LCM(int a, int b){
	long long lcm, gcd;
	gcd = GCD(a,b);

	lcm = (a/gcd * b/gcd * gcd);
	return lcm;

}


int main(){
	long long int a, b; 
	long long int lcm; 
	cin>>a; //take in the two integers
	cin>>b;
	if(a>b){lcm = LCM(a,b); } //arrange them so that the bigger integer comes first
	else{ lcm = LCM(b,a); }
  
  	cout<<lcm<<"\n";
	
	
    return 0;
   }