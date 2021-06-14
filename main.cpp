#include <iostream>
#include <string>
using namespace std;



//extra staff:

void n3(void){ // taking 3 new lines
	cout<<"\n\n\n\n";
}

void t6(void){ // taking 5 tabs
	cout<<"\t\t\t\t\t\t";
}

void t1(void){
	cout<<"\t";
}

void vh(void){
	cout<<"-------------------------------------------------------------------";
}

void vl(void){
	cout<<"|";
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

string report(string& q1, string& q2, string& q3, string& q4, string& q5){
string r1,r2,r3,r4,r5;
r1=q1; r2=q2; r3=q3; r4=q4; r5=q5;

system("CLS");
t6();cout<<"Personal Survey Details\n";
t1();t1();t1();t1();vh();t6();
n3();
t1();vl();t1();cout<<"Full Name : "<<r1<<" "<<r2<<"\n";
t1();vl();t1();cout<<"Age       : "<<r3<<"\n";
t1();vl();t1();cout<<"Profession: "<<r4<<"\n";
t1();vl();t1();cout<<"Country   : "<<r5<<"\n";

n3();
n3();
t6();cout<<"Created by Rafiul Omar | 2021-06-14. ";

return r1,r2,r3,r4,r5;
}


int main(){
	

	
	string q1, q2, q3, q4, q5, q6, q7, q8, an1 ,an2, an3, an4, an5;


	system("CLS");
	welcome();
	n3();
point_1:
	question_1();
	getline(cin, q1);
	if (q1.empty()){
		system("CLS");
		welcome();
		n3();
		goto point_1;
	}
	an1 = ans_1(q1);



	system("CLS");
	welcome();
	n3();
point_2:
	question_2();
	getline(cin, q2);
	if(q2.empty()){
		system("CLS");
		welcome();
		n3();
		goto point_2;
	}
	an2 = ans_2(q2);
	


	system("CLS");
	welcome();
	n3();
point_3:
	question_3();
	getline(cin, q3);
	if(q3.empty()){
		system("CLS");
		welcome();
		n3();
		goto point_3;
	}
	an3 = ans_3(q3);



	system("CLS");
	welcome();
	n3();
point_4:
	question_4();
	getline(cin, q4);
	if(q4.empty()){
		system("CLS");
		welcome();
		n3();
		goto point_4;
	}
	an4 = ans_4(q4);



	system("CLS");
	welcome();
	n3();
point_5:
	question_5();
	getline(cin, q5);
	if(q5.empty()){
		system("CLS");
		welcome();
		n3();
		goto point_5;
	}
	an5 = ans_5(q5);



//showing report though reports function

	report(an1, an2, an3, an4, an5);

	return 0;
}