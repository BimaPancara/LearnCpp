# Basic Input Output Program

### Problem With std::getline
Encounter problem with `std::getline` and `operator>>`

Research on to this topic lead to this :

>You have to be careful when mixing `operator>>` with `getline`. The problem is, when you use `operator>>`, the user enters their data, then presses the enter key, which puts a newline character into the input buffer. Since `operator>>` is whitespace delimited, the newline character is not put into the variable, and it stays in the input buffer. Then, when you call `getline`, a newline character is the only thing it's looking for. Since that's the first thing in the buffer, it finds what it's looking for right away, and never needs to prompt the user. [link](https://stackoverflow.com/posts/6642898/timeline)

or this :
>Since you have not posted any code. I am going to take a guess.
>
>A common problem while using `getline` with `cin` is `getline` does not ignore leading whitespace characters.
>
>If getline is used after `cin >>`, the `getline()` sees this newline character as leading whitespace, and it just stops reading any further.
>
>**How to resolve it?**
>Call `cin.ignore()` before calling `getline()`
>Or
>make a dummy call `getline()` to consume the trailing newline character from the `cin >>` [link](https://stackoverflow.com/posts/6649914/timeline)

and this :
>The problem is probably that the last thing you read before the `std::getline()` is an integer (or something else using `operator>>()`. The formatted input operators stop reading when the first character not matching their format is encountered. For example, for an integer reading stops the monent a non-digit is entered (except for a leading sign). Thus, after reading an integer the newline character used to indicate that the input is done is still in the input buffer.
>
>To deal with the stuck newline you can just skip any leading whitespace before calking `std::getline()`:
```cpp
if (std::getline(std::cin >> std::ws, name)) {
    ...
}
```
>BTW, there is **never** a situation where you don't want to check user-input! User-input **always** needs checking, even in the most trivial programs where the input is _assumed_ to be right! It help with locating the actual problems dramatically. Given your output it looks as if tve input actually didn't match what is being read...
>[link](https://stackoverflow.com/posts/13326568/timeline)


Solution is to use `std::getline(std::cin >> std::ws, fullName);` just like the third solution use.


