#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_BIGINT_TQ_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_BIGINT_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

TNode<BigInt> Convert8ATBigInt13MutableBigInt_258(compiler::CodeAssemblerState* state_, TNode<BigInt> p_i);
  TNode<Uint32T> kPositiveSign_259(compiler::CodeAssemblerState* state_);
  TNode<Uint32T> kNegativeSign_260(compiler::CodeAssemblerState* state_);
TNode<BoolT> IsCanonicalized_261(compiler::CodeAssemblerState* state_, TNode<BigInt> p_bigint);
TNode<Uint32T> InvertSign_262(compiler::CodeAssemblerState* state_, TNode<Uint32T> p_sign);
TNode<BigInt> AllocateEmptyBigIntNoThrow_263(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Uint32T> p_sign, TNode<IntPtrT> p_length, compiler::CodeAssemblerLabel* label_BigIntTooBig);
TNode<BigInt> AllocateEmptyBigInt_264(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Uint32T> p_sign, TNode<IntPtrT> p_length);
TNode<Int32T> MutableBigIntAbsoluteCompare_265(compiler::CodeAssemblerState* state_, TNode<BigInt> p_x, TNode<BigInt> p_y);
TNode<BigInt> MutableBigIntAbsoluteSub_266(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<BigInt> p_x, TNode<BigInt> p_y, TNode<Uint32T> p_resultSign);
TNode<BigInt> MutableBigIntAbsoluteAdd_267(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<BigInt> p_xBigint, TNode<BigInt> p_yBigint, TNode<Uint32T> p_resultSign, compiler::CodeAssemblerLabel* label_BigIntTooBig);
TNode<BigInt> BigIntAddImpl_268(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<BigInt> p_x, TNode<BigInt> p_y, compiler::CodeAssemblerLabel* label_BigIntTooBig);
TNode<BigInt> Convert10BigIntBase13MutableBigInt_1484(compiler::CodeAssemblerState* state_, TNode<BigInt> p_i);
TNode<BigInt> Cast8ATBigInt_1485(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_BIGINT_TQ_H_
