#ifndef Lettre_hpp
#define Lettre_hpp

#include <stdio.h>
#include <vector>
#include <map>
#include <string>

class Lettre {
public:
	Lettre(char lettre);
	std::vector<std::vector<bool> > pattern() const;
	std::vector<std::vector<bool> > getPattern() const;
	void printLine(unsigned int nbr, char plein = '0', char vide = ' ') const;
	void afficher(char plein = '0', char vide = ' ') const;
	static void buildAlphabet();
	static unsigned int getNbrLignes();
	static unsigned int getLargeur();
	virtual ~Lettre();

private:
	char m_char;
	std::vector<std::vector<bool> > m_pattern;
	static const unsigned int nbrLignes;
	static const unsigned int largeur;
	static const std::string lettres[];
	static std::map<char, int> lettresPosition;
};

#endif
