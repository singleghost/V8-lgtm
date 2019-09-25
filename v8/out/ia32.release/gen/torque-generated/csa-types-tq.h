#ifndef V8_GEN_TORQUE_GENERATED_CSA_TYPES_TQ_H_
#define V8_GEN_TORQUE_GENERATED_CSA_TYPES_TQ_H_

#include "src/compiler/code-assembler.h"

namespace v8 {
namespace internal {
struct TorqueStructArguments {
  TNode<RawPtrT> frame;
  TNode<RawPtrT> base;
  TNode<IntPtrT> length;

  std::tuple<TNode<RawPtrT>, TNode<RawPtrT>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(frame), std::make_tuple(base), std::make_tuple(length));
  }
};
struct TorqueStructArgumentsInfo {
  TNode<RawPtrT> frame;
  TNode<BInt> argument_count;
  TNode<BInt> formal_parameter_count;

  std::tuple<TNode<RawPtrT>, TNode<BInt>, TNode<BInt>> Flatten() const {
    return std::tuple_cat(std::make_tuple(frame), std::make_tuple(argument_count), std::make_tuple(formal_parameter_count));
  }
};
struct TorqueStructBuffer {
  TNode<FixedArray> fixedArray;
  TNode<IntPtrT> index;
  TNode<IntPtrT> totalStringLength;
  TNode<BoolT> isOneByte;

  std::tuple<TNode<FixedArray>, TNode<IntPtrT>, TNode<IntPtrT>, TNode<BoolT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(fixedArray), std::make_tuple(index), std::make_tuple(totalStringLength), std::make_tuple(isOneByte));
  }
};
struct TorqueStructVector {
  TNode<FixedArray> fixedArray;
  TNode<BoolT> onlySmis;
  TNode<BoolT> onlyNumbers;
  TNode<BoolT> skippedElements;

  std::tuple<TNode<FixedArray>, TNode<BoolT>, TNode<BoolT>, TNode<BoolT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(fixedArray), std::make_tuple(onlySmis), std::make_tuple(onlyNumbers), std::make_tuple(skippedElements));
  }
};
struct TorqueStructFastJSArrayWitness {
  TNode<JSArray> stable;
  TNode<JSArray> unstable;
  TNode<Map> map;
  TNode<BoolT> hasDoubles;
  TNode<BoolT> hasSmis;
  TNode<BoolT> arrayIsPushable;

  std::tuple<TNode<JSArray>, TNode<JSArray>, TNode<Map>, TNode<BoolT>, TNode<BoolT>, TNode<BoolT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(stable), std::make_tuple(unstable), std::make_tuple(map), std::make_tuple(hasDoubles), std::make_tuple(hasSmis), std::make_tuple(arrayIsPushable));
  }
};
struct TorqueStructFastJSArrayForReadWitness {
  TNode<JSArray> stable;
  TNode<JSArray> unstable;
  TNode<Map> map;
  TNode<BoolT> hasDoubles;

  std::tuple<TNode<JSArray>, TNode<JSArray>, TNode<Map>, TNode<BoolT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(stable), std::make_tuple(unstable), std::make_tuple(map), std::make_tuple(hasDoubles));
  }
};
struct TorqueStructKeyValuePair {
  TNode<Object> key;
  TNode<Object> value;

  std::tuple<TNode<Object>, TNode<Object>> Flatten() const {
    return std::tuple_cat(std::make_tuple(key), std::make_tuple(value));
  }
};
struct TorqueStructGrowableFixedArray {
  TNode<FixedArray> array;
  TNode<IntPtrT> capacity;
  TNode<IntPtrT> length;

  std::tuple<TNode<FixedArray>, TNode<IntPtrT>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(array), std::make_tuple(capacity), std::make_tuple(length));
  }
};
struct TorqueStructIteratorRecord {
  TNode<JSReceiver> object;
  TNode<Object> next;

  std::tuple<TNode<JSReceiver>, TNode<Object>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(next));
  }
};
struct TorqueStructUnsafe {

  std::tuple<> Flatten() const {
    return std::tuple_cat();
  }
};
struct TorqueStructTypedArrayElementsInfo {
  TNode<UintPtrT> sizeLog2;
  TNode<Int32T> kind;

  std::tuple<TNode<UintPtrT>, TNode<Int32T>> Flatten() const {
    return std::tuple_cat(std::make_tuple(sizeLog2), std::make_tuple(kind));
  }
};
struct TorqueStructAttachedJSTypedArrayWitness {
  TNode<JSTypedArray> stable;
  TNode<JSTypedArray> unstable;
  TNode<BuiltinPtr> loadfn;

