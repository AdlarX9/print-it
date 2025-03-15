#ifndef Phrase_hpp
#define Phrase_hpp

#include <stdio.h>
#include <string>


class Phrase {
public:
	Phrase(std::string phrase, char plein = '0', char vide = ' ');
	void afficher() const;
	~Phrase();

private:
	char m_plein;
	char m_vide;
	std::string m_p;
};

#endif
