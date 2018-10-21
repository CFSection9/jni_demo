# jni_demo
## Working Environment:
* macOS Mojave Version 10.14

## Step by Step:
### I. Java code
* 1. javac -h . HelloJNI.java
* 2. cp HelloJNI.h ./../Wrapper_JNI_C_Library_Code
### II. SDK Shared Library
* 1. cd C_Library_Code
* 2. make
* 3. cp ./relase/* ./../Wrapper_JNI_C_Library_Code

### III. JNI wrapper Shared Library
* 1. cd Wrapper_JNI_C_Library_Code
* 2. ./build.sh
* 3. cp ./relase/* ./../Java_Code

### IV. Java code
* 1. java HelloJNI

Reference:
http://www.ntu.edu.sg/home/ehchua/programming/java/javanativeinterface.html
https://jacobpan3g.github.io/2017/09/01/build-dylib-on-mac/
