#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED

const int MaxString = 20;
typedef char String[MaxString];

void Scan(String &s);
void StrCopy(String orig, String &copia);
void Print(String s);


#endif // STRING_H_INCLUDED
