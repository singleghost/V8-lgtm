#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_JOIN_TQ_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_JOIN_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

TNode<BoolT> CannotUseSameArrayAccessor7JSArray_8(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<BuiltinPtr> p_loadFn, TNode<JSReceiver> p_receiver, TNode<Map> p_originalMap, TNode<Number> p_originalLen);
TNode<BoolT> CannotUseSameArrayAccessor12JSTypedArray_9(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<BuiltinPtr> p__loadFn, TNode<JSReceiver> p_receiver, TNode<Map> p__initialMap, TNode<Number> p__initialLen);
TNode<IntPtrT> AddStringLength_10(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_lenA, TNode<IntPtrT> p_lenB);
TorqueStructBuffer NewBuffer_11(compiler::CodeAssemblerState* state_, TNode<UintPtrT> p_len, TNode<String> p_sep);
TNode<String> BufferJoin_12(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructBuffer p_buffer, TNode<String> p_sep);
TNode<Object> ArrayJoin7JSArray_13(compiler::CodeAssemblerState* state_, TNode<Context> p_context, bool p_useToLocaleString, TNode<JSReceiver> p_receiver, TNode<String> p_sep, TNode<Number> p_lenNumber, TNode<Object> p_locales, TNode<Object> p_options);
TNode<Object> ArrayJoin12JSTypedArray_14(compiler::CodeAssemblerState* state_, TNode<Context> p_context, bool p_useToLocaleString, TNode<JSReceiver> p_receiver, TNode<String> p_sep, TNode<Number> p_lenNumber, TNode<Object> p_locales, TNode<Object> p_options);
TNode<FixedArray> LoadJoinStack_15(compiler::CodeAssemblerState* state_, TNode<Context> p_context, compiler::CodeAssemblerLabel* label_IfUninitialized);
void SetJoinStack_16(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArray> p_stack);
TNode<BoolT> JoinStackPushInline_17(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_receiver);
void JoinStackPopInline_18(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_receiver);
TNode<JSArray> UnsafeCast7JSArray_1436(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);
TNode<NumberDictionary> UnsafeCast18ATNumberDictionary_1437(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);
TNode<FixedArray> UnsafeCast10FixedArray_1438(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);
TNode<Smi> UnsafeCast5ATSmi_1439(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);
TNode<Object> UnsafeCast90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol_1441(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);
TNode<FixedDoubleArray> UnsafeCast16FixedDoubleArray_1442(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);
TNode<JSTypedArray> UnsafeCast12JSTypedArray_1443(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);
TNode<String> Cast6String_1445(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
TNode<String> ArrayJoinImpl7JSArray_1446(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_receiver, TNode<String> p_sep, TNode<Number> p_lengthNumber, bool p_useToLocaleString, TNode<Object> p_locales, TNode<Object> p_options, TNode<BuiltinPtr> p_initialLoadFn);
TNode<String> ArrayJoinImpl12JSTypedArray_1447(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_receiver, TNode<String> p_sep, TNode<Number> p_lengthNumber, bool p_useToLocaleString, TNode<Object> p_locales, TNode<Object> p_options, TNode<BuiltinPtr> p_initialLoadFn);
TNode<HeapObject> UnsafeCast10HeapObject_1448(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);
TNode<FixedArray> StoreAndGrowFixedArray10JSReceiver_1449(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_fixedArray, TNode<IntPtrT> p_index, TNode<JSReceiver> p_element);
TNode<Object> CycleProtectedArrayJoin7JSArray_1450(compiler::CodeAssemblerState* state_, TNode<Context> p_context, bool p_useToLocaleString, TNode<JSReceiver> p_o, TNode<Number> p_len, TNode<Object> p_sepObj, TNode<Object> p_locales, TNode<Object> p_options);
TNode<Object> CycleProtectedArrayJoin12JSTypedArray_1451(compiler::CodeAssemblerState* state_, TNode<Context> p_context, bool p_useToLocaleString, TNode<JSReceiver> p_o, TNode<Number> p_len, TNode<Object> p_sepObj, TNode<Object> p_locales, TNode<Object> p_options);
TNode<FixedArray> StoreAndGrowFixedArray5ATSmi_1517(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_fixedArray, TNode<IntPtrT> p_index, TNode<Smi> p_element);
TNode<FixedArray> StoreAndGrowFixedArray6String_1518(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_fixedArray, TNode<IntPtrT> p_index, TNode<String> p_element);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_JOIN_TQ_H_
