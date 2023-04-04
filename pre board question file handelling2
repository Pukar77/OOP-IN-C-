#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	ifstream in;
	in.open("yellow.txt");
	string player_name;
	int yellow=0;
	
	string max_player;
	int max_yellow;
	
	while(in>>max_player>>max_yellow){
		if(max_yellow>yellow){
		yellow=max_yellow;
		player_name=max_player;
		}
	}
	cout<<"The player who got maximum golden boot is "<<player_name<<endl;
	
	
	return 0;
}
