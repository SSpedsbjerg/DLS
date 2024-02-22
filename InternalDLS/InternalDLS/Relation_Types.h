#pragma once
#include "Entity.h"
#include <string>
namespace ClassDLS {
	class Relation_Type {
	private:
		Entity* FromEntity;
		Entity* ToEntity;

	public:
		Relation_Type();

		Relation_Type* SetRelationBetweenEntities(Entity* From, Entity* To);

		std::string ToString();
	};
};


