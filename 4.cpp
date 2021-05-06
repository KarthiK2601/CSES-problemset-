#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	long int n, x; 
	std::cin >> n;
	long int size = n; 

	std::vector < int > vec; 

	while (n--) {
		std::cin >> x; 
		vec.push_back(x);
	}

	long int moves = 0; 
	for (long int i = 1; i < size; i++) {
		if (vec[i - 1] - vec[i] >= 1) {
			long int diff = vec[i - 1] - vec[i];
			moves += diff;
			vec[i] += diff; 

		}

	}

	std::cout << moves; 


	

}
