/*

	Lab 4
	Assignment 2 
	September 26th, 2014
	Daniel Perez

	This program gets the stay status, age, gender, and length of stay for each patient, then displays the total
	# of people who answered the survey, that were still hospitalized, that were released, that were male or
	female, that were under 40, 40 and over, the average length of stay for hospitalized patients, and the
	average length of stay for released patients.

*/

#include <iostream>
using namespace std;

void main()
{
	
	char   stayStatus;
	int    age;
	char   gender;
	int    stayLength;
	int    totalPatients;
	int    totalHospitalized;
	int    totalReleased;
	int    totalMale;
	int    totalFemale;
	int    totalUnder40;
	int    total40Plus;
	int    totalHStay;
	int    totalRStay;
	double averageHStay;
	double averageRStay;

	totalPatients     = 0;
	totalHospitalized = 0;
	totalReleased     = 0;
	totalMale         = 0;
	totalFemale       = 0;
	totalUnder40      = 0;
	total40Plus       = 0;
	totalHStay        = 0;
	totalRStay        = 0;


	cout << "John Abbott Hospital Survey" << endl;
	cout << endl << endl;

	cout << "Survey #1" << endl;
	cout << "Stay status (H or R, X to stop): ";
	cin  >> stayStatus;
	
	stayStatus = toupper(stayStatus);

	while (stayStatus != 'H' && stayStatus != 'R' && stayStatus != 'X')
	{
		cout << "Invalid. Re-enter: ";
		cin  >> stayStatus;
		stayStatus = toupper(stayStatus);
	}
	
	while (stayStatus != 'X')
	{
		cout << "Age (18 to 80):                  ";
		cin  >> age;
			
			while (age < 18 || age > 80)
			{
				cout << "Invalid. Re-enter: ";
				cin  >> age;
			}
		
		cout << "Gender (M or F):                 ";
		cin >> gender;

		gender = toupper(gender);

			while (gender != 'M' && gender != 'F')
			{
				cout << "Invalid. Re-enter: ";
				cin >> gender;
				gender = toupper(gender);
			}
		
		cout << "Length of stay (1 to 60):        ";
		cin  >> stayLength;
			
			while (stayLength < 1 || stayLength > 60)
			{
				cout << "Invalid. Re-enter: ";
				cin  >> stayLength;
			}

		totalPatients = totalPatients + 1;

		if (stayStatus == 'H')
		
			totalHospitalized = totalHospitalized + 1;
		
		else
		
			totalReleased = totalReleased + 1;
		
		if (gender == 'M')
		
			totalMale = totalMale + 1;
		
		else
		
			totalFemale = totalFemale + 1;
		
		if (age >= 40)
		
			total40Plus = total40Plus + 1;
		
		else
		
			totalUnder40 = totalUnder40 + 1;
		
		if (stayStatus == 'H')
		
			totalHStay = totalHStay + stayLength;
		
		else
		
			totalRStay = totalRStay + stayLength;
		
		
		cout << endl << endl;
		cout << "Survey # " << totalPatients + 1 << endl;
		cout << "Stay status (H or R, X to stop): ";
		cin  >> stayStatus;

		stayStatus = toupper(stayStatus);

		while (stayStatus != 'H' && stayStatus != 'R' && stayStatus != 'X')
		{
			cout << "Invalid. Re-enter: ";
			cin  >> stayStatus;
			stayStatus = toupper(stayStatus);
		}
	}

	if (totalPatients > 0)
	{
		system("cls");
		
		cout << "John ABBott Hospital Survey Statistics"   << endl;
		cout << endl << endl;
		cout << "Total # of surveyed partients: "          << totalPatients     << endl;
		cout << endl;
		cout << "Total # of patients still hospitalized: " << totalHospitalized << endl;
		cout << "Total # of patients released:           " << totalReleased     << endl;
		cout << endl;
		cout << "Total # of male patients:   " << totalMale         << endl;
		cout << "Total # of female patients: " << totalFemale       << endl;
		cout << endl;
		cout << "Total # of patients under 40:    " << totalUnder40      << endl;
		cout << "Total # of patients 40 and over: " << total40Plus       << endl;
		cout << endl; 
		
		if (totalHospitalized > 0)
		{
			averageHStay = (double)totalHStay / totalHospitalized;
			cout << "Average Length of stay of hospitalized patients: " << averageHStay << endl;
		}
		else
		{
			cout << "N/A" << endl;
		}
		if (totalReleased > 0)
		{
			averageRStay = (double)totalRStay / totalReleased;
			cout << "Average length of stay of released patients:    " << averageRStay << endl;
		}
		else
		{
			cout << "N/A" << endl;
		}
	}
}