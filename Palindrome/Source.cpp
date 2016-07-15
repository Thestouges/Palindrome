#include <iostream>
#include <string>

using namespace std;

bool palindromeCheck(string);

void main(){
	string input;
	int result = 0;
	
	cout<<"Enter string:";
	getline(cin,input);

	if(palindromeCheck(input))
		cout<<input<<" is a palindrome."<<endl;
	else
		cout<<input<<" is not a palindrome."<<endl;
}

bool palindromeCheck(string input){
	for(int i = 0; i < input.length()/2; i++){
		cout<<input[i]<<" "<<input[input.length()-1-i]<<endl;
		if(input[i] != input[input.length()-1-i])
			return false;
	}
	return true;
}