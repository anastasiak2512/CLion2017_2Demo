//CLion can handle parameters packs more accurate now.
//Check the errors shown by CLion below.

template <typename T>
class Param {
public:
    typedef T type;
};

template <typename... Ts>
void fun_list(typename Param<Ts>::type... tp) {
}

template <typename... Ts>
void fun_list_with_char(typename Param<Ts>::type... tp, const char *c) {
}

void handle() {
    fun_list<double, double, double>(1.1, 1.2);
    fun_list_with_char<double, double, double>(1.1, 1.2, "a");
    fun_list_with_char<double, double, double>(1.1, 1.2, 1.3, "a");
    fun_list_with_char<double, double, double>(1.1, 1.2, 1.3, 1.4, "a");
}