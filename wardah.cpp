#include<iostream>
using namespace std;
float distance(float km){

	return km*0.621;
	}
float temperature(float c){
	return (c*9/5)+32;
}
int time(int sec){
	int h,m,s;
	 h=sec/3600;
	 m=(sec%3600)/60;
	s=(sec%3600)%60;
    cout<<h<<" Hours  "<<m<<" Minutes  "<<s<<" Seconds  ";
	
}	
		

	
int main(){
	float k,c;
	int sec;
	int menu,choise;
cout<<"----------------Menu--------------"<<endl;
cout<<"1. convert Kilometers to Miles :"<<endl;
cout<<"2. convert Celsius to farhenheit :"<<endl;
cout<<"3. convert Second into Hours,Minutes,Seconds :"<<endl;
cout<<"Enter you choise between 1-3:";
cin>>choise;
switch (choise){
	case 1:
		cout<<"-----------------------convert Kilometers to Miles--------------------"<<endl;
		cout<<"enter value in kilometer:"<<endl;
		cin>>k;
		cout<< k<<"kilometers into Miles"<<distance (k)<<endl;
		break;
		case 2:
		cout<<"-----------------------convert Celsius to farhenheit--------------------"<<endl;
		cout<<"enter Temperature in Celsius:"<<endl;
		cin>>c;
		cout<< c<<"Temperature in Celsius"<<temperature (c)<<endl;
		break;
		case 3:
		cout<<"-----------------------convert Second into Hours,Minutes,Seconds--------------------"<<endl;
		cout<<"enter Second:"<<endl;
		cin>>sec;
		cout<<sec<<" is equal to " <<time(sec)	;
		break;
		default:
			cout<<"Invalid choise!";
}


}