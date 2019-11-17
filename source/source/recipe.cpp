#include "recipe.h"

recipe::recipe(string name, string ingridients, string equipment, string technique, string instruction, string category)
{
	this->name = name;
	this->ingridents = ingridients;
	this->equipment = equipment;
	this->technique = technique;
	this->instruction = instruction;
	this->category = category;
}
