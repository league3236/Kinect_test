#pragma warning(disable:4996)

#include <stdio.h>

int isEND(char c){
	if (c == 0)
	{
		return 1;
	}
	else{
		return 0;
	}
}

char* deleteSpace(char* str){
	while (true){
		if (isEND(*str)){
			break;
		}
		else if (*str == ' '){
			str++;
		}
		else {
			break;
		}
	}

	return str;
}

char* deleteIterChar(char* str){
	while (true){
		if (isEND(*str)){
			break;
		}
		else if (*str != ' '){
			str++;
		}
		else{
			break;
		}

	
	}
	

	return str;
}

void main(){
	char str[255];
	char* pstr = str;
	int cnt = 0;
	gets(str);

	while (true){
		pstr = deleteSpace(pstr);
		if (isEND(*pstr))
			break;

		pstr = deleteIterChar(pstr);
		
		cnt++;

		if (isEND(*pstr))
			break;	
	}
	printf("%d\n", cnt);
}