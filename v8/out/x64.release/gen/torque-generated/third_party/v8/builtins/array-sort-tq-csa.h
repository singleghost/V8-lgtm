#ifndef V8_GEN_TORQUE_GENERATED_THIRD_PARTY_V8_BUILTINS_ARRAY_SORT_TQ_H_
#define V8_GEN_TORQUE_GENERATED_THIRD_PARTY_V8_BUILTINS_ARRAY_SORT_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

TNode<IntPtrT> CalculateWorkArrayLength_472(compiler::CodeAssemblerState* state_, TNode<JSReceiver> p_receiver, TNode<Number> p_initialReceiverLength);
TNode<SortState> NewSortState_473(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_receiver, TNode<HeapObject> p_comparefn, TNode<Number> p_initialReceiverLength);
  TNode<Smi> kSuccess_474(compiler::CodeAssemblerState* state_);
  int31_t kMaxMergePending_475(compiler::CodeAssemblerState* state_);
  int31_t kMinGallopWins_476(compiler::CodeAssemblerState* state_);
  TNode<Smi> kSortStateTempSize_477(compiler::CodeAssemblerState* state_);
TNode<Smi> GetPendingRunsSize_478(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState);
TNode<Smi> GetPendingRunBase_479(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArray> p_pendingRuns, TNode<Smi> p_run);
void SetPendingRunBase_480(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_pendingRuns, TNode<Smi> p_run, TNode<Smi> p_value);
TNode<Smi> GetPendingRunLength_481(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArray> p_pendingRuns, TNode<Smi> p_run);
void SetPendingRunLength_482(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_pendingRuns, TNode<Smi> p_run, TNode<Smi> p_value);
void PushRun_483(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState, TNode<Smi> p_base, TNode<Smi> p_length);
TNode<FixedArray> GetTempArray_484(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState, TNode<Smi> p_requestedSize);
void BinaryInsertionSort_485(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState, TNode<Smi> p_low, TNode<Smi> p_startArg, TNode<Smi> p_high);
TNode<Smi> CountAndMakeRun_486(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState, TNode<Smi> p_lowArg, TNode<Smi> p_high);
void ReverseRange_487(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_array, TNode<Smi> p_from, TNode<Smi> p_to);
void MergeLow_488(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState, TNode<Smi> p_baseA, TNode<Smi> p_lengthAArg, TNode<Smi> p_baseB, TNode<Smi> p_lengthBArg);
void MergeHigh_489(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState, TNode<Smi> p_baseA, TNode<Smi> p_lengthAArg, TNode<Smi> p_baseB, TNode<Smi> p_lengthBArg);
TNode<Smi> ComputeMinRunLength_490(compiler::CodeAssemblerState* state_, TNode<Smi> p_nArg);
TNode<BoolT> RunInvariantEstablished_491(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArray> p_pendingRuns, TNode<Smi> p_n);
void MergeCollapse_492(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState);
void MergeForceCollapse_493(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState);
void ArrayTimSortImpl_494(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState, TNode<Smi> p_length);
TNode<Smi> CompactReceiverElementsIntoWorkArray_495(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState);
void CopyWorkArrayToReceiver_496(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState, TNode<Smi> p_numberOfNonUndefined);
TNode<JSReceiver> LoadSortStateReceiver_1401(compiler::CodeAssemblerState* state_, TNode<SortState> p_o);
void StoreSortStateReceiver_1402(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<JSReceiver> p_v);
TNode<Map> LoadSortStateInitialReceiverMap_1403(compiler::CodeAssemblerState* state_, TNode<SortState> p_o);
void StoreSortStateInitialReceiverMap_1404(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<Map> p_v);
TNode<Number> LoadSortStateInitialReceiverLength_1405(compiler::CodeAssemblerState* state_, TNode<SortState> p_o);
void StoreSortStateInitialReceiverLength_1406(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<Number> p_v);
TNode<HeapObject> LoadSortStateUserCmpFn_1407(compiler::CodeAssemblerState* state_, TNode<SortState> p_o);
void StoreSortStateUserCmpFn_1408(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<HeapObject> p_v);
TNode<BuiltinPtr> LoadSortStateSortComparePtr_1409(compiler::CodeAssemblerState* state_, TNode<SortState> p_o);
void StoreSortStateSortComparePtr_1410(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<BuiltinPtr> p_v);
TNode<BuiltinPtr> LoadSortStateLoadFn_1411(compiler::CodeAssemblerState* state_, TNode<SortState> p_o);
void StoreSortStateLoadFn_1412(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<BuiltinPtr> p_v);
TNode<BuiltinPtr> LoadSortStateStoreFn_1413(compiler::CodeAssemblerState* state_, TNode<SortState> p_o);
void StoreSortStateStoreFn_1414(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<BuiltinPtr> p_v);
TNode<BuiltinPtr> LoadSortStateDeleteFn_1415(compiler::CodeAssemblerState* state_, TNode<SortState> p_o);
void StoreSortStateDeleteFn_1416(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<BuiltinPtr> p_v);
TNode<BuiltinPtr> LoadSortStateCanUseSameAccessorFn_1417(compiler::CodeAssemblerState* state_, TNode<SortState> p_o);
void StoreSortStateCanUseSameAccessorFn_1418(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<BuiltinPtr> p_v);
TNode<Smi> LoadSortStateMinGallop_1419(compiler::CodeAssemblerState* state_, TNode<SortState> p_o);
void StoreSortStateMinGallop_1420(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<Smi> p_v);
TNode<Smi> LoadSortStatePendingRunsSize_1421(compiler::CodeAssemblerState* state_, TNode<SortState> p_o);
void StoreSortStatePendingRunsSize_1422(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<Smi> p_v);
TNode<FixedArray> LoadSortStatePendingRuns_1423(compiler::CodeAssemblerState* state_, TNode<SortState> p_o);
void StoreSortStatePendingRuns_1424(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<FixedArray> p_v);
TNode<FixedArray> LoadSortStateWorkArray_1425(compiler::CodeAssemblerState* state_, TNode<SortState> p_o);
void StoreSortStateWorkArray_1426(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<FixedArray> p_v);
TNode<FixedArray> LoadSortStateTempArray_1427(compiler::CodeAssemblerState* state_, TNode<SortState> p_o);
void StoreSortStateTempArray_1428(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<FixedArray> p_v);
TNode<Smi> LoadSortStateSortLength_1429(compiler::CodeAssemblerState* state_, TNode<SortState> p_o);
void StoreSortStateSortLength_1430(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<Smi> p_v);
TNode<Smi> LoadSortStateNumberOfUndefined_1431(compiler::CodeAssemblerState* state_, TNode<SortState> p_o);
void StoreSortStateNumberOfUndefined_1432(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<Smi> p_v);
TNode<Number> _method_SortState_Compare(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_this, TNode<Object> p_x, TNode<Object> p_y);
void _method_SortState_CheckAccessor(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_this, compiler::CodeAssemblerLabel* label_Bailout);
void _method_SortState_ResetToGenericAccessor(compiler::CodeAssemblerState* state_, TNode<SortState> p_this);
TNode<JSObject> UnsafeCast8JSObject_1514(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);
TNode<HeapNumber> UnsafeCast10HeapNumber_1515(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);
TNode<HeapObject> Cast84UT19ATCallableApiObject17ATCallableJSProxy11ATUndefined15JSBoundFunction10JSFunction_1516(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_THIRD_PARTY_V8_BUILTINS_ARRAY_SORT_TQ_H_
