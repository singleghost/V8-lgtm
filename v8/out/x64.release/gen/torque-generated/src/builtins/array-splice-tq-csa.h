#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_SPLICE_TQ_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_SPLICE_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

TNode<FixedArray> Extract10FixedArray_42(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArrayBase> p_elements, TNode<Smi> p_first, TNode<Smi> p_count, TNode<Smi> p_capacity);
TNode<FixedDoubleArray> Extract16FixedDoubleArray_43(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArrayBase> p_elements, TNode<Smi> p_first, TNode<Smi> p_count, TNode<Smi> p_capacity);
TNode<Object> FastArraySplice_44(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructArguments p_args, TNode<JSReceiver> p_o, TNode<Number> p_originalLengthNumber, TNode<Number> p_actualStartNumber, TNode<Smi> p_insertCount, TNode<Number> p_actualDeleteCountNumber, compiler::CodeAssemblerLabel* label_Bailout);
TNode<Object> FillDeletedElementsArray_45(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Number> p_actualStart, TNode<Number> p_actualDeleteCount, TNode<JSReceiver> p_a);
void HandleForwardCase_46(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Number> p_len, TNode<Number> p_itemCount, TNode<Number> p_actualStart, TNode<Number> p_actualDeleteCount);
void HandleBackwardCase_47(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Number> p_len, TNode<Number> p_itemCount, TNode<Number> p_actualStart, TNode<Number> p_actualDeleteCount);
TNode<Object> SlowSplice_48(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructArguments p_arguments, TNode<JSReceiver> p_o, TNode<Number> p_len, TNode<Number> p_actualStart, TNode<Smi> p_insertCount, TNode<Number> p_actualDeleteCount);
void FastSplice10FixedArray90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol_1467(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructArguments p_args, TNode<JSArray> p_a, TNode<Smi> p_length, TNode<Smi> p_newLength, TNode<Smi> p_actualStart, TNode<Smi> p_insertCount, TNode<Smi> p_actualDeleteCount);
void FastSplice16FixedDoubleArray20UT5ATSmi10HeapNumber_1468(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructArguments p_args, TNode<JSArray> p_a, TNode<Smi> p_length, TNode<Smi> p_newLength, TNode<Smi> p_actualStart, TNode<Smi> p_insertCount, TNode<Smi> p_actualDeleteCount);
void DoMoveElements10FixedArray_1519(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_elements, TNode<Smi> p_dstIndex, TNode<Smi> p_srcIndex, TNode<Smi> p_count);
void StoreHoles10FixedArray_1520(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_elements, TNode<Smi> p_holeStartIndex, TNode<Smi> p_holeEndIndex);
void DoCopyElements10FixedArray_1521(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_dstElements, TNode<Smi> p_dstIndex, TNode<FixedArray> p_srcElements, TNode<Smi> p_srcIndex, TNode<Smi> p_count);
void DoMoveElements16FixedDoubleArray_1522(compiler::CodeAssemblerState* state_, TNode<FixedDoubleArray> p_elements, TNode<Smi> p_dstIndex, TNode<Smi> p_srcIndex, TNode<Smi> p_count);
void StoreHoles16FixedDoubleArray_1523(compiler::CodeAssemblerState* state_, TNode<FixedDoubleArray> p_elements, TNode<Smi> p_holeStartIndex, TNode<Smi> p_holeEndIndex);
void DoCopyElements16FixedDoubleArray_1524(compiler::CodeAssemblerState* state_, TNode<FixedDoubleArray> p_dstElements, TNode<Smi> p_dstIndex, TNode<FixedDoubleArray> p_srcElements, TNode<Smi> p_srcIndex, TNode<Smi> p_count);
TNode<Number> UnsafeCast20UT5ATSmi10HeapNumber_1525(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_SPLICE_TQ_H_
