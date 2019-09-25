#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_REGEXP_TQ_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_REGEXP_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

TNode<BoolT> IsFastRegExpStrict_333(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o);
TNode<BoolT> IsFastRegExpPermissive_334(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o);
TNode<Object> FlagGetter_335(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, JSRegExp::Flag p_flag, int31_t p_counter, const char* p_methodName);
TNode<String> FastFlagsGetter_336(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSRegExp> p_receiver);
TNode<String> SlowFlagsGetter_337(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver);
TNode<JSRegExp> Cast14ATFastJSRegExp_1493(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_REGEXP_TQ_H_
