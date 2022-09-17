//LongestCommonPrefix
//
#include<iostream>

using namespace std;
#define MAX 100

int
mystrcmp (const char *str1, const char *str2)
{
  while (!(*str1 - *str2) && *(str1++) && *(str2++));
  return *str1 - *str2;
}

char *
MyStrcpy (char *dst, const char *src)
{
  char *d = dst;
  while (*d++ = *src++)
    ;
  return dst;
}

int
len (char *ptr)
{
  int offset = 0;
  int count = 0;
  while (*(ptr + offset) != '\0')
    {
      ++count;
      ++offset;
    }
  return count;
}

void
sortStrings (char arr[][MAX], int n)
{
  char temp[MAX];
  for (int i = 0; i < n - 1; i++)
    {
      for (int j = 0; j < n - 1 - i; j++)
	{
	  if (mystrcmp (arr[j], arr[j + 1]) > 0)
	    {
	      MyStrcpy (temp, arr[j]);
	      MyStrcpy (arr[j], arr[j + 1]);
	      MyStrcpy (arr[j + 1], temp);
	    }
	}
    }
}

string
longestCommonPrefix (char arr[][MAX], int n)
{
  if (n == 0)
    return "";
  if (n == 1)
    return arr[0];
  sortStrings (arr, n);
  int min = len (arr[0]);
  string first = arr[0], last = arr[n - 1];
  int i = 0;
  while (i < min && first[i] == last[i])
    i++;
  string prefix = first.substr (0, i);
  return prefix;
}

int
main ()
{
  char arr[][MAX] =
    { "sharnir", "shariki", "sharitb", "shagatb", "sharaban" };
  int n = sizeof (arr) / sizeof (arr[0]);
  string ans = longestCommonPrefix (arr, n);
  if (ans.length ())
    cout << "General prefix : " << ans;
  else
    cout << "No genetal prefix";
  return 0;
}
