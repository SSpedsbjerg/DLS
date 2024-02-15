#pragma once
#include <string>
#include <vector>
#include "Entity.h"
namespace ClassDLS {
	class Diagram {
		std::string Name;
		std::vector<Entity*> entities;

		Diagram* SetName(std::string name);

		Entity* AddEntity(Entity* entity);

		bool Print(Diagram* diagram);

	};
}


