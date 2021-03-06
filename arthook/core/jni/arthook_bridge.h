#ifndef ARTHOOK_BRIDGE_H
#define ARTHOOK_BRIDGE_H

#include "arthook_t.h"
#include "arthook_helper.h"
#include "arthook_manager.h"
#include "utils.h"
#include "config.h"

#define BRIDGE_UTILS "org/sid/arthookbridge/Utils"

jclass load_class_from_dex(JNIEnv* env, jobject, char* clsname);
jobject set_dexloader(JNIEnv* env, char* dexfile);
jobject get_dexloader();

jint printStackTraceFromJava(JNIEnv* env);
jint callGetInt(JNIEnv* env, jobject javaArgs, int index);
jobject callGetObj(JNIEnv* env, jobject javaArgs, int index);
jdouble callGetDouble(JNIEnv* env, jobject javaArgs, int index);
jfloat callGetFloat(JNIEnv* env, jobject javaArgs, int index);
jboolean callGetBoolean(JNIEnv* env, jobject javaArgs, int index);
jlong callGetLong(JNIEnv* env, jobject javaArgs, int index);
jbyteArray callGetByteArray(JNIEnv* env, jobject javaArgs, int index);
int arthook_bridge_init(JNIEnv* env, jclass cls);
void callOriginalVoidMethod(JNIEnv* env, jobject thiz,jclass c, jmethodID mid, jvalue* args);
jobject callOriginalObjectMethod(JNIEnv* env, jobject thiz,jclass c, jmethodID mid, jvalue* args);
#endif