  std::tuple<TNode<JSTypedArray>, TNode<JSTypedArray>, TNode<BuiltinPtr>> Flatten() const {
    return std::tuple_cat(std::make_tuple(stable), std::make_tuple(unstable), std::make_tuple(loadfn));
  }
};
struct TorqueStructTestStructA {
  TNode<FixedArray> indexes;
  TNode<Smi> i;
  TNode<Number> k;

  std::tuple<TNode<FixedArray>, TNode<Smi>, TNode<Number>> Flatten() const {
    return std::tuple_cat(std::make_tuple(indexes), std::make_tuple(i), std::make_tuple(k));
  }
};
struct TorqueStructTestStructB {
  TorqueStructTestStructA x;
  TNode<Smi> y;

  std::tuple<TNode<FixedArray>, TNode<Smi>, TNode<Number>, TNode<Smi>> Flatten() const {
    return std::tuple_cat(x.Flatten(), std::make_tuple(y));
  }
};
struct TorqueStructTestStructC {
  TorqueStructTestStructA x;
  TorqueStructTestStructA y;

  std::tuple<TNode<FixedArray>, TNode<Smi>, TNode<Number>, TNode<FixedArray>, TNode<Smi>, TNode<Number>> Flatten() const {
    return std::tuple_cat(x.Flatten(), y.Flatten());
  }
};
struct TorqueStructTestInner {
  TNode<Int32T> x;
  TNode<Int32T> y;

  std::tuple<TNode<Int32T>, TNode<Int32T>> Flatten() const {
    return std::tuple_cat(std::make_tuple(x), std::make_tuple(y));
  }
};
struct TorqueStructTestOuter {
  TNode<Int32T> a;
  TorqueStructTestInner b;
  TNode<Int32T> c;

  std::tuple<TNode<Int32T>, TNode<Int32T>, TNode<Int32T>, TNode<Int32T>> Flatten() const {
    return std::tuple_cat(std::make_tuple(a), b.Flatten(), std::make_tuple(c));
  }
};
struct TorqueStructStructWithConst {
  TNode<Object> a;
  TNode<Int32T> b;

  std::tuple<TNode<Object>, TNode<Int32T>> Flatten() const {
    return std::tuple_cat(std::make_tuple(a), std::make_tuple(b));
  }
};
struct TorqueStructTestIterator {
  TNode<Smi> count;

  std::tuple<TNode<Smi>> Flatten() const {
    return std::tuple_cat(std::make_tuple(count));
  }
};
struct TorqueStructTestTuple8ATintptr5ATSmi {
  TNode<IntPtrT> fst;
  TNode<Smi> snd;

  std::tuple<TNode<IntPtrT>, TNode<Smi>> Flatten() const {
    return std::tuple_cat(std::make_tuple(fst), std::make_tuple(snd));
  }
};
struct TorqueStructTestTuple5ATSmi8ATintptr {
  TNode<Smi> fst;
  TNode<IntPtrT> snd;

  std::tuple<TNode<Smi>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(fst), std::make_tuple(snd));
  }
};
struct TorqueStructTestTuple24TestTuple8ATintptr5ATSmi24TestTuple5ATSmi8ATintptr {
  TorqueStructTestTuple8ATintptr5ATSmi fst;
  TorqueStructTestTuple5ATSmi8ATintptr snd;

