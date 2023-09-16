#include <iostream> //std library

int main()
{
    //1.2 Single Line Comments [15/9/2023]
    std::cout << "1.2";
    //Demonstrate the use of comments
    std::cout << "Hello World\n";

    // this is much easier to read
    std::cout << "It is very nice to meet you!\n";

    // don't you think so?
    std::cout << "Yeah!\n";

    // Multi Line Comments

    /* This is a multi-line comment.
   This line will be ignored.
   So will this one. */

   // Looks Ugly, how about :
   /* This is a multi-line comment.
    * the matching asterisks to the left
    * can make this easier to read
    */

    // 1.3 Intro to Object and Variables
    std::cout << "\n1.3";
    [[maybe_unused]] int x{ 21 }; //define variable named x, type int or we can do multiple e.g.
    [[maybe_unused]] int y; [[maybe_unused]] int z;
    // create different variables 
    // with different type in different lines, recommended :
    [[maybe_unused]] int a;
    [[maybe_unused]] double b;

    // 1.4 Variables assignment and initialization
    std::cout << "\n1.4";
    int width; // define an integer variable named width
    width = 5; // assignment of value 5 into variable width

    // variable width now has value 5

    std::cout << width; // prints 5

    width = 7; // change value stored in variable width to 7

    std::cout << width; // prints 7

    [[maybe_unused]] int c;         // no initializer (default initialization)
    int d = 5;     // initializer after equals sign (copy initialization)
    int e(6);    // initializer in parenthesis (direct initialization)

    // List initialization methods (C++11) (preferred)
    int f{ 7 };   // initializer in braces (direct list initialization)
    int g = { 8 }; // initializer in braces after equals sign (copy list initialization)
    [[maybe_unused]] int h{};      // initializer is empty braces (value initialization)

    [[maybe_unused]] int vv{ 5 };

    // since x is [[maybe_unused]], no warning generated

   // 1.5 Intro to iostream : cout, cin, endl
    std::cout << "\n1.5";
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

    std::cout << "Quiz \n";
    std::cout << "Enter a number: "; // ask user for a number
    int quiz1_4{}; // define variable x to hold user input
    std::cin >> quiz1_4; // get number from keyboard and store it in variable x
    std::cout << "You entered " << quiz1_4 << '\n';


    // 1.7 Identifier
    std::cout << "\n 1.7 \n";
    std::cout << "Best Naming Practices in Comments";
    /*
    int value; // conventional

    int Value; // unconventional (should start with lower case letter)
    int VALUE; // unconventional (should start with lower case letter)
    int VaLuE; // unconventional (see your psychiatrist) ;)
    */
    return 0;
}
