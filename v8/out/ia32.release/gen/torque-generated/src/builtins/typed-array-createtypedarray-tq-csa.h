#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_TYPED_ARRAY_CREATETYPEDARRAY_TQ_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_TYPED_ARRAY_CREATETYPEDARRAY_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

TNode<JSTypedArray> AllocateTypedArray_348(compiler::CodeAssemblerState* state_, TNode<Context> p_context, bool p_isOnHeap, TNode<Map> p_map, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_byteOffset, TNode<UintPtrT> p_byteLength, TNode<UintPtrT> p_length);
TNode<JSTypedArray> TypedArrayInitialize_349(compiler::CodeAssemblerState* state_, TNode<Context> p_context, bool p_initialize, TNode<Map> p_map, TNode<Smi> p_length, TorqueStructTypedArrayElementsInfo p_elementsInfo, TNode<JSReceiver> p_bufferConstructor);
TNode<JSTypedArray> ConstructByLength_350(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Map> p_map, TNode<Object> p_length, TorqueStructTypedArrayElementsInfo p_elementsInfo);
TNode<JSTypedArray> ConstructByArrayLike_351(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Map> p_map, TNode<HeapObject> p_arrayLike, TNode<Object> p_initialLength, TorqueStructTypedArrayElementsInfo p_elementsInfo, TNode<JSReceiver> p_bufferConstructor);
void ConstructByIterable_352(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_iterable, TNode<JSReceiver> p_iteratorFn, compiler::CodeAssemblerLabel* label_IfConstructByArrayLike, compiler::TypedCodeAssemblerVariable<JSArray>* label_IfConstructByArrayLike_parameter_0, compiler::TypedCodeAssemblerVariable<Number>* label_IfConstructByArrayLike_parameter_1, compiler::TypedCodeAssemblerVariable<JSReceiver>* label_IfConstructByArrayLike_parameter_2);
void ConstructByTypedArray_353(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSTypedArray> p_srcTypedArray, compiler::CodeAssemblerLabel* label_IfConstructByArrayLike, compiler::TypedCodeAssemblerVariable<JSTypedArray>* label_IfConstructByArrayLike_parameter_0, compiler::TypedCodeAssemblerVariable<Number>* label_IfConstructByArrayLike_parameter_1, compiler::TypedCodeAssemblerVariable<JSReceiver>* label_IfConstructByArrayLike_parameter_2);
TNode<JSTypedArray> ConstructByArrayBuffer_354(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Map> p_map, TNode<JSArrayBuffer> p_buffer, TNode<Object> p_byteOffset, TNode<Object> p_length, TorqueStructTypedArrayElementsInfo p_elementsInfo);
void ConstructByJSReceiver_355(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_obj, compiler::CodeAssemblerLabel* label_IfConstructByArrayLike, compiler::TypedCodeAssemblerVariable<JSReceiver>* label_IfConstructByArrayLike_parameter_0, compiler::TypedCodeAssemblerVariable<Number>* label_IfConstructByArrayLike_parameter_1, compiler::TypedCodeAssemblerVariable<JSReceiver>* label_IfConstructByArrayLike_parameter_2);
TNode<JSTypedArray> TypedArraySpeciesCreate_356(compiler::CodeAssemblerState* state_, TNode<Context> p_context, const char* p_methodName, int31_t p_numArgs, TNode<JSTypedArray> p_exemplar, TNode<Object> p_arg0, TNode<Object> p_arg1, TNode<Object> p_arg2);
TNode<JSTypedArray> TypedArraySpeciesCreateByLength_357(compiler::CodeAssemblerState* state_, TNode<Context> p_context, const char* p_methodName, TNode<JSTypedArray> p_exemplar, TNode<Smi> p_length);
TNode<JSArrayBuffer> Cast13JSArrayBuffer_1497(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_TYPED_ARRAY_CREATETYPEDARRAY_TQ_H_
