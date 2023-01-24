#include <string>

class Eingabe {

	private:
		std::string eingabe;

	public:
		std::string Create_Eingabe( void );
		bool Eingabe_Kontrolle( std::string _eingabe );

		std::string Get_Eingabe();
		void Set_Eingabe(std::string _eingabe);
		// TODO
};