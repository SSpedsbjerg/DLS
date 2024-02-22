#pragma once
#include "Type.h";
#include <vector>
#include <tuple>
#include "Relation_Types.h"

namespace ClassDLS {
	using namespace ClassDLS;
	class Entity {
		
	public:
		std::string Name;
		ClassTypes type;
		Entity();
		Entity(ClassTypes type) {
			this->type = type;
		}
		
		Entity* SetName(std::string Name);

		Entity* SetRelation(Relation_Type* relation, Entity* entity);

		std::string ToString();
	
	};


};


