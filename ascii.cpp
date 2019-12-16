#include "ascii.h"
#include <iostream>
#include <string.h>

using namespace std;
//function : getNum
//this function will return number corresponding
//0,1,2..,9,A,B,C,D,E,F
 
int getNum(char ch)
{
    int num=0;
    if(ch>='0' && ch<='9')
    {
        num=ch-0x30;
    }
    else
    {
        switch(ch)
        {
            case 'A': case 'a': num=10; break;
            case 'B': case 'b': num=11; break;
            case 'C': case 'c': num=12; break;
            case 'D': case 'd': num=13; break;
            case 'E': case 'e': num=14; break;
            case 'F': case 'f': num=15; break;
            default: num=0;
        }
    }
    return num;
}
 
//function : hex2int
//this function will return integer value against
//hexValue - which is in string format
 
unsigned int hex2int(char hex[])
{
    unsigned int x=0;
    x=(getNum(hex[0]))*16+(getNum(hex[1]));
	return x;
}

string ascii_decode(int len,char* args[]) {
	string ret;
	char aChar;
	string temp;
	unsigned int  intValue=0; //can be stored in unsigned char
	char hexValue[2];
	for(int i=1; i < len; i++){
	}
	for(int i=1;i<len;i++){
		temp = args[i];	//string containing each argument
		if(temp.length() > 2){
			return "not in hexidecimal format";
		}
		strcpy(hexValue, temp.c_str()); //put the string into cstring for array store
		intValue=hex2int(hexValue); //integer value of the hexidecimal digit
		aChar = (char)intValue; //conversion of integer value into ASCII character equivalent
		ret += aChar;
	}
	
	cout << endl;
	return ret;
}
