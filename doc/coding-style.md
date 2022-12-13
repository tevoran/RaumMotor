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

### Naming

#### Functions

Function names are written in camel case.
```cpp
void beHappy()
{
    return;
}
```

#### Variables and Classes

Variables use snake case. It is also noteworthy that member variables of classes use an initial "m_" and static member variables an initial "s_".
```cpp
int i_am_a_variable = 0;

class cool_class
{
    private:
        bool m_is_this_true = true;
        static int s_state;
        long m_large_number = 123456;
};
```

#### Macros and Constants

Macros and constants use uppercase snake case. This also applies to enum constants.

```cpp
#define HOLY_COW
const int I_AM_A_CONSTANT_AS_WELL 30;
```

### Indentation

Indentation is done by using 4 spaces instead of a tab.