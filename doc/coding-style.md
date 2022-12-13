# Coding Style for RaumMotor

A coding style is simply used for the sake of a coherent appearence of a project's source code. It often doesn't matter what kind of style is used, it is simply important to have something defined to follow. This is especially important in projects where many people are working on the code.

This following is RaumMotor's coding style definition.

## C++

C++ will use the following coding style.

### Brackets

Whenever curly brackets are used they are put into the next line of code.

This is what intended:
```cpp
void func()
{
	return;
}
```

This rule also applies to if statements. Which leads to if's like this:
```cpp
if(val == true)
{
	func();
}
```

Bracketless if statements are to be avoided, since they can be easily overlooked.