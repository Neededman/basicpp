/*************
 * 根据启动程序使用的参数决定程序的运作流程
 * 这种方法不需要重新编译，但是我认为会对程序的执行效率产生影响
 * 因为会有一系列的条件需要判断，虽然这种影响很小
 */
#ifndef _C_ARGV_STATUS_H_340kjf4985
#define _C_ARGV_STATUS_H_340kjf4985
namespace miraclee {
    class CArgvStatus {
    public:
        CArgvStatus(int argc, char **argv);
        virtual ~CArgvStatus();
        static bool debug;
    private:
        int argc;
        char **argv;
    };
};
#endif