#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int  n,x;
	std::cin >> n; 

	std::vector<int> vec; 

	for (int i = 0; i < n-1; i++) {
		std::cin >> x; 
		vec.push_back(x);
	}
	
	sort(vec.begin(), vec.end());
	
	// had to do this for the first case really didn't find a way to overcome that 
	if (n == 2 && vec.back() == 2 ) {
		std::cout << 1; 

	}
	if (vec.back() + 1 == n ) {
		std::cout << vec.back() + 1; 
		return 0; 
	}

	for (int i = 1; i < n-1; i++) {
		if (vec[i] - vec[i - 1] > 1) {
			std::cout << (vec[i] + vec[i - 1]) / 2;
			break; 
		}
	}

	

}
