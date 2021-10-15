 /* Simulate Cyclic Redundancy Check (CRC) error detection algorithm for a noisy channel.
 */

#include <iostream>
#include <ctime>

using namespace std;

const int generator[] = {1, 0, 0, 1, 1};
const int gSize = sizeof(generator) / sizeof(generator[0]);

int main(){
	// Message
	int mSize;
	int message[255];
	
	cout << "Enter Message Size: ";
	cin >> mSize;

	cout << "Enter Message: ";
	for (int i=0; i<mSize; i++)
		cin >> message[i];

	cout << "\nSENDER\n======\n";
	cout << "Message: ";

	for (int i=0; i<mSize; i++)
		cout << message[i];
	cout << std:: endl;

	cout << "Generator: ";
	for (int i=0; i<gSize; i++)
		cout << generator[i];
	cout << endl;

	// Message + r 0's
	int codeword[mSize + (gSize - 1)];
	for (int i=0; i<mSize; i++)
		codeword[i] = message[i];
	for (int i=mSize; i<mSize + (gSize - 1); i++)
		codeword[i] = 0;

	// Binary Division
	int temp[mSize + (gSize - 1)];
	for (int i=0; i<mSize + (gSize - 1); i++)
		temp[i] = codeword[i];
	for (int i = 0; i < mSize; i++){
		int j = 0, k = i;
		if (temp[k] >= generator[j])
			while (j < gSize)
				temp[k++] ^= generator[j++];
	}

	// CRC
	int crc[64];
	for (int i=0, j=mSize; i<(gSize - 1); i++, j++)
		crc[i] = temp[j];

	cout << "Checksum: ";
	for (int i=0; i<(gSize - 1); i++)
		cout << crc[i];
	cout << endl;

	// Codeword + CRC
	for (int i=0, j=mSize; i<(gSize - 1); i++, j++)
		codeword[j] = crc[i];

	cout << "Transmitted Codeword: ";
	for (int i=0; i<mSize + (gSize - 1); i++)
		cout << codeword[i];
	cout << endl;

	cout << "\nNOISY CHANNEL SIMULATION\n========================\n";
	int n;
	srand(time(0));
	n = rand() % (sizeof(codeword) / sizeof(codeword[0]));
	
	if (n < mSize){
		if (codeword[n] == 0)
			codeword[n] = 1;
		else
			codeword[n] = 0;
	}
	else
		cout << "Invalid Request. Codeword Not Changed.\n";

	cout << "\nRECEIVER\n========\n";
	cout << "Received Codeword: ";
	for (int i=0; i<mSize + (gSize - 1); i++)
		cout << codeword[i];
	cout << endl;

	// Binary Division
	int temp2[mSize + (gSize - 1)];
	for (int i=0; i<mSize + (gSize - 1); i++)
		temp2[i] = codeword[i];
	for (int i=0; i<mSize; i++)
	{
		int j = 0, k = i;
		if (temp2[k] >= generator[j])
			while (j < gSize)
				temp2[k++] ^= generator[j++];
	}

	// Remainder
	int rem[64];
	for (int i=mSize, j=0; i<mSize + (gSize - 1); i++, j++)
		rem[j] = temp2[i];

	cout << "Remainder: ";
	for (int i=0; i<(gSize - 1); i++)
		cout << rem[i];
	cout << endl;

	// Checking Error
	int flag = false;
	for (int i=0; i<(gSize - 1); i++)
		if (rem[i] != 0)
			flag = true;

	// Declare Result
	cout << endl;
	if (!flag)
		cout << "TRANSMISSION OK!" << endl;
	else
		cout << "TRANSMISSION ERROR DETECTED!" << endl;

return 0;
}