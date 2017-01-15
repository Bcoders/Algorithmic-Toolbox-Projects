#include <iostream>
#include <vector>

using std::cout;

int main(){
	int n;
	std::vector<int> prize;
	std::cin>>n;	

	if(n<= 2) {cout<< 1 << "\n"<< n <<" "; return 0;}
	else{
	    int i = 1;
		bool proceed = true;
		int Remain = n;
		while(proceed){
			prize.push_back(i);
			Remain = Remain - i;
			

			if((Remain - (i+1) > (i+1))){
				i++;
			}

			else if(Remain - (i+1) == 0){
				prize.push_back(Remain);
				proceed = false;
			}

			else{
				prize.push_back(Remain);
				proceed = false;
			}
		}


	}
	cout<<prize.size()<<"\n";

	for (int i = 0; i<prize.size(); i++){
		cout<<prize[i]<<" ";
	}

 return 0;
}

