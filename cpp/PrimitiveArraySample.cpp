#include "stdafx.h"

#include <iostream>
#include <string>

#include "sato_nativedemo_primitive_PrimitiveArraySample.h"

/*
* Class:     sato_nativedemo_primitive_PrimitiveArraySample
* Method:    booleanSample
* Signature: ([Z)[Z
*/
JNIEXPORT jbooleanArray JNICALL Java_sato_nativedemo_primitive_PrimitiveArraySample_booleanSample
(JNIEnv * env, jobject obj, jbooleanArray array) {
	int size = env->GetArrayLength(array);
	jboolean *arrays = env->GetBooleanArrayElements(array, JNI_FALSE);

	std::cout << "[booleanSample] elements: ";
	for (int i = 0; i < size; i = i + 1) {
		bool tmp = arrays[i];
		std::cout << tmp << " ";
	}
	std::cout << std::endl;

	env->ReleaseBooleanArrayElements(array, arrays, NULL);

	jbooleanArray result = env->NewBooleanArray(size);
	jboolean *tmpArray;
	tmpArray = new jboolean[size];
	for (int i = 0; i < size; i = i + 1) {
		*(tmpArray + i) = JNI_FALSE;
	}
	env->SetBooleanArrayRegion(result, 0, size, tmpArray);

	delete[] tmpArray;
	return result;
}

/*
* Class:     sato_nativedemo_primitive_PrimitiveArraySample
* Method:    byteSample
* Signature: ([B)[B
*/
JNIEXPORT jbyteArray JNICALL Java_sato_nativedemo_primitive_PrimitiveArraySample_byteSample
(JNIEnv * env, jobject obj, jbyteArray array) {
	int size = env->GetArrayLength(array);
	jbyte *arrays = env->GetByteArrayElements(array, JNI_FALSE);

	std::cout << "[byteSample] elements: ";
	for (int i = 0; i < size; i = i + 1) {
		unsigned char tmp = arrays[i];
		std::cout << tmp << " ";
	}
	std::cout << std::endl;

	env->ReleaseByteArrayElements(array, arrays, NULL);

	jbyteArray result = env->NewByteArray(size);
	jbyte *tmpArray;
	tmpArray = new jbyte[size];
	for (int i = 0; i < size; i = i + 1) {
		*(tmpArray + i) = 255 - i;
	}
	env->SetByteArrayRegion(result, 0, size, tmpArray);

	delete[] tmpArray;
	return result;
}

/*
* Class:     sato_nativedemo_primitive_PrimitiveArraySample
* Method:    charSample
* Signature: ([C)[C
*/
JNIEXPORT jcharArray JNICALL Java_sato_nativedemo_primitive_PrimitiveArraySample_charSample
(JNIEnv * env, jobject obj, jcharArray array) {
	int size = env->GetArrayLength(array);
	jchar *arrays = env->GetCharArrayElements(array, JNI_FALSE);

	std::cout << "[charSample] elements: ";
	for (int i = 0; i < size; i = i + 1) {
		char tmp = arrays[i];
		std::cout << tmp << " ";
	}
	std::cout << std::endl;

	env->ReleaseCharArrayElements(array, arrays, NULL);

	jcharArray result = env->NewCharArray(size);
	jchar *tmpArray;
	tmpArray = new jchar[size];
	for (int i = 0; i < size; i = i + 1) {
		*(tmpArray + i) = 'z' - i;
	}
	env->SetCharArrayRegion(result, 0, size, tmpArray);

	delete[] tmpArray;
	return result;
}

/*
* Class:     sato_nativedemo_primitive_PrimitiveArraySample
* Method:    shortSample
* Signature: ([S)[S
*/
JNIEXPORT jshortArray JNICALL Java_sato_nativedemo_primitive_PrimitiveArraySample_shortSample
(JNIEnv * env, jobject obj, jshortArray array) {
	int size = env->GetArrayLength(array);
	jshort *arrays = env->GetShortArrayElements(array, JNI_FALSE);

	std::cout << "[shortSample] elements: ";
	for (int i = 0; i < size; i = i + 1) {
		short tmp = arrays[i];
		std::cout << tmp << " ";
	}
	std::cout << std::endl;

	env->ReleaseShortArrayElements(array, arrays, NULL);

	jshortArray result = env->NewShortArray(size);
	jshort *tmpArray;
	tmpArray = new jshort[size];
	for (int i = 0; i < size; i = i + 1) {
		*(tmpArray + i) = 99 - i;
	}
	env->SetShortArrayRegion(result, 0, size, tmpArray);

	delete[] tmpArray;
	return result;
}

