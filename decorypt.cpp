#include "base64.h"
#include "ascii.h"
#include "rot13.h"
#include <iostream>
#include <stdio.h>      /* printf */
#include <stdlib.h>     /* strtol */

using namespace std;

int main(int argc, char* argv[]){
	string decoded;
	if(argc > 2){//usually ascii, split by whitespace
		decoded = ascii_decode(argc, argv);
		cout << "ascii: " << decoded << endl;
		string rot13 = ROT13Mul(argc, argv);
		cout << "rot13: " << rot13 << endl;
	}else{
		
		string text = argv[1];
		cout << "Original Text: " << argv[1] << endl << endl;
		
		string b64 = text;
		
		//base64
		decoded = base64_decode(b64);
		cout << "base64: " << decoded << endl;	
		//rot13
		string rot13 = ROT13(text);
		cout << "rot13: " << rot13 << endl;
	
		string ascii = ascii_decode(argc, argv);
		cout << "ascii: " << decoded << endl;
	}
	
	
	
	return 0;
}