#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_DATA_VIEW_TQ_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_DATA_VIEW_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

TNode<String> MakeDataViewGetterNameString_271(compiler::CodeAssemblerState* state_, ElementsKind p_kind);
TNode<String> MakeDataViewSetterNameString_272(compiler::CodeAssemblerState* state_, ElementsKind p_kind);
TNode<BoolT> WasDetached_273(compiler::CodeAssemblerState* state_, TNode<JSArrayBufferView> p_view);
TNode<JSDataView> ValidateDataView_274(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, TNode<String> p_method);
TNode<Smi> LoadDataView8_275(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, bool p_signed);
TNode<Number> LoadDataView16_276(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<BoolT> p_requestedLittleEndian, bool p_signed);
TNode<Number> LoadDataView32_277(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<BoolT> p_requestedLittleEndian, ElementsKind p_kind);
TNode<Number> LoadDataViewFloat64_278(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<BoolT> p_requestedLittleEndian);
  int31_t kZeroDigitBigInt_279(compiler::CodeAssemblerState* state_);
  int31_t kOneDigitBigInt_280(compiler::CodeAssemblerState* state_);
  int31_t kTwoDigitBigInt_281(compiler::CodeAssemblerState* state_);
TNode<BigInt> MakeBigIntOn64Bit_282(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Uint32T> p_lowWord, TNode<Uint32T> p_highWord, bool p_signed);
TNode<BigInt> MakeBigIntOn32Bit_283(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Uint32T> p_lowWord, TNode<Uint32T> p_highWord, bool p_signed);
TNode<BigInt> MakeBigInt_284(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Uint32T> p_lowWord, TNode<Uint32T> p_highWord, bool p_signed);
TNode<BigInt> LoadDataViewBigInt_285(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<BoolT> p_requestedLittleEndian, bool p_signed);
TNode<Numeric> DataViewGet_286(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, TNode<Object> p_offset, TNode<Object> p_requestedLittleEndian, ElementsKind p_kind);
void StoreDataView8_287(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<Uint32T> p_value);
void StoreDataView16_288(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<Uint32T> p_value, TNode<BoolT> p_requestedLittleEndian);
void StoreDataView32_289(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<Uint32T> p_value, TNode<BoolT> p_requestedLittleEndian);
void StoreDataView64_290(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<Uint32T> p_lowWord, TNode<Uint32T> p_highWord, TNode<BoolT> p_requestedLittleEndian);
void StoreDataViewBigInt_291(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<BigInt> p_bigIntValue, TNode<BoolT> p_requestedLittleEndian);
TNode<Object> DataViewSet_292(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, TNode<Object> p_offset, TNode<Object> p_value, TNode<Object> p_requestedLittleEndian, ElementsKind p_kind);
TNode<JSDataView> Cast10JSDataView_1488(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_DATA_VIEW_TQ_H_
