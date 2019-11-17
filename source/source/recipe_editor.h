#pragma once
#include "recipe.h"
#include <fstream>
#include <sstream>
class recipeEditor {
public:
	void addRecipe(recipe &rcp);
	vector<recipe> searchByCategory(string category);
};
