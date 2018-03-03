/*************************************************************************
# File Name: JniTest.java
# File Name: JniTest.java
# Author :wuzhiming
# QQ : 971975149
# Email:wu2007369@126.com
# Created Time: 三  2/28 10:45:11 2018
*************************************************************************/
public class JniTest
{
	static{
		System.loadLibrary("jni-test");
	}
	public static void main(String[] args){
		JniTest jniTest=new JniTest();
		System.out.println(jniTest.get());
		jniTest.set("hello world");
	}

	public native String get();
	public native void set(String str);
}
