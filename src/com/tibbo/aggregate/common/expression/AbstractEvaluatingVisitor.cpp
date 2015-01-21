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

AbstractEvaluatingVisitor::AbstractEvaluatingVisitor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

AbstractEvaluatingVisitor::AbstractEvaluatingVisitor(Evaluator* evaluator) 
    : AbstractEvaluatingVisitor(*static_cast< ::default_init_tag* >(0))
{
    ctor(evaluator);
}

void AbstractEvaluatingVisitor::init()
{
    top = -int(1);
    stack = new ::java::util::ArrayList();
}

std::string& AbstractEvaluatingVisitor::TEMP_FORMAT_NAME()
{
    
    return TEMP_FORMAT_NAME_;
}
std::string AbstractEvaluatingVisitor::TEMP_FORMAT_NAME_;

java::util::Map*& AbstractEvaluatingVisitor::DEFAULT_FUNCTIONS()
{
    
    return DEFAULT_FUNCTIONS_;
}
java::util::Map* AbstractEvaluatingVisitor::DEFAULT_FUNCTIONS_;

void AbstractEvaluatingVisitor::ctor(Evaluator* evaluator)
{
    super::ctor();
    init();
    this->evaluator = evaluator;
}

void AbstractEvaluatingVisitor::registerDefaultFunction(const std::string & name, Function* impl)
{
    
    if(DEFAULT_FUNCTIONS_)->containsKey(name)) {
        std::cout <<"Function already registered:"_j)->append(name)->toString());
    }
    DEFAULT_FUNCTIONS_)->put(name, impl);
}

Evaluator* AbstractEvaluatingVisitor::getEvaluator()
{
    return evaluator;
}

void AbstractEvaluatingVisitor::set(int delta, void* value)
{
    top += delta;
    for (auto i = stack)->size(); i <= top; i++) {
        stack)->add(0));
    }
    stack)->set(top, value);
}

void* AbstractEvaluatingVisitor::getResult()
{
    auto result = get(0);
    top--;
    return result;
}

void* AbstractEvaluatingVisitor::get(int delta)
{
    return java_cast< void* >(stack)->get(top + delta));
}

void* AbstractEvaluatingVisitor::visit(::SimpleNode* node, void* data)
{
    return 0;
}

void* AbstractEvaluatingVisitor::visit(::ASTStart* node, void* data)
{
    node)->childrenAccept(this, data);
    if(top == -int(1)) {
        return 0;
    } else {
        return get(0);
    }
}

void* AbstractEvaluatingVisitor::visit(::ASTConditionalNode* node, void* data)
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

void* AbstractEvaluatingVisitor::visit(::ASTLogicalOrNode* node, void* data)
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

void* AbstractEvaluatingVisitor::visit(::ASTLogicalAndNode* node, void* data)
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

void* AbstractEvaluatingVisitor::visit(::ASTBitwiseAndNode* node, void* data)
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

void* AbstractEvaluatingVisitor::visit(::ASTBitwiseOrNode* node, void* data)
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

void* AbstractEvaluatingVisitor::visit(::ASTBitwiseXorNode* node, void* data)
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

bool AbstractEvaluatingVisitor::equal(void* v1, void* v2)
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

int AbstractEvaluatingVisitor::compare(void* v1, void* v2)
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

bool AbstractEvaluatingVisitor::isFloatingPoint(::java::lang::Number* number)
{
    
    return (dynamic_cast< ::java::lang::Float* >(number) != 0) || (dynamic_cast< ::java::lang::Double* >(number) != 0);
}

void* AbstractEvaluatingVisitor::visit(::ASTEQNode* node, void* data)
{
    node)->childrenAccept(this, data);
    set(-int(1), ::java::lang::Boolean::valueOf(equal(get(-int(1)), get(0))));
    return 0;
}

void* AbstractEvaluatingVisitor::visit(::ASTNENode* node, void* data)
{
    node)->childrenAccept(this, data);
    set(-int(1), ::java::lang::Boolean::valueOf(!equal(get(-int(1)), get(0))));
    return 0;
}

void* AbstractEvaluatingVisitor::visit(::ASTRegexMatchNode* node, void* data)
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

