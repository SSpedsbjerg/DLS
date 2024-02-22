#pragma once
#include "Entity.h"
#include <vector>
#include <string>

namespace ClassDLS {
	class Class_Type : Entity {
	private:
		std::vector<std::string> privateVariables = std::vector<std::string>();
		std::vector<std::string> publicVariables = std::vector<std::string>();
		std::vector<std::string> privateFunctions = std::vector<std::string>();
		std::vector<std::string> publicFunctions = std::vector<std::string>();
	public:
		Class_Type();

		Class_Type* AddPrivateVariable(std::string var);
		Class_Type* AddPublicVariable(std::string var);
		Class_Type* AddPrivateFunction(std::string func);
		Class_Type* AddPublicFunction(std::string func);

		std::string ToString();
	};

};

