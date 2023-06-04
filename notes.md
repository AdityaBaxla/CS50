# Intro Class

computers used bits and bytes as information, 1byte = 8 bit.
the 0's and 1's are interpreted as context, (can be considerd as file format) or more specifically the program that runs it. The ASCII has 128 i.e. 7 bits representation thats why it can only represent english characters and special characters including spaces and sybols.Buy since computers are more confortable with 8bits(one ocatave), therefore 8bit i.e. 1 byte is used in encoding. A bunch of people came and decidedd that a certaion representaion of 0's and 1's mean this particular caracter

## Unicode

it is the superset of ASCII, it has a lot of different symbols of different languages and even emojis. ASCII used 1byte of data

Current Unicode encoding cand represent almost 150,000 characters. This poses a problem, since now the most used english charcters and specials (space, tab, -, &) etc would use 4 bytes insted of 1byte that the ASCII used. Therefore subsequent formats.

### UTF-32

32 bit encoding of characters that have all the characters we can use in computers nowadays

### UTF-16

16 bit ecoding of characters

### UTF-8

most recent encoding that uses both 4 and 1 bytes. 1 byte for usual english characters and 4bytes for those that are not in the first 256 characters.

## Represent Color

The same 0's and 1's can used to represetn colors.
RGB: some amout of red, blue and green. Probalbly using 24 bits , 8 for R, 8 for B, 8 for green.

## Represent Video

just represent something as as time.

input --> | ALGORITHM | --> output

containers and compression. so represent same or (barely noteceable) amount of data with less data.

# Week 01 | C language

code needs to be correct
design : write it well, simialr to any lagualge. If code is complete visual mess or it is way to long. Pretty code --> style (puncutation, capitalizaiton etc.)

`printf()` funciton comes in stdio.h library
all functions have to be imported through library, if it is not made in the current program.

C uses gcc complier
use `$gcc -v` to check if you have gcc on computer(windows), in linux use `$make filename`
`$gcc filename.c` for creating machine code, which is in .exe
you can run the program by `$./filename`

`string answer = get_string("what is your name?");`
string : we have to specify what the input is... everything is 0's and 1's, here it will tell the compiler to treat those 0/1's as a sting of numbers

answer: the variable name that will store the value

get_string() : a user wrote library to input

### Functions

### Arguments

### Colmmand Line interface some commands

`$mkdir <dirname>` makes a new directory
`$dir` : list the files and folders inside your current directory
`cd ..` : parent directory
`cd ...`: go back 2 directorires
`cd \` : goes to root directory
. : means current directory

`const int MINE = 2;` convention to write const variables in capatization
const is defensive mechanism so that even me cannot change the value later on.

char uses ' '
string uses " "

Loop :

```
while(true)
{
    dosomehitng
}
```

For loop

```
for(int i = 0; i< 3; i++)
{
    do something
}
```

function:

```
void meow(void)
{
    printf("meew\n");
}
```

c reads from top to bottom, so you need main() at the bottom. you can get away with if if you write function prototype at the top. Just a little breadcrump

`void meow(void);`
before the main() function. It's just a way for compiler to understand what functions to expect.

use do while loop to get the input that u want like

```
do
{
    n = get_int("width: ");
}
while(n<1)
```

this will ensure you will get a positive number

One important thing to notice is computers are imprecise because of floating point noation.This can be huge bugs in scientific calculations aircrafts and ingeneral mssive.s

# Lecture 3 | Arrays

The compilation of code consists of these steps:

- preprocessing
    > it has prototype for the functions used in the code. It's like trust me bro it has the functions that i have used. it's in #include
- compiling
    > it converts into assembly language
- assembly
    > the machine code is converted to 0/1's
- linking
    > combines all the different programers 0/1's in one file called filename.exe ... a machine executable file

Debugger

`$debug50 ./filname` its vs code specific code to go line by line and debug code.

### Array

```
int scores[3]

scores[0] = 4
scores[2] = 1
scores[1] = 2

printf("average: %f\n", (scores[0] +scores[1]+scores[2])/3)
```

work for array is to not to save space but to work easily for a lot of variable name.

explicit conversion (int) x ; (char) i etc.

\0 -> notation for 8 0bits. which is nul.

strings can be any number of bytes long thats why we need some demarcation to denote how long that is. Which is why we have '\0' (nul)`at the end of each string.

Some common problems.

Interger overflow (4 or 8 bytes not enough)
floating point imprecision

for loops let you declare mulitple variables
`for (i = 0, n = strlen(str); i < n; i++){}`

32 is the difference in ASCII between lower case and upper case letters.

main () can let you have command line argumenst
`int main(int argc, string argv[])`
argc -> argument count, how many words that human typed in the cli
argv -> argument vector, the vector of the words that the human typed in the prompt

exit status:
in c its convention for successful exit status to return 0 from main()
if you don't return value explicitly, it automaticlaly returns 0.

Array : contiguious set of memory.

# Lecture 3 | algorithm

computers cannot have birds eye veow like us humans.it can only see sequentialy

How fast or slow a code is, big O notation : it is the upper bond of time
omega notation is lower bond

big theta, uppper bond and lower bond is same

there can be priority on precious resoures, is it time to run the code, is it time to write the code or space required for the code.

we can make out own type of data type in C.

`typedef struct`
typedef : its a data type
struct : its a special data type which has a structure

```
typedef struct
{
    string name;
    string number;
}
```

this encapsulates the names and numbers of people in one structure.

for selection sort the bigo(n^2) and the lower bond is omega(n^2) therefore we can call it theta(n^2) since we have to do all the steps even if the starting array is sorted.

### recursion

function calls itself

```
void recrusion(int n)
{
    terminaito case:
    call iteself    
}
```

### Mergesort

it used more memory, but the total time is bigO(nlogn), worst case is theta(nlogn)

# lecture 4 | memory

3 bytes for RGB values.

hexadecimal can be used to represent, 4 bits = 16 values can be represented by 1 hex = 16 values. (0-15)

FFFFFF --> whilte
FF0000 --> red
00FF00 --> green
0000FF --> blue

people tend to count memory bits as hexadecimal because it makes things clear

0x... is used to denote its in hexadecimal notation

### pointers

stores adrress for some value

`&` operator is the address of operator

we have to tell c we have to store adress of something so we need special vaiable

`int *p = &n;`

for printing we need `printf("%p",&n)`

- can also be used as a derefernce variable, if we know what address we have, to know what is in that address. we can use `*p`

pointers too have pointers.

pointers will always take 8 bytes; i.e. 64 bits.because it need to address all the memory in the pc.

string in C is the pointer to the start of the first character in the array of characters.
therefore it is actually `char *s = "HI!:`

we can do pointer arethmatic `printf("%i\n" *(numbers + 1))`
this + 1 etc takes into account that lenght of the data type. the int data type is 4 byte but when we do +1 it know we want the 2nd interger in that array.

### dynamic memory allocation

malloc & free

malloc allocates bytes of memory to you
malloc can fail if computer does not have enough memory. in that case it will return NULL

```
char *s = "Hi!"
char *t = malloc(strlen(s) + 1);


for (int i = 0; i < strlen(s) + 1; i++)
{
    t[i] = s[i]; 
}

free(t)
```

or we can do `strcpy(t,s)`
here we are copying the data but in different addresses.


so integers might be different size therefore using malloc should be with `malloc( 3 * sizeof(int))` to actully not worry of the size of different data types and accocate accoring to the needs.

