#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_LASTINDEXOF_TQ_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_LASTINDEXOF_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

TNode<Object> LoadWithHoleCheck10FixedArray_19(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArrayBase> p_elements, TNode<Smi> p_index, compiler::CodeAssemblerLabel* label_IfHole);
TNode<Object> LoadWithHoleCheck16FixedDoubleArray_20(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArrayBase> p_elements, TNode<Smi> p_index, compiler::CodeAssemblerLabel* label_IfHole);
TNode<Number> GetFromIndex_21(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Number> p_length, TorqueStructArguments p_arguments);
TNode<Object> TryFastArrayLastIndexOf_22(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_receiver, TNode<Object> p_searchElement, TNode<Number> p_from, compiler::CodeAssemblerLabel* label_Slow);
TNode<Object> GenericArrayLastIndexOf_23(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_object, TNode<Object> p_searchElement, TNode<Number> p_from);
TNode<Smi> FastArrayLastIndexOf10FixedArray_1446(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSArray> p_array, TNode<Smi> p_from, TNode<Object> p_searchElement);
TNode<Smi> FastArrayLastIndexOf16FixedDoubleArray_1447(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSArray> p_array, TNode<Smi> p_from, TNode<Object> p_searchElement);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_LASTINDEXOF_TQ_H_
