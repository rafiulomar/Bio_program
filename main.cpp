#include <iostream>
#include <string>
using namespace std;

void welcome(void){ // info about starting details
	cout<<"Welcome to Pesonal Survey Program";	
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

void question_4(void){
	cout<<"What is your Profession ? : ";
}

void question_5(void){
	cout<<"Which country do you belong ? : ";
}


int main(){
	question_1();
	question_2();
	question_3();
	question_4();
	question_5();




	return 0;
}