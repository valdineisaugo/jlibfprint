/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class jlibfprint_JlibFprint */

#ifndef _Included_jlibfprint_JlibFprint
#define _Included_jlibfprint_JlibFprint

#include "libfprintWrapper.h"

#define DISCOVERED_DEVICE_CLASS "jlibfprint/DiscoveredDevice"

#ifdef __cplusplus
extern "C" {
#endif
    
   
jobject createDiscoveredDevice(JNIEnv *env, fp_dscv_dev* fpDiscoveredDevice);

JNIEXPORT jint JNICALL Java_jlibfprint_DiscoveredDevice_getType
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif