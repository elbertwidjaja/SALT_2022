#include <iostream>

using namespace std;

int main(){
	int maximum = 0, count = 0;
	
	int a;
	int input[100005];
	cin>>a;
	for(int i = 0; i < a; i++){
		cin>>input[i];
		maximum = max(input[i],maximum);
	}
	
	for(int i = 0; i < a; i++){
		if (input[i] == maximum) count++;
	}
	cout<<count<<endl;
}
