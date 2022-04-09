#include <node.h>
#include "obs.h"

namespace obsModule
{
    using v8::FunctionCallbackInfo;
    using v8::Object;
    using v8::Local;
    using v8::Value;

    void obsStartup(const FunctionCallbackInfo<Value> &aArgs)
    {
        aArgs.GetReturnValue().Set((bool)obs_startup(nullptr, nullptr, nullptr));
    }

    void init(Local<Object> aExports)
    {
        NODE_SET_METHOD(aExports, "obsStartup", obsStartup);
    }

    NODE_MODULE(NODE_GYP_MODULE_NAME, init);
}