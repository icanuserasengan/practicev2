#include<stdio.h>
int main(){
	char word[50];
	while(scanf("%s",word)!= EOF ){
		word[50] = word[50]+7;
	}
	printf("%s",word);
	
	
	
	return 0 ;
}

//卡關  我的想法 上面那串是可以讓人瘋狂輸入
//下 WORD=WORD+7 可以每一個字母都忘後7個
/*#include "stdio.h"

int main(void){
char str[9999];

while(scanf("%s",str)!=EOF){
for (int i=0;str[i]!='\0';i++){
str[i] -= 7;

printf("%c",str[i]);

}

printf("\n");

}

return 0;

}

網路寫法 
問題1 WHY下FOR迴圈
問題二 FOR迴圈中的 STR[I]這是啥意思
*/
 
