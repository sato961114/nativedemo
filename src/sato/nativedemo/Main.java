package sato.nativedemo;

import sato.nativedemo.primitive.PrimitiveSample;

public class Main {

	static {
		System.loadLibrary("primitiveDLL");
	}

	public static void main(String[] args) {

		PrimitiveSample primitiveSample = new PrimitiveSample();
		
		System.out.println(primitiveSample.booleanSample(false));

		byte byteSampleResult = primitiveSample.byteSample((byte)0x31);
		System.out.println(String.format("%x", byteSampleResult));
		
		System.out.println(primitiveSample.charSample('a'));
		
		System.out.println(primitiveSample.shortSample((short)30));
		
		System.out.println(primitiveSample.intSample(2));
		
		System.out.println(primitiveSample.longSample(3));
		
		System.out.println(primitiveSample.floatSample((float)0.1f));
		
		System.out.println(primitiveSample.doubleSample((double)0.01));
		
		primitiveSample.voidSample();
		
		System.out.println(primitiveSample.stringSample("sample"));
	}
}
