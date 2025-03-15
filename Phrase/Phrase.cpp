#include <string>
#include <cctype>
#include <iostream>

#include "Phrase.hpp"
#include "../Lettre/Lettre.hpp"

using namespace std;

Phrase::Phrase(string phrase, char plein, char vide) : m_plein(plein), m_vide(vide) {
	for (int i = 0; i < phrase.size(); i++) {
		if (isalpha(phrase[i]))
			phrase[i] = toupper(phrase[i]);
		else
			phrase[i] = ' ';
	}
	m_p = phrase;
}

void Phrase::afficher() const {
	for (int i = 0; i < Lettre::getNbrLignes(); i++) {
		for (int j = 0; j < m_p.size(); j++) {
			Lettre l(m_p[j]);
			l.printLine(i, m_plein, m_vide);
		}
		cout << endl;
	}
}

Phrase::~Phrase() {}
