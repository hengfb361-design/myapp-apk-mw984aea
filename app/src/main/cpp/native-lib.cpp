#include <jni.h>
#include <string>

extern "C" JNIEXPORT jfloatArray JNICALL
Java_com_example_poolmod_GuidelineCanvasView_getLineCoordinates(
        JNIEnv* env,
        jobject /* this */) {
    
    jfloat coords[8] = {300.0f, 400.0f, 900.0f, 200.0f, 500.0f, 300.0f, 150.0f, 250.0f};
    
    jfloatArray result = env->NewFloatArray(8);
    env->SetFloatArrayRegion(result, 0, 8, coords);
    return result;
}
