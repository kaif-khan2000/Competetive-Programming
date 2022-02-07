#include<fstream>
#include<vector>
#include<map>
#include<algorithm>
#include<iomanip>

using namespace std;
void sortDNA(string & dna){
	map<char, int> occ;
	for(char chem: dna){
		occ[chem] ++;
	}

	vector<char> chem = {'A','C','G','T'};
	string ret = "";
	for (char c: chem){
		for (int i = 0; i < occ[c]; i++)
		{
			ret.push_back(c);
		}
	}
	dna = ret;
	

}
int main() {
	ifstream cin;
	cin.open("dna.txt");
	string dna;
	cin >> dna;
	cin.close();
	
	sortDNA(dna);
	
	ofstream cout;
	cout.open("sortedDNA.txt");
	cout<< dna << '\n';
	cout.close();
	return 0;
}
