#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_SLICE_TQ_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_SLICE_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

TNode<JSArray> HandleSimpleArgumentsSlice_38(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<JSArgumentsObjectWithLength> p_args, TNode<Smi> p_start, TNode<Smi> p_count, compiler::CodeAssemblerLabel* label_Bailout);
TNode<JSArray> HandleFastAliasedSloppyArgumentsSlice_39(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<JSArgumentsObjectWithLength> p_args, TNode<Smi> p_start, TNode<Smi> p_count, compiler::CodeAssemblerLabel* label_Bailout);
TNode<JSArray> HandleFastSlice_40(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<Object> p_o, TNode<Number> p_startNumber, TNode<Number> p_countNumber, compiler::CodeAssemblerLabel* label_Bailout);
TNode<FixedArray> Cast10FixedArray_1456(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
TNode<Context> UnsafeCast7Context_1457(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);
TNode<JSArray> Cast20ATFastJSArrayForCopy_1458(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
TNode<JSArgumentsObjectWithLength> Cast27JSArgumentsObjectWithLength_1459(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
TNode<NativeContext> UnsafeCast15ATNativeContext_1460(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_SLICE_TQ_H_
