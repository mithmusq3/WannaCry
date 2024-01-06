//print all duplicates in a string
#include <bits/stdc++.h>
using namespace std;
void printDups(string x){
	unordered_map<char, int> count;
	for (int i = 0; i < x.length(); i++) 
		count[x[i]]++;
	for (auto it : count) {
		if (it.second > 1)
			cout << it.first << ", count = " << it.second << "\n";
	}
}

int main(){
	string str = "test string";
	printDups(str);
	return 0;
}
