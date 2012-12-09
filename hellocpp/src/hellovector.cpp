/*
 * hellovector.cpp
 *
 *  Created on: 2012-12-9
 *      Author: panjacky
 */
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

void linevector() {
	vector<string> v;
	ifstream in("../src/hellovector.cpp");
	string line;
	while (getline(in, line)) {
		v.push_back(line);
	}
	for (unsigned int i = 0; i < v.size(); i++) {
		cout << i+1 << ": " << v[i] << endl;
	}
	cout<< "linevector capacity: " << v.capacity() << "; size: " << v.size() << endl;
}

void wordvector () {
	vector<string> words;
	ifstream in("../src/hellovector.cpp");
	string word;
	while (in >> word) {
		words.push_back(word);
	}
	for (unsigned int i = 0; i < words.size(); i++) {
		cout << i+1 << ": " << words[i] << endl;
	}
	cout<< "wordvector capacity: " << words.capacity() << "; size: " << words.size() << endl;
}

int hellovector() {
	linevector();
	wordvector();

	return 0;
}



