//
// Created by SVR00003 on 2017/9/25.
//
#if PLATFORM_ANDROID
#include <android/trace.h>
#include "Trace.h"

namespace sxr
{
    Trace::Trace(const char* str) {
    #ifdef BUILD_DEBUG
        ATrace_beginSection(str);
    #endif
    }
    Trace::~Trace() {
	#ifdef BUILD_DEBUG
        ATrace_endSection();
	#endif
    }
    void Trace::beginTrace(const char *name) {
#ifdef BUILD_DEBUG
    	ATrace_beginSection(name);
#endif
    }
    void Trace::endTrace() {
#ifdef BUILD_DEBUG
		ATrace_endSection();
#endif
    }
}
#endif