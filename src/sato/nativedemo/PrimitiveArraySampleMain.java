package sato.nativedemo;

import sato.nativedemo.primitive.PrimitiveArraySample;

public class PrimitiveArraySampleMain {
	static {
		System.loadLibrary("primitiveDLL");
	}

	public static void main(String[] args) {

		PrimitiveArraySample primitiveArraySample = new PrimitiveArraySample();
		
		boolean[] booleans = {true, false, true, false};
		boolean[] resultBooleanArray = primitiveArraySample.booleanSample(booleans);
		for(boolean element : resultBooleanArray) {
			System.out.print(element + " ");
		}
		System.out.println();
		
		byte[] bytes = {0x30, 0x31, 0x32, 0x33};
		byte[] resultByteArray = primitiveArraySample.byteSample(bytes);
		for(byte element : resultByteArray) {
			System.out.print(element + " ");
		}
		System.out.println();
		
		char[] chars = {'a', 'b', 'c', 'd'};
		char[] resultCharArray = primitiveArraySample.charSample(chars);
		for(char element : resultCharArray) {
			System.out.print(element + " ");
		}
		System.out.println();
		
		short[] shorts = {1, 2, 3, 4};
		short[] resultShortArray = primitiveArraySample.shortSample(shorts);
		for(short element : resultShortArray) {
			System.out.print(element + " ");
		}
		System.out.println();
		
		int[] ints = {1, 2, 3, 4};
		int[] resultIntArray = primitiveArraySample.intSample(ints);
		for(int element : resultIntArray) {
			System.out.print(element + " ");
		}
		System.out.println();

		long[] longs = {1, 2, 3, 4};
		long[] resultLongArray = primitiveArraySample.longSample(longs);
		for(long element : resultLongArray) {
			System.out.print(element + " ");
		}
		System.out.println();
		
		float[] floats = {1.1f, 2.2f, 3.3f, 4.4f};
		float[] resultFloatArray = primitiveArraySample.floatSample(floats);
		for(float element : resultFloatArray) {
			System.out.print(element + " ");
		}
		System.out.println();

		double[] doubles = {1.1, 2.2, 3.3, 4.4};
		double[] resultDoubleArray = primitiveArraySample.doubleSample(doubles);
		for(double element : resultDoubleArray) {
			System.out.print(element + " ");
		}
		System.out.println();
		
		String[] strings = {"a", "b", "c", "d"};
		String[] resultStringArray = primitiveArraySample.stringSample(strings);
		for(String element : resultStringArray) {
			System.out.print(element + " ");
		}
		System.out.println();
	}
}
 