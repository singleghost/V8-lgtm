#ifndef V8_GEN_TORQUE_GENERATED_TEST_TORQUE_TEST_TORQUE_TQ_H_
#define V8_GEN_TORQUE_GENERATED_TEST_TORQUE_TEST_TORQUE_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

TNode<BoolT> ElementsKindTestHelper1_392(compiler::CodeAssemblerState* state_, ElementsKind p_kind);
bool ElementsKindTestHelper2_393(compiler::CodeAssemblerState* state_, ElementsKind p_kind);
void LabelTestHelper1_394(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label1);
void LabelTestHelper2_395(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label2, compiler::TypedCodeAssemblerVariable<Smi>* label_Label2_parameter_0);
void LabelTestHelper3_396(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label3, compiler::TypedCodeAssemblerVariable<Oddball>* label_Label3_parameter_0, compiler::TypedCodeAssemblerVariable<Smi>* label_Label3_parameter_1);
void TestConstexpr1_397(compiler::CodeAssemblerState* state_);
void TestConstexprIf_398(compiler::CodeAssemblerState* state_);
void TestConstexprReturn_399(compiler::CodeAssemblerState* state_);
TNode<Oddball> TestGotoLabel_400(compiler::CodeAssemblerState* state_);
TNode<Oddball> TestGotoLabelWithOneParameter_401(compiler::CodeAssemblerState* state_);
TNode<Oddball> TestGotoLabelWithTwoParameters_402(compiler::CodeAssemblerState* state_);
void TestBuiltinSpecialization_403(compiler::CodeAssemblerState* state_, TNode<Context> p_c);
void LabelTestHelper4_404(compiler::CodeAssemblerState* state_, bool p_flag, compiler::CodeAssemblerLabel* label_Label4, compiler::CodeAssemblerLabel* label_Label5);
TNode<BoolT> CallLabelTestHelper4_405(compiler::CodeAssemblerState* state_, bool p_flag);
TNode<Oddball> TestPartiallyUnusedLabel_406(compiler::CodeAssemblerState* state_);
TNode<Object> GenericMacroTest20UT5ATSmi10HeapObject_407(compiler::CodeAssemblerState* state_, TNode<Object> p_param2);
TNode<Object> GenericMacroTestWithLabels20UT5ATSmi10HeapObject_408(compiler::CodeAssemblerState* state_, TNode<Object> p_param2, compiler::CodeAssemblerLabel* label_Y);
void TestMacroSpecialization_409(compiler::CodeAssemblerState* state_);
TNode<Oddball> TestFunctionPointers_410(compiler::CodeAssemblerState* state_, TNode<Context> p_context);
TNode<Oddball> TestVariableRedeclaration_411(compiler::CodeAssemblerState* state_, TNode<Context> p_context);
TNode<Smi> TestTernaryOperator_412(compiler::CodeAssemblerState* state_, TNode<Smi> p_x);
void TestFunctionPointerToGeneric_413(compiler::CodeAssemblerState* state_, TNode<Context> p_c);
TNode<BuiltinPtr> TestTypeAlias_414(compiler::CodeAssemblerState* state_, TNode<BuiltinPtr> p_x);
TNode<Oddball> TestUnsafeCast_415(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Number> p_n);
void TestHexLiteral_416(compiler::CodeAssemblerState* state_);
void TestLargeIntegerLiterals_417(compiler::CodeAssemblerState* state_, TNode<Context> p_c);
void TestMultilineAssert_418(compiler::CodeAssemblerState* state_);
void TestNewlineInString_419(compiler::CodeAssemblerState* state_);
  int31_t kConstexprConst_420(compiler::CodeAssemblerState* state_);
  TNode<IntPtrT> kIntptrConst_421(compiler::CodeAssemblerState* state_);
  TNode<Smi> kSmiConst_422(compiler::CodeAssemblerState* state_);
