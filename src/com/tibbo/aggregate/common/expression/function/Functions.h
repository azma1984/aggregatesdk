#pragma once

#include <string>

namespace Functions
{
    // Mathematical Functions
    static const std::string ABS = "abs";
    static const std::string ACOS = "acos";
    static const std::string ASIN = "asin";
    static const std::string ATAN = "atan";
    static const std::string CBRT = "cbrt";
    static const std::string CEIL = "ceil";
    static const std::string COS = "cos";
    static const std::string COSH = "cosh";
    static const std::string E = "e";
    static const std::string EXP = "exp";
    static const std::string EQ = "eq";
    static const std::string FLOOR = "floor";
    static const std::string GE = "ge";
    static const std::string GT = "gt";
    static const std::string LE = "le";
    static const std::string LOG = "log";
    static const std::string LOG10 = "log10";
    static const std::string LT = "lt";
    static const std::string MIN = "min";
    static const std::string MAX = "max";
    static const std::string NE = "ne";
    static const std::string PI = "pi";
    static const std::string POW = "pow";
    static const std::string RANDOM = "random";
    static const std::string ROUND = "round";
    static const std::string SIGNUM = "signum";
    static const std::string SIN = "sin";
    static const std::string SINH = "sinh";
    static const std::string SQRT = "sqrt";
    static const std::string TAN = "tan";
    static const std::string TANH = "tanh";
    static const std::string FORMAT_NUMBER = "formatNumber";

    // String Functions
    static const std::string CONTAINS = "contains";
    static const std::string ENDS_WITH = "endsWith";
    static const std::string FORMAT = "format";
    static const std::string GROUPS = "groups";
    static const std::string INDEX = "index";
    static const std::string IS_DIGIT = "isDigit";
    static const std::string IS_LETTER = "isLetter";
    static const std::string IS_LOWER_CASE = "isLowerCase";
    static const std::string IS_UPPER_CASE = "isUpperCase";
    static const std::string IS_WHITESPACE = "isWhitespace";
    static const std::string LAST_INDEX = "lastIndex";
    static const std::string LENGTH = "length";
    static const std::string LOWER = "lower";
    static const std::string REPLACE = "replace";
    static const std::string SPLIT = "split";
    static const std::string STARTS_WITH = "startsWith";
    static const std::string SUBSTRING = "substring";
    static const std::string TRIM = "trim";
    static const std::string UPPER = "upper";
    static const std::string URL_DECODE = "urlDecode";
    static const std::string URL_ENCODE = "urlEncode";

    // Date/Time Functions
    static const std::string DATE = "date";
    static const std::string DATE_ADD = "dateAdd";
    static const std::string DATE_DIFF = "dateDiff";
    static const std::string DAY = "day";
    static const std::string DAY_OF_WEEK = "dayOfWeek";
    static const std::string DAY_OF_YEAR = "dayOfYear";
    static const std::string FORMAT_DATE = "formatDate";
    static const std::string HOUR = "hour";
    static const std::string MILLISECOND = "millisecond";
    static const std::string MINUTE = "minute";
    static const std::string MONTH = "month";
    static const std::string NOW = "now";
    static const std::string SECOND = "second";
    static const std::string PRINT_PERIOD = "printPeriod";
    static const std::string TIME = "time";
    static const std::string YEAR = "year";

    // Color Processing Functions
    static const std::string BLUE = "blue";
    static const std::string BRIGHTER = "brighter";
    static const std::string COLOR = "color";
    static const std::string DARKER = "darker";
    static const std::string GREEN = "green";
    static const std::string RED = "red";

