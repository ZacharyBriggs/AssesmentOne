#pragma once
#include <iostream>
class String
{
private:
	const char* mString;
public:
	String();
	/*Prototype: String String();
	Description: A String with a default mString is created.
	Arguments: None.
	Precondition: None.
	Postcondition: A default String is created.
	Protection: Public.*/
	~String();
	/*Prototype: String ~String();
	Description: A String is deleted.
	Arguments: None.
	Precondition: A String is created.
	Postcondition: The String is deleted.
	Protection: Public.*/
	String(char* name);
	/*Prototype: String(char* name);
	Description: A String with a custom mString is created.
	Arguments: None.
	Precondition: None.
	Postcondition: A custom String is created.
	Protection: Public.*/
	int GetLength();
	/*Prototype: int GetLength();
	Description: Returns length of a string.
	Arguments: None.
	Precondition: None.
	Postcondition: Length of string is returned.
	Visibility: Public.*/
	char AccessIndex(int index);
	/*Prototype: void AccessIndex(int index);
	Description: Accesses the string's index of the argument passed in.
	Arguments: An int representing the index.
	Precondition: A string.
	Postcondition: The character at the index is returned.
	Visibility: Public*/
	String AppendString(String rhs);
	/*Prototype: String AppendString(String rhs);
	Description: Appends a string to the end of a string.
	Arguments: String.
	Precondition: Two seperated strings.
	Postcondition: The two strings are now combined with the argument string
	being on the right side.
	Visibility: Public*/
	String PrependString(String lhs);
	/*Prototype: String PrependString(String lhs);
	Description: Prepends a string to the beginning of a string.
	Arguments: String.
	Precondition: Two seperated strings.
	Postcondition: The two strings are now combined with the argument string
	being on the right side.
	Visibility: Public*/
	const char* ConstantString();
	/*Prototype: const char* ConstantString();
	Description: Changes a string into a constant.
	Arguments: None
	Precondition: A string.
	Postcondition: The string is now a constant character string.
	Visibility: Public*/
	String UpperString();
	/*Prototype: void UpperString();
	Description: Uppercases all the characters in the string.
	Arguments: None
	Precondition: A string with non unified casing.
	Postcondition: All the casing in the string is uppercased
	Visibility: Public*/
	String LowerString();
	/*Prototype: void LowerString();
	Description: Lowercases all the characters in the string.
	Arguments: None.
	Precondition: A string with non unified casing.
	Postcondition: All the casing in the string is lowercased.
	Visibility: Public*/
	bool FindSubString(String substring);
	/*Prototype: bool FindSubString(char*);
	Description: Searches for a sub-string in a string and returns true if it finds it.
	Arguments: A character array representing the sub-string.
	Precondition: A string.
	Postcondition: True is returned if the substring is in the string.
	Visibility: Public*/
	bool FindSubString(int index, String substring);
	/*Prototype: bool FindSubStringFromIndex(int, char*);
	Description: Searches for a sub-string in every index after the one passed in.
	Arguments: An int representing the index and a character array for the sub string.
	Precondition: A string.
	Postcondition: True is returned if the substring is found after the index.
	Visibility: Public*/
	String ReplaceSubString(String substring, String newSubstring);
	/*Prototype: String ReplaceSubString(char*, char*);
	Description: Replaces a sub-string with another sub-string.
	Arguments: Two sub-strings the first is the sub-string to be replaced and the second
	is the sub-string that will replace it.
	Precondition: A string.
	Postcondition: The sub-string is replaced with the new sub-string.
	Visibility: Public*/
	bool operator==(String & other);
	/*Prototype: bool operator==(String & other);
	Description: Returns true/false depending on if the two strings are
	equal/exactly the same.
	Arguments: Two strings.
	Precondition: Two strings.
	Postcondition: True/False is returned.
	Visibility: Public.*/
	friend std::istream& operator>>(std::istream & input, String &returnString);
	/*Prototype: friend std::istream& operator>>(std::istream & input, String &returnString);
	Description: Allows the user to insput a string.
	Arguments: What the string is getting changed too.
	Precondition: A string.
	Postcondition: The string is changed to whatever the user inputted.
	Visibility: Public.*/
	friend std::ostream& operator<<(std::ostream & stream, const String & a);
	/*Prototype: friend std::ostream& operator<<(std::ostream & stream, const String & a);
	Description: Outputs the string.
	Arguments: The string to be outputted.
	Precondition: A string.
	Postcondition: The contents of the string is outputted.
	Visibility: Public.*/
};
