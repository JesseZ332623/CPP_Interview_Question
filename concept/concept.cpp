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


