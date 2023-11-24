# C++ 面试题回答（持续更新中）

|日期|新增问题|
|---|---|
|2023.11.21|1. C++异常处理机制的工作流程是什么 </br> 2. `typedef` 和 `#define` 的区别何在？ </br> 3. union 是什么，有什么用 ? </br> 4. `volatile` 关键字是做什么用的 </br> 5. 一个类中有一个 `int` 类型，一个 `char` 类型和一个虚函数，那它的大小是多少（或者说 `sizeof` 这个类的结果是多少）?|
|2023.11.24|1. 从源代码到可执行程序，中间的过程是什么样的？</br> 2. C++ 有哪几种类型转换，它们的区别何在?|

- [C++ 面试题回答（持续更新中）](#c-面试题回答持续更新中)
  - [请简要介绍一下 C++ 的历史及其与 C 语言的关系](#请简要介绍一下-c-的历史及其与-c-语言的关系)
  - [C++ 面向对象编程的三大特性是什么?并举例说明](#c-面向对象编程的三大特性是什么并举例说明)
  - [那么在 C++ 中多态是怎么实现的，编程实现一下](#那么在-c-中多态是怎么实现的编程实现一下)
  - [什么是类和对象的构造函数及析构函数? 它们的作用是什么?](#c-面向对象编程的三大特性是什么并举例说明)
  - [什么是类和对象的构造函数及析构函数? 它们的作用是什么](#什么是类和对象的构造函数及析构函数-它们的作用是什么)
  - [C++ 模板的作用是什么? 描述其语法形式](#c-模板的作用是什么-描述其语法形式)
  - [什么是 `STL` ? 讲述你熟悉的几种 `STL` 容器](#什么是-stl-讲述你熟悉的几种stl容器)
  - [如何理解和使用 C++ 中的引用`reference`，引用和指针有什么区别](#如何理解和使用-c-中的引用reference引用和指针有什么区别)
  - [什么是内联函数? 它与宏的区别是什么?](#什么是内联函数-它与宏的区别是什么)
  - [请简述几种常用的设计模式及其应用场景](#请简述几种常用的设计模式及其应用场景)
    - [单例模式](#单例模式懒汉版饿汉版)
      - [懒汉版](#懒汉版)
      - [饿汉版](#饿汉版)
    - [工厂模式（简单工厂模式，抽象工厂模式）](#工厂模式简单工厂模式抽象工厂模式)
    - [观察者模式](#观察者模式)
    - [职责链模式](#职责链模式)
    - [适配器模式](#适配器模式)
  - [如何理解 C++ 中命名空间的概念及其作用](#如何理解-c-中命名空间的概念及其作用)
  - [C++异常处理机制的工作流程是什么](#c异常处理机制的工作流程是什么)
    - [异常抛出 (throw)](#异常抛出-throw)
    - [异常捕获 (try)](#异常捕获-try)
    - [异常处理 (catch)](#异常处理-catch)
  - [`typedef` 和 `#define` 的区别何在？](#typedef-和-define-的区别何在)
  - [union 是什么，有什么用?](#union-是什么有什么用)
  - [`volatile` 关键字是做什么用的?](#volatile-关键字是做什么用的)
  - [一个类中有一个 `int` 类型，一个 `char` 类型和一个虚函数，那它的大小是多少（或者说 `sizeof` 这个类的结果是多少）?](#一个类中有一个-int-类型一个-char-类型和一个虚函数那它的大小是多少或者说-sizeof-这个类的结果是多少)
  - [从源代码到可执行程序，中间的过程是什么样的？](#从源代码到可执行程序中间的过程是什么样的)
    - [预处理](#预处理)
    - [编译](#编译)
    - [汇编](#汇编)
    - [链接](#链接)
  - [C++ 有哪几种类型转换，它们的区别何在?](#c-有哪几种类型转换它们的区别何在)
    - [显式类型转换 `Explicit type conversion`](#显式类型转换-explicit-type-conversion)
    - [隐式类型转换 `Implicit type conversion`](#隐式类型转换-implicit-type-conversion)
    - [函数样式转换 `Functional Notation`](#函数样式转换-functional-notation)
    - [旧式 C 风格转换 `C-like conversion`](#旧式-c-风格转换-c-like-conversion)

## 请简要介绍一下 C++ 的历史及其与 C 语言的关系

C++ 是一种通用的程序设计语言，和 C 一样，也是诞生于 贝尔实验室，它在 C 的基础上，添加了面向对象编程以及泛型编程的特性，并提供了一套更完善，更健壮的标准库。

同时，C++ 也继承了 C 简洁高效，快速，可移植性高的传统。

时至今日，C++ 经过多年的发展，已经有大量成熟了类库和活跃的开发者社区，是开发复杂系统的首选，
被广泛的应用在操作系统，数据库，游戏引擎等领域。

## C++ 面向对象编程的三大特性是什么?并举例说明

面向对象编程的三大特性是：继承，多态，封装

首先是继承：在继承机制下形成有层级的类，可以使低层级的类可以沿用高层级的特征和方法。
继承的目的有两个：

- 复用代码，减少代码的冗余，减少开发的工作量。

- 使类与类之间产生联系，为多态的实现打下基础。

其次是多态：是指一个类的同名方法，在不同的情况下实现的细节不同。
多态有以下目的：

- 一个外部接口可以被多个类同时使用

- 不同对象调用同一个方法，可以有不同的实现

在 C++ 中，多态主要依靠虚函数实现，在一个类方法前用 `virtual` 关键字修饰，就表示该方法是一个虚方法，
如果有一个子类继承了这个类，就可以重写这个方法。因此，父类调用这个方法和子类调用这个方法产生的结果是不同的。

最后说一下封装：封装就是将一个客观的事物抽象为一个逻辑实体，实体的属性和功能相互结合，形成一个整体。
并对这个实体设置访问控制，通过外部开放的接口可以访问这个实体，而无需知道内部的具体实现细节。
C++ 中的结构体和类就很好的使用了封装的特性。

## 那么在 C++ 中多态是怎么实现的，编程实现一下

多态，是指一个类的同名方法，在不同的方法实现不同，说的更专业一点，叫做同一个方法的行为随上下文而异。
在 C++ 中，多态是使用虚函数的形式实现的，也就是用 `virtual` 关键字去修饰一个类方法，便可以在子类中重写这个方法。

> 代码演示如下：

```C++
#include <iostream>

/*基类*/
class Basic
{
    private:
        int _data;

    public:
        Basic() : _data(0) {}
        Basic(int _dat) : _data(_dat) {}

        /*内部虚方法，用于展示类数据*/
        virtual void show() const { printf("%d\n", _data); }

        ~Basic() {}
};

/*派生类，公共继承自 Basic*/
class Dirver : public Basic
{
    private:
        int _d_data_1;
        int _d_data_2;

    public:
        Dirver() : Basic(), _d_data_1(0), _d_data_2(0) {}
        Dirver(int _dat, int _d1, int _d2) : Basic(_dat), _d_data_1(_d1), _d_data_2(_d2) {}

        /*重写 show 方法，展示基类和派生类的数据*/
        virtual void show() const 
        { 
            Basic::show();
            printf("%d\t%d\n", _d_data_1, _d_data_2); 
        }

        ~Dirver() {}
};

/*这样，就在 C++ 中实现了一个简单的多态。下面是测试用例：*/
int main(int argc, char const *argv[])
{
    Basic b(12);
    Dirver d(12, 21, 33);

    b.show();   // 输出 12

    d.show();   // 输出 12 21 33

    return 0;
}
```

## 什么是类和对象的构造函数及析构函数? 它们的作用是什么?

构造函数和析构函数是 C++ 类中最重要的两类函数，他们分别负责类的创建和销毁。
首先讲一下构造函数，它通过传入的参数创建一个类，在 C++ 的类中，通常有以下几种构造函数：

- 默认构造函数，一个类如果没有显示的声明构造函数，那么它就会自己创建一个默认构造函数，为类成员进行初始化，当然，也可以在某个构造函数后面加上 = defult 来显示的声明一个默认构造函数。

- 参数构造函数，就是有参数列表的构造函数，该函数可以根据传入的参数来构建并初始化一个类的数据。

- 拷贝构造含数，这类构建函数需要传入一个同类对象的引用，将对象 B 的数据深拷贝到对象 A 中。

- 移动构造函数，这类构造函数需要传入一个对象引用的引用，将原对象的所有权转移到新对象中去，通俗的说就是将原对象的内容搬到新对象中去，而非拷贝。

接下来讲一下析构函数，它的任务很简单，在类的声明周期到头时销毁这个类，如果有一些申请在堆上面的内存，可以放到析构函数中去销毁。

用一段代码去展示：

```C++

class A
{
    private:
        int *_arr;
        std::string _disc;

    public:
        /*默认构造函数*/
        A() : _arr(nullptr), _disc("NULL DATA") = defult {}

        /*参数构造函数*/
        A(int *_array, int _a_size, std::string & _str);

        /*拷贝构造函数*/
        A(A & _a);

        /*移动构造函数*/
        A(A && __a);

        /*析构函数*/
        ~A() { delete[] _arr; }
};

```

## C++ 模板的作用是什么? 描述其语法形式

C++ 通过模板 `Template` 来提供泛型编程的支持，他可以让一个函数或类可以适应不同类型的参数，以达到更高的泛用性，像 C++ 的 `STL` 容器就是基于模板实现的S。

要使用模板，需要引入 `template` 和 `typename` 这两个关键字，语法如下：

```C++

/*模板函数*/
template <typename Type>
void function(Type & _type);

/*模板类*/
template <typename Type>
class A
{
    private:
        Type _data;

    public:
        A(Type & _ty);
};

/*从外部实现模板类方法*/
template <typename Type>
A::A(Type & _ty) : _data(_ty) {}
```

若要使用模板函数和模板类，最好显示的指定类型，语法如下（当然，不指定在某些情况下也是可以的，编译器会自动判断相应的类型并替换）：

```C++

/*使用模板函数*/
function<int>(value);

/*使用模板类*/
A<const int> _a;

```

## 什么是 STL? 讲述你熟悉的几种STL容器

`STL` 全称为 `Standing Template Library`，是 C++ 提供的一套标准模板库，该模板库提供了多种容器的实现（如 `vector`，`list`，`array`，`string`，`stack`，`queue`，`map`，`set` 等），还引入了迭代器 `iterator` 的概念，使得 `STL` 更加健壮和通用。

接下来将介绍几个我熟悉的 STL 容器：

``` md

1. std::vector
    
vector 本质上就是一个可以自动扩容，缩减的数组容器，该容器的常用方法如下：

    1.push_back() 在末尾插入元素，如果数组以满则扩容，一般是扩大原数组长度的一半，然后将原数组中的数据拷贝到新数组后，删除原数组。

    2.pop_back() 删除数组末尾的元素，同时执行上述拷贝操作缩减数组的长度

    3.size() 求数组长度

    4.capacity() 求数组容量

    5.insert() 从数组指定位置插入元素，该操作由于需要移动数组元素位置，会很慢，复杂度在 O(n)

    6.erase() 从数组指定位置删除元素，该操作和 5 一样，需要移动数组元素，会很慢。

    7.begin() end() 返回数组第一个元素和最后一个元素的迭代器 (iterator)

    8.swap() 交换两个元素的值

    9.at() 返回容器内一个索引值的引用

    10.reserve() 重设该容器的大小

2. std::stack 一个栈的实现，常用方法如下：

    1.push() 入栈，将数据放入栈头，并偏移 top 指针指向该数据，该数据就成为新的栈头。

    2.pop() 出栈，将栈头数据弹出，并偏移指针 top 指针指向下一个数据，下一个数据就成为新的栈头。

    3.empty() 检查是否为空栈，返回一个 bool 类型。

    4.top() 返回栈头元素值的引用。

    5.swap() 交换两个栈元素的值。

    6.emplace() 可以直接在栈顶构造并插入一个元素，省去了拷贝的开销。

```

## 如何理解和使用 C++ 中的引用`reference`，引用和指针有什么区别?

引用是 C++ 的新特性，可以避免传递数据时拷贝所带来的开销。
在 C++ 中，有 3 种传递方式：按值传递，按指针传递，按引用传递，按值和按指针都需要将右值的数据拷贝一份再传递到左值中。
而按引用传递不一样，它直接将原变量名修改为要传递的变量名，这样就避免了拷贝带来的开销。

代码示例：

```C++
const int a = 10;

/*直接将变量 a 的名称改为 ref_a，或者说将 ref_a 绑定在 a 上面，避免了值传递的拷贝所带来的开销*/
const int & ref_a = a;

ref_a = 10; /*错误，不可修改*/

/*在函数中，使用引用变量作为参数列表也可以避免拷贝*/
std::vector<int> & function(std::array<int> & _array);

```

## 什么是内联函数? 它与宏的区别是什么?

内联函数 `inline function` 是指在编译环节中展开，而非跳转的函数。
在 C++ 中，使用 `inline` 关键字显式声明或者在类内部实现方法的就是内联函数。
内联函数和普通函数最大的不同就是执行的流程不一样，普通的函数是跳转到函数的入口，然后执行函数，函数执行完毕后再跳转回主函数中。而内联函数则直接将函数体替换到主函数之中，省去了跳转所带来的开销。当然，内联函数也有缺点，频繁的使用会让代码过于臃肿，因此内联函数非常适合那种短小，但调用十分频繁的函数。

内联函数也有一些有别于其他类型函数的特点：

- 内联函数不能取地址

- 虚函数不可以是内联的

代码示例：

``` C++

class A
{
    private:
        int *_arr;
        size_t size;
        size_t capacity;

    public:
        A() = default;
        A(const int *_a, size_t _s, size_t _c) : size(_s), capacity(_c);

        /*像 size，capacity 这样的，只有一条 return 语句的函数，非常适合作为内联函数*/
        size_t size() const { return size; }

        size_t capacity() const { return capacity; }

        ~A();
};

```

当然 `inline function` 和  `macro` 的区别也很多，如下：

- 宏实在预处理阶段展开，而内联函数实在编译阶段展开。

- 内联函数可以重载，但宏不能。

- 内联函数遵循作用域，命名空间规则，但是宏不会

- 内联函数在运行时可调试，但是宏函数不能。

- 内联函数在编译时会有类型检查，而在预处理阶段的宏不会。

## 请简述几种常用的设计模式及其应用场景

### 单例模式（懒汉版，饿汉版）

是使用最广泛的模式。
其意图是保证一个类仅有一个实例，并提供一个访问它的全局访问点，该实例被所有程序共享。
一般情况下，C++ 的单例类定义如下：

- 私有化它的构造函数，防止外界创建单例类对象；

- 使用类的私有静态指针变量指向类的唯一实例；

- 使用一个公有静态方法获取该实例；

单例模式的实现分为 懒汉版 和 饿汉版，代码如下：

#### 懒汉版

```C++
/**
*   懒汉版 （Lazy Singleton）
*   即单例实例在第一次使用的时候才初始化（延迟初始化）
*/
class Singleton
{
    private:
        static Singleton * instance;
    
    private:
        Singleton() {}

        Singleton(const Singleton & _ins);

        Singleton & operator=(const Singleton & _ins);

        ~Singleton() {}

    public:
        static Singleton * get_instance()
        {
            if ( !instance ) { instance = new Singleton(); }

            return instance;
        }
};

Singleton * Singleton::instance = nullptr;

```

### 饿汉版

```C++
/**
*   饿汉版 （Eager Singleton）
*   即单例实例在程序运行时被立即执行初始化
*/
class Singleton
{
    private:
        static Singleton instance;
    
    private:
        Singleton() {}

        Singleton(const Singleton & _ins);

        Singleton & operator=(const Singleton & _ins);

        ~Singleton() {}

    public:
        static Singleton & get_instance() { return instance; }
};

Singleton Singleton::instance;

```

单例模式的应用场景也有很多，

由于一个操作系统中有且只能有一个任务管理器，因此最经典单例模式的应用场景莫过于操作系统的任务管理器。

### 工厂模式（简单工厂模式，抽象工厂模式）

一种创建型设计模式，它提供一种在不指定具体类的情况下创建对象的接口，这使得客户端与类的具体实现解耦，提高了代码的可扩展性和可维护性。

在 C++ 中，工厂模式最常见的操作就是设置一个抽象基类，然后派生多个子类去完成不同的实现，代码就省略了。。。

最常见的应用场景比如 C++ STL 中的 List Map Stack 容器，可以避免暴露底层的实现细节。

### 观察者模式

一种行为设计模式，它定义了一种一对多的依赖关系，当一个对象的状态发生变化时，对所有观察者都会收到通知并更新。

这种模式在 UI 更新上面有广泛的应用。

### 职责链模式

........

### 适配器模式

........

## 如何理解 C++ 中命名空间的概念及其作用

命名空间 `namespace` 是 C++ 一种组织代码的方法，它允许将一组相关的符号（变量，结构体，类 等）划分到一起，以便更好地管理和访问，同时也避免了命名冲突 ，提高代码的可读性和可维护性，像 C++ 标准库的所有内容都放在一个叫 `std` 的命名空间内。

此外，命名空间还可以随时扩展，只需要重新声明命名空间即可。

代码举例如下：

```C++
namespace Space_01
{
    int number;
};

/**
*   命名空间可以随时扩展，
*   扩展完后的命名空间有 number 和 _disc 两个成员
*/
namespace Space_01
{
    std::string _disc;
};

namespace Space_02
{
    int number;

    /*当然，命名空间也可以嵌套*/
    namespace Space_03 { size_t value; }
};

int main(int argc, char const *argv[], char const *envp[])
{
    /*
        如果要使用命名空间，可以使用 using 关键字和 作用域解析运算符 ::
        
        1.  using Space_01::number;     
        using 声明，表示使用命名空间 Space_01 中的 number 成员，
        在声明后使用成员 number 就无需带上 Space_01 的前缀。

        2.  using namespace Space_02;   
        using 编译指令，表示使用整个 Space_02 命名空间，
        在声明后使用这个命名空间的所有成员都不需要带上 Space_02 的前缀，
        当然这也会加剧命名冲突的问题。
    */

    
    std::cout << Space_01::number;
    std::cout << Space_02::number;

   return EXIT_SUCCESS; 
}
```

## C++异常处理机制的工作流程是什么

C++ 异常处理机制一般分为 3 个步骤，分别是：

### 异常抛出 (throw)

在程序执行过程中，如果发生异常（exception）情况，（如 除数为 0，访问已经 `delete` 的内存，解引用 `nullpter` 指针等），
就会抛出异常，一般是使用 throw 关键字。

### 异常捕获 (try)

`try` 用于发现异常，若异常在 `try` 语句块内，就可以被捕获到，然后跳转到 `catch` 语句块进行处理。

### 异常处理 (catch)

`catch` 语句块用于处理异常，`catch` 语句块用于处理 `try` 语句块中发生的异常，并执行相应的代码来提示或处理，
当然，`catch` 语句可以有多个，由于处理不同情况的异常。

举个例子

```C++
#include <iostream>

//#include <exception>

class function_exception
{
    private:
        int error_value;
    
    public:
        function_exception(int _err_val) : error_value(_err_val) {}

        void message() const { printf("Number is %d!\n", error_value); }

        ~function_exception() {}
};

int function(int number)
{
    //若出现 0 值的情况，就抛出一个字符串：number is ZERO!
    if (!number) { throw "number is ZERO!"; }

    //当然也可以抛出一个异常对象
    if (!number) { throw function_exception(number); }


    return number;
}

int main(int argc, char const *argv[])
{
    int num = 0;

    //在 try 块中检测哪些可能会抛出异常的函数。
    try
    {
        num = function(0);
    }
    //在 catch 中将 try 块中捕获的异常进行输出，这是抛出字符串的语法
    catch (const char * _message)
    {
        std::cerr << _message << std::endl;
    }
    //这是抛出一个对象的语法
    catch (const function_exception & _f_except)
    {
        _f_except.message();
    }

    return 0;
}
```

## `typedef` 和 `#define` 的区别何在？

||`typedef` 和 `#define` 的区别|
|---|-------------------------------|
|1. 定义方式不同|`typedef` 是关键字，用于定义一个新的类型，而 `#define` 是预处理指令，用于进行文本的替换。|
|2. 作用时间不同|`typedef` 在编译阶段进行处理，而 `#define` 在预处理阶段进行处理。|
|3. 类型检查不同|`typedef` 严格遵循类型检查，相对安全。但 `#define` 就是单纯的替换，因此可能会出现难以察觉的错误。|
|4. 作用域不同|`typedef` 遵循作用域规则，只在指定范围内生效，而 `#define` 在整个文件，甚至跨文件都生效。|
|5. 使用场景不同|`typedef` 适合创建新的类型， `#define` 适用于创建常量或代码片段的简写，避免重复。|

## union 是什么，有什么用?

`union` 联合体，一种 C/C++ 的复合数据类型，它能在同一个内存空间中存储不同的数据类型，但在任意时刻只有一个成员是有效的。
定义联合体时会根据最大的数据成员来分配内存，每一个成员都会从这片内存的开头开始存储，
所以联合体的关键作用就是节省内存，让多个不同的数据共享同一块内存使用。

联合的典型用法是：设计一种存储既无规律，也不知道顺序的混合类型。
当然在底层硬件访问和网络处理数据中就大量使用了联合体。

```C
/*
    假设有这样的联合体，那它的内存就是 48 字节（最大的数据成员，并考虑内存对齐），
    每个成员都从这片内存的开头开始存储。
*/
union Test_Union
{
    double value_1;
    int value_2;
    char _str[45];
};

int main(int argc, char const *argv[])
{
    //初始化联合体，使用指定初始化器（C99），将成员 value_1 初始化为 12.05。
    union Test_Union _test = {.value_1 = 12.05};

    //清除掉 12.05，重新初始化为 121 
    _test.value_2 = 121;

    //清除掉 121，重新初始化为字符串 This is a string...
    strcpy(_test._str, "This is a string...");

    return 0;
}
```

## `volatile` 关键字是做什么用的?

`volatile` 关键字的中文意思是：不稳定的，易变的，在 C/C++ 中主要是防止一个变量在编译器开启 `-O` 的时候被优化。以及在多线程编程中，防止某些共享的变量被编译器优化掉，从而造成线程不安全的情况。

用一段简单代码来说明：

```C
int main(int argc, char const *argv[])
{
    int i = 0;

    printf("11\n");

    // 一个很简陋的延时操作，其目的就是浪费代码执行时间
    for (i = 0; i < INT_MAX; ++i) {}

    printf("22");
}
```

上面的代码，的运行结果也很简单，就是先输出 11 过一小段时间之后再输出 22。

但如果我们在编译时开启优化：

```bash
gcc test.c -o test -O3
```

那么编译器就认为哪个什么都不执行的循环就是废话，因此就会将它优化，就达不到延时的目的了。

这时就使用 `volatile` 关键字来修饰变量 `i`，如下面代码所示：

```C
int main(int argc, char const *argv[])
{
    //告知编译器，不要优化这个变量，和使用这个变量的语句
    volatile int i = 0;

    printf("11\n");

    // 一个很简陋的延时操作，其目的就是浪费代码执行时间
    for (i = 0; i < INT_MAX; ++i) {}

    printf("22");
}
```

这样，无论编译器怎么使用 `-O` 去优化，也不会删除这些 “废话”，从而达到延时输出的效果。

当然，`volatile` 可以防止优化，但是会降低性能，因此只在必要时使用。过度使用会很大的影响效率。

## 一个类中有一个 `int` 类型，一个 `char` 类型和一个虚函数，那它的大小是多少（或者说 `sizeof` 这个类的结果是多少）?

`J` 的不屑，这种问题最简单了，写段代码说明：

```C++
class A
{
    private:
        int val_1;  // 4 字节
        char val_2; // 1 字节

    public:
        virtual void function();        //一个虚函数指针 8 字节

    /*
        但是也要考虑内存对齐的问题，这里的内存必须是 8 的倍数，因为 64 位机的指针位 8 字节，所以得多填充 3 字节。
        因此，这个类的大小就是 4 + 1 + 8 + 3 = 16 Bytes 
    */
};
```

## 从源代码到可执行程序，中间的过程是什么样的？

从源代码到可执行程序，分为 4 个过程，分别是：`源代码` -> `预处理` -> `编译` -> `汇编` -> `链接` -> `可执行文件`，
接下来我使用 `GCC` 编译器在 `Linux` 环境上进行演示：

假设我写了几个 .c 源文件，它们的文件名和互相包含的关系如下表所示：

|源文件     |所包含文件      |
|----------|------------------|
|main.c    |`stdio.h` table.h|
|list.c    |list.h           |
|symbol.c  |symbol.h         |
|table.c   |table.h          |

|头文件|所包含文件|
|--------|-------|
|table.h |symbol.h list.h|

**注：做标注的为标准库头文件*

文件结构如下图所示：

![project_struct](https://github.com/JesseZ332623/CPP_Interview_Question/assets/101250851/d0509ab9-3aa2-4387-9023-aa1440658fc5)

接下来开始编译他们：

### 预处理

使用 `GCC` 编译器的 `-E` 和 `-o` 选项将所有源文件做预处理（这可以靠编写脚本来执行多条命令）：

```sh
gcc -E list.c -o list.i
gcc -E symbol.c -o symbol.i
gcc -E table.c -o table.i
gcc -E main.c -o main.i
```

预处理环节所做的工作如下：

- 展开宏定义和头文件
- 替换条件编译
- 删除注释，和多余的空格

### 编译

使用 `GCC` 编译器的 `-S` 和 `-o` 选项将经过预处理的文件进行编译

```sh
gcc -S list.i -o list.s
gcc -S symbol.i -o symbol.s
gcc -S table.i -o table.s
gcc -S main.i -o main.s
```

编译环节所作的工作如下：

- 检查代码的语法规范，如果检查到语法问题会报错并停止编译
- 将预处理文件翻译成汇编代码

**注：编译环节是消耗资源，时间最多的环节*

### 汇编

使用 `GCC` 编译器的 `-c` 和 `-o` 选项汇编 .s 文件

```sh
gcc -c list.s -o list.o
gcc -c symbol.s -o symbol.o
gcc -c table.s -o table.o
gcc -c main.s -o main.o
```

汇编环节所做的工作如下：

- 将汇编代码翻译成机器码

### 链接

使用 `GCC` 编译器的 `-o` 选项链接 .o 文件和标准库文件，使之形成最后的可执行文件 `excutable_file`（一般情况下 Linux 的可执行文件是没有后缀的）

```sh
gcc list.o symbol.o table.o main.o -o excutable_file
```

这样就完成了从源代码到可执行文件的全过程。（所有过程文件可以查看路径 `./project`）

## C++ 有哪几种类型转换，它们的区别何在？

C++ 的类型转换大致可以分为 4 种，它们分别是：

- 显式类型转换 `Explicit type conversion`
- 隐式类型转换 `Implicit type conversion`
- 函数样式转换 `Functional Notation`
- 旧式 C 风格转换 `C-like conversion`

而显示类型转换 `Explicit type conversion` 又可以细分为以下 4 种：

- `static_cast`  静态转换
- `dynamic_cast` 动态转换
- `const_cast`   const 转换  
- `reinterpret_cast` 重新解释转换

接下来我将详细的讲解这些转换：

### 显式类型转换 `Explicit type conversion`

需要用户显式的进行类型转换的操作，主要有：

`static_cast`  静态转换：用于非多态类型的转换，比如 `int` 到 `float` 的转换。

`dynamic_cast` 动态转换：用于多态类型的转换，比如父类到子类。

`const_cast`   const 转换：用于去除 `const` 属性。

`reinterpret_cast` 重新解释转换：用于无关类型之间的转换。

### 隐式类型转换 `Implicit type conversion`

C++ 自动执行的转换，无需用户操作，比如将 `int` 转换成 `long long int`。（也就是 `lower intenger` 到 `heigher intenger`）

### 函数样式转换 `Functional Notation`

通过构造函数进行类型转换，例如下面的代码：

```C++
std::string _str = "This is a string....";
```

显然 `"This is a string...."` 是 C 风格字符串 (`const char *` 类型)，
它会和 `std::string` 中的 `basic_string &operator=(const _CharT *__s)` 构造函数匹配，然后成为这个构造函数的参数，最后构造这个类。

### 旧式 C 风格转换 `C-like conversion`

即 C 语言风格的类型转换，例如下面的代码：

```C++
int number = 21;

/*将 整数 number 强行显示的转换成 long double 类型*/
long double _value = (long double)number + 0.145134;

std::cout << _value << std::endl;
```

当然，这种风格会造成很多不安全，不可预料的情况，
因此在 C++ 中不推荐使用这种旧式风格的转换，但更鼓励用户使用 C++ 显式类型转换。

### Latest update: 2023.11.21

#### Author: [JesseZ332623](https://github.com/JesseZ332623)

![swing](https://github.com/JesseZ332623/CPP_Interview_Question/assets/101250851/17babd4c-9fa6-4f36-83d4-e2c11ba6d362)

EOF
