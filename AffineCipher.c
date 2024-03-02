#include <stdio.h>
#include <string.h>
#include <ctype.h>
// Define key a,b

int a, b;

// Encrypt a character using the Affine cipher

char encryptChar(char ch) {

 if (isalpha(ch)) {

 char base = isupper(ch) ? 'A' : 'a';

 return (char)(((a * (ch - base) + b) % 26) + base);

 } else {

 return ch; // Non-alphabetic characters remain unchanged

 }

}


int main() {

 printf("Enter key a: ");
 scanf("%d", &a); 

 printf("Enter key b: ");
 scanf("%d", &b);

 char message[100];
 char result[100];
 printf("Enter the text: ");
 scanf(" %[^\n]s", message);
 
 // Encrypt Affine Cipher

 for (int i = 0; i < strlen(message); i++) {
    result[i] = encryptChar(message[i]);
 }
 result[strlen(message)] = '\0';

 printf("Encrypted text: %s\n", result);
 return 0;
}