void* AbstractEvaluatingVisitor::visit(::ASTLTNode* node, void* data)
{
    node)->childrenAccept(this, data);
    set(-int(1), ::java::lang::Boolean::valueOf(compare(get(-int(1)), get(0)) < 0));
    return 0;
}

void* AbstractEvaluatingVisitor::visit(::ASTGTNode* node, void* data)
{
    node)->childrenAccept(this, data);
    set(-int(1), ::java::lang::Boolean::valueOf(compare(get(-int(1)), get(0)) > 0));
    return 0;
}

void* AbstractEvaluatingVisitor::visit(::ASTLENode* node, void* data)
{
    node)->childrenAccept(this, data);
    set(-int(1), ::java::lang::Boolean::valueOf(compare(get(-int(1)), get(0)) <= 0));
    return 0;
}

void* AbstractEvaluatingVisitor::visit(::ASTGENode* node, void* data)
{
    node)->childrenAccept(this, data);
    set(-int(1), ::java::lang::Boolean::valueOf(compare(get(-int(1)), get(0)) >= 0));
    return 0;
}

void* AbstractEvaluatingVisitor::visit(::ASTAddNode* node, void* data)
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

void* AbstractEvaluatingVisitor::visit(::ASTSubtractNode* node, void* data)
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

void* AbstractEvaluatingVisitor::visit(::ASTMulNode* node, void* data)
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

void* AbstractEvaluatingVisitor::visit(::ASTDivNode* node, void* data)
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

void* AbstractEvaluatingVisitor::visit(::ASTModNode* node, void* data)
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

void* AbstractEvaluatingVisitor::visit(::ASTUnaryNode* node, void* data)
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

void* AbstractEvaluatingVisitor::visit(::ASTLogicalNotNode* node, void* data)
{
    node)->childrenAccept(this, data);
    auto val = ::com::tibbo::aggregate::common::util::Util::convertToBoolean(get(0), true, true);
    set(0, ::java::lang::Boolean::valueOf(!(val))->booleanValue()));
    return 0;
}

void* AbstractEvaluatingVisitor::visit(::ASTBitwiseNotNode* node, void* data)
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

void* AbstractEvaluatingVisitor::visit(::ASTFunctionNode* node, void* data)
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

void* AbstractEvaluatingVisitor::visit(::ASTLongConstNode* node, void* data)
{
    set(1, new ::java::lang::Long(node)->val));
    return 0;
}

void* AbstractEvaluatingVisitor::visit(::ASTFloatConstNode* node, void* data)
{
    set(1, new ::java::lang::Float(node)->val));
    return 0;
}

void* AbstractEvaluatingVisitor::visit(::ASTStringConstNode* node, void* data)
{
    set(1, node)->val);
    return 0;
}

void* AbstractEvaluatingVisitor::visit(::ASTTrueNode* node, void* data)
{
    set(1, ::java::lang::Boolean::valueOf(true));
    return 0;
}

void* AbstractEvaluatingVisitor::visit(::ASTFalseNode* node, void* data)
{
    set(1, ::java::lang::Boolean::valueOf(false));
    return 0;
}

void* AbstractEvaluatingVisitor::visit(::ASTNullNode* node, void* data)
{
    set(1, 0);
    return 0;
}

void* AbstractEvaluatingVisitor::visit(::ASTRightShiftNode* node, void* data)
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

void* AbstractEvaluatingVisitor::visit(::ASTUnsignedRightShiftNode* node, void* data)
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

void* AbstractEvaluatingVisitor::visit(::ASTLeftShiftNode* node, void* data)
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



java::lang::Class* AbstractEvaluatingVisitor::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.AbstractEvaluatingVisitor", 63);
    return c;
}

