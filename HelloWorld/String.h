#pragma once
#include <iostream>
class String
{
private:
	char* mString;
public:
	String();
	String(char* name);
	int GetLength();
	/*Prototype: int GetLength();
	Description: Returns length of a string.
	Arguments: None.
	Precondition: None.
	Postcondition: Length of string is returned.
	Visibility: Public.
	*/
	char AccessIndex(int index);
	/*Prototype: void AccessIndex(int index);
	Description: Accesses the string's index of the argument passed in.
	Arguments: An int representing the index.
	Precondition: A string.
	Postcondition: The character at the index is returned.
	Visibility: Public
	*/
	String AppendString(String rhs);
	/*Prototype: String AppendString(String rhs);
	Description: Appends a string to the end of a string.
	Arguments: String.
	Precondition: Two seperated strings.
	Postcondition: The two strings are now combined with the argument string
	being on the right side.
	Visibility: Public
	*/
	String PrependString(String lhs);
	/*Prototype: String PrependString(String lhs);
	Description: Prepends a string to the beginning of a string.
	Arguments: String.
	Precondition: Two seperated strings.
	Postcondition: The two strings are now combined with the argument string
	being on the right side.
	Visibility: Public
	*/
	const char* ConstantString();
	/*Prototype: const char* ConstantString();
	Description: Changes a string into a constant.
	Arguments: None
	Precondition: A string.
	Postcondition: The string is now a constant character string.
	Visibility: Public
	*/
	String UpperString();
	/*Prototype: void UpperString();
	Description: Uppercases all the characters in the string.
	Arguments: None
	Precondition: A string with non unified casing.
	Postcondition: All the casing in the string is uppercased
	Visibility: Public
	*/
	String LowerString();
	/*Prototype: void LowerString();
	Description: Lowercases all the characters in the string.
	Arguments: None.
	Precondition: A string with non unified casing.
	Postcondition: All the casing in the string is lowercased.
	Visibility: Public
	*/
	bool FindSubString(String substring);
	/*Prototype: bool FindSubString(char*);
	Description: Searches for a sub-string in a string and returns true if it finds it.
	Arguments: A character array representing the sub-string.
	Precondition: A string.
	Postcondition: True is returned if the substring is in the string.
	Visibility: Public
	*/
	bool FindSubStringFromIndex(int index, String substring);
	/*Prototype: bool FindSubStringFromIndex(int, char*);
	Description: Searches for a sub-string in every index after the one passed in.
	Arguments: An int representing the index and a character array for the sub string.
	Precondition: A string.
	Postcondition: True is returned if the substring is found after the index.
	Visibility: Public
	*/
	String ReplaceSubString(String substring, String newSubstring);
	/*Prototype: String ReplaceSubString(char*, char*);
	Description: Replaces a sub-string with another sub-string.
	Arguments: Two sub-strings the first is the sub-string to be replaced and the second
	is the sub-string that will replace it.
	Precondition: A string.
	Postcondition: The sub-string is replaced with the new sub-string.
	Visibility: Public
	*/
	bool operator==(const String & other);
	friend std::ostream& operator>>(std::ostream &out, char* mString);
};