  std::tuple<TNode<IntPtrT>, TNode<Smi>, TNode<Smi>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(fst.Flatten(), snd.Flatten());
  }
};
struct TorqueStructReference5ATSmi {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference18SharedFunctionInfo {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference8ATuint16 {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference3Map {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference14FixedArrayBase {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructSlice20UT5ATSmi10HeapObject {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TNode<IntPtrT> length;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), std::make_tuple(length), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference20UT5ATSmi10HeapObject {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructSliceIterator20UT5ATSmi10HeapObject {
  TNode<HeapObject> object;
  TNode<IntPtrT> start;
  TNode<IntPtrT> end;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(start), std::make_tuple(end), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference20UT5ATSmi10HeapNumber {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference13JSArrayBuffer {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference9ATuintptr {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructSlice9ATfloat64 {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TNode<IntPtrT> length;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), std::make_tuple(length), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference9ATfloat64 {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructSliceIterator9ATfloat64 {
  TNode<HeapObject> object;
  TNode<IntPtrT> start;
  TNode<IntPtrT> end;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(start), std::make_tuple(end), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference18UT10JSReceiver3Map {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference39UT5ATSmi14FixedArrayBase13PropertyArray {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference6String {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference8ATRawPtr {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference32UT11ATUndefined9DebugInfo6Script {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference31UT14ATCoverageInfo11ATUndefined {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference21UT6ATNull10JSReceiver {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference22UT11ATUndefined6String {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructSBox8ATintptr {
  TNode<IntPtrT> value;

  std::tuple<TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(value));
  }
};
struct TorqueStructSBox13SBox8ATintptr {
  TorqueStructSBox8ATintptr value;

  std::tuple<TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(value.Flatten());
  }
};
struct TorqueStructReference10JSReceiver {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference84UT19ATCallableApiObject17ATCallableJSProxy11ATUndefined15JSBoundFunction10JSFunction {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference308FT7Context90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol20UT5ATSmi10HeapNumber {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference129FT7Context9SortState5ATSmi100UT8ATBigInt7ATFalse6ATNull5ATSmi9ATTheHole6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference124FT7Context9SortState5ATSmi90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol5ATSmi {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference32FT7Context9SortState5ATSmi5ATSmi {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference67FT7Context10JSReceiver3Map20UT5ATSmi10HeapNumber17UT7ATFalse6ATTrue {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference10FixedArray {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference11ATScopeInfo {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference8ATuint32 {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference7ATint32 {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference7ATuint8 {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference14ATInstanceType {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference10HeapObject {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference15DescriptorArray {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference15ATDependentCode {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference13UT5ATSmi4Cell {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference46UT5ATSmi17ATTransitionArray3Map13PrototypeInfo {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference9ByteArray {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference9EnumCache {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference7Context {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference12FeedbackCell {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference6ATCode {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference40UT16ATNonNullForeign11ATUndefined6ATZero {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference17ATObjectHashTable {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference34UT11ATUndefined17JSModuleNamespace {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference77UT22ATSourceTextModuleInfo10JSFunction17JSGeneratorObject18SharedFunctionInfo {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference6Script {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference21UT9ATTheHole8JSObject {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference9ArrayList {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference25UT11ATUndefined9JSPromise {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference7Foreign {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference6Module {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference35UT11ATUndefined18SharedFunctionInfo {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference24UT6ATZero13WeakArrayList {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference19UT11ATUndefined3Map {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference16UT5ATSmi7Foreign {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference13BytecodeArray {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference46UT22ATNoSharedNameSentinel11ATScopeInfo6String {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference7ATint16 {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference12PreparseData {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference71UT19ATCallableApiObject17ATCallableJSProxy15JSBoundFunction10JSFunction {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference29UT15ATUninitialized9FreeSpace {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference18UT5ATSmi9ByteArray {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference33UT5ATSmi11ATUndefined10HeapNumber {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference27UT5ATNaN5ATSmi11ATUndefined {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference15ATNativeContext {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference13JSGlobalProxy {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference42UT15ATPrivateSymbol14ATPublicSymbol6String {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference30UT11ATUndefined6ATZero7Foreign {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference39UT11ATUndefined6ATZero15InterceptorInfo {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference15UT6ATCode5ATSmi {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference10JSFunction {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference9JSPromise {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference29UT6ATNull11ATUndefined6String {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference44UT6ATNull11ATUndefined20ATWasmInstanceObject {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference29UT12ATFrameArray11ATUndefined {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference31UT11ATUndefined14StackFrameInfo {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference20ATWasmInstanceObject {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference23UT11ATUndefined7Foreign {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference27UT11ATUndefined10FixedArray {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference38UT11ATUndefined21AsyncGeneratorRequest {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference27UT11ATUndefined10JSReceiver {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference26UT6ATZero15PromiseReaction {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference44UT11ATUndefined9JSPromise17PromiseCapability {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference21UT5ATSmi11ATUndefined {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference42UT21JSRegExpResultIndices15RegExpMatchInfo {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference27UT16ATNonNullForeign6ATZero {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference22UT11ATUndefined6Script {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference30UT11ATUndefined13BytecodeArray {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference43UT11ATUndefined14FeedbackVector10FixedArray {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference16ATAllocationSite {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference13WeakArrayList {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference25UT11ATUndefined9ByteArray {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference30UT11ATUndefined13WeakArrayList {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference30UT11ATUndefined13JSArrayBuffer {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference10HeapNumber {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference24UT11ATUndefined8WeakCell {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference36UT11ATUndefined19JSFinalizationGroup {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference19JSFinalizationGroup {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference60UT11ATUndefined9ByteArray33SourcePositionTableWithFrameCache {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference6ATint8 {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
struct TorqueStructReference27UT11ATUndefined10JSFunction {
  TNode<HeapObject> object;
  TNode<IntPtrT> offset;
  TorqueStructUnsafe unsafeMarker;

  std::tuple<TNode<HeapObject>, TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset), unsafeMarker.Flatten());
  }
};
}  // namespace internal
}  // namespace v8
#endif  // V8_GEN_TORQUE_GENERATED_CSA_TYPES_TQ_H_
