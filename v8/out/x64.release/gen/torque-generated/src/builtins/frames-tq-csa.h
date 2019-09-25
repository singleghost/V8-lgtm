#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_FRAMES_TQ_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_FRAMES_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

TNode<Smi> FromConstexpr11ATFrameType21ATconstexpr_FrameType_293(compiler::CodeAssemblerState* state_, StackFrame::Type p_t);
TNode<Smi> Cast11ATFrameType_294(compiler::CodeAssemblerState* state_, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
TNode<Object> LoadObjectFromFrame_295(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_f, int32_t p_o);
TNode<RawPtrT> LoadPointerFromFrame_296(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_f, int32_t p_o);
TNode<Smi> LoadSmiFromFrame_297(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_f, int32_t p_o);
TNode<JSFunction> LoadFunctionFromFrame_298(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_f);
TNode<RawPtrT> LoadCallerFromFrame_299(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_f);
TNode<Object> Cast23UT11ATFrameType7Context_300(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
TNode<Object> LoadContextOrFrameTypeFromFrame_301(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<RawPtrT> p_f);
TNode<Smi> LoadLengthFromAdapterFrame_302(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<RawPtrT> p_f);
TNode<BoolT> FrameTypeEquals_303(compiler::CodeAssemblerState* state_, TNode<Smi> p_f1, TNode<Smi> p_f2);
TNode<RawPtrT> Cast15ATStandardFrame_304(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<RawPtrT> p_f, compiler::CodeAssemblerLabel* label_CastError);
TNode<RawPtrT> Cast23ATArgumentsAdaptorFrame_305(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<RawPtrT> p_f, compiler::CodeAssemblerLabel* label_CastError);
TNode<JSFunction> LoadTargetFromFrame_306(compiler::CodeAssemblerState* state_);
TNode<Context> Cast7Context_1489(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
TNode<Object> UnsafeCast23UT11ATFrameType7Context_1490(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_FRAMES_TQ_H_
