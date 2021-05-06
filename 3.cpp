#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string dna; 
	std::cin >> dna; 

	sort(dna.begin(), dna.end());

	int A = 0, C = 0, G = 0, T = 0;

	for (int i = 0; i < dna.size(); i++) {
		if (dna [i] == 'A')
			A++;
		if (dna[i] == 'C')
			C++;
		if (dna[i] == 'G')
			G++;
		if (dna[i] == 'T')
			T++;
}

	std::cout <<max( max(A, C) ,max ( G, T))

	

}
