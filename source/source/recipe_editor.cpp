#include "recipe_editor.h"
using namespace std;
void recipeEditor::addRecipe(recipe rcp){
	ofstream out("..\\data\\recipes.txt", ios::app);
	out << rcp.getName() << '\t' << rcp.getCategory() << '\t' << rcp.getIngridients() << '\t' << rcp.getEquipment() << '\t' << rcp.getTechnique() << '\t' << rcp.getInstruction()<< '\t' << rcp.getLevel() << endl;
	out.close();
}

vector<recipe> recipeEditor::searchByCategory(string category){
	vector<recipe> recipes;
	ifstream in("..\\data\\recipes.txt");
	string line, name, recipeCategory, ingridients, equipment, technique, instruction, column;
	int levelOfDiff;
	while (getline(in, line)) {
		istringstream stream(line);
		for (int i = 0; getline(stream, column, '\t'); i++) {
			switch (i) {
			case 0:
				name = column;
				break;
			case 1:
				recipeCategory = column;
				break;
			case 2:
				ingridients = column;
				break;
			case 3:
				equipment = column;
				break;
			case 4:
				technique = column;
				break;
			case 5:
				instruction = column;
				break;
			case 6:
				levelOfDiff = stoi(column);
				break;
			}
		}
		if (recipeCategory == category) {
			recipes.push_back(recipe(name, ingridients, equipment, technique, instruction, recipeCategory, levelOfDiff));
		}
	}
	in.close();
	return recipes;
}