/*
* Class:     sato_nativedemo_primitive_PrimitiveArraySample
* Method:    intSample
* Signature: ([I)[I
*/
JNIEXPORT jintArray JNICALL Java_sato_nativedemo_primitive_PrimitiveArraySample_intSample
(JNIEnv * env, jobject obj, jintArray array) {
	int size = env->GetArrayLength(array);
	jint *arrays = env->GetIntArrayElements(array, JNI_FALSE);

	std::cout << "[intSample] elements: ";
	for (int i = 0; i < size; i = i + 1) {
		int tmp = arrays[i];
		std::cout << tmp << " ";
	}
	std::cout << std::endl;

	env->ReleaseIntArrayElements(array, arrays, NULL);

	jintArray result = env->NewIntArray(size);
	jint *tmpArray;
	tmpArray = new jint[size];
	for (int i = 0; i < size; i = i + 1) {
		*(tmpArray + i) = 99 - i;
	}
	env->SetIntArrayRegion(result, 0, size, tmpArray);

	delete[] tmpArray;
	return result;
}

/*
* Class:     sato_nativedemo_primitive_PrimitiveArraySample
* Method:    longSample
* Signature: ([J)[J
*/
JNIEXPORT jlongArray JNICALL Java_sato_nativedemo_primitive_PrimitiveArraySample_longSample
(JNIEnv * env, jobject obj, jlongArray array) {
	int size = env->GetArrayLength(array);
	jlong *arrays = env->GetLongArrayElements(array, JNI_FALSE);

	std::cout << "[longSample] elements: ";
	for (int i = 0; i < size; i = i + 1) {
		long tmp = arrays[i];
		std::cout << tmp << " ";
	}
	std::cout << std::endl;

	env->ReleaseLongArrayElements(array, arrays, NULL);

	jlongArray result = env->NewLongArray(size);
	jlong *tmpArray;
	tmpArray = new jlong[size];
	for (int i = 0; i < size; i = i + 1) {
		*(tmpArray + i) = 99 - i;
	}
	env->SetLongArrayRegion(result, 0, size, tmpArray);

	delete[] tmpArray;
	return result;
}

/*
* Class:     sato_nativedemo_primitive_PrimitiveArraySample
* Method:    floatSample
* Signature: ([F)[F
*/
JNIEXPORT jfloatArray JNICALL Java_sato_nativedemo_primitive_PrimitiveArraySample_floatSample
(JNIEnv * env, jobject obj, jfloatArray array) {
	int size = env->GetArrayLength(array);
	jfloat *arrays = env->GetFloatArrayElements(array, JNI_FALSE);

	std::cout << "[floatSample] elements: ";
	for (int i = 0; i < size; i = i + 1) {
		float tmp = arrays[i];
		std::cout << tmp << " ";
	}
	std::cout << std::endl;

	env->ReleaseFloatArrayElements(array, arrays, NULL);

	jfloatArray result = env->NewFloatArray(size);
	jfloat *tmpArray;
	tmpArray = new jfloat[size];
	for (int i = 0; i < size; i = i + 1) {
		*(tmpArray + i) = 99.99 - i;
	}
	env->SetFloatArrayRegion(result, 0, size, tmpArray);

	delete[] tmpArray;
	return result;
}

/*
* Class:     sato_nativedemo_primitive_PrimitiveArraySample
* Method:    doubleSample
* Signature: ([D)[D
*/
JNIEXPORT jdoubleArray JNICALL Java_sato_nativedemo_primitive_PrimitiveArraySample_doubleSample
(JNIEnv * env, jobject obj, jdoubleArray array) {
	int size = env->GetArrayLength(array);
	jdouble *arrays = env->GetDoubleArrayElements(array, JNI_FALSE);

	std::cout << "[doubleSample] elements: ";
	for (int i = 0; i < size; i = i + 1) {
		double tmp = arrays[i];
		std::cout << tmp << " ";
	}
	std::cout << std::endl;

	env->ReleaseDoubleArrayElements(array, arrays, NULL);

	jdoubleArray result = env->NewDoubleArray(size);
	jdouble *tmpArray;
	tmpArray = new jdouble[size];
	for (int i = 0; i < size; i = i + 1) {
		*(tmpArray + i) = 99.99 - i;
	}
	env->SetDoubleArrayRegion(result, 0, size, tmpArray);

	delete[] tmpArray;
	return result;
}

/*
* Class:     sato_nativedemo_primitive_PrimitiveArraySample
* Method:    stringSample
* Signature: ([Ljava/lang/String;)[Ljava/lang/String;
*/
JNIEXPORT jobjectArray JNICALL Java_sato_nativedemo_primitive_PrimitiveArraySample_stringSample
(JNIEnv * env, jobject obj, jobjectArray array) {
	int size = env->GetArrayLength(array);

	std::cout << "[stringSample] elements: ";
	for (int i = 0; i < size; i = i + 1) {
		jstring tmpString = (jstring)env->GetObjectArrayElement(array, i);
		const char *tmp = env->GetStringUTFChars(tmpString, NULL);
		std::cout << tmp << " ";
		env->ReleaseStringUTFChars(tmpString, tmp);
	}
	std::cout << std::endl;
	jclass classString = env->FindClass("java/lang/String");
	jstring initialParam = jstring();
	jobjectArray result = env->NewObjectArray(size, classString, initialParam);

	for (int i = 0; i < size; i = i + 1) {
		env->SetObjectArrayElement(result, i, env->NewStringUTF("zzz"));
	}

	return result;
}
