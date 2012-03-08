/*
 * FotoScherm.cpp
 *
 *  Created on: 3 mrt. 2012
 *      Author: acer
 */

#include "FotoScherm.h"

FotoScherm::FotoScherm()
{
	//het optiescherm
	this->optieScherm = new OptieScherm( this );


	//bepaal grootte van het scherm

	//standaard font en grafisch uiterlijk (uit de resource file res.lst)
	Font* font = new MAUI::Font(RES_FONT);
	WidgetSkin* skin = new WidgetSkin( RES_SELECTED, RES_UNSELECTED, 16, 32, 16, 32, false, false );

	//maak een label die andere widgets straks bevat, en een achtergrondkleur heeft

	//maak een plaatje (laden uit de resource file res.lst) en voeg label als parent toe

	//maak tekst bij het plaatje met een label

	//stel dit scherm in als het main scherm, met achtergrondlabel als de basis widget
	this->setMain( this->achtergrondLabel );
}


FotoScherm::~FotoScherm()
{

}


//show() override de show() van de super klasse (Screen), omdat we bij showen eerst opties willen ophalen
void FotoScherm::show()
{
	//roep de show() van de superklasse (Screen) aan
	this->Screen::show();

	//haal informatie achtergrondkleur op van optiescherm
	this->achtergrondLabel->setBackgroundColor( this->optieScherm->getAchtergrondOptie() );

	//haal informatie imagetekst op van optiescherm
	this->imageTekst->setCaption( this->optieScherm->getImagetekst() );
}



//afvangen invoer
void FotoScherm::keyPressEvent(int keyCode, int nativeCode)
{
	//bij indrukken van de MAK_FIRE toets, laat optiescherm zien
}

void FotoScherm::pointerPressEvent(MAPoint2d point)
{
	//bij touch, laat optiescherm zien
}


