#include "Diagram.h"
using namespace ClassDLS;

Diagram* ClassDLS::Diagram::SetName(std::string name) {
	this->Name = name;
	return this;
}

Entity* ClassDLS::Diagram::AddEntity(Entity* entity) {
	entities.push_back(entity);
	return entity;
}
