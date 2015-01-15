// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/AbstractEvaluatingVisitor.java
//#include <com/tibbo/aggregate/common/expression/AbstractEvaluatingVisitor.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/expression/EvaluationEnvironment.h"
#include <com/tibbo/aggregate/common/expression/Evaluator.h"
#include <com/tibbo/aggregate/common/expression/Function.h"
#include <com/tibbo/aggregate/common/expression/function/ExpressionEditorOptionsFunction.h"
#include <com/tibbo/aggregate/common/expression/function/FloatConstantFunction.h"
#include <com/tibbo/aggregate/common/expression/function/Functions.h"
#include <com/tibbo/aggregate/common/expression/function/JavaConstructorFunction.h"
#include <com/tibbo/aggregate/common/expression/function/JavaMethodFunction.h"
#include <com/tibbo/aggregate/common/expression/function/color/BlueFunction.h"
#include <com/tibbo/aggregate/common/expression/function/color/ColorFunction.h"
#include <com/tibbo/aggregate/common/expression/function/color/GreenFunction.h"
#include <com/tibbo/aggregate/common/expression/function/color/RedFunction.h"
#include <com/tibbo/aggregate/common/expression/function/context/AvailableFunction.h"
#include <com/tibbo/aggregate/common/expression/function/context/CallFunctionFunction.h"
#include <com/tibbo/aggregate/common/expression/function/context/DcFunction.h"
#include <com/tibbo/aggregate/common/expression/function/context/DrFunction.h"
#include <com/tibbo/aggregate/common/expression/function/context/DtFunction.h"
#include <com/tibbo/aggregate/common/expression/function/context/EventAvailableFunction.h"
#include <com/tibbo/aggregate/common/expression/function/context/EventFormatFunction.h"
#include <com/tibbo/aggregate/common/expression/function/context/FireEventFunction.h"
#include <com/tibbo/aggregate/common/expression/function/context/FunctionAvailableFunction.h"
#include <com/tibbo/aggregate/common/expression/function/context/FunctionInputFormatFunction.h"
#include <com/tibbo/aggregate/common/expression/function/context/FunctionOutputFormatFunction.h"
#include <com/tibbo/aggregate/common/expression/function/context/GetVariableFunction.h"
#include <com/tibbo/aggregate/common/expression/function/context/SetVariableFunction.h"
#include <com/tibbo/aggregate/common/expression/function/context/VariableAvailableFunction.h"
#include <com/tibbo/aggregate/common/expression/function/context/VariableFormatFunction.h"
#include <com/tibbo/aggregate/common/expression/function/context/VariableReadableFunction.h"
#include <com/tibbo/aggregate/common/expression/function/context/VariableWritableFunction.h"
#include <com/tibbo/aggregate/common/expression/function/date/DateAddFunction.h"
#include <com/tibbo/aggregate/common/expression/function/date/DateCreateFunction.h"
#include <com/tibbo/aggregate/common/expression/function/date/DateDiffFunction.h"
#include <com/tibbo/aggregate/common/expression/function/date/DateFieldFunction.h"
#include <com/tibbo/aggregate/common/expression/function/date/FormatDateFunction.h"
#include <com/tibbo/aggregate/common/expression/function/date/PrintPeriodFunction.h"
#include <com/tibbo/aggregate/common/expression/function/date/TimeFunction.h"
#include <com/tibbo/aggregate/common/expression/function/number/EqFunction.h"
#include <com/tibbo/aggregate/common/expression/function/number/FormatNumberFunction.h"
#include <com/tibbo/aggregate/common/expression/function/number/GeFunction.h"
#include <com/tibbo/aggregate/common/expression/function/number/GtFunction.h"
#include <com/tibbo/aggregate/common/expression/function/number/LeFunction.h"
#include <com/tibbo/aggregate/common/expression/function/number/LtFunction.h"
#include <com/tibbo/aggregate/common/expression/function/number/NeFunction.h"
#include <com/tibbo/aggregate/common/expression/function/other/EvaluateFunction.h"
#include <com/tibbo/aggregate/common/expression/function/other/FormatFunction.h"
#include <com/tibbo/aggregate/common/expression/function/other/GroupsFunction.h"
#include <com/tibbo/aggregate/common/expression/function/other/LdFunction.h"
#include <com/tibbo/aggregate/common/expression/function/other/SleepFunction.h"
#include <com/tibbo/aggregate/common/expression/function/other/StFunction.h"
#include <com/tibbo/aggregate/common/expression/function/other/TraceFunction.h"
#include <com/tibbo/aggregate/common/expression/function/other/UserFunction.h"
#include <com/tibbo/aggregate/common/expression/function/other/XPathFunction.h"
#include <com/tibbo/aggregate/common/expression/function/string/CharacterFunction.h"
#include <com/tibbo/aggregate/common/expression/function/string/SplitFunction.h"
#include <com/tibbo/aggregate/common/expression/function/string/UrlDecodeFunction.h"
#include <com/tibbo/aggregate/common/expression/function/string/UrlEncodeFunction.h"
#include <com/tibbo/aggregate/common/expression/function/table/AddColumnsFunction.h"
#include <com/tibbo/aggregate/common/expression/function/table/AddRecordsFunction.h"
#include <com/tibbo/aggregate/common/expression/function/table/AdjustRecordLimitsFunction.h"
#include <com/tibbo/aggregate/common/expression/function/table/AggregateFunction.h"
#include <com/tibbo/aggregate/common/expression/function/table/CellFunction.h"
#include <com/tibbo/aggregate/common/expression/function/table/ClearFunction.h"
#include <com/tibbo/aggregate/common/expression/function/table/ConvertFunction.h"
#include <com/tibbo/aggregate/common/expression/function/table/CopyFunction.h"
#include <com/tibbo/aggregate/common/expression/function/table/DescribeFunction.h"
#include <com/tibbo/aggregate/common/expression/function/table/DescriptionFunction.h"
#include <com/tibbo/aggregate/common/expression/function/table/EncodeFunction.h"
#include <com/tibbo/aggregate/common/expression/function/table/FilterFunction.h"
#include <com/tibbo/aggregate/common/expression/function/table/GetFormatFunction.h"
#include <com/tibbo/aggregate/common/expression/function/table/HasFieldFunction.h"
#include <com/tibbo/aggregate/common/expression/function/table/JoinFunction.h"
#include <com/tibbo/aggregate/common/expression/function/table/PrintFunction.h"
#include <com/tibbo/aggregate/common/expression/function/table/RecordsFunction.h"
#include <com/tibbo/aggregate/common/expression/function/table/RemoveColumnsFunction.h"
#include <com/tibbo/aggregate/common/expression/function/table/RemoveRecordsFunction.h"
#include <com/tibbo/aggregate/common/expression/function/table/SelectFunction.h"
#include <com/tibbo/aggregate/common/expression/function/table/SetFunction.h"
#include <com/tibbo/aggregate/common/expression/function/table/SortFunction.h"
#include <com/tibbo/aggregate/common/expression/function/table/SubtableFunction.h"
#include <com/tibbo/aggregate/common/expression/function/table/TableFunction.h"
#include <com/tibbo/aggregate/common/expression/function/table/UnionFunction.h"
#include <com/tibbo/aggregate/common/expression/function/type/BooleanFunction.h"
#include <com/tibbo/aggregate/common/expression/function/type/FloatFunction.h"
#include <com/tibbo/aggregate/common/expression/function/type/IntegerFunction.h"
#include <com/tibbo/aggregate/common/expression/function/type/LongFunction.h"
#include <com/tibbo/aggregate/common/expression/function/type/StringFunction.h"
#include <com/tibbo/aggregate/common/expression/function/type/TimestampFunction.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTAddNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTBitwiseAndNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTBitwiseNotNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTBitwiseOrNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTBitwiseXorNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTConditionalNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTDivNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTEQNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTFloatConstNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTFunctionNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTGENode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTGTNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTLENode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTLTNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTLeftShiftNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTLogicalAndNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTLogicalNotNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTLogicalOrNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTLongConstNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTModNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTMulNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTNENode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTRegexMatchNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTRightShiftNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTStart.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTStringConstNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTSubtractNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTUnaryNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTUnsignedRightShiftNode.h"
#include <com/tibbo/aggregate/common/expression/parser/Node.h"
#include <com/tibbo/aggregate/common/util/Util.h"
/*
//#include <java/awt/Color.h"
//#include <java/lang/Boolean.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Comparable.h"
//#include <java/lang/Double.h"
//#include <java/lang/Exception.h"
//#include <java/lang/Float.h"
//#include <java/lang/IllegalArgumentException.h"
//#include <java/lang/IllegalStateException.h"
//#include <java/lang/Integer.h"
//#include <java/lang/Long.h"
//#include <java/lang/Math.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Number.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/text/MessageFormat.h"
//#include <java/util/ArrayList.h"
//#include <java/util/Calendar.h"
//#include <java/util/Date.h"
//#include <java/util/LinkedHashMap.h"
//#include <java/util/LinkedList.h"
//#include <java/util/List.h"
//#include <java/util/Map.h"
//#include <java/util/ResourceBundle.h"
#include <ObjectArray.h"
*/
template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(0);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::AbstractEvaluatingVisitor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::AbstractEvaluatingVisitor(Evaluator* evaluator) 
    : AbstractEvaluatingVisitor(*static_cast< ::default_init_tag* >(0))
{
    ctor(evaluator);
}

