# C++ Tutorial
My way of learning C++  
...once again...  

Tutorial i'm learning from: [C++ Tutorial for Beginners by Programming with Mosh](https://www.youtube.com/watch?v=ZzaPdXTrSb8&)  

# Hello World
```c++
#include <iostream>  // include 'input-output stream' library

int main() {  // main is executed automatically
    // std = standard library
    // cout = character out
    // endl = end line
    std::cout << "Hello world!" << std::endl;  
    
    return 0;
}
```

```c++
#include <iostream>

using namespace std;

int main() {
    cout << "ahoj" << endl;
    cout << "ako " << "sa ";
    cout << "mas";

    return 0;
}
```


# Variables
```c++
int age = 21;
std::cout << age;
```

## Swapping two variables
```c++
int a = 1;
int b = 2;

int temp = a;
a = b;
b = temp;

std::cout << a << " " << b;
```

## Constants
```c++
const double pi = 3.14;
```

## Mathematical expressions
### Addition
```c++
int x = 10;
int y = 3;
int z = x + y  // 13
std::cout << z;
```

### Subtraction
```c++
int x = 10;
int y = 3;
int z = x - y;  // 7
std::cout << z;
```

### Multiplication
```c++
int x = 10;
int y = 3;
int z = x * y;  // 30
std::cout << z;
```

### Division
```c++
int x = 10;
int y = 3;
float z = x / y;  // 3
std::cout << z;
```
This will not work *(technically it will, but not really)*  
You are dividing 2 integers, so the result will be also an integer  
If you want to have result with decimal part, you have to change one variable to float/double  
```c++
float x = 10;
int y = 3;
float z = x / y;  // 3.33333
std::cout << z;
```

### Modulus
```c++
int x = 10;
int y = 3;
int z = x % y;
std::cout << z;  // 1
```

### Incrementing (and decrementing)
```c++
int x = 10;
x += 1;
```

#### Prefix and postfix
```c++
int x = 10;
int y = x++;  // x (equal to 10) is assigned to y, then x is incremented to 11
int z = ++x;  // x (equal to 11) is incremented to 12, then it's assigned to y
 
// x = 12
// y = 10
// z = 12
```

# Reading from console
```c++
int x;

std::cout << "Enter the value of x: ";
std::cin >> x;

std::cout << x << " * 2 = " << x * 2;
```
If I entered float, it will get converted to integer













