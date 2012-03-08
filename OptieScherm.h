/*
 * OptieScherm.h
 *
 *  Created on: 3 mrt. 2012
 *      Author: acer
 */

#ifndef OPTIESCHERM_H_
#define OPTIESCHERM_H_


#include <MAUTIL/Moblet.h>
#include <MAUI/Screen.h>
#include <MAUI/Label.h>
#include <MAUI/EditBox.h>
#include <MAUI/ListBox.h>

#include <MAUTIL/Vector.h>

#include "conprint.h"

#include "MAHeaders.h"


using namespace MAUtil;
using namespace MAUI;


class OptieScherm : public Screen
{
private:
	Screen* parent;

	Vector<Label*> kleurLabels;
	Label* roodLabel;
	Label* groenLabel;
	Label* blauwLabel;

	//todo: voeg editboxen en waardes toe die opgeslagen moeten worden

public:
	OptieScherm( Screen* parent );
	virtual ~OptieScherm();

	void keyPressEvent(int keyCode, int nativeCode);
	void pointerPressEvent(MAPoint2d point);

	int getAchtergrondOptie();
	const BasicString<char>getImagetekst(); //geeft text van editbox terug
};

#endif /* OPTIESCHERM_H_ */
