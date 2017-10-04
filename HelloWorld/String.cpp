#include "String.h"

String::String()
{
	mString = new char[255];
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
bool String::FindSubString(int index, String substring)
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
	char* lhs = new char[255];
	char* rhs = new char[255];
	char* newString = new char[255];
	int i = 0;
	int j = 0;
	bool running = true;
	if (!FindSubString(substring))
		return nullptr;
	while (running == true)
	{
		if (mString[i] == substring.mString[0])
			running = false;
		else
		{
			newString[i] = mString[i];
			i++;
		}
	}
	// k keeps track of how long the front end is
	int k = i;
	while (newSubstring.mString[j] != '\0')
	{
		newString[i] = newSubstring.mString[j];
		i++;
		j++;
	}
	running = true;
	k += substring.GetLength();
	while (running == true)
	{
		newString[i] = mString[k];
		i++;
		k++;
		if (newString[i] == '\0')
			running = false;
	}
	return String(newString);
}
bool String::operator==(String & other)
{
	int i = 0;
	int sameChar = 0;
	while (i < GetLength())
	{
		if (mString[i] == other.mString[i])
		{
			sameChar++;
			if (sameChar == GetLength())
				return true;
		}
		else
			return false;
		i++;
	}
}
std::istream & operator >> (std::istream & input, String &returnString)
{
	char *newString = new char[255];
	input >> newString;
	returnString = String(newString);
	return input;
}

std::ostream & operator<<(std::ostream & stream, const String & a)
{
	stream << a.mString;
	return stream;
}
