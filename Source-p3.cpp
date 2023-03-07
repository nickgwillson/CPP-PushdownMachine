#include <iostream>
#include <string>
#include <stack>
#include <stdio.h>
#include <cstdlib>
#include <iomanip>

using namespace std;

#define MAX_RULE 10

int main()
{

	int count = 1; // used to keep trakc of the number of rules
	string input, input1, input2, input3;
	string yn;
	bool stay = true;


		cout << "Enter a rule: ";
		getline(cin, input);
		cout << "More rules? ";
		getline(cin, yn);
		if (yn == "y" || yn == "Y") {
			cout << "Enter a rule: ";
			getline(cin, input1); count = 2;
			cout << "More rules? ";
			getline(cin, yn);
			if (yn == "y" || yn =="Y") {
				cout << "Enter a rule: ";
				getline(cin, input2);  count = 3;
				cout << "More rules? ";
				getline(cin, yn);
				if (yn == "y" || yn == "Y") {
					cout << "Enter a rule: ";
					getline(cin, input3);  count = 4;
				}
			}
		}

		string Sa = "reject";
		string Sb = "reject";
		string Ba = "reject";
		string Bb = "reject";

/******************************************************************************************/

		//checking all strings for S -> a ... S -> b											   			 
		if (input[0] == 'S')
		{
			if (Sa == "reject")
			{
				if (input.find('a') != std::string::npos)
				{
					string s1 = "rep(";
					string s2 = input.substr(2, input.size());
					reverse(s2.begin(), s2.end());
					string s3 = "), retain";
					Sa = s1 + s2 + s3;
				}
			}
			if (Sb == "reject")
			{
				if (input.find('b') != std::string::npos)
				{
					string s1 = "rep(";
					string s2 = input.substr(2, input.size());
					reverse(s2.begin(), s2.end());
					string s3 = "), retain";
					Sb = s1 + s2 + s3;
				}
			}
		}
		 if (input1[0] == 'S')
		{
			 if (Sa == "reject")
			 {
				 if (input1.find('a') != std::string::npos)
				 {
					 string s1 = "rep(";
					 string s2 = input1.substr(2, input1.size());
					 reverse(s2.begin(), s2.end());
					 string s3 = "), retain";
					 Sa = s1 + s2 + s3;
				 }
			 }
			if (Sb == "reject")
			{
				if (input1.find('b') != std::string::npos)
				{
					string s1 = "rep(";
					string s2 = input1.substr(2, input1.size());
					reverse(s2.begin(), s2.end());
					string s3 = "), retain";
					Sb = s1 + s2 + s3;
				}
			}
		}
		 if (input2[0] == 'S')
		{
			 if (Sa == "reject")
			 {
				 if (input2.find('a') != std::string::npos)
				 {
					 string s1 = "rep(";
					 string s2 = input2.substr(2, input2.size());
					 reverse(s2.begin(), s2.end());
					 string s3 = "), retain";
					 Sa = s1 + s2 + s3;
				 }
			 }
			 if (Sb == "reject")
			 {
				 if (input2.find('b') != std::string::npos)
				 {
					 string s1 = "rep(";
					 string s2 = input2.substr(2, input2.size());
					 reverse(s2.begin(), s2.end());
					 string s3 = "), retain";
					 Sb = s1 + s2 + s3;
				 }
			 }
		}
		 if (input3[0] == 'S')
		{
			 if (Sa == "reject")
			 {
				 if (input3.find('a') != std::string::npos)
				 {
					 string s1 = "rep(";
					 string s2 = input3.substr(2, input3.size());
					 reverse(s2.begin(), s2.end());
					 string s3 = "), retain";
					 Sa = s1 + s2 + s3;
				 }
			 }
			 if (Sb == "reject")
			 {
				 if (input3.find('b') != std::string::npos)
				 {
					 string s1 = "rep(";
					 string s2 = input3.substr(2, input3.size());
					 reverse(s2.begin(), s2.end());
					 string s3 = "), retain";
					 Sb = s1 + s2 + s3;
				 }
			 }
		}


/*****************************************************************************************/


	   //checking all strings for B -> a ... B -> b
		 if (input[0] == 'B')
		 {
			 if (Ba == "reject")
			 {
				 if (input.find('a') != std::string::npos)
				 {
					 string s1 = "rep(";
					 string s2 = input.substr(2, input.size());
					 reverse(s2.begin(), s2.end());
					 string s3 = "), retain";
					 Ba = s1 + s2 + s3;
				 }
			 }
			 if (Bb == "reject")
			 {
				 if (input.find('b') != std::string::npos)
				 {
					 string s1 = "rep(";
					 string s2 = input.substr(2, input.size());
					 reverse(s2.begin(), s2.end());
					 string s3 = "), retain";
					 Bb = s1 + s2 + s3;
				 }
			 }
		 }
		 if (input1[0] == 'B')
		 {
			 if (Ba == "reject")
			 {
				 if (input1.find('a') != std::string::npos)
				 {
					 string s1 = "rep(";
					 string s2 = input1.substr(2, input1.size());
					 reverse(s2.begin(), s2.end());
					 string s3 = "), retain";
					 Ba = s1 + s2 + s3;
				 }
			 }
			 if (Bb == "reject")
			 {
				 if (input1.find('b') != std::string::npos)
				 {
					 string s1 = "rep(";
					 string s2 = input1.substr(2, input1.size());
					 reverse(s2.begin(), s2.end());
					 string s3 = "), retain";
					 Bb = s1 + s2 + s3;
				 }
			 }
		 }
		 if (input2[0] == 'B')
		 {
			 if (Ba == "reject")
			 {
				 if (input2.find('a') != std::string::npos)
				 {
					 string s1 = "rep(";
					 string s2 = input2.substr(2, input2.size());
					 reverse(s2.begin(), s2.end());
					 string s3 = "), retain";
					 Ba = s1 + s2 + s3;
				 }
			 }
			 if (Bb == "reject")
			 {
				 if (input2.find('b') != std::string::npos)
				 {
					 string s1 = "rep(";
					 string s2 = input2.substr(2, input2.size());
					 reverse(s2.begin(), s2.end());
					 string s3 = "), retain";
					 Bb = s1 + s2 + s3;
				 }
			 }
		 }
		 if (input3[0] == 'B')
		 {
			 if (Ba == "reject")
			 {
				 if (input3.find('a') != std::string::npos)
				 {
					 string s1 = "rep(";
					 string s2 = input3.substr(2, input3.size());
					 reverse(s2.begin(), s2.end());
					 string s3 = "), retain";
					 Ba = s1 + s2 + s3;
				 }
			 }
			 if (Bb == "reject")
			 {
				 if (input3.find('b') != std::string::npos)
				 {
					 string s1 = "rep(";
					 string s2 = input3.substr(2, input3.size());
					 reverse(s2.begin(), s2.end());
					 string s3 = "), retain";
					 Bb = s1 + s2 + s3;
				 }
			 }
		 }



		cout << "The following shows the one-state extended pushdown machine for the grammar." << endl<<endl;
		cout << setw(5) << "" << setw(25) <<    "a" << setw(25) << "b" << setw(25) << "end marker" << endl << endl;
		cout << setw(5) << "S" << setw(25) << Sa << setw(25) << Sb << setw(25) << "reject" << endl << endl;
		cout << setw(5) << "B" << setw(25) << Ba << setw(25) << Bb << setw(25) << "reject" << endl<<endl;
		cout << setw(5) << "a" << setw(25) << "pop, advance" << setw(25) << "reject" << setw(25) << "reject" << endl<<endl;
		cout << setw(5) << "b" << setw(25) << "reject" << setw(25) << "pop, advance" << setw(25) << "reject" << endl<<endl;
		cout << setw(5) << "bottom" << setw(24) << "reject" << setw(25) << "reject" << setw(25) << "accept" << endl << endl;


		cout << "Enter any character to quit" << endl;
		int x; cin >> x;
}