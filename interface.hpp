/*
 * interface.hpp
 *
 *  Created on: 26 aug. 2014
 *      Author: Sander
 */

#define NAAM_LEN 10
#define max_aantal_leden 3
#define max_aantal_activiteiten 4
typedef enum sig{okS, vol, niet_aanwezig, leeg} sig; //creeer sig type enum

class lid{
private:
	char lid_naam[NAAM_LEN];
	int lid_nummer;
public:
	void lees_lid_naam(); //lees de naam van een nieuw lid in
	void show_lid_naam(); //toon de naam van een lid
	void get_lid_naam(char *lid_naam); //geef het lid_naam van een lid
	int get_lid_nummer();//geef het lidnummer van een lid
};

class leden{
public:
	lid leden_array[max_aantal_leden];
private:
	int aantal_leden;
public:
	leden(); //constructor
//	~leden(); //destructor

	sig get_leden(); //verkrijg alle leden, okS, leeg
	sig voegtoe_leden(); //voeg een lid toe, okS, vol
	int show_leden_aantal();//geef het aantal ingevoerde leden terug,
	sig zoek_lid(char *zoeknaam);//geef naam + lidnummer, okS, niet_aanwezig
};

