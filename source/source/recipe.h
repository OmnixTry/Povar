#pragma once
#include <string>
#include <vector>
using namespace std;

class recipe {
	string name, ingridents, equipment, technique, instruction, category;
public:
	recipe(string name, string ingridients, string equipment, string technique, string instruction, string category);
	inline string getName() { return this->name; };
	inline string getIngridients() { return this->ingridents; };
	inline string getEquipment() { return this->equipment; };
	inline string getTechnique() { return this->technique; };
	inline string getInstruction() { return this->instruction; };
	inline string getCategory() { return this->category; };
};