void com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::init()
{
    top = -int(1);
    stack = new ::java::util::ArrayList();
}

std::string& com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::TEMP_FORMAT_NAME()
{
    
    return TEMP_FORMAT_NAME_;
}
std::string com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::TEMP_FORMAT_NAME_;

java::util::Map*& com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::DEFAULT_FUNCTIONS()
{
    
    return DEFAULT_FUNCTIONS_;
}
java::util::Map* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::DEFAULT_FUNCTIONS_;

void com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::ctor(Evaluator* evaluator)
{
    super::ctor();
    init();
    this->evaluator = evaluator;
}

void com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::registerDefaultFunction(const std::string & name, Function* impl)
{
    
    if(DEFAULT_FUNCTIONS_)->containsKey(name)) {
        std::cout <<"Function already registered:"_j)->append(name)->toString());
    }
    DEFAULT_FUNCTIONS_)->put(name, impl);
}

com::tibbo::aggregate::common::expression::Evaluator* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::getEvaluator()
{
    return evaluator;
}

void com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::set(int delta, void* value)
{
    top += delta;
    for (auto i = stack)->size(); i <= top; i++) {
        stack)->add(0));
    }
    stack)->set(top, value);
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::getResult()
{
    auto result = get(0);
    top--;
    return result;
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::get(int delta)
{
    return java_cast< void* >(stack)->get(top + delta));
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::SimpleNode* node, void* data)
{
    return 0;
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::ASTStart* node, void* data)
{
    node)->childrenAccept(this, data);
    if(top == -int(1)) {
        return 0;
    } else {
        return get(0);
    }
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::ASTConditionalNode* node, void* data)
{
    node)->jjtGetChild(int(0)))->jjtAccept(this, data);
    bool condition = (util::Util::convertToBoolean(get(0), true, false)))->booleanValue();
    if(condition) {
        node)->jjtGetChild(int(1)))->jjtAccept(this, data);
    } else {
        node)->jjtGetChild(int(2)))->jjtAccept(this, data);
    }
    set(-int(1), get(0));
    return 0;
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::ASTLogicalOrNode* node, void* data)
{
    node)->jjtGetChild(int(0)))->jjtAccept(this, data);
    bool left = (util::Util::convertToBoolean(get(0), true, false)))->booleanValue();
    if(left) {
        set(0, ::java::lang::Boolean::valueOf(true));
        return 0;
    }
    node)->jjtGetChild(int(1)))->jjtAccept(this, data);
    bool right = (util::Util::convertToBoolean(get(0), true, false)))->booleanValue();
    set(-int(1), ::java::lang::Boolean::valueOf(left || right));
    return 0;
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::ASTLogicalAndNode* node, void* data)
{
    node)->jjtGetChild(int(0)))->jjtAccept(this, data);
    bool left = (util::Util::convertToBoolean(get(0), true, false)))->booleanValue();
    if(!left) {
        set(0, ::java::lang::Boolean::valueOf(false));
        return 0;
    }
    node)->jjtGetChild(int(1)))->jjtAccept(this, data);
    bool right = (util::Util::convertToBoolean(get(0), true, false)))->booleanValue();
    set(-int(1), ::java::lang::Boolean::valueOf(left && right));
    return 0;
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::ASTBitwiseAndNode* node, void* data)
{
    node)->childrenAccept(this, data);
    auto left = ::com::tibbo::aggregate::common::util::Util::convertToNumber(get(-int(1)), false, true);
    auto right = ::com::tibbo::aggregate::common::util::Util::convertToNumber(get(0), false, true);
    if((left == 0) || (right == 0)) {
        set(-int(1), 0);
        return 0;
    }
    if((dynamic_cast< int  >(left) != 0) && (dynamic_cast< int  >(right) != 0)) {
        set(-int(1), new ::java::lang::Integer(left)->intValue() & right)->intValue()));
    } else {
        set(-int(1), new ::java::lang::Long(left)->longValue() & right)->longValue()));
    }
    return 0;
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::ASTBitwiseOrNode* node, void* data)
{
    node)->childrenAccept(this, data);
    auto left = ::com::tibbo::aggregate::common::util::Util::convertToNumber(get(-int(1)), false, true);
    auto right = ::com::tibbo::aggregate::common::util::Util::convertToNumber(get(0), false, true);
    if((left == 0) || (right == 0)) {
        set(-int(1), 0);
        return 0;
    }
    if((dynamic_cast< int  >(left) != 0) && (dynamic_cast< int  >(right) != 0)) {
        set(-int(1), new ::java::lang::Integer(left)->intValue() | right)->intValue()));
    } else {
        set(-int(1), new ::java::lang::Long(left)->longValue() | right)->longValue()));
    }
    return 0;
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::ASTBitwiseXorNode* node, void* data)
{
    node)->childrenAccept(this, data);
    auto left = ::com::tibbo::aggregate::common::util::Util::convertToNumber(get(-int(1)), false, true);
    auto right = ::com::tibbo::aggregate::common::util::Util::convertToNumber(get(0), false, true);
    if((left == 0) || (right == 0)) {
        set(-int(1), 0);
        return 0;
    }
    if((dynamic_cast< int  >(left) != 0) && (dynamic_cast< int  >(right) != 0)) {
        set(-int(1), new ::java::lang::Integer(left)->intValue() ^ right)->intValue()));
    } else {
        set(-int(1), new ::java::lang::Long(left)->longValue() ^ right)->longValue()));
    }
    return 0;
}

