/* --------------------------------------------------------------------
EXTREME TUXRACER

Copyright (C) 1999-2001 Jasmin F. Patry (Tuxracer)
Copyright (C) 2010 Extreme Tux Racer Team

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
---------------------------------------------------------------------*/

#ifndef EVENT_H
#define EVENT_H

#include "bh.h"
#include "states.h"

class CEvent : public State {
	void Enter();
	void Loop(float time_step);
	void Keyb(sf::Keyboard::Key key, bool release, int x, int y);
	void Mouse(int button, int state, int x, int y);
	void Motion(int x, int y);
public:
};

extern CEvent Event;

#endif
