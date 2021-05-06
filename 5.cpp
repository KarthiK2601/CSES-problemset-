#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

void swap(long int& a, long int& b) {
	long int temp;
	temp = a;
	a = b;
	b = temp; 


}



int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	long int n ; 
	std::cin >> n;
	long int size = n; 

	std::vector < int > vec; 

	while (n!=0) { 
		vec.push_back(n);
		n -= 1;

	}

	int swaps = 0; 
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if ((j - i) == (vec[j] - vec[i])) {
				swap(vec[i], vec[j]);
				swaps++;
				break; 

			}
		}
	}

	if (swaps >= 1) {
		for (int i = 0; i < size; i++) {
			std::cout << vec[i];
		}
	}

	else
		std::cout << "NO SOLUTION";

}
