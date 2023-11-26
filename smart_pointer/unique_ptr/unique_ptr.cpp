#include <memory>
#include <iostream>
#include <string>

std::unique_ptr<std::string> function(const char * _str);

std::unique_ptr<std::string> function(const char * _str)
{
    std::unique_ptr<std::string> _temp_ptr(new std::string(_str));

    return _temp_ptr;
}

int main(int argc, char const *argv[])
{
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

    std::unique_ptr<std::string> _ptr = function("This is a test string.");

    std::cout << *_ptr << std::endl;

    return EXIT_SUCCESS;
}
