#!/bin/bash
C_LIB=libhello.dylib
JNILIB=libhelloJNI.dylib
export JAVA_HOME=/Library/Java/JavaVirtualMachines/jdk1.8.0_25.jdk/Contents/Home
gcc -fPIC -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/darwin" -L/Users/echo/Workspace/JAVA/jni_test/Wrapper_JNI_C_Library_Code -lhello -dynamiclib -o $JNILIB HelloJNI.c
rm -rf ./release
mkdir ./release
mv $JNILIB ./release/
cp $C_LIB ./release/
