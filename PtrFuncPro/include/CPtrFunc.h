#ifndef _CPtrFunc_H_3488jifdd02_
#define _CPtrFunc_H_3488jifdd02_
namespace miraclee {
    class CPtrFunc {
    public:
        CPtrFunc() { std::cout << "test" << std::endl; }
        virtual ~CPtrFunc();
        int PtrFuncTest(int a, int b, int (*GetBest)(int, int));
    };
};
#endif