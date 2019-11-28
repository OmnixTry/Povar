#pragma once
#include "recipe.h"
#include <fstream>
#include <sstream>
class recipeEditor {
public:
	void addRecipe(recipe rcp);
	std::vector<recipe> searchByCategory(std::string category);
	std::vector<recipe> searchByName(std::string name);
};
