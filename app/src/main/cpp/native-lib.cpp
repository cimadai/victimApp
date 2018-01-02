#include <jni.h>
#include <string>
#include <random>

extern "C"
JNIEXPORT jstring
JNICALL
Java_net_cimadai_victimApp_MainActivity_doThings(
        JNIEnv *env,
        jobject /* this */) {

    int r = std::rand() % 100;
    char buff[100];
    snprintf(buff, sizeof(buff), "Random is %d.", r);
    return env->NewStringUTF(buff);
}

