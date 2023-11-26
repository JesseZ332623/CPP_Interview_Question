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
