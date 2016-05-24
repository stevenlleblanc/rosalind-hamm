/* Solution to rosalind.info/problems/hamm, "Counting Point Mutations.
 * Calculates the Hamming distance between two strings of equal length,
 * which is simply the number of mismatches between the two strings.
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

unsigned int hamming_distance(const string seq[2]) {
	// As simple as it gets - loops through each value to check for a mismatch,
	// increments counter when it does

	unsigned int counter = 0;

	if (seq[0].length() == seq[1].length()) {
		for (unsigned int i = 0; i < seq[0].length(); i++) {
			if (!(seq[0][i] == seq[1][i])) {
				counter++;
			}
		}
		return counter;
	}
	else {
		cout << "Strings are of different lengths." << endl;
		return counter;
	}
}

int main() {

	ifstream input("rosalind_hamm.txt");

	string seq[2];

	if (input.is_open()) {
		getline(input, seq[0]);
		getline(input, seq[1]);

		//cout << seq[0] << endl;
		//cout << seq[1] << endl;

		cout << hamming_distance(seq) << endl;

	}
	else {
		cout << "Could not open file." << endl;
		return 1;
	}

	return 0;
}