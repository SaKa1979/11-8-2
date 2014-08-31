/*
 * implementation.cpp
 *
 *  Created on: 26 aug. 2014
 *      Author: Sander
 */
#include <iostream>
#include <string.h>
#include "interface.hpp"

using namespace std;

/*									class lid							*/
//lees de naam van een nieuw lid in
void lid::lees_lid_naam(){
	cout<<"naam :"; cin>>lid_naam;
	cout<<"lidnummer :"; cin>>lid_nummer;
}

//toon de naam van een lid
void lid::show_lid_naam(){
cout<<"naam is :"<<lid_naam<<endl;
cout<<"lidnummer is :"<<lid_nummer<<endl;
}

//geef het lid_naam van een lid
void lid::get_lid_naam(char *lid_naam){
strncpy(lid_naam,this->lid_naam,NAAM_LEN);
}

//geef het lidnummer van een lid
int lid::get_lid_nummer(){
	return this->lid_nummer;
}

/*									class leden							*/
//toon alle leden
sig leden::get_leden(){
	if(aantal_leden==0)return leeg;
	for(int i=0;i<aantal_leden;i++){
		leden_array[i].show_lid_naam();
		}
	return okS;
}
//voeg een lid toe
sig leden::voegtoe_leden(){
	if (aantal_leden<max_aantal_leden){
		leden_array[aantal_leden++].lees_lid_naam();
		return okS; //lid is toegevoegd
		}
	return vol;//array is vol
}
//geef het aantal ingevoerde leden
int leden::show_leden_aantal(){
	return aantal_leden;
}
//geeft naam + lidnummer
sig leden::zoek_lid(char *zoeknaam){
	char temp_lid_naam[NAAM_LEN];
	if(aantal_leden==0)return leeg;
	for(int i=0;i<aantal_leden;i++){
		leden_array[i].get_lid_naam(temp_lid_naam);//kopieer lid_naam naar temp_lid_naam
		if(zoeknaam==temp_lid_naam){
			leden_array[i].show_lid_naam();
			return okS;
			}
		}
	return niet_aanwezig;
}
//constructor
leden::leden(){
	aantal_leden=0;
}


//error handling
void errMsg(int code){
	switch(code){
	case okS: cout<<"oke"<<endl;
	break;
	case vol: cout<<"de array is vol"<<endl;
	break;
	case niet_aanwezig: cout<<"persoon is niet aanwezig"<<endl;
	break;
	case leeg: cout<<"niets te zien"<<endl;
	break;
	default: cout<<"error niet geimplementeerd"<<endl;
	}
}


int main(void){

leden p; //object p van class leden
int keuze;
char input_zoek_lid[NAAM_LEN];
sig err;

	do{
		cout<<endl;
		cout<<"menu: ;"<<endl;
		cout<<"0: einde "<<endl;
		cout<<"1: voeg lid toe"<<endl;
		cout<<"2: show alle leden "<<endl;
		cout<<"3: show leden aantal "<<endl;
		cout<<"4: zoek een lid: "<<endl;
		cout<<"kies :"; cin>>keuze;
		cout<<endl;

		switch(keuze){
		case 0: cout<<"end"<<endl;break;
			break;
		case 1: if ((err=p.voegtoe_leden())!=okS)errMsg(err);//err krijgt de waarde van p.voegtoe_leden. Is deze ongelijk aan okS dan wordt de waarde doorgegeven aan errMsg
		break;
		case 2: if ((err=p.get_leden())!=okS)errMsg(err);
		break;
		case 3: cout<<"het huidige aantal leden is "<<p.show_leden_aantal()<<endl;
		break;
		case 4: cout<<"geeft de naam op :"; cin>>input_zoek_lid;
				if ((err=p.zoek_lid(input_zoek_lid))!=okS)errMsg(err);
		break;
		default: cout<<"onjuiste keuze "<<endl;;
		}//switch
	}
	while(keuze);
	return 0;
}



