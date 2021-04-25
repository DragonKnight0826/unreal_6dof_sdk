//
// Created by SVR00003 on 2017/9/25.
//

#ifndef XRSDK_TRACE_H
#define XRSDK_TRACE_H

namespace sxr {
    class Trace {
    public:
        Trace(const char* str);
        ~Trace();
        static void beginTrace(const char* name);
        static void endTrace();
    private:
    };
}

#define ATRACE_NAME(name) sxr::Trace ___tracer(name)
// ATRACE_CALL is an ATRACE_NAME that uses the current function name.
#define ATRACE_CALL() ATRACE_NAME(__FUNCTION__)

#endif //XRSDK_TRACE_H
