#pragma once
class String
{
private:
	char* mString;
public:
	/*Prototype: int GetLength();
	Description: Returns length of a string.
	Parameters:
	Precondition:
	Postcondition:
	Visibility: Public
	*/
	int GetLength();
	void AccessIndex(int index);
	String AppendString(String rhs);
	String PrependString(String lhs);
	const char* ConstantString();
	void
};