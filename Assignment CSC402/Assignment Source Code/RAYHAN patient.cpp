#include <iostream>
using namespace std;

struct Pneumonia {
	string patientName;
	char patientGender;
	int patientAge;
	int noOfDaysInWard;
};

Pneumonia enterData(Pneumonia pInfo);
void totalMaleFemale(Pneumonia pInfo[], int recCount);
void findNameTotalExceedFiveDays(Pneumonia pInfo[], int recCount);

int main() {
	Pneumonia patientInfo[100];
	int recordCount = 0;
	bool contProg = true;
	char addRecord;
	
	while(contProg != false){
		cout << "Add a patient record [y - yes / n - no] ? ";
		cin >> addRecord;
		if(addRecord == 'y'){
			cout << endl;
			patientInfo[recordCount] = enterData(patientInfo[recordCount]); 
			cout << endl;
		} else {
			contProg = false;
		}
		
		recordCount++;
	}
	
	cout << "---------------------------------------------------------" << endl;
	
	totalMaleFemale(patientInfo, recordCount);
	cout << endl;
	findNameTotalExceedFiveDays(patientInfo, recordCount);
	
	return 0;
}

Pneumonia enterData(Pneumonia pInfo){
	cout << "Please enter patient name : ";
	getline(cin >> ws,pInfo.patientName);
	cout << "Please enter patient gender [ m - male / f - female] : ";
	cin >> pInfo.patientGender;
	cout << "Please enter patient age : ";
	cin >> pInfo.patientAge;
	cout << "Please enter no of days patient in the ward : ";
	cin >> pInfo.noOfDaysInWard;
	
	return pInfo;
}

void totalMaleFemale(Pneumonia pInfo[], int recCount){
	int noOfMales = 0, noOfFemales = 0;
	for(int i = 0; i < recCount; i++){
		if(pInfo[i].patientGender == 'm'){
			noOfMales++;
		} else if(pInfo[i].patientGender == 'f'){
			noOfFemales++;
		}
	}
	
	cout << "Number of males patients suffering from pnuemonia : " << noOfMales << endl;
	cout << "Number of females patients suffering from pnuemonia : " << noOfFemales << endl;
}

void findNameTotalExceedFiveDays(Pneumonia pInfo[], int recCount){
	bool condition = false;
	for(int i = 0; i < recCount; i++){
		if(pInfo[i].noOfDaysInWard > 5){
			condition = true;
		}
	}
	
	if(condition != false) {
		cout << "List of patient names & their length of stay in the ward that exceeds five days :";
		cout << endl;
		for(int i = 0; i < recCount; i++){
			if(pInfo[i].noOfDaysInWard > 5){
				cout << pInfo[i].patientName << "	" << pInfo[i].noOfDaysInWard << " days" << endl;
			}
		}
	} else {
		cout << "There's no patient that length of stay exceed five days...";
	}
	
}
