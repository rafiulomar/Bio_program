#include <iostream>
#include <string>
using namespace std;


//extra staff:

void n3(void){ // taking 3 new lines
	cout<<"\n\n\n\n";
}


//questions parts:

void welcome(void){ // info about starting details
	cout<<"\t\t\t\t\tWelcome to Pesonal Survey Program";	
}
void question_1(void){ // asking first name
	cout<<"What is your first name ? : ";
}

void question_2(void){ // asking last name
	cout<<"What is your last name ? : ";
}

void question_3(void){ // asking recent age 
	cout<<"What is your actual age ? : ";
}

void question_4(void){ // asking profession
	cout<<"What is your Profession ? : ";
}

void question_5(void){ // asking country
	cout<<"Which country do you belong ? : ";
}


// getting answars:


string ans_1(string a){
	string r = a ;
	return r;
}

string ans_2(string a){
	string r = a ;
	return r;
}

string ans_3(string a){
	string r = a ;
	return r;
}

string ans_4(string a){
	string r = a ;
	return r;
}

string ans_5(string a){
	string r = a ;
	return r;
}




int main(){
	welcome();
	
	string q1, q2, q3, q4, q5, q6, q7, q8;



	n3();
	question_1();
	getline(cin, q1);
	ans_1(q1);



	n3();
	question_2();
	getline(cin, q2);
	ans_2(q2);
	
	

	n3();
	question_3();
	getline(cin, q3);
	ans_3(q3);



	n3();
	question_4();
	getline(cin, q4);
	ans_4(q4);


	n3();
	question_5();
	getline(cin, q5);
	ans_5(q5);



	return 0;
}