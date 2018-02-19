//
// Created by mac on 2018/2/20.
//

#ifndef COCOSHAOWAN_COCLOG_H
#define COCOSHAOWAN_COCLOG_H

#include <android/log.h>

#define LOG_TAG (strrchr(__FILE__, '/') + 1)

#define  LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define  LOGE(...)  __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)
#define  LOGV(...)  __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG,__VA_ARGS__)
#define  LOGI(...)  __android_log_print(ANDROID_LOG_INFO   , LOG_TAG,__VA_ARGS__)
#define  LOGW(...)  __android_log_print(ANDROID_LOG_WARN   , LOG_TAG,__VA_ARGS__)
#define  LOGF(...)  __android_log_print(ANDROID_LOG_FATAL   , LOG_TAG,__VA_ARGS__)


#endif //COCOSHAOWAN_COCLOG_H
