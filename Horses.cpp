#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<iomanip>

using namespace std;
struct race {
	int pos1,pos2;
	string startTime; // HH:MM
	double multiplierHorse1, multiplierDraw,multiplierHorse2;

	race(int p1, int p2,string h,  double g1, double draw,double g2){
		pos1 = p1;
		pos2 = p2;
		startTime = h;
		multiplierHorse1 = g1;
		multiplierDraw = draw;
		multiplierHorse2 = g2;
	}

	friend bool operator < (race & race1, race & race2){
		return race1.startTime < race2.startTime;
	}
};


void inputTable(map<string,int> & horseToPosition){
	
	string name;
	for (int i = 0; i < 20; i++)
	{
		cin >> name;
		horseToPosition[name] = i;
	}
	
}
void inputRaces(vector<race> & races, map<string,int> & horseToPostion){
	string horse1,horse2, startTime;
	double mult1,mult2,mult3;
	for (int i = 0; i < 10; i++)
	{
		cin >> horse1 >> horse2 >> startTime;
		cin >> mult1 >> mult2 >> mult3;
		races[i] = race(horseToPostion[horse1], horseToPostion[horse2], startTime, mult1,mult2,mult3);
	} 
	
}

/* alternative way of providing comaprision.
bool compareRaces(race & race1 , race & race2) {
	return race1.startTime <= race2.startTime;
}
*/
void sortRaces(vector<race> & races){
	sort(races.begin(), races.end());
	// sort(races.begin(), races.end(), compareRaces);
}

double findBestStratergy(vector<race> & races){}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	map<string, int> horseToPosition;
	inputTable(horseToPosition);

	vector<race> races(10,race(0,0,"00:00",1,1,1));
	inputRaces(races, horseToPosition);

	sortRaces(races);
	cout<< fixed << setprecision(1) << findBestStratergy(races) << '\n';
}
