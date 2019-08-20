package com.waterflower.jnidemo;

import android.provider.Settings;

/**
 * FileName :  JNIUtils
 * Author   :  zhizhongbiao
 * Date     :  2019/8/19
 * Describe :
 */

public class JNIUtils {

    static {
        System.loadLibrary("jnidemo");
    }

    public static native String getStrFromC();
}
