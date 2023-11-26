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
