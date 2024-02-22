#include "Class_Type.h"

ClassDLS::Class_Type::Class_Type() {

}

ClassDLS::Class_Type* ClassDLS::Class_Type::AddPrivateVariable(std::string var) {
	privateVariables.push_back(var);
	return this;
}

ClassDLS::Class_Type* ClassDLS::Class_Type::AddPublicVariable(std::string var) {
	publicVariables.push_back(var);
	return this;
}

ClassDLS::Class_Type* ClassDLS::Class_Type::AddPrivateFunction(std::string func){
	privateFunctions.push_back(func);
	return this;
}

ClassDLS::Class_Type* ClassDLS::Class_Type::AddPublicFunction(std::string func){
	publicFunctions.push_back(func);
	return this;
}

std::string ClassDLS::Class_Type::ToString(){
	std::string privateVars = "";
	for (std::string var : privateVariables) {
		privateVars.append("\t\t" + var + " ");
	}
	std::string publicVars = "";
	for (std::string var : publicVariables) {
		publicVars.append("\t\t" + var + " ");
	}
	std::string privateFuncs = "";
	for (std::string func : privateFunctions) {
		privateFuncs.append("\t\t" + func + " ");
	}
	std::string publicFuncs = "";
	for (std::string func : publicFunctions) {
		publicFuncs.append("\t\t" + func	+ " ");
	}
	return std::string("Type : Class {"
		+ this->Name + "," +
		"PrivateVars {" + privateVars +
		"}, PublicVars {" + publicVars +
		"}, PrivateFuncs {" + privateFuncs +
		"}, PublicFuncs {" + publicFuncs + "}" + "}");
}
