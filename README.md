This program encrypts and decrypts text using a key.

Include libraries
Use namespace std

Prototype functions

Main function(){

Print welcome message
Print  menu

Take input as an integer variable called choice
Take text as input
Take key as input

Call functions to stretch the key and convert key and text to upper case then save them in new variables: newTxt and newKey

If ( choice is 1)
	Use the encryption function(newTxt, key)
Else if (choice is 2)
	Use the decryption function(newTxt, key)

Return 0
}

keyGen function(the text, the key){
For the number of letters in the text string
	Add to the new key an uppercase version of each letter of key mod key length
Return newKey
}
txtUpr(text){
For the length of txt
	Convert evey character in it to uppercase
Return newTxt
}
encrypt( the new text, the new key){
Print the txt then encrypt it by adding the value of each char of the key and txt then mod 26 then save it to a character called num
Then add 65 to num then add this char to encrypted
Then repeat that process for every character in the text
Then print the encrypted message
}
decrypt(the text, key){
Print the new txt and that it was decrypted then decrypt by subtracting key character from text character add 26 then mod 26, save it to a char called num
Add num to 65 then add the result to a string called decrypted
Then repeat that process for every character in the text
Then print the denrypted message
}

Authors: Adrian Acevedo , Moises Santiago, Youssef Koreatam
Pulbished date: 6/6/2022
Instructions on how to use your program: When you run the code and menu pops up asking to enter your choice to encrypt for (1) or decrypt (2). Then you enter a text, after that you enter a key and based on what you put in it either decrpyts or encrypt your code.
