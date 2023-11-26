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
