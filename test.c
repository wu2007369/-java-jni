/*#########################################################################
# File Name: test.c
# Author :wuzhiming
# QQ : 971975149
# Email:wu2007369@126.com
# Created Time: 三  2/28 11:27:46 2018
#########################################################################*/

#include"JniTest.h"
#include<stdio.h>
JNIEXPORT jstring JNICALL Java_JniTest_get(JNIEnv *env, jobject thiz){
	printf("invoke get from C\n");
	return (*env)->NewStringUTF(env,"Hello from JNI!");
}

JNIEXPORT void JNICALL Java_JniTest_set(JNIEnv *env, jobject thiz, jstring string){

	printf("invoke get from C\n");
	char * str=(char*)(*env)->GetStringUTFChars(env,string,NULL);
	printf("%s\n",str);
	(*env)->ReleaseStringUTFChars(env,string,str);
}
