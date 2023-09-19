# Entire Description of what I do in Snippet_Code_to_write

## 1.2 Single Line and Multi Line Comments
Done in 15/09/2023

```cpp
// 1.2 Single Line Comments 
// Demonstrate the use of comments
 std::cout << "Hello World\n";

 // Multi Line Comments

// Looks Ugly, how about :

/* This is a multi-line comment.
 * the matching asterisks to the left
 * can make this easier to read
 */
```

## 1.3 Intro to Object and Variables
```cpp
int x{ 21 }; //define variable named x, type int or we can do multiple e.g.
int y; int z;
// create different variables 
// with different type in different lines, recommended :
int a;
double b;
```

## 1.4 Variables assignment and initialization
```cpp
 int width; // define an integer variable named width
 width = 5; // assignment of value 5 into variable width

 // variable width now has value 5

 std::cout << width; // prints 5

 width = 7; // change value stored in variable width to 7

 std::cout << width; // prints 7

 int c;         // no initializer (default initialization)
 int d = 5;     // initializer after equals sign (copy initialization)
 int e(6);    // initializer in parenthesis (direct initialization)

 // List initialization methods (C++11) (preferred)
 int f{ 7 };   // initializer in braces (direct list initialization)
 int g = { 8 }; // initializer in braces after equals sign (copy list initialization)
 int h{};      // initializer is empty braces (value initialization)

 [[maybe_unused]] int vv{ 5 };

 // since vv is [[maybe_unused]], no warning generated
```

## 1.5 Intro to iostream library : cin, cout, endl
```cpp
std::cout << g << "Is greater than" << f << d << e;

std::cout << "Hi!" << std::endl; // std::endl will cause the cursor to move to the next line of the console
std::cout << "My name is Alex." << std::endl;

int five{ 5 };
std::cout << "x is equal to: " << five << '\n'; // Using '\n' standalone
std::cout << "And that's all, folks!\n"; // Using '\n' embedded into a double-quoted piece of text (note: no single quotes when used this way)

// Examples :
std::cout << "Enter a number: "; // ask user for a number

int num{ }; // define variable x to hold user input (and zero-initialize it)
std::cin >> num; // get number from keyboard and store it in variable x

std::cout << "You entered " << num << '\n';

```

## 1.7 Identifiers 
Done in 19/9/2023
```cpp
/*
int value; // conventional

int Value; // unconventional (should start with lower case letter)
int VALUE; // unconventional (should start with lower case letter)
int VaLuE; // unconventional (see your psychiatrist) ;)
*/
```

## 1.8 Whitespaces and Basic Formatting
```cpp
/* Ex:
* int x; x is a variable
* int main(); main is function
* Some valid usecases :
* int       x;
* int y;
* int
    z;
*/
```
1. It’s fine to use either tabs or spaces for indentation (most IDEs
have a setting where you can convert a tab press into the appropriate number of spaces). Developers who prefer spaces tend to do so because it makes the formatting self-describing -- code that is spaced using spaces will always look correct regardless of editor. Proponents of using tabs wonder why you wouldn’t use the character designed to do indentation for indentation, especially as you can set the width to whatever your preference is. There’s no right answer here -- and debating it is like arguing whether cake or pie is better. It ultimately comes down to personal preference.

Either way, we recommend you set your tabs to 4 spaces worth of indentation. Some IDEs default to 3 spaces of indentation, which is fine too.

2. There are two acceptable styles for function braces.
The Google C++ style guide recommends putting the opening curly brace on the same line as the statement:
```cpp
int main() {
}
```
The justification for this is that it reduces the amount of vertical whitespace (you aren’t devoting an entire line to nothing but the opening curly brace), so you can fit more code on a screen. More code on a screen makes the program easier to understand.

However, we prefer the common alternative, where the opening brace appears on its own line:
```cpp
int main()
{
}
```
3. Each statement within curly braces should start one tab in from the opening brace of the function it belongs to. For example:
```cpp
int main()
{
    std::cout << "Hello world!\n"; // tabbed in one tab (4 spaces)
    std::cout << "Nice to meet you.\n"; // tabbed in one tab (4 spaces)
}
```

4. Lines should not be too long. Typically, 80 characters has been the de facto standard for the maximum length a line should be. If a line is going to be longer, it should be split (at a reasonable spot) into multiple lines. This can be done by indenting each subsequent line with an extra tab, or if the lines are similar, by aligning it with the line above (whichever is easier to read).
```cpp
int main()
{
    std::cout << "This is a really, really, really, really, really, really, really, "
        "really long line\n"; // one extra indentation for continuation line

    std::cout << "This is another really, really, really, really, really, really, really, "
                 "really long line\n"; // text aligned with the previous line for continuation line

    std::cout << "This one is short\n";
}
```
5. If a long line is split with an operator (eg. << or +), the operator should be placed at the beginning of the next line, not the end of the current line
