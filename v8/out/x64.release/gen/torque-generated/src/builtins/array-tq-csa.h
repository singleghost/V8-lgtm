#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_TQ_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

void EnsureWriteableFastElements_50(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSArray> p_array);
TNode<Object> LoadElementOrUndefined_51(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArray> p_a, TNode<Smi> p_i);
TNode<Object> LoadElementOrUndefined_52(compiler::CodeAssemblerState* state_, TNode<FixedDoubleArray> p_a, TNode<Smi> p_i);
void StoreArrayHole_53(compiler::CodeAssemblerState* state_, TNode<FixedDoubleArray> p_elements, TNode<Smi> p_k);
void StoreArrayHole_54(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_elements, TNode<Smi> p_k);
TNode<Object> UnsafeCast100UT8ATBigInt7ATFalse6ATNull5ATSmi9ATTheHole6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol_1469(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_TQ_H_
