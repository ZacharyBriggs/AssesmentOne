#include "String.h"

String::String()
{
	mString = "";
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
	char *a = new char[255];
	int i = 0;
	int j = 0;
	while (i < GetLength() + rhs.GetLength())
	{
		while (i < GetLength())
		{
			a[i] = mString[i];
			i++;
		}
		while (j < rhs.GetLength())
		{
			a[i] = rhs.mString[j];
			i++;
			j++;
		}
	}
	a[i] = '\0';
	return String(a);
}
String String::PrependString(String lhs)
{
	char *a = new char[255];
	int i = 0;
	int j = 0;
	while (i < GetLength() + lhs.GetLength())
	{
		while (i < lhs.GetLength())
		{
			a[i] = lhs.mString[i];
			i++;
		}
		while (j < GetLength())
		{
			a[i] = mString[j];
			i++;
			j++;
		}
	}
	a[i] = '\0';
	return String(a);
}
const char * String::ConstantString()
{
	const char* a = mString;
	return a;
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
bool String::FindSubString(String substring)
{
	int j = 0;
	int i = 0;
		while (i < GetLength())
		{
			if (mString[i] == substring.mString[j])
			{
				i = 0;
				j++;
			}
			else
				i++;
		}
		if (j == substring.GetLength())
			return true;
		else
			return false;
}
bool String::FindSubStringFromIndex(int index, String substring)
{
	int j = 0;
	int i = index;
	while (i < GetLength())
	{
		if (mString[i] == substring.mString[j])
		{
			i = index;
			j++;
		}
		else
			i++;
	}
	if (j == substring.GetLength())
		return true;
	else
		return false;
}
String String::ReplaceSubString(String substring, String newSubstring)
{
	return String();
}
bool String::operator==(const String & other)
{
	return (mString == other.mString);
}