#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_REGEXP_REPLACE_TQ_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_REGEXP_REPLACE_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

void RegExpReplaceCallableNoExplicitCaptures_326(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArray> p_matchesElements, TNode<IntPtrT> p_matchesLength, TNode<String> p_string, TNode<JSReceiver> p_replaceFn);
void RegExpReplaceCallableWithExplicitCaptures_327(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArray> p_matchesElements, TNode<IntPtrT> p_matchesLength, TNode<JSReceiver> p_replaceFn);
TNode<String> RegExpReplaceFastGlobalCallable_328(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSRegExp> p_regexp, TNode<String> p_string, TNode<JSReceiver> p_replaceFn);
TNode<String> RegExpReplaceFastString_329(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSRegExp> p_regexp, TNode<String> p_string, TNode<String> p_replaceString);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_REGEXP_REPLACE_TQ_H_
