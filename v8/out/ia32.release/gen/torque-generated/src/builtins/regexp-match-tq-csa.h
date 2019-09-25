#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_REGEXP_MATCH_TQ_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_REGEXP_MATCH_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

TNode<Object> FastRegExpPrototypeMatchBody_324(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSRegExp> p_receiver, TNode<String> p_string);
TNode<Object> SlowRegExpPrototypeMatchBody_325(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, TNode<String> p_string);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_REGEXP_MATCH_TQ_H_
