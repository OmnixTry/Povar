#pragma once
#include <string>
#include <vector>


class recipe {
	std::string name, ingridents, equipment, technique, instruction, category;
	int level_of_difficulty;
public:
	recipe();
	recipe(std::string name, std::string ingridients, std::string equipment, std::string technique, std::string instruction, std::string category, int level_of_difficulty);
	inline std::string getName() { return this->name; };
	inline std::string getIngridients() { return this->ingridents; };
	inline std::string getEquipment() { return this->equipment; };
	inline std::string getTechnique() { return this->technique; };
	inline std::string getInstruction() { return this->instruction; };
	inline std::string getCategory() { return this->category; };
	inline int getLevel() { return this->level_of_difficulty; };
};
