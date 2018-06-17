#include "stdafx.h"

#include <iostream>
#include <string>

#include "sato_nativedemo_primitive_PrimitiveSample.h"

/*
* Class:     sato_nativedemo_primitive_PrimitiveSample
* Method:    booleanSample
* Signature: (Z)Z
*/
JNIEXPORT jboolean JNICALL Java_sato_nativedemo_primitive_PrimitiveSample_booleanSample
(JNIEnv * env, jobject obj, jboolean val) {
	bool tmp = val;

	std::cout << "[booleanSample] val: " << tmp << std::endl;
	return !val;
}

/*
* Class:     sato_nativedemo_primitive_PrimitiveSample
* Method:    byteSample
* Signature: (B)B
*/
JNIEXPORT jbyte JNICALL Java_sato_nativedemo_primitive_PrimitiveSample_byteSample
(JNIEnv * env, jobject obj, jbyte val) {
	unsigned char tmp = val;
	std::cout << "[byteSample] val: " << tmp << std::endl;
	tmp = 255;
	return tmp;
}

/*
* Class:     sato_nativedemo_primitive_PrimitiveSample
* Method:    charSample
* Signature: (C)C
*/
JNIEXPORT jchar JNICALL Java_sato_nativedemo_primitive_PrimitiveSample_charSample
(JNIEnv * env, jobject obj, jchar val) {
	char tmp = val;
	std::cout << "[charSample] val: " << tmp << std::endl;
	tmp = 'Z';
	return tmp;
}

/*
* Class:     sato_nativedemo_primitive_PrimitiveSample
* Method:    shortSample
* Signature: (S)S
*/
JNIEXPORT jshort JNICALL Java_sato_nativedemo_primitive_PrimitiveSample_shortSample
(JNIEnv * env, jobject obj, jshort val) {
	short tmp = val;
	std::cout << "[shortSample] val: " << tmp << std::endl;
	tmp = 99;
	return tmp;
}

/*
* Class:     sato_nativedemo_primitive_PrimitiveSample
* Method:    intSample
* Signature: (I)I
*/
JNIEXPORT jint JNICALL Java_sato_nativedemo_primitive_PrimitiveSample_intSample
(JNIEnv * env, jobject obj, jint val) {
	int tmp = val;
	std::cout << "[intSample] val: " << tmp << std::endl;
	tmp = 99;
	return tmp;
}

/*
* Class:     sato_nativedemo_primitive_PrimitiveSample
* Method:    longSample
* Signature: (J)J
*/
JNIEXPORT jlong JNICALL Java_sato_nativedemo_primitive_PrimitiveSample_longSample
(JNIEnv * env, jobject obj, jlong val) {
	long tmp = val;
	std::cout << "[longSample] val: " << tmp << std::endl;
	tmp = 99;
	return tmp;
}

/*
* Class:     sato_nativedemo_primitive_PrimitiveSample
* Method:    floatSample
* Signature: (F)F
*/
JNIEXPORT jfloat JNICALL Java_sato_nativedemo_primitive_PrimitiveSample_floatSample
(JNIEnv * env, jobject obj, jfloat val) {
	float tmp = val;
	std::cout << "[floatSample] val: " << tmp << std::endl;
	tmp = 99.99;
	return tmp;
}

/*
* Class:     sato_nativedemo_primitive_PrimitiveSample
* Method:    doubleSample
* Signature: (D)D
*/
JNIEXPORT jdouble JNICALL Java_sato_nativedemo_primitive_PrimitiveSample_doubleSample
(JNIEnv * env, jobject obj, jdouble val) {
	double tmp = val;
	std::cout << "[doubleSample] val: " << tmp << std::endl;
	tmp = 99.99;
	return tmp;
}

/*
* Class:     sato_nativedemo_primitive_PrimitiveSample
* Method:    voidSample
* Signature: ()V
*/
JNIEXPORT void JNICALL Java_sato_nativedemo_primitive_PrimitiveSample_voidSample
(JNIEnv * env, jobject obj) {
	std::cout << "[voidSample] val: none" << std::endl;
}

/*
* Class:     sato_nativedemo_primitive_PrimitiveSample
* Method:    stringSample
* Signature: (Ljava/lang/String;)Ljava/lang/String;
*/
JNIEXPORT jstring JNICALL Java_sato_nativedemo_primitive_PrimitiveSample_stringSample
(JNIEnv * env, jobject obj, jstring val) {
	const char *message = env->GetStringUTFChars(val, NULL);
	std::cout << "[stingSample] val: " << message << std::endl;

	const char *pre = "[";
	const char *post = "]";

	std::string tmp = "";
	tmp = tmp + pre;
	tmp = tmp + message;
	tmp = tmp + post;

	env->ReleaseStringUTFChars(val, message);

	char* cstr = new char[tmp.size() + 1];
	std::char_traits<char>::copy(cstr, tmp.c_str(), tmp.size() + 1);

	return env->NewStringUTF(cstr);
}

