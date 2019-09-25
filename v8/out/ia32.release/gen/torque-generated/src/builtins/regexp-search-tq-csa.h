#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_REGEXP_SEARCH_TQ_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_REGEXP_SEARCH_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

TNode<Object> RegExpPrototypeSearchBodyFast_330(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSRegExp> p_regexp, TNode<String> p_string);
TNode<BoolT> IsFastRegExpResult_331(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_execResult);
TNode<Object> RegExpPrototypeSearchBodySlow_332(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_regexp, TNode<String> p_string);
TNode<JSRegExpResult> Cast20ATFastJSRegExpResult_1491(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
TNode<JSRegExp> UnsafeCast8JSRegExp_1492(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_REGEXP_SEARCH_TQ_H_