bool com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::equal(void* v1, void* v2)
{
    
    if((v1 == 0) || (v2 == 0)) {
        return ::com::tibbo::aggregate::common::util::Util::equals(v1, v2);
    } else {
        if(v1)->getClass())->isAssignableFrom(v2)->getClass()) || v2)->getClass())->isAssignableFrom(v1)->getClass())) {
            return v1)->equals(v2);
        } else {
            auto f1 = FieldFormat::create(TEMP_FORMAT_NAME_, static_cast< ::java::lang::Class* >(v1)->getClass()));
            auto f2 = FieldFormat::create(TEMP_FORMAT_NAME_, static_cast< ::java::lang::Class* >(v2)->getClass()));
            return f1)->valueToString(v1))->equals(f2)->valueToString(v2)));
        }
    }
}

int com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::compare(void* v1, void* v2)
{
    
    if((v1 == 0) && (v2 == 0)) {
        return 0;
    } else if(v1 == 0) {
        return -int(1);
    } else if(v2 == 0) {
        return 1;
    } else {
        if((dynamic_cast< ::java::lang::Comparable* >(v1) != 0) && (dynamic_cast< ::java::lang::Comparable* >(v2) != 0)) {
            auto c1 = java_cast< ::java::lang::Comparable* >(v1);
            auto c2 = java_cast< ::java::lang::Comparable* >(v2);
            if(c1)->getClass())->equals(c2)->getClass())) {
                return c1)->compareTo(c2);
            } else {
                auto n1 = ::com::tibbo::aggregate::common::util::Util::convertToNumber(c1, false, true);
                auto n2 = ::com::tibbo::aggregate::common::util::Util::convertToNumber(c2, false, true);
                if((n1 != 0) && (n2 != 0)) {
                    if(isFloatingPoint(n1) || isFloatingPoint(n2)) {
                        return n1)->floatValue() == n2)->floatValue() ? int(0) : (n1)->floatValue() > n2)->floatValue() ? int(1) : -int(1));
                    } else {
                        return n1)->longValue() == n2)->longValue() ? int(0) : (n1)->longValue() > n2)->longValue() ? int(1) : -int(1));
                    }
                }
            }
        }
    }
    auto f1 = FieldFormat::create(TEMP_FORMAT_NAME_, static_cast< ::java::lang::Class* >(v1)->getClass()));
    auto f2 = FieldFormat::create(TEMP_FORMAT_NAME_, static_cast< ::java::lang::Class* >(v2)->getClass()));
    return f1)->valueToString(v1))->compareTo(f2)->valueToString(v2));
}

