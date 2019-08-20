LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := jnidemo
LOCAL_SRC_FILES := com_waterflower_jnidemo_JNIUtils.cpp

include $(BUILD_SHARED_LIBRARY)