void AbstractEvaluatingVisitor::clinit()
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
            registerDefaultFunction(function::Functions::ABS(), new function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"abs"_j, function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(function::Functions::ACOS(), new function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"acos"_j, function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(function::Functions::ASIN(), new function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"asin"_j, function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(function::Functions::ATAN(), new function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"atan"_j, function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(function::Functions::CBRT(), new function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"cbrt"_j, function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(function::Functions::CEIL(), new function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"ceil"_j, function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(function::Functions::COS(), new function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"cos"_j, function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(function::Functions::COSH(), new function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"cosh"_j, function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(function::Functions::E(), new function::FloatConstantFunction((new ::java::lang::Float(::java::lang::Math::E)))->floatValue()));
            registerDefaultFunction(function::Functions::EXP(), new function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"exp"_j, function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(function::Functions::EQ(), new function::number::EqFunction());
            registerDefaultFunction(function::Functions::FLOOR(), new function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"floor"_j, function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(function::Functions::FORMAT_NUMBER(), new function::number::FormatNumberFunction());
            registerDefaultFunction(function::Functions::GE(), new function::number::GeFunction());
            registerDefaultFunction(function::Functions::GT(), new function::number::GtFunction());
            registerDefaultFunction(function::Functions::LE(), new function::number::LeFunction());
            registerDefaultFunction(function::Functions::LOG(), new function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"log"_j, function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(function::Functions::LOG10(), new function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"log10"_j, function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(function::Functions::LT(), new function::number::LtFunction());
            registerDefaultFunction(function::Functions::MIN(), new function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"min"_j, function::Functions::GROUP_NUMBER_PROCESSING(), u"Float first, Float second"_j, u"Float"_j));
            registerDefaultFunction(function::Functions::MAX(), new function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"max"_j, function::Functions::GROUP_NUMBER_PROCESSING(), u"Float first, Float second"_j, u"Float"_j));
            registerDefaultFunction(function::Functions::NE(), new function::number::NeFunction());
            registerDefaultFunction(function::Functions::PI(), new function::FloatConstantFunction((new ::java::lang::Float(::java::lang::Math::PI)))->floatValue()));
            registerDefaultFunction(function::Functions::POW(), new function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"pow"_j, function::Functions::GROUP_NUMBER_PROCESSING(), u"Float base, Float power"_j, u"Float"_j));
            registerDefaultFunction(function::Functions::RANDOM(), new function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"random"_j, function::Functions::GROUP_NUMBER_PROCESSING(), u""_j, u"Float"_j));
            registerDefaultFunction(function::Functions::ROUND(), new function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"round"_j, function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Long"_j));
            registerDefaultFunction(function::Functions::SIGNUM(), new function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"signum"_j, function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(function::Functions::SIN(), new function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"sin"_j, function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(function::Functions::SINH(), new function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"sinh"_j, function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(function::Functions::SQRT(), new function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"sqrt"_j, function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(function::Functions::TAN(), new function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"tan"_j, function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(function::Functions::TANH(), new function::JavaMethodFunction(::java::lang::Math::class_())->getName(), u"tanh"_j, function::Functions::GROUP_NUMBER_PROCESSING(), u"Float value"_j, u"Float"_j));
            registerDefaultFunction(function::Functions::CONTAINS(), new function::JavaMethodFunction(std::string::class_())->getName(), u"contains"_j, false, function::Functions::GROUP_STRING_PROCESSING(), u"String string, String substring"_j, u"Boolean"_j));
            registerDefaultFunction(function::Functions::ENDS_WITH(), new function::JavaMethodFunction(std::string::class_())->getName(), u"endsWith"_j, false, function::Functions::GROUP_STRING_PROCESSING(), u"String string, String suffix"_j, u"Boolean"_j));
            registerDefaultFunction(function::Functions::FORMAT(), new function::other::FormatFunction());
            registerDefaultFunction(function::Functions::GROUPS(), new function::other::GroupsFunction());
            registerDefaultFunction(function::Functions::INDEX(), new function::JavaMethodFunction(std::string::class_())->getName(), u"indexOf"_j, false, function::Functions::GROUP_STRING_PROCESSING(), u"String string, String substring [, Integer fromIndex]"_j, u"Integer"_j));
            registerDefaultFunction(function::Functions::IS_DIGIT(), new function::string::CharacterFunction(u"isDigit"_j));
            registerDefaultFunction(function::Functions::IS_LETTER(), new function::string::CharacterFunction(u"isLetter"_j));
            registerDefaultFunction(function::Functions::IS_LOWER_CASE(), new function::string::CharacterFunction(u"isLowerCase"_j));
            registerDefaultFunction(function::Functions::IS_UPPER_CASE(), new function::string::CharacterFunction(u"isUpperCase"_j));
            registerDefaultFunction(function::Functions::IS_WHITESPACE(), new function::string::CharacterFunction(u"isWhitespace"_j));
            registerDefaultFunction(function::Functions::LAST_INDEX(), new function::JavaMethodFunction(std::string::class_())->getName(), u"lastIndexOf"_j, false, function::Functions::GROUP_STRING_PROCESSING(), u"String string, String substring [, Integer fromIndex]"_j, u"Integer"_j));
            registerDefaultFunction(function::Functions::LENGTH(), new function::JavaMethodFunction(std::string::class_())->getName(), u"length"_j, false, function::Functions::GROUP_STRING_PROCESSING(), u"String string"_j, u"Integer"_j));
            registerDefaultFunction(function::Functions::LOWER(), new function::JavaMethodFunction(std::string::class_())->getName(), u"toLowerCase"_j, false, function::Functions::GROUP_STRING_PROCESSING(), u"String string"_j, u"String"_j));
            registerDefaultFunction(function::Functions::REPLACE(), new function::JavaMethodFunction(std::string::class_())->getName(), u"replace"_j, false, function::Functions::GROUP_STRING_PROCESSING(), u"String string, String target, String replacement"_j, u"String"_j));
            registerDefaultFunction(function::Functions::SPLIT(), new function::string::SplitFunction());
            registerDefaultFunction(function::Functions::STARTS_WITH(), new function::JavaMethodFunction(std::string::class_())->getName(), u"startsWith"_j, false, function::Functions::GROUP_STRING_PROCESSING(), u"String string, String prefix"_j, u"Boolean"_j));
            registerDefaultFunction(function::Functions::SUBSTRING(), new function::JavaMethodFunction(std::string::class_())->getName(), u"substring"_j, false, function::Functions::GROUP_STRING_PROCESSING(), u"String string, Integer beginIndex [, Integer endIndex]"_j, u"String"_j));
            registerDefaultFunction(function::Functions::TRIM(), new function::JavaMethodFunction(std::string::class_())->getName(), u"trim"_j, false, function::Functions::GROUP_STRING_PROCESSING(), u"String string"_j, u"String"_j));
            registerDefaultFunction(function::Functions::UPPER(), new function::JavaMethodFunction(std::string::class_())->getName(), u"toUpperCase"_j, false, function::Functions::GROUP_STRING_PROCESSING(), u"String string"_j, u"String"_j));
            registerDefaultFunction(function::Functions::URL_DECODE(), new function::string::UrlDecodeFunction());
            registerDefaultFunction(function::Functions::URL_ENCODE(), new function::string::UrlEncodeFunction());
            registerDefaultFunction(function::Functions::DATE(), new function::date::DateCreateFunction());
            registerDefaultFunction(function::Functions::DATE_ADD(), new function::date::DateAddFunction());
            registerDefaultFunction(function::Functions::DATE_DIFF(), new function::date::DateDiffFunction());
            registerDefaultFunction(function::Functions::DAY(), new function::date::DateFieldFunction(::java::util::Calendar::DAY_OF_MONTH));
            registerDefaultFunction(function::Functions::DAY_OF_WEEK(), new function::date::DateFieldFunction(::java::util::Calendar::DAY_OF_WEEK));
            registerDefaultFunction(function::Functions::DAY_OF_YEAR(), new function::date::DateFieldFunction(::java::util::Calendar::DAY_OF_YEAR));
            registerDefaultFunction(function::Functions::FORMAT_DATE(), new function::date::FormatDateFunction());
            registerDefaultFunction(function::Functions::HOUR(), new function::date::DateFieldFunction(::java::util::Calendar::HOUR_OF_DAY));
            registerDefaultFunction(function::Functions::MILLISECOND(), new function::date::DateFieldFunction(::java::util::Calendar::MILLISECOND));
            registerDefaultFunction(function::Functions::MINUTE(), new function::date::DateFieldFunction(::java::util::Calendar::MINUTE));
            registerDefaultFunction(function::Functions::MONTH(), new function::date::DateFieldFunction(::java::util::Calendar::MONTH));
            registerDefaultFunction(function::Functions::NOW(), new function::JavaConstructorFunction(Date::class_())->getName(), function::Functions::GROUP_DATE_TIME_PROCESSING(), u"Date"_j));
            registerDefaultFunction(function::Functions::SECOND(), new function::date::DateFieldFunction(::java::util::Calendar::SECOND));
            registerDefaultFunction(function::Functions::PRINT_PERIOD(), new function::date::PrintPeriodFunction());
            registerDefaultFunction(function::Functions::TIME(), new function::date::TimeFunction());
            registerDefaultFunction(function::Functions::YEAR(), new function::date::DateFieldFunction(::java::util::Calendar::YEAR));
            registerDefaultFunction(function::Functions::BLUE(), new function::color::BlueFunction());
            registerDefaultFunction(function::Functions::BRIGHTER(), new function::JavaMethodFunction(::java::awt::Color::class_())->getName(), u"brighter"_j, false, function::Functions::GROUP_COLOR_PROCESSING(), u"Color color"_j, u"Color"_j));
            registerDefaultFunction(function::Functions::COLOR(), new function::color::ColorFunction());
            registerDefaultFunction(function::Functions::DARKER(), new function::JavaMethodFunction(::java::awt::Color::class_())->getName(), u"darker"_j, false, function::Functions::GROUP_COLOR_PROCESSING(), u"Color color"_j, u"Color"_j));
            registerDefaultFunction(function::Functions::GREEN(), new function::color::GreenFunction());
            registerDefaultFunction(function::Functions::RED(), new function::color::RedFunction());
            registerDefaultFunction(function::Functions::ADD_COLUMNS(), new function::table::AddColumnsFunction());
            registerDefaultFunction(function::Functions::ADD_RECORDS(), new function::table::AddRecordsFunction());
            registerDefaultFunction(function::Functions::ADJUST_RECORD_LIMITS(), new function::table::AdjustRecordLimitsFunction());
            registerDefaultFunction(function::Functions::AGGREGATE(), new function::table::AggregateFunction());
            registerDefaultFunction(function::Functions::CELL(), new function::table::CellFunction());
            registerDefaultFunction(function::Functions::CLEAR(), new function::table::ClearFunction());
            registerDefaultFunction(function::Functions::CONVERT(), new function::table::ConvertFunction());
            registerDefaultFunction(function::Functions::COPY(), new function::table::CopyFunction());
            registerDefaultFunction(function::Functions::DESCRIBE(), new function::table::DescribeFunction());
            registerDefaultFunction(function::Functions::DESCRIPTION(), new function::table::DescriptionFunction());
            registerDefaultFunction(function::Functions::ENCODE(), new function::table::EncodeFunction());
            registerDefaultFunction(function::Functions::FILTER(), new function::table::FilterFunction());
            registerDefaultFunction(function::Functions::GET_FORMAT(), new function::table::GetFormatFunction());
            registerDefaultFunction(function::Functions::HAS_FIELD(), new function::table::HasFieldFunction());
            registerDefaultFunction(function::Functions::JOIN(), new function::table::JoinFunction());
            registerDefaultFunction(function::Functions::PRINT(), new function::table::PrintFunction());
            registerDefaultFunction(function::Functions::RECORDS(), new function::table::RecordsFunction());
            registerDefaultFunction(function::Functions::REMOVE_COLUMNS(), new function::table::RemoveColumnsFunction());
            registerDefaultFunction(function::Functions::REMOVE_RECORDS(), new function::table::RemoveRecordsFunction());
            registerDefaultFunction(function::Functions::SELECT(), new function::table::SelectFunction());
            registerDefaultFunction(function::Functions::SET(), new function::table::SetFunction());
            registerDefaultFunction(function::Functions::SORT(), new function::table::SortFunction());
            registerDefaultFunction(function::Functions::SUBTABLE(), new function::table::SubtableFunction());
            registerDefaultFunction(function::Functions::TABLE(), new function::table::TableFunction());
            registerDefaultFunction(function::Functions::UNION(), new function::table::UnionFunction());
            registerDefaultFunction(function::Functions::BOOLEAN(), new function::type::BooleanFunction());
            registerDefaultFunction(function::Functions::INTEGER(), new function::type::IntegerFunction());
            registerDefaultFunction(function::Functions::FLOAT(), new function::type::FloatFunction());
            registerDefaultFunction(function::Functions::LONG(), new function::type::LongFunction());
            registerDefaultFunction(function::Functions::STRING(), new function::type::StringFunction());
            registerDefaultFunction(function::Functions::TIMESTAMP(), new function::type::TimestampFunction());
            registerDefaultFunction(function::Functions::AVAILABLE(), new function::context::AvailableFunction());
            registerDefaultFunction(function::Functions::CALL_FUNCTION(), new function::context::CallFunctionFunction());
            registerDefaultFunction(function::Functions::DC(), new function::context::DcFunction());
            registerDefaultFunction(function::Functions::DR(), new function::context::DrFunction());
            registerDefaultFunction(function::Functions::DT(), new function::context::DtFunction());
            registerDefaultFunction(function::Functions::EVENT_AVAILABLE(), new function::context::EventAvailableFunction(function::Functions::GROUP_CONTEXT_RELATED()));
            registerDefaultFunction(function::Functions::EVENT_FORMAT(), new function::context::EventFormatFunction());
            registerDefaultFunction(function::Functions::FIRE_EVENT(), new function::context::FireEventFunction());
            registerDefaultFunction(function::Functions::FUNCTION_AVAILABLE(), new function::context::FunctionAvailableFunction(function::Functions::GROUP_CONTEXT_RELATED()));
            registerDefaultFunction(function::Functions::FUNCTION_INPUT_FORMAT(), new function::context::FunctionInputFormatFunction());
            registerDefaultFunction(function::Functions::FUNCTION_OUTPUT_FORMAT(), new function::context::FunctionOutputFormatFunction());
            registerDefaultFunction(function::Functions::GET_VARIABLE(), new function::context::GetVariableFunction());
            registerDefaultFunction(function::Functions::SET_VARIABLE(), new function::context::SetVariableFunction());
            registerDefaultFunction(function::Functions::VARIABLE_AVAILABLE(), new function::context::VariableAvailableFunction(function::Functions::GROUP_CONTEXT_RELATED()));
            registerDefaultFunction(function::Functions::VARIABLE_FORMAT(), new function::context::VariableFormatFunction());
            registerDefaultFunction(function::Functions::VARIABLE_READABLE(), new function::context::VariableReadableFunction(function::Functions::GROUP_CONTEXT_RELATED()));
            registerDefaultFunction(function::Functions::VARIABLE_WRITABLE(), new function::context::VariableWritableFunction(function::Functions::GROUP_CONTEXT_RELATED()));
            registerDefaultFunction(function::Functions::EVALUATE(), new function::other::EvaluateFunction());
            registerDefaultFunction(function::Functions::LD(), new function::other::LdFunction());
            registerDefaultFunction(function::Functions::SLEEP(), new function::other::SleepFunction());
            registerDefaultFunction(function::Functions::ST(), new function::other::StFunction());
            registerDefaultFunction(function::Functions::TRACE(), new function::other::TraceFunction());
            registerDefaultFunction(function::Functions::USER(), new function::other::UserFunction());
            registerDefaultFunction(function::Functions::XPATH(), new function::other::XPathFunction());
            registerDefaultFunction(function::Functions::HAS_VARIABLE(), new function::context::VariableReadableFunction(function::Functions::GROUP_SYSTEM()));
            registerDefaultFunction(function::Functions::HAS_FUNCTION(), new function::context::FunctionAvailableFunction(function::Functions::GROUP_SYSTEM()));
            registerDefaultFunction(function::Functions::HAS_EVENT(), new function::context::EventAvailableFunction(function::Functions::GROUP_SYSTEM()));
            registerDefaultFunction(function::Functions::EXPRESSION_EDITOR_OPTIONS(), new function::ExpressionEditorOptionsFunction());
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* AbstractEvaluatingVisitor::getClass0()
{
    return class_();
}

