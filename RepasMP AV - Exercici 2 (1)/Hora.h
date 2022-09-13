#pragma once

class Hora
{
	public:
		//constructors
		Hora
		//setters
		void setHores(int horaNova){h = hn;}
		void setMinuts(int minutNou){m = minutNou;}
		void setSegons(int segonNou){s = segonNou;}
		//getters:
		int getHores(){return h;}
		int getMinuts(){return m;}
		int getSegons(){return s;}
	private:
		int h;
		int m;
		int s;

};
