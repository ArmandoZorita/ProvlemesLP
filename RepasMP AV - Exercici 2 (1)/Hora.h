#pragma once

class Hora
{
	public:
		//sobrecàrrega d'operadors:
		bool operator==(const Hora& data)
		{
			bool igual = false;
			if(data.getHora() == h&&data.getMinuts() = m && data.getSegons() == s)
				igual = true;
			return igual;
		}
		bool operator<(const Hora& data)
		{
			bool igual = false;
                        if(h>data.getHores())
			{
				igual = true
			}
			else if(h == data.getHores())
			{
				if(data.getMinuts() > m)
				{
					igual = true;
				}
				else if(data.getMinuts() == m)
				{
					if(data.getSegons()< s)
					{
						igual = true;
					}
				}
			}
                        return igual;
		}
		Hora operator+(const Hora& data)
		{
			Hora horaAux;
			
			int segonsAux = data.getSegons() + s;
			//passar de segons a minuts:
			int i = 0; int minuts = 0; int hores = 0;
			while(i <60)
			{
				if(segonsAux >=60)
				{i++;segonsAux--;}
				else
				{minuts = data.getMinuts()+ m + i; i = 61;}
			}
			//passar minuts a hores
			i = 0;
			while(i<60)
			{
				if(minuts >=60)
				{
					i++;minuts--;
				}
				else
				{
					hores = data.getMinuts() + h + i;
				}
			}
			Hora horaAux(hores, minuts, segons);

			return horaAux;
		}
		Hora operator+(int segons)
		{
		
			int segonsAux = data.getSegons() + s + segons;
			//passar de segons a minuts:
			int i = 0; int minuts = 0; int hores = 0;
			while(i <60)
			{
				if(segonsAux >=60)
				{i++;segonsAux--;}
				else
				{minuts = data.getMinuts()+ m + i; i = 61;}
			}
			//passar minuts a hores
			i = 0;
			while(i<60)
			{
				if(minuts >=60)
				{
					i++;minuts--;
				}
				else
				{
					hores = data.getMinuts() + h + i;
				}
			}
			Hora horaAux(hores, minuts, segons);

			return horaAux;
		}

		//funcions:
		bool horaValida()
		{
			bool valid = true;
			if(h>23||h<0||m<0||m>59||s<0||s>59)
			{
				valid = false;
			}
			return valid;
		}
		//constructor: 
		Hora(){ h = 0; m = 0; s = 0;}
		Hora(const Hora& dataNova)
		{
			h = dataNova.getHores();
			m = dataNova.getMinuts();
			s = dataNova.getSegons();
		}
		Hora(int hora, int minut,int segon)
		{
			h = hora;
			m = minut;
			s = segon;
		}
		~Hora()
		{
			
		}
		//setters:
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
