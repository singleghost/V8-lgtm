#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_TYPED_ARRAY_TQ_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_TYPED_ARRAY_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

TNode<JSTypedArray> EnsureAttached_376(compiler::CodeAssemblerState* state_, TNode<JSTypedArray> p_array, compiler::CodeAssemblerLabel* label_Detached);
TorqueStructAttachedJSTypedArrayWitness NewAttachedJSTypedArrayWitness_377(compiler::CodeAssemblerState* state_, TNode<JSTypedArray> p_array);
TNode<BuiltinPtr> GetLoadFnForElementsKind_378(compiler::CodeAssemblerState* state_, TNode<Int32T> p_elementsKind);
ElementsKind KindForArrayType15ATUint8Elements_379(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType14ATInt8Elements_380(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType16ATUint16Elements_381(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType15ATInt16Elements_382(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType16ATUint32Elements_383(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType15ATInt32Elements_384(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType17ATFloat32Elements_385(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType17ATFloat64Elements_386(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType22ATUint8ClampedElements_387(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType19ATBigUint64Elements_388(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType18ATBigInt64Elements_389(compiler::CodeAssemblerState* state_);
TNode<Number> CallCompare_390(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<JSReceiver> p_comparefn, TNode<Object> p_a, TNode<Object> p_b);
void TypedArrayMerge_391(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<JSReceiver> p_comparefn, TNode<FixedArray> p_source, TNode<Smi> p_from, TNode<Smi> p_middle, TNode<Smi> p_to, TNode<FixedArray> p_target);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_TYPED_ARRAY_TQ_H_
