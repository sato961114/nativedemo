package sato.nativedemo.primitive;

/**
 * example of primitive arrays.<br>
 * 
 * native implementation does not vary the argument.<br>
 * this example includes String type, that is not primitive, because String type is often used.<br>
 */
public class PrimitiveArraySample {

	/**
	 * pass and recieve boolean array.
	 * @param array boolean array.
	 * @return boolean array.
	 */
	public native boolean[] booleanSample(boolean[] array);
	
	/**
	 * pass and recieve byte array.
	 * @param array byte array.
	 * @return byte array.
	 */
	public native byte[] byteSample(byte[] array);
	
	/**
	 * pass and recieve char array.
	 * @param array char array.
	 * @return char array.
	 */
	public native char[] charSample(char[] array);
	
	/**
	 * pass and recieve short array.
	 * @param array short array.
	 * @return short array.
	 */
	public native short[] shortSample(short[] array);
	
	/**
	 * pass and recieve int array.
	 * @param array int array.
	 * @return int array.
	 */
	public native int[] intSample(int[] array);
	
	/**
	 * pass and recieve long array.
	 * @param array long array.
	 * @return long array.
	 */
	public native long[] longSample(long[] array);
	
	/**
	 * pass and recieve float array.
	 * @param array float array.
	 * @return float array.
	 */
	public native float[] floatSample(float[] array);
	
	/**
	 * pass and recieve double array.
	 * @param array double array.
	 * @return double array,
	 */
	public native double[] doubleSample(double[] array);

	/**
	 * pass and recieve String array.
	 * @param array String array.
	 * @return String array.
	 */
	public native String[] stringSample(String[] array);
}
