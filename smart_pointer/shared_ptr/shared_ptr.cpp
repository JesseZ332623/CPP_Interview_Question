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
