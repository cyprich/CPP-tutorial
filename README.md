# C++ Tutorial
My way of learning C++  
...once again...  

Tutorial i'm learning from: [C++ for Java Programmers by Mary Elaine Califf](https://www.youtube.com/watch?v=ZzaPdXTrSb8&)  
I already *\*cough\** know *\*cough\** Java, so this tutorial will (mostly) show the differences of C++ compared to Java

# Hello World
```c++  
#include <iostream>
// using namespace std;

int main() {
    std::cout << "Hello world!" << std::endl;
    return 0;
}
```

# Input/Output  
Standard input stream - **cin**  
Standard output stream - **cout**

```c++
std::cout << "Enter your age: ";

int age;
std::cin >> age;
std::cout << "Your age is: " << age << std::endl;

return 0;
```

# Primitive types
| Modifier | Minimum Size |
|-|-|
| short | 16 bits |
| long | 32 bits |
| long long | 64 bits |

| Integer Sign | Min | Max |
|-|-|-|
| Signed | -2_147_483_648 | 2_147_483_647 |
| Unsigned | 0 | 4_294_967_295 |

0 is ***false***  
Everything other is ***true***

Keyword for constant is **const** rather than final  
Value has to be assigned to constant when declared, it cannot be changed afterwards  

# Functions
Functions can exist outside classes  

Order matters - you have to declare the function before using it  
By typing `#include <iostream>` you are putting all functions of *iostream* to your program  

### Example
#### Error
We tried to run *calculate()* before it was declared  
```c++
#include <iostream>

int main() {
    int result = calculate(5);
    std::cout << result << std::endl;
}

double calculate(double number) {
    return number * 2;
}
```

#### Fix #1
We moved *calculate()* before *main()*
```c++
#include <iostream>

double calculate(double number) {
    return number * 2;
}

int main() {
    int result = calculate(5);
    std::cout << result << std::endl;
}
```

#### Fix #2 - function prototype
It is recommended to use this way
```c++
#include <iostream>

double calculate(double number);

int main() {
    int result = calculate(5);
    std::cout << result << std::endl;
}

double calculate(double number) {
    return number * 2;
}
```

# Parameters 
## Types
### Pass by value
`void func(int param){...}`  
Default way, such as in Java  
We pass parameter to function, it gets converted to local variable and changes **won't be reflected** to the original variable  

### Pass by reference
`void func(int& param){...}`  
Any changes made to the parameters **will get reflected** to the original variable  

Pass by reference usually uses less memory *(?)*  
However, if you don't want the variable to be modified, you can include *const* before the parameter  
`void func(const int& param){...}`  

## Default arguments
`void func(int minAge = 18){...}`  
If you don't provide value when calling *func()*, it will make it 18 by default  
Default argument(s) has to be the last (all the way on the right side)  
If you are using prototype, you can specify the default value just once, either in prototype *(preferred)* or in normal function declaration  