void TestModuleConstBindings_423(compiler::CodeAssemblerState* state_);
void TestLocalConstBindings_424(compiler::CodeAssemblerState* state_);
TNode<Smi> TestStruct1_425(compiler::CodeAssemblerState* state_, TorqueStructTestStructA p_i);
TorqueStructTestStructA TestStruct2_426(compiler::CodeAssemblerState* state_, TNode<Context> p_context);
TorqueStructTestStructA TestStruct3_427(compiler::CodeAssemblerState* state_, TNode<Context> p_context);
TorqueStructTestStructC TestStruct4_428(compiler::CodeAssemblerState* state_, TNode<Context> p_context);
void CallTestStructInLabel_430(compiler::CodeAssemblerState* state_, TNode<Context> p_context);
void TestForLoop_431(compiler::CodeAssemblerState* state_);
void TestSubtyping_432(compiler::CodeAssemblerState* state_, TNode<Smi> p_x);
TNode<Int32T> TypeswitchExample_433(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_x);
void TestTypeswitch_434(compiler::CodeAssemblerState* state_, TNode<Context> p_context);
void TestTypeswitchAsanLsanFailure_435(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_obj);
void TestGenericOverload_436(compiler::CodeAssemblerState* state_, TNode<Context> p_context);
void TestEquality_437(compiler::CodeAssemblerState* state_, TNode<Context> p_context);
TNode<BoolT> TestOrAnd_438(compiler::CodeAssemblerState* state_, TNode<BoolT> p_x, TNode<BoolT> p_y, TNode<BoolT> p_z);
TNode<BoolT> TestAndOr_439(compiler::CodeAssemblerState* state_, TNode<BoolT> p_x, TNode<BoolT> p_y, TNode<BoolT> p_z);
void TestLogicalOperators_440(compiler::CodeAssemblerState* state_);
TNode<Smi> TestCall_441(compiler::CodeAssemblerState* state_, TNode<Smi> p_i, compiler::CodeAssemblerLabel* label_A);
void TestOtherwiseWithCode1_442(compiler::CodeAssemblerState* state_);
void TestOtherwiseWithCode2_443(compiler::CodeAssemblerState* state_);
void TestOtherwiseWithCode3_444(compiler::CodeAssemblerState* state_);
void TestForwardLabel_445(compiler::CodeAssemblerState* state_);
void TestQualifiedAccess_446(compiler::CodeAssemblerState* state_, TNode<Context> p_context);
TNode<Smi> TestCatch1_447(compiler::CodeAssemblerState* state_, TNode<Context> p_context);
void TestCatch2Wrapper_448(compiler::CodeAssemblerState* state_, TNode<Context> p_context);
TNode<Smi> TestCatch2_449(compiler::CodeAssemblerState* state_, TNode<Context> p_context);
void TestCatch3WrapperWithLabel_450(compiler::CodeAssemblerState* state_, TNode<Context> p_context, compiler::CodeAssemblerLabel* label__Abort);
TNode<Smi> TestCatch3_451(compiler::CodeAssemblerState* state_, TNode<Context> p_context);
void TestIterator_452(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Map> p_map);
void TestFrame1_453(compiler::CodeAssemblerState* state_, TNode<Context> p_context);
void TestNew_454(compiler::CodeAssemblerState* state_, TNode<Context> p_context);
void TestStructConstructor_455(compiler::CodeAssemblerState* state_, TNode<Context> p_context);
TNode<InternalClass> NewInternalClass_456(compiler::CodeAssemblerState* state_, TNode<Smi> p_x);
void TestInternalClass_457(compiler::CodeAssemblerState* state_, TNode<Context> p_context);
void TestConstInStructs_458(compiler::CodeAssemblerState* state_);
TNode<Object> TestNewFixedArrayFromSpread_459(compiler::CodeAssemblerState* state_, TNode<Context> p_context);
void TestReferences_460(compiler::CodeAssemblerState* state_);
void TestSlices_461(compiler::CodeAssemblerState* state_);
TNode<Oddball> TestSliceEnumeration_462(compiler::CodeAssemblerState* state_, TNode<Context> p_context);
void TestStaticAssert_463(compiler::CodeAssemblerState* state_);
void TestLoadEliminationFixed_464(compiler::CodeAssemblerState* state_, TNode<Context> p_context);
void TestLoadEliminationVariable_465(compiler::CodeAssemblerState* state_, TNode<Context> p_context);
TNode<Smi> TestRedundantArrayElementCheck_466(compiler::CodeAssemblerState* state_, TNode<Context> p_context);
TNode<Smi> TestRedundantSmiCheck_467(compiler::CodeAssemblerState* state_, TNode<Context> p_context);
TNode<IntPtrT> TestGenericStruct1_468(compiler::CodeAssemblerState* state_);
TorqueStructTestTuple24TestTuple8ATintptr5ATSmi24TestTuple5ATSmi8ATintptr TestGenericStruct2_469(compiler::CodeAssemblerState* state_);
TNode<BoolT> BranchAndWriteResult_470(compiler::CodeAssemblerState* state_, TNode<Smi> p_x, TNode<SmiBox> p_box);
void TestBranchOnBoolOptimization_471(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Smi> p_input);
TNode<Smi> LoadInternalClassA_1383(compiler::CodeAssemblerState* state_, TNode<InternalClass> p_o);
void StoreInternalClassA_1384(compiler::CodeAssemblerState* state_, TNode<InternalClass> p_o, TNode<Smi> p_v);
TNode<Number> LoadInternalClassB_1385(compiler::CodeAssemblerState* state_, TNode<InternalClass> p_o);
void StoreInternalClassB_1386(compiler::CodeAssemblerState* state_, TNode<InternalClass> p_o, TNode<Number> p_v);
void _method_InternalClass_Flip(compiler::CodeAssemblerState* state_, TNode<InternalClass> p_this, compiler::CodeAssemblerLabel* label_NotASmi);
TNode<Smi> LoadSmiPairA_1387(compiler::CodeAssemblerState* state_, TNode<SmiPair> p_o);
void StoreSmiPairA_1388(compiler::CodeAssemblerState* state_, TNode<SmiPair> p_o, TNode<Smi> p_v);
TNode<Smi> LoadSmiPairB_1389(compiler::CodeAssemblerState* state_, TNode<SmiPair> p_o);
void StoreSmiPairB_1390(compiler::CodeAssemblerState* state_, TNode<SmiPair> p_o, TNode<Smi> p_v);
TorqueStructReference5ATSmi _method_SmiPair_GetA(compiler::CodeAssemblerState* state_, TNode<SmiPair> p_this);
TNode<Smi> LoadSmiBoxValue_1391(compiler::CodeAssemblerState* state_, TNode<SmiBox> p_o);
void StoreSmiBoxValue_1392(compiler::CodeAssemblerState* state_, TNode<SmiBox> p_o, TNode<Smi> p_v);
TNode<Smi> LoadSmiBoxUnrelated_1393(compiler::CodeAssemblerState* state_, TNode<SmiBox> p_o);
void StoreSmiBoxUnrelated_1394(compiler::CodeAssemblerState* state_, TNode<SmiBox> p_o, TNode<Smi> p_v);
TNode<Object> GenericMacroTest5ATSmi_1498(compiler::CodeAssemblerState* state_, TNode<Smi> p__param);
TNode<Object> GenericMacroTestWithLabels5ATSmi_1499(compiler::CodeAssemblerState* state_, TNode<Smi> p__param, compiler::CodeAssemblerLabel* label__X);
TNode<Object> IncrementIfSmi32UT5ATSmi10FixedArray10HeapNumber_1500(compiler::CodeAssemblerState* state_, TNode<Object> p_x);
TNode<Smi> ExampleGenericOverload5ATSmi_1501(compiler::CodeAssemblerState* state_, TNode<Smi> p_o);
TNode<Object> ExampleGenericOverload20UT5ATSmi10HeapObject_1502(compiler::CodeAssemblerState* state_, TNode<Object> p_o);
TNode<BoolT> Is7JSArray5ATSmi_1503(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Smi> p_o);
void Swap5ATSmi_1506(compiler::CodeAssemblerState* state_, TorqueStructReference5ATSmi p_a, TorqueStructReference5ATSmi p_b);
TorqueStructTestTuple5ATSmi8ATintptr TupleSwap8ATintptr5ATSmi_1507(compiler::CodeAssemblerState* state_, TorqueStructTestTuple8ATintptr5ATSmi p_tuple);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_TEST_TORQUE_TEST_TORQUE_TQ_H_
