#include <iostream>
#include <string>
#include <fstream>
using namespace std;



//extra staff:

void n2(void){
	cout<<"\n\n";
}
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
	cout<<"What is Your profession ? : ";
}

void question_5(void){ // asking country
	cout<<"Which country do you belong ? : ";
}

void question_6(void){
	cout<<"Your hobby ? : ";
}

void question_7(void){
	cout<<"Your present address ? : ";
}
void question_8(void){
	cout<<"Your favourite food ? : ";
}
void question_9(void){
	cout<<"Gender ? : ";
}
void question_10(void){
	cout<<"Blood group ? : ";
}
void question_11(void){
	cout<<"Recent Institute ? : ";
}
void question_12(void){
	cout<<"Your e-mail ? : ";
}
void question_13(void){
	cout<<"Your birth date ex.(10/05/2000) ? : ";
}
void question_14(void){
	cout<<"Your phone number ? : ";
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
string ans_6(string a){
	string r = a ;
	return r;
}
string ans_7(string a){
	string r = a ;
	return r;
}
string ans_8(string a){
	string r = a ;
	return r;
}
string ans_9(string a){
	string r = a ;
	return r;
}
string ans_10(string a){
	string r = a ;
	return r;
}
string ans_11(string a){
	string r = a ;
	return r;
}
string ans_12(string a){
	string r = a ;
	return r;
}
string ans_13(string a){
	string r = a ;
	return r;
}
string ans_14(string a){
	string r = a ;
	return r;
}


string report(string& q1, string& q2, string& q3, string& q4, string& q5, string& q6, string& q7, string& q8, string& q9, string& q10, string& q11, string& q12, string& q13, string& q14){
string r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11,r12,r13,r14;
r1=q1; r2=q2; r3=q3; r4=q4; r5=q5; r6=q6; r7=q7; r8=q8; r9=q9; r10=q10; r11=q11; r12=q12; r13=q13; r14=q14;

system("CLS");
t6();cout<<"Personal Survey Details\n";
n3();
t1();vl();t1();cout<<"Full Name------------: "<<r1<<" "<<r2<<"\n";
t1();vl();t1();cout<<"e-mail---------------: "<<r12<<"\n";
t1();vl();t1();cout<<"Institute------------: "<<r11<<"\n";
t1();vl();t1();cout<<"Phone Number---------: "<<r14<<"\n";
t1();vl();t1();cout<<"Sex------------------: "<<r9<<"\n";
t1();vl();t1();cout<<"Age------------------: "<<r3<<"\n";
t1();vl();t1();cout<<"Profession-----------: "<<r4<<"\n";
t1();vl();t1();cout<<"Blood Group----------: "<<r10<<"\n";
t1();vl();t1();cout<<"Degree---------------: "<<r9<<"\n";
t1();vl();t1();cout<<"Date of Birth--------: "<<r13<<"\n";  
n2();
t1();vl();t1();cout<<"Country--------------: "<<r5<<"\n";               
t1();vl();t1();cout<<"Address--------------: "<<r7<<"\n";          
n2();
t1();vl();t1();cout<<"Hobby----------------: "<<r6<<"\n";
t1();vl();t1();cout<<"Favourite Food-------: "<<r8<<"\n";
n3();
n3();
t6();cout<<"Created by Rafiul Omar | 2021-06-14. ";

system("pause");
system("CLS");

point_15:
t6();cout<<"Personal Survey Details\n";
cout<<"Do you want to export your information in text ?[y/n] : ";

string z;
getline(cin, z);

if (q1.empty()){
		system("CLS");
		n3();
		goto point_15;
	}


if( z =="y" || z == "Y"){
	ofstream myfile("Data.txt");
if (myfile.is_open()){
myfile<<"\t\t\t\t\t\tPersonal Survey Details\n\n\n\n"
<<"Full Name------------: "<<r1<<" "<<r2<<"\n"
<<"e-mail---------------: "<<r12<<"\n"
<<"Institute------------: "<<r11<<"\n"
<<"Phone Number---------: "<<r14<<"\n"
<<"Sex------------------: "<<r9<<"\n"
<<"Age------------------: "<<r3<<"\n"
<<"Profession-----------: "<<r4<<"\n"
<<"Blood Group----------: "<<r10<<"\n"
<<"Degree---------------: "<<r9<<"\n"
<<"Date of Birth--------: "<<r13<<"\n"
<<"Country--------------: "<<r5<<"\n"
<<"Address--------------: "<<r7<<"\n"
<<"Hobby----------------: "<<r6<<"\n"
<<"Favourite Food-------: "<<r8<<"\n"
<<"\n\n\n\n\n\n\n\t\t\t\t\t\tCreated by Rafiul Omar | 2021-06-14.";

myfile.close();

	}
}




return r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11,r12,r13,r14;
}




int main(){
	

	
	string q1, q2, q3, q4, q5, q6, q7, q8, q9, q10, q11, q12, q13, q14, an1 ,an2, an3, an4, an5, an6, an7, an8, an9, an10, an11, an12, an13, an14;


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



	system("CLS");
	welcome();
	n3();
point_6:
	question_6();
	getline(cin, q6);
	if(q6.empty()){
		system("CLS");
		welcome();
		n3();
		goto point_6;
	}
	an6 = ans_6(q6);


	system("CLS");
	welcome();
	n3();
point_7:
	question_7();
	getline(cin, q7);
	if(q7.empty()){
		system("CLS");
		welcome();
		n3();
		goto point_7;
	}
	an7 = ans_7(q7);



	system("CLS");
	welcome();
	n3();
point_8:
	question_8();
	getline(cin, q8);
	if(q8.empty()){
		system("CLS");
		welcome();
		n3();
		goto point_8;
	}
	an8 = ans_8(q8);


	system("CLS");
	welcome();
	n3();
point_9:
	question_9();
	getline(cin, q9);
	if(q9.empty()){
		system("CLS");
		welcome();
		n3();
		goto point_9;
	}
	an9 = ans_9(q9);



	system("CLS");
	welcome();
	n3();
point_10:
	question_10();
	getline(cin, q10);
	if(q10.empty()){
		system("CLS");
		welcome();
		n3();
		goto point_10;
	}
	an10 = ans_10(q10);



	system("CLS");
	welcome();
	n3();
point_11:
	question_11();
	getline(cin, q11);
	if(q11.empty()){
		system("CLS");
		welcome();
		n3();
		goto point_11;
	}
	an11 = ans_11(q11);




	system("CLS");
	welcome();
	n3();
point_12:
	question_12();
	getline(cin, q12);
	if(q12.empty()){
		system("CLS");
		welcome();
		n3();
		goto point_12;
	}
	an12 = ans_12(q12);




	system("CLS");
	welcome();
	n3();
point_13:
	question_13();
	getline(cin, q13);
	if(q13.empty()){
		system("CLS");
		welcome();
		n3();
		goto point_13;
	}
	an13 = ans_13(q13);


	system("CLS");
	welcome();
	n3();
point_14:
	question_14();
	getline(cin, q14);
	if(q14.empty()){
		system("CLS");
		welcome();
		n3();
		goto point_14;
	}
	an14 = ans_5(q14);

//showing report though reports function

	report(an1, an2, an3, an4, an5, an6, an7,an8, an9, an10, an11, an12, an13, an14);

 	system("exit");
	return 0;
}