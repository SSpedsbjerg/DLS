#include "Entity.h"

ClassDLS::Entity::Entity() {

}

ClassDLS::Entity* ClassDLS::Entity::SetRelation(Relation_Type* relation, Entity* entity){
	relation->SetRelationBetweenEntities(this, entity);
	return this;
}

ClassDLS::Entity* ClassDLS::Entity::SetName(std::string Name) {
	this->Name = Name;
}

std::string ClassDLS::Entity::ToString() {
	return std::string("Type : Entity {" + Name + "}");
}