# C++ 面试题回答（持续更新中）

|日期|新增问题|
|---|---|
|2023.11.21|1. C++异常处理机制的工作流程是什么 </br> 2. `typedef` 和 `#define` 的区别何在? </br> 3. union 是什么，有什么用 ? </br> 4. `volatile` 关键字是做什么用的 </br> 5. 一个类中有一个 `int` 类型，一个 `char` 类型和一个虚函数，那它的大小是多少（或者说 `sizeof` 这个类的结果是多少）?|
|2023.11.24|1. 从源代码到可执行程序，中间的过程是什么样的?</br> 2. C++ 有哪几种类型转换，它们的区别何在?|
|2023.11.26|1. 在 C++ 中，类构造函数能不能抛出异常呢?析构函数呢?</br> 2. 你刚才在回答中提到了智能指针，也不妨详细的展开来讲讲|
|2023.11.29|1. C++ 和 C 中的 `register`，`static`，`auto` 关键字区别何在，它们在两个语言间有没有什么不同的用法? </br> 2. 右值引用是什么? std::move 是为了解决什么问题?|

- [C++ 面试题回答（持续更新中）](#c-面试题回答持续更新中)
  - [请简要介绍一下 C++ 的历史及其与 C 语言的关系](#请简要介绍一下-c-的历史及其与-c-语言的关系)
  - [C++ 面向对象编程的三大特性是什么?并举例说明](#c-面向对象编程的三大特性是什么并举例说明)
  - [那么在 C++ 中多态是怎么实现的，编程实现一下](#那么在-c-中多态是怎么实现的编程实现一下)
  - [面向对象编程的三大特性是什么? 并举例说明](#c-面向对象编程的三大特性是什么并举例说明)
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
  - [不错，对 C++ 的异常还算了解，那么在 C++ 中，类构造函数能不能抛出异常呢?析构函数呢?](#不错对-c-的异常还算了解那么在-c-中类构造函数能不能抛出异常呢析构函数呢)
    - [构造函数抛出异常所带来的影响与正确的处理方式](#构造函数抛出异常所带来的影响与正确的处理方式)
    - [析构函数抛出异常所带来的影响与正确的处理方式](#析构函数抛出异常所带来的影响与正确的处理方式)
  - [嗯，不错的回答，你刚才在回答中提到了智能指针，也不妨详细的展开来讲讲](#嗯不错的回答你刚才在回答中提到了智能指针也不妨详细的展开来讲讲)
    - [`C++98` 引入](#c98-引入)
      - [`auto_ptr`](#auto_ptr)
    - [`C++11` 引入](#c11-引入)
      - [`unique_ptr`](#unique_ptr)
      - [`shared_ptr`](#shared_ptr)
      - [`weak_ptr`](#weak_ptr)
        - [避免 `shared_ptr` 的循环引用](#避免-shared_ptr-的循环引用)
        - [判断 `shared_ptr` 的实例是否失效](#判断-shared_ptr-的实例是否失效)
        - [在不延长作用域的情况下（续命）访问 `shared_ptr` 所指向的那片内存的数据](#在不延长作用域的情况下续命访问-shared_ptr-所指向的那片内存的数据)
  - [`typedef` 和 `#define` 的区别何在?](#typedef-和-define-的区别何在)
  - [union 是什么，有什么用?](#union-是什么有什么用)
  - [`volatile` 关键字是做什么用的?](#volatile-关键字是做什么用的)
  - [一个类中有一个 `int` 类型，一个 `char` 类型和一个虚函数，那它的大小是多少（或者说 `sizeof` 这个类的结果是多少）?](#一个类中有一个-int-类型一个-char-类型和一个虚函数那它的大小是多少或者说-sizeof-这个类的结果是多少)
  - [从源代码到可执行程序，中间的过程是什么样的?](#从源代码到可执行程序中间的过程是什么样的)
    - [预处理](#预处理)
    - [编译](#编译)
    - [汇编](#汇编)
    - [链接](#链接)
  - [C++ 有哪几种类型转换，它们的区别何在?](#c-有哪几种类型转换它们的区别何在)
    - [显式类型转换 `Explicit type conversion`](#显式类型转换-explicit-type-conversion)
    - [隐式类型转换 `Implicit type conversion`](#隐式类型转换-implicit-type-conversion)
    - [函数样式转换 `Functional Notation`](#函数样式转换-functional-notation)
    - [旧式 C 风格转换 `C-like conversion`](#旧式-c-风格转换-c-like-conversion)
  - [C++ 和 C 中的 `register`，`static`，`auto` 关键字区别何在? 它们在两个语言间有没有什么不同的用法?](#c-和-c-中的-registerstaticauto-关键字区别何在它们在两个语言间有没有什么不同的用法)
    - [`register` 关键字在 C/C++ 中的区别和用法](#register-关键字在-cc-中的区别和用法)
    - [`static` 关键字在 C/C++ 中的区别和用法](#static-关键字在-cc-中的区别和用法)
    - [`auto` 关键字在 C/C++ 中的区别和用法](#auto-关键字在-cc-中的区别和用法)
      - [常规用法](#常规用法)
      - [有关 `auto` 的新特性(C++20)](#有关-auto-的新特性)
  - [右值引用是什么? `std::move` 是为了解决什么问题?](#右值引用是什么-stdmove-是为了解决什么问题)
    - [概要](#概要)
    - [移动语义构造函数 与 `std::move()`](#移动语义构造函数-与-stdmove)

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

## 不错，对 C++ 的异常还算了解，那么在 C++ 中，类构造函数能不能抛出异常呢?析构函数呢?

从理论上讲 构造函数和析构函数都能够抛出异常，但这会导致程序发生未定义行为，在实际工作中是应该要避免的，接下来我将分别说明两者：

### 构造函数抛出异常所带来的影响与正确的处理方式

- 意味着对象创建失败了，但此时系统已经为这个对象分配的资源，这会造成浪费。
- 无法调用析构函数，因为抛出异常后，对象没有被真正的创建，也就无法调用相应的析构函数，这可能会导致内存泄漏。
- 若在栈上创建了一个对象，然后这个对象的析构函数抛出异常被外部捕获，这会导致该对象处于未定义的状态。

所以可以使用下面的几种方法处理构建函数的异常：

- 使用错误码，并设置公共接口 `is_valid()` 来检查这个对象是否被成功创建，示例代码如下：

```C++
class A
{
    public:
        /*一个匿名的枚举类型，用于表示对象的状态*/
        enum { _ERROR_ = 0, _READY_ = 1 };
    
    private:
        int *_data;
        bool _state;

    public:
        /*在构建函数中使用 new 在堆中申请内存，如果申请失败，就将状态码赋值给 _state*/
        A() : _data(new int[12]) { (!_data) ? _state = _ERROR_ : _state = _READY_; }
        A(size_t _size) : _data(new int[_size]) { (!_data) ? _state = _ERROR_ : _state = _READY_; }

        /*公共接口 is_valid 用于判断该类是否可用*/
        bool is_valid() { return _state == _READY_; }

        ~A();
};

/*测试用例*/
int main(int argc, char const *argv[])
{
    A _a;
    if (!_a.is_valid()) { sprintf(stderr, "Create This Object Failed....\n"); }
}
```

- 使用智能指针(C++11) 中的 `unique_ptr`，来处理构建函数的异常，示例代码如下：

```C++
int main(int argc, char const *argv[])
{
    /*使用智能指针创建这个类，如果创建失败，就会返回 nullptr，也能做到和错误码类似的效果，并且更通用，安全。*/
    std::unique_ptr<A> _a(new A(100));

    if (!_a) { sprintf(stderr, "Create This Object Failed....\n"); }
}
```

### 析构函数抛出异常所带来的影响与正确的处理方式

若析构函数抛出异常，程序会自动调用 `std::terminate` 来强制终止程序，用户连出错的地方在哪都不知道。。。

因此，可以这样处理析构函数的异常：

- 还是上面的那个类 `A`，它的析构函数实现如下：

```C++
A::~A()
{
    /*在 try 块中 detele 堆内存*/
    try
    {
        delete[] _data;
    }
    catch(const std::exception _except)     /*若出现异常，则跳转到 catch 块，进行报错并处理*/
    {
        /*试图使用 free 去释放，如果再不成功，只能认命，这片内存泄漏了*/
        free(_data);
        /*防止悬空指针*/
        _data = nullptr;

        /*报错，至少在调试的时候知道出现泄漏的情况*/
        fprintf(stderr, "delete _data failed: %s\n", _except.what());
    }
}
```

这样就成功抛出了异常，还解决了可能出现的未定义行为。

## 嗯，不错的回答，你刚才在回答中提到了智能指针，也不妨详细的展开来讲讲

智能指针是从 `C++98` ~ `C++11` 时期提出并发展的，拥有和指针相似行为的模板类，它们都声明在 `<memory>` 头文件中，且分为以下四种：

### `C++98` 引入

#### `auto_ptr`

实现了对象独占所有权的语义（有且仅有这一个智能指针来管理这片内存），但是 `auto_ptr` 也有很多问题，
比如不支持赋值语义，在转移所有权后原指针就失效了，如果原来的 `auto_ptr` 作用域还没到头，强行调用那个智能指针会引发异常。
因此该智能指针在 `C++11` 版本就被 `unique_ptr` 取代。
`auto_ptr` 代码示例：

```C++
#include <memory>
#include <iostream>
#include <cstdlib>
#include <string>
/**
 * 使用 auto_ptr 的示例
*/

/*一个很简单的 Report 类*/
class Report
{
    private:
        std::string _str;
    
    public:
        /*构建函数*/
        Report(const std::string & _s) : _str(_s) { printf("Object Created.\n"); }

        /*输出 _str 的内容*/
        void commit() const { printf("%s\n", _str.c_str()); }

        /*析构函数*/
        ~Report() { printf("Object Destoryed.\n"); }
};

int main(int argc, char const *argv[])
{
    {
        /*在块中声明 auto_ptr 类对象 _report_ptr_1 并使用 new 关键字构建*/
        std::auto_ptr<Report> _report_ptr_1(new Report("Fuck You!"));
        /*使用 -> 符号可以调用这个类的成员方法*/
        _report_ptr_1->commit();

        /*作用域到头，自动销毁 _report_ptr_1*/
    }

    /*声明 auto_ptr 类对象 _report_ptr_2 并使用 new 关键字构建*/
    std::auto_ptr<Report> _report_ptr_2(new Report("Fuck You Too!"));
    _report_ptr_2->commit();

    /*
        auto_ptr 的缺陷，不支持赋值语句，将 _report_ptr_2 的所有权转移给 _report_ptr_3 之后，
        _report_ptr_2 就失效了。
    */
    std::auto_ptr<Report> _report_ptr_3 = _report_ptr_2;

    //_report_ptr_2->commit();      _report_ptr_2 已经失效，强行调用会异常
    _report_ptr_3->commit();


    /*作用域到头，自动销毁 _report_ptr_2 _report_ptr_3*/
    return EXIT_SUCCESS;
}

```

### `C++11` 引入

#### `unique_ptr`

`unique` 翻译过来就是唯一的，独一无二的。显然，它是来取代 `auto_ptr` 的。
`unique_ptr` 改进了 `auto_ptr` 的缺点，在进行赋值操作时，会在编译时报错（虽然还是报错，但也比运行阶段报错要好），
此外，`unique_ptr` 还有一个数组的变体，创建类的时候可以直接使用 `type[]` 的语法，然后也可以直接使用 `[]` 符号直接访问对象。
如下面的代码所示：

```C++
std::unique_ptr<int[]> _array(new int[10]);

/*
    不允许，会在编译时报错
    error: use of deleted function
*/
//std::unique_ptr<int[]> _array_2 = _array;

for (int index = 0; index < 10; ++index)
{
    _array[index] = std::rand() % 100 + 1;
    std::cout << _array[index] << '\t';
}
```

当然，也有一些特殊情况，如下面的代码：

```C++
std::unique_ptr<std::string> function(const char * _str);

std::unique_ptr<std::string> function(const char * _str)
{
    /*一个临时的智能指针 _temp_ptr*/
    std::unique_ptr<std::string> _temp_ptr(new std::string(_str));

    /*在临死前返回*/
    return _temp_ptr;
}

/*
    由于函数内的中间智能指针作用域到期销毁，
    _ptr 接管了这个返回的 unique_ptr 对象，这并不会引发什么问题。
*/
std::unique_ptr<std::string> _ptr = function("This is a test string.");

std::cout << *_ptr << std::endl;    // 输出 This is a test string.
```

#### `shared_ptr`

也可以叫分享指针，同样也是为了解决 `auto_ptr` 的问题而生，但是和前两者独占对象所有权的方式不同，
`shared_ptr` 引入了计数器 `counter` 的概念，可以让多个分享指针同时指向同一片内存，直到所有指向这片内存的分享指针作用域到期，才会调用 `delete` 销毁这片内存。
写段代码演示一下：

```C++
#include <memory>
#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    using std::cout;

    /*声明一个 std::string 类型的 shared_ptr并构造 counter = 1*/
    std::shared_ptr<std::string> _str_1(new std::string("This is a string."));
    
    /*shared_ptr 重载了 (*) 解引用运算符，直接使用 *_str_1 就能取出 string 对象*/
    cout << *_str_1 << '\n';

    {
        /*声明一个 std::string 类型的 shared_ptr 并指向 _str_1，counter = 2*/
        std::shared_ptr<std::string> _str_2 = _str_1;
        cout << *_str_2 << '\n';

        /*声明一个 std::string 类型的 shared_ptr 并指向 _str_1，counter = 3*/
        std::shared_ptr<std::string> _str_3 = _str_1;
        cout << *_str_2 << '\n';

        /*_str_2 和 _str_3 的作用域到期，销毁，counter = 1*/
    }

    /*声明一个 std::string 类型的 shared_ptr 并指向 _str_1，counter = 2*/
    std::shared_ptr<std::string> _str_4 = _str_1;
    cout << *_str_4 << '\n';

    /*
        作用域到头，销毁 _str_1 和 _str_4，counter = 0，
        已经没有 shared_ptr 指向那片内存了，所以调用 delete 销毁构造的 std::string
    */
    return EXIT_SUCCESS;
}  
```

#### `weak_ptr`

也可以叫弱指针，和前面三者不同，弱指针是辅助 `shared_ptr` 来进行内存管理的。通常有下面 3 种用法：

##### 避免 `shared_ptr` 的循环引用

首先解释一下何为循环引用，比如下面的代码演示了一个经典的循环引用：

```C++
#include <memory>
#include <iostream>
#include <string>

/*
    模板节点，内有：
    一个 shared_ptr，用于保存下一个节点的地址。
    数据 data，节点的数据。
*/
template <typename _type>
struct Node
{
    std::shared_ptr<Node<_type>> next;
    _type data;

    Node() : next(nullptr), data(0) {}
    Node(_type _dat) : next(new Node<_type>()), data(_dat) {}
};

int main(int argc, char const *argv[])
{
    /*声明 Node<int> 类型的 shared_ptr _a*/
    std::shared_ptr<Node<int>> _a(new Node<int>(12));

    /*声明 Node<int> 类型的 shared_ptr _b*/
    std::shared_ptr<Node<int>> _b(new Node<int>(21));

    /*_a 持有 _b*/
    _a->next = _b;

    /*_b 持有 _a*/
    _b->next = _a;

    /*
        虽然，最后可以成功输出 12 21，但是 _a 和 _b 陷入了循环引用，counter 永远不为 0，
        也就不会释放 _a 和 _b 所指向的内存，造成内存泄漏。（该程序至少泄漏了 2 个 Node<int> 实例的内存）
    */
    printf("%d\t%d\n", _a->data, _b->data);

    return EXIT_SUCCESS;
}

```

为了解决这个问题，就可以在结构体中使用 `weak_ptr` 来避免，解决方法如下：

```C++
#include <memory>
#include <iostream>

/*
    模板节点，内有：

    一个 shared_ptr，用于保存下一个节点的地址。
    一个 week_ptr，用于避免 shared_ptr 的循环引用
    数据 data，节点的数据。
*/
template <typename _type>
struct Node
{
    std::shared_ptr<Node<_type>> next;
    std::weak_ptr<Node<_type>> other;

    _type data;

    Node() : next(nullptr), other(next), data(0) {}
    Node(_type _dat) : next(nullptr), other(next), data(_dat) {}
};

int main(int argc, char const *argv[])
{
    std::shared_ptr<Node<double>> _a(new Node<double>(550.341));
    std::shared_ptr<Node<double>> _b = std::make_shared<Node<double>>(12.3452);

    _a->next = _b;

    /*使用 weak_ptr 避免循环引用*/
    _b->other = _a;

    /*正常的取数据*/
    printf("%lf\t%lf\n", _a->data, _a->next->data);

    /*
        _b->other.lock() 取到  weak_ptr other 保存的 shared_ptr _a 的地址。
        如果 _a 不存在或使用默认构造初始化，就会返回 nullptr，使用三元运算符判断即可。
    */    
    printf("%lf\t%lf\n", _b->data, (_b->other.lock()) ? _b->other.lock()->data : -1);

    return EXIT_SUCCESS;
}

```

这样就很好的解决了循环引用的问题，既成功运行了程序，也避免了内存泄漏。

##### 判断 `shared_ptr` 的实例是否失效

可以使用 `weak_ptr` 中的 `expired()` 成员方法判断指向的 `shared_ptr` 是否有效。
如下面的代码所示：

``` C++
#include <memory>
#include <iostream>

int main(int argc, char const *argv[])
{
    std::shared_ptr<int> _array_1(new int(21));

    /*一个指向 shared_ptr<int> _array_1 的 weak_ptr<int> _weak_a1*/
    std::weak_ptr<int> _weak_a1(_array_1);

    /*为了手动控制作用域，只能把智能指针的实例也放在堆上面（笑哭）*/
    std::shared_ptr<int> *_array_2 = new std::shared_ptr<int>(new int(114514));
    std::weak_ptr<int> _weak_a2(*_array_2);

    /*
        检测所指向的 shared_ptr 所指向的内存是否还有效（counter 不为 0）

        显然，此时的 _array_1 和 *_array_2 都是有效的
    */
    printf("%d\n", (!_weak_a1.expired()) ? (*_weak_a1.lock()) : -1);
    printf("%d\n", (!_weak_a2.expired()) ? (*_weak_a2.lock()) : -1);

    /*手动删除 _array_2*/
    delete _array_2;

    /*
        由于已经没有多余的指针指向了 _array_2 所指向的那个指针变量所指向的那片内存，
        expired() 的结果必定是 nullptr。
    */
    printf("%d\n", (!_weak_a2.expired()) ? (*_weak_a2.lock()) : -1);
    
    return EXIT_SUCCESS;
}

```

##### 在不延长作用域的情况下（续命）访问 `shared_ptr` 所指向的那片内存的数据

如下面代码所示：

```C++
#include <memory>
#include <iostream>
#include <algorithm>

const int ARRAY[5] = {3124, 254, 46, 476, 98};

int main(int argc, char const *argv[])
{
    /*创建 shared_ptr<int[]> _array_1 并构建长度为 5 的数组*/
    std::shared_ptr<int[]> _array_1(new int[5]);

    /*拷贝 ARRAY 中的数据给 _array_1 内部的数组*/
    std::copy(ARRAY, ARRAY + 5, _array_1.get());

    /*创建 weak_ptr 实例并指向 _array_1*/
    std::weak_ptr<int[]> _weak_a1(_array_1);

    /*使用 lock() 成员方法拿到 _array_1 对象的地址*/
    auto spt = _weak_a1.lock();
    /*如果不是空对象*/
    if (!spt)
    {
        printf("The memory of _array_1 pointed is invalid...\n");
    }
    else
    {
        /*输出 shared_ptr 实例所指向的那片内存的数据*/
        printf("The _array_1 contence:\n");
        for (int index = 0; index < 5; ++index)
        {
            printf("%d\t", spt[index]);
        }
    }
    return EXIT_SUCCESS;
}
```

所有源代码以及可执行文件请参考路径 `.\smart_pointer\`

## `typedef` 和 `#define` 的区别何在?

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

## 从源代码到可执行程序，中间的过程是什么样的?

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

## C++ 有哪几种类型转换，它们的区别何在?

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

### C++ 和 C 中的 `register`，`static`，`auto` 关键字区别何在，它们在两个语言间有没有什么不同的用法?

#### `register` 关键字在 C/C++ 中的区别和用法

`register` 关键字在 C/C++ 中区别不大，都是在 `建议` 编译器将变量放在 CPU 的寄存器之中。只是在 `C++17` 标准中，这个关键字被移除了，C++ 标准委员认为这个关键字在优化上没有什么特别大的帮助，反倒会程序造成一些困扰。因此像下面的代码在该标准中是不允许的：

```C++
/**
 * warning: ISO C++17 does not allow 'register' storage class specifier [-Wregister]
 *      for (register int index = 0; index < 10000000; ++index) { printf("%d", index); }
*/
for (register int index = 0; index < 10000000; ++index) { printf("%d", index); }
```

当然，`register` 关键字在两个语言中的用法也有几点需要注意的地方：

- 被 `register` 关键字修饰的变量无法取地址，如果取了，编译器就会忽略该关键字。
- 如果把 `register` 关键字修饰的变量修饰为外部的 `extern` 或者放在函数的参数列表中，编译器也会忽略它。
- 如果被 `register` 修饰的变量太大（在 64 位机上不应该超过 8 字节），编译器也会忽略。
- 指针类型的变量不应该用 `register` 修饰。
- `static` 和 `register` 关键字混用会有冲突。
- 用宏定义中的 `register` 并不会真正将变量分配在寄存器。

```C++
register int number = 0;

int * _num_ptr = &number;               /*取了 number 的地址，忽略寄存器关键字*/

extern register int number_1 = 100;     /*外部的，忽略寄存器关键字*/

void function(register int _number_2);  /*作为函数的形式参数，忽略寄存器关键字*/

register long double number = 1.42353145; /*在 64 位机器中 long double 类型一般占 16 字节，显然寄存器里面放不下*/

register int * ptr;                     /*无效的，指针类型的变量不得放入寄存器*/

static register int number_3 = 0;       /*冲突，无效的。静态/只读存储区 和 寄存器存储区 是不同的空间*/

#define _REGISTER_ register

_REGISTER_ int number_4 = 0;            /*无效的，即便成功替换，可变量依旧不在寄存器*/

```

#### `static` 关键字在 C/C++ 中的区别和用法

两者基本相同，都只是将变量存储在静态/只读区而非栈区，具有内部链接属性，仅可在源文件中使用。
只是在 C++ 中，可以把一个对象的存储类型声明为静态的，如下面代码所示：

```C++
class A {....};

static A _a;        /*对象 _a 的存储类型为静态的*/
```

#### `auto` 关键字在 C/C++ 中的区别和用法

##### 常规用法

该关键字在 C 中代表这个变量的生命周期是自动的，即由编译器自行决定变量的去留。

而在 C++ 中，`auto` 关键字被解释为自动类型，编译器会根据初始化自动推导为相应的类型。

```C++
/*在 C 中，代表自动变量，一般不在前面修饰关键字的变量都是自动的*/
{
    auto int number = 0;

    /*到期，自动销毁 number*/
}

/*在 C++ 中，auto 关键字代表自动类型，由编译器根据初始化自行推导*/
std::vector<int> _data = {1, 2, 3, 4};

/*_data_iter 会被编译器自行推导为 std::vector<int>::iterator 类型，并且保存 _data 第一个元素的迭代器*/
auto _data_iter = _data.begain();

/*determine 会被自行推导为这个匿名函数（C++11）的对象（bool determine(int _element) 类型）*/
auto determine = [](const int _element) { return _element == 5; };
```

##### 有关 `auto` 的新特性

在 `C++20` 标准中引入了一个新关键字 `concept`（位于 `<concepts>` 头文件中），用于约束 `auto` 关键字的推导类型，防止推导结果不可控，也避免了模板的错误隐式转换。

如下面的代码所示，约束一个变量为迭代器类型：

```C++
#include <iostream>
#include <concepts>
#include <vector>

template<typename _Type>
concept Iterator = requires(_Type _t)
{
    {*_t} -> std::same_as<int &>;     /*解引用为 int & 类型*/

    ++_t;                            /*支持递增*/
};

int main(int argc, char const *argv[])
{
    std::vector<int> _data = {1, 2, 3, 4};

    /*约束 _data_iter 为迭代器类型*/
    const Iterator auto  & _data_iter = _data.begin();

    return 0;
}
```

上面的代码详见路径：`.\concept\concept.cpp`

### 右值引用是什么? std::move 是为了解决什么问题?

#### 概要

右值引用是 `C++11` 标准中引入的新特性，可以使用型如 `type&&` 的声明表示右值引用，它用与绑定一个临时的右值，如下代码所示：

```C++
/*
    _right_reference 是一个右值引用类型，
    而常量 10 是一个临时的右值（这条语句结束了就销毁）
*/
int && _right_reference = 10;
```

`C++11` 新增该特性最主要的用意就是：避免在常规左值引用中因拷贝带来不必要的开销。由此引申出了两个新概念：

- 移动语义构造函数
- `std::move()` 标准库函数（位于 `<utility>` 头文件）

#### 移动语义构造函数 与 std::move()

以下代码演示了上面的两个概念：

```C++
#include <cstdio>
#include <cstdlib>
#include <utility>

class A
{
    private:
        int * _array;
        size_t _size;
        bool _valid;

    public:
        /*默认构建函数*/
        A() : _array(nullptr), _size(0), _valid(false) {}

        /*参数构建函数*/
        A(size_t _s, bool _v) : _array(new int[_s]), _size(_s), _valid(_v) {}

        /*
            移动语义构建函数，传入一个右值引用类型 _a，将对象 _a 的所有权转移到这个对象中。
        */
        //A(A && _a) : _array(_a._array), _size(_a._size), _valid(_a._valid) { _a._array = nullptr; _a._valid = false; }

        
        /*当然也可以用标准库中的 std::move 函数去实现，结果一样，但意图更明显。*/
        A(A && _a) : A()
        {
            _array = std::move(_a._array);
            _valid = std::move(_a._valid);
            _size = std::move(_a._size);

            _a._array = nullptr;
            _a._size = 0;
            _a._valid = false;
        }

        size_t size() const { return _size; }

        bool is_valid() const { return _valid; }

        A & operator=(A && _a)
        {
            _array = std::move(_a._array);
            _valid = std::move(_a._valid);
            _size = std::move(_a._size);

            _a._array = nullptr;
            _a._size = 0;
            _a._valid = false;

            return *this;
        }

        ~A() { delete[] _array; }   
};

/*以下是测试用例*/
#define _OBJECT_VELID(object) (object.is_valid()) ? "true" : "false"

void show_state(A & _a, A & _b)
{
    printf("object _a._size = [%zd], valid = %s\nobject _b.size = [%zd], valid = %s\n",
    _a.size(), _OBJECT_VELID(_a), _b.size(), _OBJECT_VELID(_b));
}

int main(int argc, char const *argv[])
{
    A _a(12, true), _b(21, true);

    show_state(_a, _b);

    /*移动 _a*/
    _b = std::move(_a);

    printf("-------------------------------\n");
    printf("After move....\n");
    printf("-------------------------------\n");

    show_state(_a, _b);
    
    return EXIT_SUCCESS;
}
```

总之，`右值引用` 和 `std::move()` 等概念就是在一定条件下，直接移动一个类，省去了拷贝所带来的开销。

上面的代码详见路径 `.\right_reference\right_ref.cpp`

### Latest update: 2023.11.26

#### Author: [JesseZ332623](https://github.com/JesseZ332623)

![swing](https://github.com/JesseZ332623/CPP_Interview_Question/assets/101250851/17babd4c-9fa6-4f36-83d4-e2c11ba6d362)

EOF
