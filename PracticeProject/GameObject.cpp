#include "ObjectType.cpp"
class GameObject {
private:
	static inline int idNext = 1;
protected : 
	int ObjectId;
	ObjectType Type;
	GameObject( ObjectType Type) {
		ObjectId = idNext++;
		this->Type = Type;
	}
public:
	int getId() {
		return ObjectId;
	}
	ObjectType getType() {
		return Type;
	}
};