#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_OBJECT_TQ_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_OBJECT_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

TNode<Object> ObjectIsExtensible_313(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_object);
TNode<Object> ObjectPreventExtensionsThrow_314(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_object);
TNode<Object> ObjectPreventExtensionsDontThrow_315(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_object);
TNode<Object> ObjectGetPrototypeOf_316(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_object);
TNode<Object> JSReceiverGetPrototypeOf_317(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_object);
TNode<Object> ObjectSetPrototypeOfThrow_318(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_object, TNode<HeapObject> p_proto);
TNode<Object> ObjectSetPrototypeOfDontThrow_319(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_object, TNode<HeapObject> p_proto);
TNode<HeapObject> Cast21UT6ATNull10JSReceiver_1488(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_OBJECT_TQ_H_