bool com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::isFloatingPoint(::java::lang::Number* number)
{
    
    return (dynamic_cast< ::java::lang::Float* >(number) != 0) || (dynamic_cast< ::java::lang::Double* >(number) != 0);
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::ASTEQNode* node, void* data)
{
    node)->childrenAccept(this, data);
    set(-int(1), ::java::lang::Boolean::valueOf(equal(get(-int(1)), get(0))));
    return 0;
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::ASTNENode* node, void* data)
{
    node)->childrenAccept(this, data);
    set(-int(1), ::java::lang::Boolean::valueOf(!equal(get(-int(1)), get(0))));
    return 0;
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::ASTRegexMatchNode* node, void* data)
{
    node)->childrenAccept(this, data);
    auto left = get(-int(1));
    auto right = get(0);
    if((left == 0) || (right == 0)) {
        return ::java::lang::Boolean::valueOf(false);
    }
    set(-int(1), ::java::lang::Boolean::valueOf(left)->toString())->matches(right)->toString())));
    return 0;
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::ASTLTNode* node, void* data)
{
    node)->childrenAccept(this, data);
    set(-int(1), ::java::lang::Boolean::valueOf(compare(get(-int(1)), get(0)) < 0));
    return 0;
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::ASTGTNode* node, void* data)
{
    node)->childrenAccept(this, data);
    set(-int(1), ::java::lang::Boolean::valueOf(compare(get(-int(1)), get(0)) > 0));
    return 0;
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::ASTLENode* node, void* data)
{
    node)->childrenAccept(this, data);
    set(-int(1), ::java::lang::Boolean::valueOf(compare(get(-int(1)), get(0)) <= 0));
    return 0;
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::ASTGENode* node, void* data)
{
    node)->childrenAccept(this, data);
    set(-int(1), ::java::lang::Boolean::valueOf(compare(get(-int(1)), get(0)) >= 0));
    return 0;
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::ASTAddNode* node, void* data)
{
    node)->childrenAccept(this, data);
    if((dynamic_cast< const std::string & >(get(-int(1))) != 0) && (dynamic_cast< const std::string & >(get(0)) != 0)) {
        set(-int(1), std::stringBuilder().append(java_cast< const std::string & >(get(-int(1))))->append(java_cast< const std::string & >(get(0)))->toString());
    } else {
        if((dynamic_cast< const std::string & >(get(-int(1))) != 0) || (dynamic_cast< const std::string & >(get(0)) != 0)) {
            auto s1 = get(-int(1)) != 0 ? get(-int(1)))->toString() : u""_j;
            auto s2 = get(0) != 0 ? get(0))->toString() : u""_j;
            set(-int(1), std::stringBuilder().append(s1)->append(s2)->toString());
        } else {
            auto left = ::com::tibbo::aggregate::common::util::Util::convertToNumber(get(-int(1)), false, true);
            auto right = ::com::tibbo::aggregate::common::util::Util::convertToNumber(get(0), false, true);
            if((left == 0) || (right == 0)) {
                set(-int(1), 0);
                return 0;
            }
            if(isFloatingPoint(left) || isFloatingPoint(right)) {
                set(-int(1), new ::java::lang::Float(left)->floatValue() + right)->floatValue()));
            } else {
                set(-int(1), new ::java::lang::Long(left)->longValue() + right)->longValue()));
            }
        }
    }
    return 0;
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::ASTSubtractNode* node, void* data)
{
    node)->childrenAccept(this, data);
    auto left = ::com::tibbo::aggregate::common::util::Util::convertToNumber(get(-int(1)), false, true);
    auto right = ::com::tibbo::aggregate::common::util::Util::convertToNumber(get(0), false, true);
    if((left == 0) || (right == 0)) {
        set(-int(1), 0);
        return 0;
    }
    if(isFloatingPoint(left) || isFloatingPoint(right)) {
        set(-int(1), new ::java::lang::Float(left)->floatValue() - right)->floatValue()));
    } else {
        set(-int(1), new ::java::lang::Long(left)->longValue() - right)->longValue()));
    }
    return 0;
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::ASTMulNode* node, void* data)
{
    node)->childrenAccept(this, data);
    auto left = ::com::tibbo::aggregate::common::util::Util::convertToNumber(get(-int(1)), false, true);
    auto right = ::com::tibbo::aggregate::common::util::Util::convertToNumber(get(0), false, true);
    if((left == 0) || (right == 0)) {
        set(-int(1), 0);
        return 0;
    }
    if(isFloatingPoint(left) || isFloatingPoint(right)) {
        set(-int(1), new ::java::lang::Float(left)->floatValue() * right)->floatValue()));
    } else {
        set(-int(1), new ::java::lang::Long(left)->longValue() * right)->longValue()));
    }
    return 0;
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::ASTDivNode* node, void* data)
{
    node)->childrenAccept(this, data);
    auto left = ::com::tibbo::aggregate::common::util::Util::convertToNumber(get(-int(1)), false, true);
    auto right = ::com::tibbo::aggregate::common::util::Util::convertToNumber(get(0), false, true);
    if((left == 0) || (right == 0)) {
        set(-int(1), 0);
        return 0;
    }
    if(isFloatingPoint(left) || isFloatingPoint(right) || ((left)->longValue() % right)->longValue()) != 0)) {
        set(-int(1), new ::java::lang::Float(left)->floatValue() / right)->floatValue()));
    } else {
        set(-int(1), new ::java::lang::Long(left)->longValue() / right)->longValue()));
    }
    return 0;
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::ASTModNode* node, void* data)
{
    node)->childrenAccept(this, data);
    auto left = ::com::tibbo::aggregate::common::util::Util::convertToNumber(get(-int(1)), false, true);
    auto right = ::com::tibbo::aggregate::common::util::Util::convertToNumber(get(0), false, true);
    if((left == 0) || (right == 0)) {
        set(-int(1), 0);
        return 0;
    }
    set(-int(1), new ::java::lang::Long(left)->longValue() % right)->longValue()));
    return 0;
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::ASTUnaryNode* node, void* data)
{
    node)->childrenAccept(this, data);
    auto val = ::com::tibbo::aggregate::common::util::Util::convertToNumber(get(0), false, true);
    if(val == 0) {
        set(0, 0);
        return 0;
    }
    if(isFloatingPoint(val)) {
        set(0, new ::java::lang::Float(-val)->floatValue()));
    } else {
        set(0, new ::java::lang::Long(-val)->longValue()));
    }
    return 0;
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::ASTLogicalNotNode* node, void* data)
{
    node)->childrenAccept(this, data);
    auto val = ::com::tibbo::aggregate::common::util::Util::convertToBoolean(get(0), true, true);
    set(0, ::java::lang::Boolean::valueOf(!(val))->booleanValue()));
    return 0;
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::ASTBitwiseNotNode* node, void* data)
{
    node)->childrenAccept(this, data);
    auto val = ::com::tibbo::aggregate::common::util::Util::convertToNumber(get(0), false, true);
    if(val == 0) {
        set(0, 0);
        return 0;
    }
    if(dynamic_cast< int  >(val) != 0) {
        set(0, new ::java::lang::Integer(~val)->intValue()));
    } else {
        set(0, new ::java::lang::Long(~val)->longValue()));
    }
    return 0;
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::ASTFunctionNode* node, void* data)
{
    node)->childrenAccept(this, data);
    std::list  parameters = new ::java::util::LinkedList();
    for (auto i = int(0); i < node)->jjtGetNumChildren(); i++) {
        parameters)->add(get((i - node)->jjtGetNumChildren()) + int(1))));
    }
    auto fi = java_cast< Function* >(DEFAULT_FUNCTIONS_)->get(node)->name));
    if(fi == 0) {
        fi = evaluator)->getCustomFunction(node)->name);
    }
    if(fi == 0) {
        throw new ::java::lang::IllegalStateException(std::stringBuilder().append(Cres::get())->getString(u"exprUnknownFunction"_j))->append(node)->name)->toString());
    }
    try {
        auto result = fi)->execute(evaluator, java_cast< EvaluationEnvironment* >(data), parameters)->toArray_());
        set(int(1) - parameters)->size(), result);
    } catch (::java::lang::Exception* ex) {
        throw new ::java::lang::IllegalStateException(std::stringBuilder().append(::java::text::MessageFormat::format(Cres::get())->getString(u"exprErrExecutingFunction"_j), new voidArray({node)->name)})))->append(ex)->getMessage())->toString(), ex);
    }
    return 0;
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::ASTLongConstNode* node, void* data)
{
    set(1, new ::java::lang::Long(node)->val));
    return 0;
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::ASTFloatConstNode* node, void* data)
{
    set(1, new ::java::lang::Float(node)->val));
    return 0;
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::ASTStringConstNode* node, void* data)
{
    set(1, node)->val);
    return 0;
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::ASTTrueNode* node, void* data)
{
    set(1, ::java::lang::Boolean::valueOf(true));
    return 0;
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::ASTFalseNode* node, void* data)
{
    set(1, ::java::lang::Boolean::valueOf(false));
    return 0;
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::ASTNullNode* node, void* data)
{
    set(1, 0);
    return 0;
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::ASTRightShiftNode* node, void* data)
{
    node)->childrenAccept(this, data);
    auto left = ::com::tibbo::aggregate::common::util::Util::convertToNumber(get(-int(1)), false, true);
    auto right = ::com::tibbo::aggregate::common::util::Util::convertToNumber(get(0), false, true);
    if((left == 0) || (right == 0)) {
        set(-int(1), 0);
        return 0;
    }
    if((dynamic_cast< int  >(left) != 0) && (dynamic_cast< int  >(right) != 0)) {
        set(-int(1), new ::java::lang::Integer(left)->intValue() >> right)->intValue()));
    } else {
        set(-int(1), new ::java::lang::Long(left)->longValue() >> right)->longValue()));
    }
    return 0;
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::ASTUnsignedRightShiftNode* node, void* data)
{
    node)->childrenAccept(this, data);
    auto left = ::com::tibbo::aggregate::common::util::Util::convertToNumber(get(-int(1)), false, true);
    auto right = ::com::tibbo::aggregate::common::util::Util::convertToNumber(get(0), false, true);
    if((left == 0) || (right == 0)) {
        set(-int(1), 0);
        return 0;
    }
    if((dynamic_cast< int  >(left) != 0) && (dynamic_cast< int  >(right) != 0)) {
        set(-int(1), new ::java::lang::Integer(static_cast<int>(static_cast<uint>(left)->intValue()) >> right)->intValue())));
    } else {
        set(-int(1), new ::java::lang::Long(static_cast<long>(static_cast<uint64_t>(left)->longValue()) >> right)->longValue())));
    }
    return 0;
}

void* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::visit(::ASTLeftShiftNode* node, void* data)
{
    node)->childrenAccept(this, data);
    auto left = ::com::tibbo::aggregate::common::util::Util::convertToNumber(get(-int(1)), false, true);
    auto right = ::com::tibbo::aggregate::common::util::Util::convertToNumber(get(0), false, true);
    if((left == 0) || (right == 0)) {
        set(-int(1), 0);
        return 0;
    }
    if((dynamic_cast< int  >(left) != 0) && (dynamic_cast< int  >(right) != 0)) {
        set(-int(1), new ::java::lang::Integer(left)->intValue() << right)->intValue()));
    } else {
        set(-int(1), new ::java::lang::Long(left)->longValue() << right)->longValue()));
    }
    return 0;
}



java::lang::Class* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.AbstractEvaluatingVisitor", 63);
    return c;
}

void com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::clinit()
{
struct string_init_ {
    string_init_() {
    TEMP_FORMAT_NAME_ = u"name"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        DEFAULT_FUNCTIONS_ = new ::java::util::LinkedHashMap();
        {
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::ABS(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"abs"_j, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::ACOS(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"acos"_j, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::ASIN(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"asin"_j, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::ATAN(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"atan"_j, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::CBRT(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"cbrt"_j, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::CEIL(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"ceil"_j, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::COS(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"cos"_j, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::COSH(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"cosh"_j, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::E(), new ::com::tibbo::aggregate::common::expression::function::FloatConstantFunction((new ::java::lang::Float(::java::lang::Math::E)))->floatValue()));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::EXP(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"exp"_j, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::EQ(), new ::com::tibbo::aggregate::common::expression::function::number::EqFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::FLOOR(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"floor"_j, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::FORMAT_NUMBER(), new ::com::tibbo::aggregate::common::expression::function::number::FormatNumberFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::GE(), new ::com::tibbo::aggregate::common::expression::function::number::GeFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::GT(), new ::com::tibbo::aggregate::common::expression::function::number::GtFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::LE(), new ::com::tibbo::aggregate::common::expression::function::number::LeFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::LOG(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"log"_j, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::LOG10(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"log10"_j, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::LT(), new ::com::tibbo::aggregate::common::expression::function::number::LtFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::MIN(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"min"_j, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_NUMBER_PROCESSING(), u"Float first, Float second"_j, u"Float"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::MAX(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"max"_j, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_NUMBER_PROCESSING(), u"Float first, Float second"_j, u"Float"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::NE(), new ::com::tibbo::aggregate::common::expression::function::number::NeFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::PI(), new ::com::tibbo::aggregate::common::expression::function::FloatConstantFunction((new ::java::lang::Float(::java::lang::Math::PI)))->floatValue()));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::POW(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"pow"_j, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_NUMBER_PROCESSING(), u"Float base, Float power"_j, u"Float"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::RANDOM(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"random"_j, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_NUMBER_PROCESSING(), u""_j, u"Float"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::ROUND(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"round"_j, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Long"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::SIGNUM(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"signum"_j, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::SIN(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"sin"_j, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::SINH(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"sinh"_j, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::SQRT(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"sqrt"_j, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::TAN(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"tan"_j, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::TANH(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"tanh"_j, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::CONTAINS(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(std::string::class_())->getName(), u"contains"_j, false, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_STRING_PROCESSING(), u"String string, String substring"_j, u"Boolean"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::ENDS_WITH(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(std::string::class_())->getName(), u"endsWith"_j, false, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_STRING_PROCESSING(), u"String string, String suffix"_j, u"Boolean"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::FORMAT(), new ::com::tibbo::aggregate::common::expression::function::other::FormatFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::GROUPS(), new ::com::tibbo::aggregate::common::expression::function::other::GroupsFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::INDEX(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(std::string::class_())->getName(), u"indexOf"_j, false, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_STRING_PROCESSING(), u"String string, String substring [, Integer fromIndex]"_j, u"Integer"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::IS_DIGIT(), new ::com::tibbo::aggregate::common::expression::function::string::CharacterFunction(u"isDigit"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::IS_LETTER(), new ::com::tibbo::aggregate::common::expression::function::string::CharacterFunction(u"isLetter"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::IS_LOWER_CASE(), new ::com::tibbo::aggregate::common::expression::function::string::CharacterFunction(u"isLowerCase"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::IS_UPPER_CASE(), new ::com::tibbo::aggregate::common::expression::function::string::CharacterFunction(u"isUpperCase"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::IS_WHITESPACE(), new ::com::tibbo::aggregate::common::expression::function::string::CharacterFunction(u"isWhitespace"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::LAST_INDEX(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(std::string::class_())->getName(), u"lastIndexOf"_j, false, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_STRING_PROCESSING(), u"String string, String substring [, Integer fromIndex]"_j, u"Integer"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::LENGTH(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(std::string::class_())->getName(), u"length"_j, false, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_STRING_PROCESSING(), u"String string"_j, u"Integer"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::LOWER(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(std::string::class_())->getName(), u"toLowerCase"_j, false, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_STRING_PROCESSING(), u"String string"_j, u"String"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::REPLACE(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(std::string::class_())->getName(), u"replace"_j, false, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_STRING_PROCESSING(), u"String string, String target, String replacement"_j, u"String"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::SPLIT(), new ::com::tibbo::aggregate::common::expression::function::string::SplitFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::STARTS_WITH(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(std::string::class_())->getName(), u"startsWith"_j, false, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_STRING_PROCESSING(), u"String string, String prefix"_j, u"Boolean"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::SUBSTRING(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(std::string::class_())->getName(), u"substring"_j, false, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_STRING_PROCESSING(), u"String string, Integer beginIndex [, Integer endIndex]"_j, u"String"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::TRIM(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(std::string::class_())->getName(), u"trim"_j, false, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_STRING_PROCESSING(), u"String string"_j, u"String"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::UPPER(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(std::string::class_())->getName(), u"toUpperCase"_j, false, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_STRING_PROCESSING(), u"String string"_j, u"String"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::URL_DECODE(), new ::com::tibbo::aggregate::common::expression::function::string::UrlDecodeFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::URL_ENCODE(), new ::com::tibbo::aggregate::common::expression::function::string::UrlEncodeFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::DATE(), new ::com::tibbo::aggregate::common::expression::function::date::DateCreateFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::DATE_ADD(), new ::com::tibbo::aggregate::common::expression::function::date::DateAddFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::DATE_DIFF(), new ::com::tibbo::aggregate::common::expression::function::date::DateDiffFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::DAY(), new ::com::tibbo::aggregate::common::expression::function::date::DateFieldFunction(::java::util::Calendar::DAY_OF_MONTH));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::DAY_OF_WEEK(), new ::com::tibbo::aggregate::common::expression::function::date::DateFieldFunction(::java::util::Calendar::DAY_OF_WEEK));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::DAY_OF_YEAR(), new ::com::tibbo::aggregate::common::expression::function::date::DateFieldFunction(::java::util::Calendar::DAY_OF_YEAR));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::FORMAT_DATE(), new ::com::tibbo::aggregate::common::expression::function::date::FormatDateFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::HOUR(), new ::com::tibbo::aggregate::common::expression::function::date::DateFieldFunction(::java::util::Calendar::HOUR_OF_DAY));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::MILLISECOND(), new ::com::tibbo::aggregate::common::expression::function::date::DateFieldFunction(::java::util::Calendar::MILLISECOND));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::MINUTE(), new ::com::tibbo::aggregate::common::expression::function::date::DateFieldFunction(::java::util::Calendar::MINUTE));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::MONTH(), new ::com::tibbo::aggregate::common::expression::function::date::DateFieldFunction(::java::util::Calendar::MONTH));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::NOW(), new ::com::tibbo::aggregate::common::expression::function::JavaConstructorFunction(::java::util::Date::class_())->getName(), ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_DATE_TIME_PROCESSING(), u"Date"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::SECOND(), new ::com::tibbo::aggregate::common::expression::function::date::DateFieldFunction(::java::util::Calendar::SECOND));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::PRINT_PERIOD(), new ::com::tibbo::aggregate::common::expression::function::date::PrintPeriodFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::TIME(), new ::com::tibbo::aggregate::common::expression::function::date::TimeFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::YEAR(), new ::com::tibbo::aggregate::common::expression::function::date::DateFieldFunction(::java::util::Calendar::YEAR));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::BLUE(), new ::com::tibbo::aggregate::common::expression::function::color::BlueFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::BRIGHTER(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(::java::awt::Color::class_())->getName(), u"brighter"_j, false, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_COLOR_PROCESSING(), u"Color color"_j, u"Color"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::COLOR(), new ::com::tibbo::aggregate::common::expression::function::color::ColorFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::DARKER(), new ::com::tibbo::aggregate::common::expression::function::JavaMethodFunction(::java::awt::Color::class_())->getName(), u"darker"_j, false, ::com::tibbo::aggregate::common::expression::function::Functions::GROUP_COLOR_PROCESSING(), u"Color color"_j, u"Color"_j));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::GREEN(), new ::com::tibbo::aggregate::common::expression::function::color::GreenFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::RED(), new ::com::tibbo::aggregate::common::expression::function::color::RedFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::ADD_COLUMNS(), new ::com::tibbo::aggregate::common::expression::function::table::AddColumnsFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::ADD_RECORDS(), new ::com::tibbo::aggregate::common::expression::function::table::AddRecordsFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::ADJUST_RECORD_LIMITS(), new ::com::tibbo::aggregate::common::expression::function::table::AdjustRecordLimitsFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::AGGREGATE(), new ::com::tibbo::aggregate::common::expression::function::table::AggregateFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::CELL(), new ::com::tibbo::aggregate::common::expression::function::table::CellFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::CLEAR(), new ::com::tibbo::aggregate::common::expression::function::table::ClearFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::CONVERT(), new ::com::tibbo::aggregate::common::expression::function::table::ConvertFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::COPY(), new ::com::tibbo::aggregate::common::expression::function::table::CopyFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::DESCRIBE(), new ::com::tibbo::aggregate::common::expression::function::table::DescribeFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::DESCRIPTION(), new ::com::tibbo::aggregate::common::expression::function::table::DescriptionFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::ENCODE(), new ::com::tibbo::aggregate::common::expression::function::table::EncodeFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::FILTER(), new ::com::tibbo::aggregate::common::expression::function::table::FilterFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::GET_FORMAT(), new ::com::tibbo::aggregate::common::expression::function::table::GetFormatFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::HAS_FIELD(), new ::com::tibbo::aggregate::common::expression::function::table::HasFieldFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::JOIN(), new ::com::tibbo::aggregate::common::expression::function::table::JoinFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::PRINT(), new ::com::tibbo::aggregate::common::expression::function::table::PrintFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::RECORDS(), new ::com::tibbo::aggregate::common::expression::function::table::RecordsFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::REMOVE_COLUMNS(), new ::com::tibbo::aggregate::common::expression::function::table::RemoveColumnsFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::REMOVE_RECORDS(), new ::com::tibbo::aggregate::common::expression::function::table::RemoveRecordsFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::SELECT(), new ::com::tibbo::aggregate::common::expression::function::table::SelectFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::SET(), new ::com::tibbo::aggregate::common::expression::function::table::SetFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::SORT(), new ::com::tibbo::aggregate::common::expression::function::table::SortFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::SUBTABLE(), new ::com::tibbo::aggregate::common::expression::function::table::SubtableFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::TABLE(), new ::com::tibbo::aggregate::common::expression::function::table::TableFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::UNION(), new ::com::tibbo::aggregate::common::expression::function::table::UnionFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::BOOLEAN(), new ::com::tibbo::aggregate::common::expression::function::type::BooleanFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::INTEGER(), new ::com::tibbo::aggregate::common::expression::function::type::IntegerFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::FLOAT(), new ::com::tibbo::aggregate::common::expression::function::type::FloatFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::LONG(), new ::com::tibbo::aggregate::common::expression::function::type::LongFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::STRING(), new ::com::tibbo::aggregate::common::expression::function::type::StringFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::TIMESTAMP(), new ::com::tibbo::aggregate::common::expression::function::type::TimestampFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::AVAILABLE(), new ::com::tibbo::aggregate::common::expression::function::context::AvailableFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::CALL_FUNCTION(), new ::com::tibbo::aggregate::common::expression::function::context::CallFunctionFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::DC(), new ::com::tibbo::aggregate::common::expression::function::context::DcFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::DR(), new ::com::tibbo::aggregate::common::expression::function::context::DrFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::DT(), new ::com::tibbo::aggregate::common::expression::function::context::DtFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::EVENT_AVAILABLE(), new ::com::tibbo::aggregate::common::expression::function::context::EventAvailableFunction(::com::tibbo::aggregate::common::expression::function::Functions::GROUP_CONTEXT_RELATED()));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::EVENT_FORMAT(), new ::com::tibbo::aggregate::common::expression::function::context::EventFormatFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::FIRE_EVENT(), new ::com::tibbo::aggregate::common::expression::function::context::FireEventFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::FUNCTION_AVAILABLE(), new ::com::tibbo::aggregate::common::expression::function::context::FunctionAvailableFunction(::com::tibbo::aggregate::common::expression::function::Functions::GROUP_CONTEXT_RELATED()));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::FUNCTION_INPUT_FORMAT(), new ::com::tibbo::aggregate::common::expression::function::context::FunctionInputFormatFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::FUNCTION_OUTPUT_FORMAT(), new ::com::tibbo::aggregate::common::expression::function::context::FunctionOutputFormatFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::GET_VARIABLE(), new ::com::tibbo::aggregate::common::expression::function::context::GetVariableFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::SET_VARIABLE(), new ::com::tibbo::aggregate::common::expression::function::context::SetVariableFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::VARIABLE_AVAILABLE(), new ::com::tibbo::aggregate::common::expression::function::context::VariableAvailableFunction(::com::tibbo::aggregate::common::expression::function::Functions::GROUP_CONTEXT_RELATED()));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::VARIABLE_FORMAT(), new ::com::tibbo::aggregate::common::expression::function::context::VariableFormatFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::VARIABLE_READABLE(), new ::com::tibbo::aggregate::common::expression::function::context::VariableReadableFunction(::com::tibbo::aggregate::common::expression::function::Functions::GROUP_CONTEXT_RELATED()));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::VARIABLE_WRITABLE(), new ::com::tibbo::aggregate::common::expression::function::context::VariableWritableFunction(::com::tibbo::aggregate::common::expression::function::Functions::GROUP_CONTEXT_RELATED()));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::EVALUATE(), new ::com::tibbo::aggregate::common::expression::function::other::EvaluateFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::LD(), new ::com::tibbo::aggregate::common::expression::function::other::LdFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::SLEEP(), new ::com::tibbo::aggregate::common::expression::function::other::SleepFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::ST(), new ::com::tibbo::aggregate::common::expression::function::other::StFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::TRACE(), new ::com::tibbo::aggregate::common::expression::function::other::TraceFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::USER(), new ::com::tibbo::aggregate::common::expression::function::other::UserFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::XPATH(), new ::com::tibbo::aggregate::common::expression::function::other::XPathFunction());
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::HAS_VARIABLE(), new ::com::tibbo::aggregate::common::expression::function::context::VariableReadableFunction(::com::tibbo::aggregate::common::expression::function::Functions::GROUP_SYSTEM()));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::HAS_FUNCTION(), new ::com::tibbo::aggregate::common::expression::function::context::FunctionAvailableFunction(::com::tibbo::aggregate::common::expression::function::Functions::GROUP_SYSTEM()));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::HAS_EVENT(), new ::com::tibbo::aggregate::common::expression::function::context::EventAvailableFunction(::com::tibbo::aggregate::common::expression::function::Functions::GROUP_SYSTEM()));
            registerDefaultFunction(::com::tibbo::aggregate::common::expression::function::Functions::EXPRESSION_EDITOR_OPTIONS(), new ::com::tibbo::aggregate::common::expression::function::ExpressionEditorOptionsFunction());
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::expression::AbstractEvaluatingVisitor::getClass0()
{
    return class_();
}

