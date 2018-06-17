package sato.nativedemo.primitive;

/**
 * example of primitive values.
 * 
 * native implementation does not vary the argument.<br>
 * this example includes String type, that is not primitive, because String type is often used.<br>
 */
public class PrimitiveSample {

	/**
	 * pass and recieve boolean value.
	 * @param value boolean.
	 * @return boolean.
	 */
	public native boolean booleanSample(boolean value);
	
	/**
	 * pass and recieve byte value.
	 * @param value byte.
	 * @return byte.
	 */
	public native byte byteSample(byte value);
	
	/**
	 * pass and recieve char value.
	 * @param value char.
	 * @return char.
	 */
	public native char charSample(char value);
	
	/**
	 * pass and recieve short value.
	 * @param value short.
	 * @return short.
	 */
	public native short shortSample(short value);
	
	/**
	 * pass and recieve int value.
	 * @param value int.
	 * @return int.
	 */
	public native int intSample(int value);
	
	/**
	 * pass and recieve long value.
	 * @param value long.
	 * @return long.
	 */
	public native long longSample(long value);
	
	/**
	 * pass and recieve float value.
	 * @param value float.
	 * @return float.
	 */
	public native float floatSample(float value);
	
	/**
	 * pass and recieve double value.
	 * @param value double.
	 * @return double.
	 */
	public native double doubleSample(double value);
	
	/**
	 * void example.
	 */
	public native void voidSample();

	/**
	 * pass and recieve String value.
	 * @param value String.
	 * @return String.
	 */
	public native String stringSample(String value);
}
