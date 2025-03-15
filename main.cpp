#include <string>
#include "Phrase/Phrase.hpp"

using namespace std;

int main() {
	
	string phrase = "Hello World";
	char plein = '$';
	char vide = ' ';
	
	Phrase p(phrase, plein, vide);
	p.afficher();
	
	return 0;
}
