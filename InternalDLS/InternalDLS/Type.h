#pragma once
namespace ClassDLS {
	enum ClassTypes {
		ClassType,
		EnumType,
		InterfaceType,
		StructType,
		ObjectType,
		ComponentType,
		ModuleType
	};

	enum RelationTypes {
		RelationType,
		Assosiation,
		Aggregation,
		Composition
	};

	enum RelationAmounts {
		O_O,
		O_M,
		M_O,
		M_M
	};

	class Relation {
	public:
		RelationTypes type;
		RelationAmounts amount;

		Relation* SetType(RelationTypes type);

		Relation* SetAmount(RelationAmounts amount);
	};
};


