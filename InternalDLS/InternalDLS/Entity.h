#pragma once
#include "Type.h";
#include <vector>
#include <tuple>

namespace ClassDLS {
	using namespace ClassDLS;
	class Entity {
	public:
		ClassTypes type;
		std::vector<std::tuple<Entity*, RelationTypes>> relationVector = std::vector<std::tuple<Entity*, RelationTypes>>();
		Entity(ClassTypes type) {
			this->type = type;
		}

		Entity* SetRelation(Relation relation, Entity* entity);


	
	};


};


