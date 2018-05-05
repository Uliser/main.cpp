#include<iostream>

#include<string>

using namespace std;

int main()

{

string myString;

//prompt and read the string

getline(cin,myString);

  

//get the length of the string

int strLength = myString.length();

  

//loop through the string

for(int i=0; i<strLength; i++)

{

//for each character in the string check if it is a space

if(myString[i]==' ')

{

//if it is a space, run a loop starting from the index of space and move the rest of the elements after space to 1 place ahead

//which means we are overwritting space by next character and so on

for(int j=i; j<strLength; j++)

{

myString[j] = myString[j+1];

}

strLength--; //decrement length by 1

i--; //decrement i by 1

}

}

return 0;

}
