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
