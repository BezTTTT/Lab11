#include<iostream>
#include<string>
using namespace std;

int main()
{	
	char grade;
	char score[5]= {'A','B','C','D','F'};
	int count[5] = {};
	int num=1;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" <<num<< "]: ";
		cin >> grade;
		if(grade == score[0]){
			count[0]++;
			num++;
		}else if(grade == score[1]){
			count[1]++;
			num++;
		}else if(grade == score[2]){
			count[2]++;
			num++;
		}else if(grade == score[3]){	
			count[3]++;
			num++;
		}else if(grade == score[4]){
			count[4]++;
			num++;
		}else{
			if(grade != '0')
			cout << "Wrong input. Please input again.\n"; 
		}
	} while(grade != '0');
	num = num-1;
	cout << "In total " << num << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	
	return 0;
}
