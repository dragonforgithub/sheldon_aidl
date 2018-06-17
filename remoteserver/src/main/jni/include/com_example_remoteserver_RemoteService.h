/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_example_remoteserver_RemoteService */

#ifndef _Included_com_example_remoteserver_RemoteService
#define _Included_com_example_remoteserver_RemoteService
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_remoteserver_RemoteService
 * Method:    stringFromJNI
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_remoteserver_RemoteService_stringFromJNI
  (JNIEnv *, jobject);

/*
 * Class:     com_example_remoteserver_RemoteService
 * Method:    NanoOpen
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_example_remoteserver_RemoteService_NanoOpen
  (JNIEnv *, jobject);

/*
 * Class:     com_example_remoteserver_RemoteService
 * Method:    NanoPollEvent
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_com_example_remoteserver_RemoteService_NanoPollEvent
  (JNIEnv *, jobject, jbyteArray, jint);

/*
 * Class:     com_example_remoteserver_RemoteService
 * Method:    NanosetSpeakerOn
 * Signature: (Z)Z
 */
JNIEXPORT jboolean JNICALL Java_com_example_remoteserver_RemoteService_NanosetSpeakerOn
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_example_remoteserver_RemoteService
 * Method:    NanodialCall
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_example_remoteserver_RemoteService_NanodialCall
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_example_remoteserver_RemoteService
 * Method:    NanoincomingCall
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_example_remoteserver_RemoteService_NanoincomingCall
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_example_remoteserver_RemoteService
 * Method:    NanoanswerCall
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_example_remoteserver_RemoteService_NanoanswerCall
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_example_remoteserver_RemoteService
 * Method:    NanohangupCall
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_example_remoteserver_RemoteService_NanohangupCall
  (JNIEnv *, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif
