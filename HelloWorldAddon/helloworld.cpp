#include <napi.h>

Napi::String getHelloWorld(Napi::CallbackInfo& info) {
    auto env = info.Env();
    return Napi::String::New(env, "HelloWorld!");
}

Napi::Object Init(Napi::Env env, Napi::Object exports) {
    exports.Set(Napi::String::New(env, "helloWorld"), Napi::Function::New(env, getHelloWorld));
    return exports;
}

NODE_API_MODULE("helloworld", Init)