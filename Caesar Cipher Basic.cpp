#include <stdio.h>
#include <string.h>
//caesar caesar
//key = 2
//a --> c
void caesarCipher(char word[1001], int key){
  for(int i = 0; word[i] != '\0'; i++){
    //display current character
    // printf("current character: %c\n", word[i]);
    if(word[i] < 65){
      continue;
    }
    //for upper-case letters
    else if ((word[i]+key) >= 'A' && (word[i]+key) <= 'Z'){
      word[i] += key;
      //display changed character
      // printf("lower:changed character %c\n\n", word[i]);
    } //for ascii between 'Z' and 'a'
    else if ((word[i] + key) > 90 && (word[i] + key) < 97){
      int tempKey = (word[i] + key) - 91;
      word[i] = 'A' + tempKey;
      // printf("between Z and a: %c\n", word[i]);
    } else if ((word[i] + key) >= 97 && (word[i] + key) <= 122){
      word[i] += key;
      //display changed character
      // printf("upper:changed character %c\n\n", word[i]);
    }
    else if ((word[i] + key) > 122){
      int tempKey = (word[i] + key) - 123;
      word[i] = 'a' + tempKey;
      // printf("between z and beyond: %c\n", word[i]);
    }
    else{
      continue;
    }
  }
  return;
}

int main(){
  char word[1001];
  scanf("%[^\n]", word);
  caesarCipher(word, 2);
  printf("%s\n", word);


  return 0;
}
