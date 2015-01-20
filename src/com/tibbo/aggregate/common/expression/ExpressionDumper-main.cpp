#include <com/tibbo/aggregate/common/expression/ExpressionDumper.h"

extern void initjvm();
extern java::lang::StringArray* make_args(int args, const std::string & argv);

int main(int argc, const std::string & argv)
{
    init_jvm();
    
    ExpressionDumper::main(make_args(argc, argv));
    
    return 0;
}
