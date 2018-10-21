#include <jni.h>        // JNI header provided by JDK
#include "hello.h"   // Generated
#include <dlfcn.h>
#define C_LIB "libhello.dylib"

// Implementation of the native method sayHello()
JNIEXPORT void JNICALL Java_HelloJNI_sayHello(JNIEnv *env, jobject thisObj) {
    void *fHandle;
    void (*func)();

    fHandle = dlopen(C_LIB,RTLD_LAZY);

    if (!fHandle) {
        fprintf (stderr, "%s\n", dlerror());
        exit(1);
    }
    dlerror();

    func = (void(*)())dlsym(fHandle,"HelloWorld");

    if (func) {
        func();
    }

    dlclose(fHandle);
    return;
}

