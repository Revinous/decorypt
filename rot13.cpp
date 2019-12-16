#include "rot13.h"
#include <cctype>
#include <iostream>
#include <string>

using namespace std;

string ROT13(string source){
	string ret;
	for(size_t i = 0; i < source.size(); ++i){
		if(isalpha(source[i])){
			if((tolower(source[i]) - 'a') <14)
				ret.append(1, source[i] + 13);
			else
				ret.append(1, source[i] - 13);
		}else{
			ret.append(1, source[i]);
		}
	}
	ret+= " ";
	return ret;
}

string ROT13Mul(int len,char* args[]){
	string ret;
	for(int i=1;i<len;i++){
		string piece = args[i];
		piece = ROT13(piece);
		ret += piece;
	}
	return ret;
}