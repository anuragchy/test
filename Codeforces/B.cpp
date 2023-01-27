#include <set>
#include <iostream>
using namespace std;

// This was supposed to be hard

int main(){
	int n, a;
	cin >> n;
	set<int> s;
	for(int i = 0; i < n; i++){
		cin >> a;
		s.insert(a);
	}
	cout << "No. of unique elements : " << s.size() << endl;
	return 0;
}
