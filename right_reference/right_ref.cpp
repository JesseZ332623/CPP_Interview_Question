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

    _b = std::move(_a);

    printf("-------------------------------\n");
    printf("After move....\n");
    printf("-------------------------------\n");

    show_state(_a, _b);
    
    return EXIT_SUCCESS;
}
