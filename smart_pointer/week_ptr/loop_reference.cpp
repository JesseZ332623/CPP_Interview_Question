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
