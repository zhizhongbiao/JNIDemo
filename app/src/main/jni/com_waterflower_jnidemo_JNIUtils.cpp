//
// Created by zhizhongbiao on 2019/8/19.
//

#include "com_waterflower_jnidemo_JNIUtils.h"

JNIEXPORT jstring JNICALL Java_com_waterflower_jnidemo_JNIUtils_getStrFromC
  (JNIEnv *env, jclass)
  {
  return env -> NewStringUTF("Hello JNI");
  }