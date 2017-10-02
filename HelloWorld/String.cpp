#include "String.h"

String::String()
{
	mString = "Default";
}
String::String(char* name)
{
	mString = name;
}
int String::GetLength()
{
	int i = 0;
	while (mString[i] != '\0')
	{
		i++;
	}
	return i;
}
char String::AccessIndex(int index)
{
	char letter = mString[index];
	return letter;
}
String String::AppendString(String rhs)
{
	int lengthOne = GetLength();
	int lengthTwo = rhs.GetLength();
	int i = lengthOne;
	while (i < lengthOne + lengthTwo)
	{
		mString[i] =
		i++
	}
	return String();
}
String String::PrependString(String lhs)
{
	return String();
}
const char * String::ConstantString()
{
	return nullptr;
}
void String::UpperString()
{
}
void String::LowerString()
{
}
bool String::FindSubString(char *)
{
	return false;
}
bool String::FindSubStringFromIndex(int, char *)
{
	return false;
}
String String::ReplaceSubString(char *, char *)
{
	return String();
}