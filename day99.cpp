// C implementation to Sort strings
// according to the frequency of
// characters in ascending order

#include <stdio.h>
#include <string.h>

// Returns count of character in the string
int countFrequency(char str[], char ch)
{
	int count = 0;

	for (int i = 0; i < strlen(str); i++) {
		// Check for vowel
		if (str[i] == ch)
			++count;
	}

	return count;
}

// Function to sort the string
// according to the frequency
void sortArr(char str[])
{
	int n = strlen(str);

	// Array of pairs to store the frequency of
	// characters with respective character
	struct Pair {
		int count;
		char ch;
	} pairs[n];

	int numOfPairs = 0;

	// Inserting frequency
	// with respective character
	// in the array of pairs
	for (int i = 0; i < n; i++) {
		int count = countFrequency(str, str[i]);

		int found = 0;
		for (int j = 0; j < numOfPairs; j++) {
			if (pairs[j].ch == str[i]) {
				pairs[j].count = count;
				found = 1;
				break;
			}
		}

		if (!found) {
			pairs[numOfPairs].count = count;
			pairs[numOfPairs].ch = str[i];
			numOfPairs++;
		}
	}

	// Sort the array of pairs, this will sort the pair
	// according to the number of characters
	for (int i = 0; i < numOfPairs - 1; i++) {
		for (int j = i + 1; j < numOfPairs; j++) {
			if (pairs[i].count > pairs[j].count) {
				struct Pair temp = pairs[i];
				pairs[i] = pairs[j];
				pairs[j] = temp;
			}
		}
	}

	// Print the sorted array of pairs content
	for (int i = 0; i < numOfPairs; i++) {
		for (int j = 0; j < pairs[i].count; j++) {
			printf("%c", pairs[i].ch);
		}
	}
}

// Driver code
int main()
{
	char str[] = "geeksforgeeks";

	sortArr(str);

	return 0;
}