    // Data Table Processing Functions
    static const std::string ADD_COLUMNS = "addColumns";
    static const std::string ADD_RECORDS = "addRecords";
    static const std::string ADJUST_RECORD_LIMITS = "adjustRecordLimits";
    static const std::string AGGREGATE = "aggregate";
    static const std::string CELL = "cell";
    static const std::string CLEAR = "clear";
    static const std::string CONVERT = "convert";
    static const std::string COPY = "copy";
    static const std::string DESCRIBE = "describe";
    static const std::string DESCRIPTION = "description";
    static const std::string ENCODE = "encode";
    static const std::string FILTER = "filter";
    static const std::string GET_FORMAT = "getFormat";
    static const std::string HAS_FIELD = "hasField";
    static const std::string JOIN = "join";
    static const std::string PRINT = "print";
    static const std::string RECORDS = "records";
    static const std::string REMOVE_COLUMNS = "removeColumns";
    static const std::string REMOVE_RECORDS = "removeRecords";
    static const std::string SELECT = "select";
    static const std::string SET = "set";
    static const std::string SORT = "sort";
    static const std::string SUBTABLE = "subtable";
    static const std::string TABLE = "table";
    static const std::string UNION = "union";

    // Type Conversion Functions
    static const std::string BOOLEAN = "boolean";
    static const std::string INTEGER = "integer";
    static const std::string FLOAT = "float";
    static const std::string LONG = "long";
    static const std::string STRING = "string";
    static const std::string TIMESTAMP = "timestamp";

    // Context-Related Functions
    static const std::string AVAILABLE = "available";
    static const std::string CALL_FUNCTION = "callFunction";
    static const std::string DC = "dc";
    static const std::string DR = "dr";
    static const std::string DT = "dt";
    static const std::string EVENT_AVAILABLE = "eventAvailable";
    static const std::string EVENT_FORMAT = "eventFormat";
    static const std::string FIRE_EVENT = "fireEvent";
    static const std::string FUNCTION_AVAILABLE = "functionAvailable";
    static const std::string FUNCTION_INPUT_FORMAT = "functionInputFormat";
    static const std::string FUNCTION_OUTPUT_FORMAT = "functionOutputFormat";
    static const std::string GET_VARIABLE = "getVariable";
    static const std::string SET_VARIABLE = "setVariable";
    static const std::string VARIABLE_AVAILABLE = "variableAvailable";
    static const std::string VARIABLE_FORMAT = "variableFormat";
    static const std::string VARIABLE_READABLE = "variableReadable";
    static const std::string VARIABLE_WRITABLE = "variableWritable";

    // Miscellaneous Functions
    static const std::string EVALUATE = "evaluate";
    static const std::string LD = "ld";
    static const std::string SLEEP = "sleep";
    static const std::string ST = "st";
    static const std::string TRACE = "trace";
    static const std::string USER = "user";
    static const std::string XPATH = "xpath";

    // System Functions
    static const std::string ABSOLUTE = "absolute";
    static const std::string EXPRESSION_EDITOR_OPTIONS = "expressionEditorOptions";
    static const std::string HAS_RESOLVER = "hasResolver";

    // Function groups
    static const std::string GROUP_CONTEXT_RELATED = Cres.get().getString("fContextOperations");
    static const std::string GROUP_DATA_TABLE_PROCESSING = Cres.get().getString("fDataTableProcessing");
    static const std::string GROUP_NUMBER_PROCESSING = Cres.get().getString("fNumberProcessing");
    static const std::string GROUP_TYPE_CONVERSION = Cres.get().getString("fTypeConversion");
    static const std::string GROUP_DATE_TIME_PROCESSING = Cres.get().getString("fDateTimeProcessing");
    static const std::string GROUP_COLOR_PROCESSING = Cres.get().getString("fColorProcessing");
    static const std::string GROUP_SYSTEM = Cres.get().getString("fSystem");
    static const std::string GROUP_STRING_PROCESSING = Cres.get().getString("fStringProcessing");
    static const std::string GROUP_OTHER = Cres.get().getString("fOther");

    // Deprecated Functions
    static const std::string HAS_VARIABLE = "hasVariable";
    static const std::string HAS_FUNCTION = "hasFunction";
    static const std::string HAS_EVENT = "hasEvent";
};
