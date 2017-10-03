#include "String.h"

String::String()
{
	mString = "\0";
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
	int i = GetLength();
	while (i < GetLength() + rhs.GetLength())
	{
		mString[i] = rhs.mString[i];
		i++;
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
String String::UpperString()
{
	char *a = new char[255];
	int i = 0;
	while (i < GetLength())
	{
		if (mString[i] < 123 && mString[i] > 96)
			a[i] = mString[i] - 32;
		else
			a[i] = mString[i];
		i++;
	}
	a[i] = '\0';
	return String(a);
}
String String::LowerString()
{
	char* a = new char[255];
	int i = 0;
	while (i < GetLength())
	{
		if (mString[i] < 91 && mString[i] > 64)
			a[i] = mString[i] + 32;
		else
			a[i] = mString[i];
		i++;
	}
	a[i] = '\0';
	return String(a);
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

//std::ostream & operator<<(std::ostream & out, char * mString)
//{
//	 TODO: insert return statement here
//}
