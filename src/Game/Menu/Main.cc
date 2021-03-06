/*	Copyright 2016 (c) Michael Thomas (malinka) <malinka@entropy-development.com>
	Distributed under the terms of the GNU Affero General Public License v3
*/

#include "Main.hh"
#include "../Engine/Engine.hh"

#include <iostream>

using namespace Entropy::Asteria;
using namespace Entropy::Asteria::Menus;
using namespace std;

void Main::operator () (Engine &engine)
{
	cout << endl
		<< "Asteria" << endl
		<< endl
		<< "n) New Game" << endl
		<< "q) Quit" << endl;

	string line;

	getline(cin, line);

	if(line == "q")
		engine.Done();
	else if(line == "n")
		engine.New();
	else
		cout << "Invalid Response" << endl;
}
