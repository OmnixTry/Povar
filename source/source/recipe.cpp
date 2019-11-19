#include "recipe.h"
using namespace std;
recipe::recipe(string name, string ingridients, string equipment, string technique, string instruction, string category, int level_of_difficulty)
{
	this->name = name;
	this->ingridents = ingridients;
	this->equipment = equipment;
	this->technique = technique;
	this->instruction = instruction;
	this->category = category;
	this->level_of_difficulty = level_of_difficulty;
}
recipe::recipe() {};
