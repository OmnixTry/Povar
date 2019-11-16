#include "recipe_editor.h"

void recipeEditor::addRecipe(recipe &rcp){
	ofstream out("..\\data\\recipes.txt", ios::app);
	out << rcp.getName() << "\t" << rcp.getCategory() << "\t" << rcp.getIngridients() << "\t" << rcp.getEquipment() << "\t" << rcp.getTechnique() << "\t" << rcp.getInstruction() << endl;
	out.close();
}
