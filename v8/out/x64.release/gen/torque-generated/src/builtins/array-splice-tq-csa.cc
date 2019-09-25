#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/codegen/code-factory.h"
#include "src/heap/factory-inl.h"
#include "src/objects/arguments.h"
#include "src/objects/bigint.h"
#include "src/objects/elements-kind.h"
#include "src/objects/free-space.h"
#include "src/objects/js-generator.h"
#include "src/objects/js-promise.h"
#include "src/objects/js-regexp-string-iterator.h"
#include "src/objects/js-weak-refs.h"
#include "src/objects/objects.h"
#include "src/objects/source-text-module.h"
#include "src/objects/stack-frame-info.h"
#include "src/objects/synthetic-module.h"
#include "src/objects/template-objects.h"
#include "src/builtins/builtins-bigint-gen.h"
#include "src/builtins/builtins-collections-gen.h"
#include "src/builtins/builtins-data-view-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-iterator-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-string-gen.h"
#include "src/builtins/builtins-string-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-constructor-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/objects/js-break-iterator.h"
#include "src/objects/js-collator.h"
#include "src/objects/js-number-format.h"
#include "src/objects/js-objects.h"
#include "src/objects/js-plural-rules.h"
#include "src/objects/js-relative-time-format.h"
#include "src/objects/js-date-time-format.h"
#include "src/objects/js-list-format.h"
#include "src/objects/js-locale.h"
#include "src/objects/js-segment-iterator.h"
#include "src/objects/js-segmenter.h"
#include "torque-generated/src/builtins/arguments-tq-csa.h"
#include "torque-generated/src/builtins/array-copywithin-tq-csa.h"
#include "torque-generated/src/builtins/array-every-tq-csa.h"
#include "torque-generated/src/builtins/array-filter-tq-csa.h"
#include "torque-generated/src/builtins/array-find-tq-csa.h"
#include "torque-generated/src/builtins/array-findindex-tq-csa.h"
#include "torque-generated/src/builtins/array-foreach-tq-csa.h"
#include "torque-generated/src/builtins/array-join-tq-csa.h"
#include "torque-generated/src/builtins/array-lastindexof-tq-csa.h"
#include "torque-generated/src/builtins/array-map-tq-csa.h"
#include "torque-generated/src/builtins/array-of-tq-csa.h"
#include "torque-generated/src/builtins/array-reduce-right-tq-csa.h"
#include "torque-generated/src/builtins/array-reduce-tq-csa.h"
#include "torque-generated/src/builtins/array-reverse-tq-csa.h"
#include "torque-generated/src/builtins/array-shift-tq-csa.h"
#include "torque-generated/src/builtins/array-slice-tq-csa.h"
#include "torque-generated/src/builtins/array-some-tq-csa.h"
#include "torque-generated/src/builtins/array-splice-tq-csa.h"
#include "torque-generated/src/builtins/array-unshift-tq-csa.h"
#include "torque-generated/src/builtins/array-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/bigint-tq-csa.h"
#include "torque-generated/src/builtins/boolean-tq-csa.h"
#include "torque-generated/src/builtins/collections-tq-csa.h"
#include "torque-generated/src/builtins/data-view-tq-csa.h"
#include "torque-generated/src/builtins/extras-utils-tq-csa.h"
#include "torque-generated/src/builtins/frames-tq-csa.h"
#include "torque-generated/src/builtins/growable-fixed-array-tq-csa.h"
#include "torque-generated/src/builtins/internal-coverage-tq-csa.h"
#include "torque-generated/src/builtins/iterator-tq-csa.h"
#include "torque-generated/src/builtins/math-tq-csa.h"
#include "torque-generated/src/builtins/object-fromentries-tq-csa.h"
#include "torque-generated/src/builtins/object-tq-csa.h"
#include "torque-generated/src/builtins/proxy-constructor-tq-csa.h"
#include "torque-generated/src/builtins/proxy-delete-property-tq-csa.h"
#include "torque-generated/src/builtins/proxy-get-property-tq-csa.h"
#include "torque-generated/src/builtins/proxy-get-prototype-of-tq-csa.h"
#include "torque-generated/src/builtins/proxy-has-property-tq-csa.h"
#include "torque-generated/src/builtins/proxy-is-extensible-tq-csa.h"
#include "torque-generated/src/builtins/proxy-prevent-extensions-tq-csa.h"
#include "torque-generated/src/builtins/proxy-revocable-tq-csa.h"
#include "torque-generated/src/builtins/proxy-revoke-tq-csa.h"
#include "torque-generated/src/builtins/proxy-set-property-tq-csa.h"
#include "torque-generated/src/builtins/proxy-set-prototype-of-tq-csa.h"
#include "torque-generated/src/builtins/proxy-tq-csa.h"
#include "torque-generated/src/builtins/reflect-tq-csa.h"
#include "torque-generated/src/builtins/regexp-exec-tq-csa.h"
#include "torque-generated/src/builtins/regexp-match-tq-csa.h"
#include "torque-generated/src/builtins/regexp-replace-tq-csa.h"
#include "torque-generated/src/builtins/regexp-search-tq-csa.h"
#include "torque-generated/src/builtins/regexp-source-tq-csa.h"
#include "torque-generated/src/builtins/regexp-split-tq-csa.h"
#include "torque-generated/src/builtins/regexp-test-tq-csa.h"
#include "torque-generated/src/builtins/regexp-tq-csa.h"
#include "torque-generated/src/builtins/string-tq-csa.h"
#include "torque-generated/src/builtins/string-endswith-tq-csa.h"
#include "torque-generated/src/builtins/string-html-tq-csa.h"
#include "torque-generated/src/builtins/string-iterator-tq-csa.h"
#include "torque-generated/src/builtins/string-pad-tq-csa.h"
#include "torque-generated/src/builtins/string-repeat-tq-csa.h"
#include "torque-generated/src/builtins/string-slice-tq-csa.h"
#include "torque-generated/src/builtins/string-startswith-tq-csa.h"
#include "torque-generated/src/builtins/string-substring-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-createtypedarray-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-every-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-filter-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-find-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-findindex-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-foreach-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-reduce-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-reduceright-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-slice-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-some-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-subarray-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-tq-csa.h"
#include "torque-generated/src/objects/intl-objects-tq-csa.h"
#include "torque-generated/test/torque/test-torque-tq-csa.h"
#include "torque-generated/third_party/v8/builtins/array-sort-tq-csa.h"

namespace v8 {
namespace internal {

TNode<FixedArray> Extract10FixedArray_42(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArrayBase> p_elements, TNode<Smi> p_first, TNode<Smi> p_count, TNode<Smi> p_capacity) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, Smi, Smi, FixedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, Smi, Smi, FixedArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_elements, p_first, p_count, p_capacity);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<FixedArrayBase> tmp1;
    TNode<Smi> tmp2;
    TNode<Smi> tmp3;
    TNode<Smi> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 18);
    TNode<FixedArrayBase> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).ExtractFixedArray(TNode<FixedArrayBase>{tmp1}, TNode<Smi>{tmp2}, TNode<Smi>{tmp3}, TNode<Smi>{tmp4});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 17);
    TNode<FixedArray> tmp6;
    USE(tmp6);
    tmp6 = UnsafeCast10FixedArray_1438(state_, TNode<Context>{tmp0}, TNode<Object>{tmp5});
    ca_.Goto(&block1, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6);
  }

  if (block1.is_used()) {
    TNode<Context> tmp7;
    TNode<FixedArrayBase> tmp8;
    TNode<Smi> tmp9;
    TNode<Smi> tmp10;
    TNode<Smi> tmp11;
    TNode<FixedArray> tmp12;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 14);
    ca_.Goto(&block2, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12);
  }

    TNode<Context> tmp13;
    TNode<FixedArrayBase> tmp14;
    TNode<Smi> tmp15;
    TNode<Smi> tmp16;
    TNode<Smi> tmp17;
    TNode<FixedArray> tmp18;
    ca_.Bind(&block2, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
  return TNode<FixedArray>{tmp18};
}

TNode<FixedDoubleArray> Extract16FixedDoubleArray_43(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArrayBase> p_elements, TNode<Smi> p_first, TNode<Smi> p_count, TNode<Smi> p_capacity) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, Smi, Smi, FixedDoubleArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, Smi, Smi, FixedDoubleArray> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_elements, p_first, p_count, p_capacity);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<FixedArrayBase> tmp1;
    TNode<Smi> tmp2;
    TNode<Smi> tmp3;
    TNode<Smi> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 24);
    TNode<FixedArray> tmp5;
    USE(tmp5);
    tmp5 = kEmptyFixedArray_214(state_);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp1}, TNode<HeapObject>{tmp5});
    ca_.Branch(tmp6, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block2.is_used()) {
    TNode<Context> tmp7;
    TNode<FixedArrayBase> tmp8;
    TNode<Smi> tmp9;
    TNode<Smi> tmp10;
    TNode<Smi> tmp11;
    ca_.Bind(&block2, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 25);
    TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp11});
    TNode<FixedDoubleArray> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).AllocateZeroedFixedDoubleArray(TNode<IntPtrT>{tmp12});
    ca_.Goto(&block1, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block3.is_used()) {
    TNode<Context> tmp14;
    TNode<FixedArrayBase> tmp15;
    TNode<Smi> tmp16;
    TNode<Smi> tmp17;
    TNode<Smi> tmp18;
    ca_.Bind(&block3, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 28);
    TNode<FixedArrayBase> tmp19;
    USE(tmp19);
    tmp19 = CodeStubAssembler(state_).ExtractFixedArray(TNode<FixedArrayBase>{tmp15}, TNode<Smi>{tmp16}, TNode<Smi>{tmp17}, TNode<Smi>{tmp18});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 27);
    TNode<FixedDoubleArray> tmp20;
    USE(tmp20);
    tmp20 = UnsafeCast16FixedDoubleArray_1442(state_, TNode<Context>{tmp14}, TNode<Object>{tmp19});
    ca_.Goto(&block1, tmp14, tmp15, tmp16, tmp17, tmp18, tmp20);
  }

  if (block1.is_used()) {
    TNode<Context> tmp21;
    TNode<FixedArrayBase> tmp22;
    TNode<Smi> tmp23;
    TNode<Smi> tmp24;
    TNode<Smi> tmp25;
    TNode<FixedDoubleArray> tmp26;
    ca_.Bind(&block1, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 21);
    ca_.Goto(&block4, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26);
  }

    TNode<Context> tmp27;
    TNode<FixedArrayBase> tmp28;
    TNode<Smi> tmp29;
    TNode<Smi> tmp30;
    TNode<Smi> tmp31;
    TNode<FixedDoubleArray> tmp32;
    ca_.Bind(&block4, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32);
  return TNode<FixedDoubleArray>{tmp32};
}

TNode<Object> FastArraySplice_44(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructArguments p_args, TNode<JSReceiver> p_o, TNode<Number> p_originalLengthNumber, TNode<Number> p_actualStartNumber, TNode<Smi> p_insertCount, TNode<Number> p_actualDeleteCountNumber, compiler::CodeAssemblerLabel* label_Bailout) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Number, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Number, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Number, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSReceiver, JSArray> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Map> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Map, Int32T> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT, Object> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT, Object> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT, Object, HeapObject> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT, Object, HeapObject> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT, Object, HeapObject, Int32T> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT, Object, HeapObject, Int32T> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT, Object> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT, Object> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT, Object> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT, Object> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT, Object> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT, Object> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT, Object> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, IntPtrT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, Number> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, Number, Smi> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, Smi> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, Smi> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, Smi, JSArray> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, Smi, JSArray> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, Smi, JSArray> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, Smi, JSArray> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Smi, Smi, Smi, Smi, Smi, JSArray, Map, Int32T, Int32T, Smi, JSArray> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Object> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_args.frame, p_args.base, p_args.length, p_o, p_originalLengthNumber, p_actualStartNumber, p_insertCount, p_actualDeleteCountNumber);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<RawPtrT> tmp2;
    TNode<IntPtrT> tmp3;
    TNode<JSReceiver> tmp4;
    TNode<Number> tmp5;
    TNode<Number> tmp6;
    TNode<Smi> tmp7;
    TNode<Number> tmp8;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5, &tmp6, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 115);
    TNode<Smi> tmp9;
    USE(tmp9);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp9 = Cast5ATSmi_83(state_, TNode<Object>{tmp5}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp5, tmp9);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp5);
    }
  }

  if (block4.is_used()) {
    TNode<Context> tmp10;
    TNode<RawPtrT> tmp11;
    TNode<RawPtrT> tmp12;
    TNode<IntPtrT> tmp13;
    TNode<JSReceiver> tmp14;
    TNode<Number> tmp15;
    TNode<Number> tmp16;
    TNode<Smi> tmp17;
    TNode<Number> tmp18;
    TNode<Number> tmp19;
    ca_.Bind(&block4, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp20;
    TNode<RawPtrT> tmp21;
    TNode<RawPtrT> tmp22;
    TNode<IntPtrT> tmp23;
    TNode<JSReceiver> tmp24;
    TNode<Number> tmp25;
    TNode<Number> tmp26;
    TNode<Smi> tmp27;
    TNode<Number> tmp28;
    TNode<Number> tmp29;
    TNode<Smi> tmp30;
    ca_.Bind(&block3, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 114);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 116);
    TNode<Smi> tmp31;
    USE(tmp31);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp31 = Cast5ATSmi_83(state_, TNode<Object>{tmp26}, &label0);
    ca_.Goto(&block5, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp30, tmp26, tmp31);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp30, tmp26);
    }
  }

  if (block6.is_used()) {
    TNode<Context> tmp32;
    TNode<RawPtrT> tmp33;
    TNode<RawPtrT> tmp34;
    TNode<IntPtrT> tmp35;
    TNode<JSReceiver> tmp36;
    TNode<Number> tmp37;
    TNode<Number> tmp38;
    TNode<Smi> tmp39;
    TNode<Number> tmp40;
    TNode<Smi> tmp41;
    TNode<Number> tmp42;
    ca_.Bind(&block6, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    TNode<Context> tmp43;
    TNode<RawPtrT> tmp44;
    TNode<RawPtrT> tmp45;
    TNode<IntPtrT> tmp46;
    TNode<JSReceiver> tmp47;
    TNode<Number> tmp48;
    TNode<Number> tmp49;
    TNode<Smi> tmp50;
    TNode<Number> tmp51;
    TNode<Smi> tmp52;
    TNode<Number> tmp53;
    TNode<Smi> tmp54;
    ca_.Bind(&block5, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 118);
    TNode<Smi> tmp55;
    USE(tmp55);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp55 = Cast5ATSmi_83(state_, TNode<Object>{tmp51}, &label0);
    ca_.Goto(&block7, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp54, tmp51, tmp55);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp54, tmp51);
    }
  }

  if (block8.is_used()) {
    TNode<Context> tmp56;
    TNode<RawPtrT> tmp57;
    TNode<RawPtrT> tmp58;
    TNode<IntPtrT> tmp59;
    TNode<JSReceiver> tmp60;
    TNode<Number> tmp61;
    TNode<Number> tmp62;
    TNode<Smi> tmp63;
    TNode<Number> tmp64;
    TNode<Smi> tmp65;
    TNode<Smi> tmp66;
    TNode<Number> tmp67;
    ca_.Bind(&block8, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.Goto(&block1);
  }

  if (block7.is_used()) {
    TNode<Context> tmp68;
    TNode<RawPtrT> tmp69;
    TNode<RawPtrT> tmp70;
    TNode<IntPtrT> tmp71;
    TNode<JSReceiver> tmp72;
    TNode<Number> tmp73;
    TNode<Number> tmp74;
    TNode<Smi> tmp75;
    TNode<Number> tmp76;
    TNode<Smi> tmp77;
    TNode<Smi> tmp78;
    TNode<Number> tmp79;
    TNode<Smi> tmp80;
    ca_.Bind(&block7, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 117);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 119);
    TNode<Smi> tmp81;
    USE(tmp81);
    tmp81 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp75}, TNode<Smi>{tmp80});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 120);
    TNode<Smi> tmp82;
    USE(tmp82);
    tmp82 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp77}, TNode<Smi>{tmp81});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 122);
    TNode<JSArray> tmp83;
    USE(tmp83);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp83 = Cast7JSArray_113(state_, TNode<HeapObject>{tmp72}, &label0);
    ca_.Goto(&block9, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp80, tmp81, tmp82, tmp72, tmp83);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp80, tmp81, tmp82, tmp72);
    }
  }

  if (block10.is_used()) {
    TNode<Context> tmp84;
    TNode<RawPtrT> tmp85;
    TNode<RawPtrT> tmp86;
    TNode<IntPtrT> tmp87;
    TNode<JSReceiver> tmp88;
    TNode<Number> tmp89;
    TNode<Number> tmp90;
    TNode<Smi> tmp91;
    TNode<Number> tmp92;
    TNode<Smi> tmp93;
    TNode<Smi> tmp94;
    TNode<Smi> tmp95;
    TNode<Smi> tmp96;
    TNode<Smi> tmp97;
    TNode<JSReceiver> tmp98;
    ca_.Bind(&block10, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98);
    ca_.Goto(&block1);
  }

  if (block9.is_used()) {
    TNode<Context> tmp99;
    TNode<RawPtrT> tmp100;
    TNode<RawPtrT> tmp101;
    TNode<IntPtrT> tmp102;
    TNode<JSReceiver> tmp103;
    TNode<Number> tmp104;
    TNode<Number> tmp105;
    TNode<Smi> tmp106;
    TNode<Number> tmp107;
    TNode<Smi> tmp108;
    TNode<Smi> tmp109;
    TNode<Smi> tmp110;
    TNode<Smi> tmp111;
    TNode<Smi> tmp112;
    TNode<JSReceiver> tmp113;
    TNode<JSArray> tmp114;
    ca_.Bind(&block9, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 124);
    TNode<IntPtrT> tmp115 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp115);
    TNode<Map>tmp116 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp114, tmp115});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 125);
    TNode<BoolT> tmp117;
    USE(tmp117);
    tmp117 = CodeStubAssembler(state_).IsPrototypeInitialArrayPrototype(TNode<Context>{tmp99}, TNode<Map>{tmp116});
    TNode<BoolT> tmp118;
    USE(tmp118);
    tmp118 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp117});
    ca_.Branch(tmp118, &block11, &block12, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp114, tmp116);
  }

  if (block11.is_used()) {
    TNode<Context> tmp119;
    TNode<RawPtrT> tmp120;
    TNode<RawPtrT> tmp121;
    TNode<IntPtrT> tmp122;
    TNode<JSReceiver> tmp123;
    TNode<Number> tmp124;
    TNode<Number> tmp125;
    TNode<Smi> tmp126;
    TNode<Number> tmp127;
    TNode<Smi> tmp128;
    TNode<Smi> tmp129;
    TNode<Smi> tmp130;
    TNode<Smi> tmp131;
    TNode<Smi> tmp132;
    TNode<JSArray> tmp133;
    TNode<Map> tmp134;
    ca_.Bind(&block11, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134);
    ca_.Goto(&block1);
  }

  if (block12.is_used()) {
    TNode<Context> tmp135;
    TNode<RawPtrT> tmp136;
    TNode<RawPtrT> tmp137;
    TNode<IntPtrT> tmp138;
    TNode<JSReceiver> tmp139;
    TNode<Number> tmp140;
    TNode<Number> tmp141;
    TNode<Smi> tmp142;
    TNode<Number> tmp143;
    TNode<Smi> tmp144;
    TNode<Smi> tmp145;
    TNode<Smi> tmp146;
    TNode<Smi> tmp147;
    TNode<Smi> tmp148;
    TNode<JSArray> tmp149;
    TNode<Map> tmp150;
    ca_.Bind(&block12, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 126);
    TNode<BoolT> tmp151;
    USE(tmp151);
    tmp151 = CodeStubAssembler(state_).IsNoElementsProtectorCellInvalid();
    ca_.Branch(tmp151, &block13, &block14, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150);
  }

  if (block13.is_used()) {
    TNode<Context> tmp152;
    TNode<RawPtrT> tmp153;
    TNode<RawPtrT> tmp154;
    TNode<IntPtrT> tmp155;
    TNode<JSReceiver> tmp156;
    TNode<Number> tmp157;
    TNode<Number> tmp158;
    TNode<Smi> tmp159;
    TNode<Number> tmp160;
    TNode<Smi> tmp161;
    TNode<Smi> tmp162;
    TNode<Smi> tmp163;
    TNode<Smi> tmp164;
    TNode<Smi> tmp165;
    TNode<JSArray> tmp166;
    TNode<Map> tmp167;
    ca_.Bind(&block13, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167);
    ca_.Goto(&block1);
  }

  if (block14.is_used()) {
    TNode<Context> tmp168;
    TNode<RawPtrT> tmp169;
    TNode<RawPtrT> tmp170;
    TNode<IntPtrT> tmp171;
    TNode<JSReceiver> tmp172;
    TNode<Number> tmp173;
    TNode<Number> tmp174;
    TNode<Smi> tmp175;
    TNode<Number> tmp176;
    TNode<Smi> tmp177;
    TNode<Smi> tmp178;
    TNode<Smi> tmp179;
    TNode<Smi> tmp180;
    TNode<Smi> tmp181;
    TNode<JSArray> tmp182;
    TNode<Map> tmp183;
    ca_.Bind(&block14, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 127);
    TNode<BoolT> tmp184;
    USE(tmp184);
    tmp184 = CodeStubAssembler(state_).IsArraySpeciesProtectorCellInvalid();
    ca_.Branch(tmp184, &block15, &block16, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183);
  }

  if (block15.is_used()) {
    TNode<Context> tmp185;
    TNode<RawPtrT> tmp186;
    TNode<RawPtrT> tmp187;
    TNode<IntPtrT> tmp188;
    TNode<JSReceiver> tmp189;
    TNode<Number> tmp190;
    TNode<Number> tmp191;
    TNode<Smi> tmp192;
    TNode<Number> tmp193;
    TNode<Smi> tmp194;
    TNode<Smi> tmp195;
    TNode<Smi> tmp196;
    TNode<Smi> tmp197;
    TNode<Smi> tmp198;
    TNode<JSArray> tmp199;
    TNode<Map> tmp200;
    ca_.Bind(&block15, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200);
    ca_.Goto(&block1);
  }

  if (block16.is_used()) {
    TNode<Context> tmp201;
    TNode<RawPtrT> tmp202;
    TNode<RawPtrT> tmp203;
    TNode<IntPtrT> tmp204;
    TNode<JSReceiver> tmp205;
    TNode<Number> tmp206;
    TNode<Number> tmp207;
    TNode<Smi> tmp208;
    TNode<Number> tmp209;
    TNode<Smi> tmp210;
    TNode<Smi> tmp211;
    TNode<Smi> tmp212;
    TNode<Smi> tmp213;
    TNode<Smi> tmp214;
    TNode<JSArray> tmp215;
    TNode<Map> tmp216;
    ca_.Bind(&block16, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 130);
    TNode<Int32T> tmp217;
    USE(tmp217);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp217 = CodeStubAssembler(state_).EnsureArrayPushable(TNode<Map>{tmp216}, &label0);
    ca_.Goto(&block17, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp216, tmp217);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block18, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp216);
    }
  }

  if (block18.is_used()) {
    TNode<Context> tmp218;
    TNode<RawPtrT> tmp219;
    TNode<RawPtrT> tmp220;
    TNode<IntPtrT> tmp221;
    TNode<JSReceiver> tmp222;
    TNode<Number> tmp223;
    TNode<Number> tmp224;
    TNode<Smi> tmp225;
    TNode<Number> tmp226;
    TNode<Smi> tmp227;
    TNode<Smi> tmp228;
    TNode<Smi> tmp229;
    TNode<Smi> tmp230;
    TNode<Smi> tmp231;
    TNode<JSArray> tmp232;
    TNode<Map> tmp233;
    TNode<Map> tmp234;
    ca_.Bind(&block18, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234);
    ca_.Goto(&block1);
  }

  if (block17.is_used()) {
    TNode<Context> tmp235;
    TNode<RawPtrT> tmp236;
    TNode<RawPtrT> tmp237;
    TNode<IntPtrT> tmp238;
    TNode<JSReceiver> tmp239;
    TNode<Number> tmp240;
    TNode<Number> tmp241;
    TNode<Smi> tmp242;
    TNode<Number> tmp243;
    TNode<Smi> tmp244;
    TNode<Smi> tmp245;
    TNode<Smi> tmp246;
    TNode<Smi> tmp247;
    TNode<Smi> tmp248;
    TNode<JSArray> tmp249;
    TNode<Map> tmp250;
    TNode<Map> tmp251;
    TNode<Int32T> tmp252;
    ca_.Bind(&block17, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 131);
    TNode<BoolT> tmp253;
    USE(tmp253);
    tmp253 = CodeStubAssembler(state_).IsFastElementsKind(TNode<Int32T>{tmp252});
    TNode<BoolT> tmp254;
    USE(tmp254);
    tmp254 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp253});
    ca_.Branch(tmp254, &block19, &block20, tmp235, tmp236, tmp237, tmp238, tmp239, tmp240, tmp241, tmp242, tmp243, tmp244, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp252);
  }

  if (block19.is_used()) {
    TNode<Context> tmp255;
    TNode<RawPtrT> tmp256;
    TNode<RawPtrT> tmp257;
    TNode<IntPtrT> tmp258;
    TNode<JSReceiver> tmp259;
    TNode<Number> tmp260;
    TNode<Number> tmp261;
    TNode<Smi> tmp262;
    TNode<Number> tmp263;
    TNode<Smi> tmp264;
    TNode<Smi> tmp265;
    TNode<Smi> tmp266;
    TNode<Smi> tmp267;
    TNode<Smi> tmp268;
    TNode<JSArray> tmp269;
    TNode<Map> tmp270;
    TNode<Int32T> tmp271;
    ca_.Bind(&block19, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271);
    ca_.Goto(&block1);
  }

  if (block20.is_used()) {
    TNode<Context> tmp272;
    TNode<RawPtrT> tmp273;
    TNode<RawPtrT> tmp274;
    TNode<IntPtrT> tmp275;
    TNode<JSReceiver> tmp276;
    TNode<Number> tmp277;
    TNode<Number> tmp278;
    TNode<Smi> tmp279;
    TNode<Number> tmp280;
    TNode<Smi> tmp281;
    TNode<Smi> tmp282;
    TNode<Smi> tmp283;
    TNode<Smi> tmp284;
    TNode<Smi> tmp285;
    TNode<JSArray> tmp286;
    TNode<Map> tmp287;
    TNode<Int32T> tmp288;
    ca_.Bind(&block20, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 133);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 134);
    TNode<IntPtrT> tmp289;
    USE(tmp289);
    tmp289 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 2);
    ca_.Goto(&block23, tmp272, tmp273, tmp274, tmp275, tmp276, tmp277, tmp278, tmp279, tmp280, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp288, tmp289);
  }

  if (block23.is_used()) {
    TNode<Context> tmp290;
    TNode<RawPtrT> tmp291;
    TNode<RawPtrT> tmp292;
    TNode<IntPtrT> tmp293;
    TNode<JSReceiver> tmp294;
    TNode<Number> tmp295;
    TNode<Number> tmp296;
    TNode<Smi> tmp297;
    TNode<Number> tmp298;
    TNode<Smi> tmp299;
    TNode<Smi> tmp300;
    TNode<Smi> tmp301;
    TNode<Smi> tmp302;
    TNode<Smi> tmp303;
    TNode<JSArray> tmp304;
    TNode<Map> tmp305;
    TNode<Int32T> tmp306;
    TNode<Int32T> tmp307;
    TNode<IntPtrT> tmp308;
    ca_.Bind(&block23, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305, &tmp306, &tmp307, &tmp308);
    TNode<BoolT> tmp309;
    USE(tmp309);
    tmp309 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{tmp308}, TNode<IntPtrT>{tmp293});
    ca_.Branch(tmp309, &block21, &block22, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295, tmp296, tmp297, tmp298, tmp299, tmp300, tmp301, tmp302, tmp303, tmp304, tmp305, tmp306, tmp307, tmp308);
  }

  if (block21.is_used()) {
    TNode<Context> tmp310;
    TNode<RawPtrT> tmp311;
    TNode<RawPtrT> tmp312;
    TNode<IntPtrT> tmp313;
    TNode<JSReceiver> tmp314;
    TNode<Number> tmp315;
    TNode<Number> tmp316;
    TNode<Smi> tmp317;
    TNode<Number> tmp318;
    TNode<Smi> tmp319;
    TNode<Smi> tmp320;
    TNode<Smi> tmp321;
    TNode<Smi> tmp322;
    TNode<Smi> tmp323;
    TNode<JSArray> tmp324;
    TNode<Map> tmp325;
    TNode<Int32T> tmp326;
    TNode<Int32T> tmp327;
    TNode<IntPtrT> tmp328;
    ca_.Bind(&block21, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 135);
    TNode<Object> tmp329;
    USE(tmp329);
    tmp329 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp311}, TNode<RawPtrT>{tmp312}, TNode<IntPtrT>{tmp313}}, TNode<IntPtrT>{tmp328});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 136);
    TNode<BoolT> tmp330;
    USE(tmp330);
    tmp330 = CodeStubAssembler(state_).IsFastSmiElementsKind(TNode<Int32T>{tmp326});
    ca_.Branch(tmp330, &block25, &block26, tmp310, tmp311, tmp312, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322, tmp323, tmp324, tmp325, tmp326, tmp327, tmp328, tmp329);
  }

  if (block25.is_used()) {
    TNode<Context> tmp331;
    TNode<RawPtrT> tmp332;
    TNode<RawPtrT> tmp333;
    TNode<IntPtrT> tmp334;
    TNode<JSReceiver> tmp335;
    TNode<Number> tmp336;
    TNode<Number> tmp337;
    TNode<Smi> tmp338;
    TNode<Number> tmp339;
    TNode<Smi> tmp340;
    TNode<Smi> tmp341;
    TNode<Smi> tmp342;
    TNode<Smi> tmp343;
    TNode<Smi> tmp344;
    TNode<JSArray> tmp345;
    TNode<Map> tmp346;
    TNode<Int32T> tmp347;
    TNode<Int32T> tmp348;
    TNode<IntPtrT> tmp349;
    TNode<Object> tmp350;
    ca_.Bind(&block25, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343, &tmp344, &tmp345, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 137);
    TNode<BoolT> tmp351;
    USE(tmp351);
    tmp351 = CodeStubAssembler(state_).TaggedIsNotSmi(TNode<Object>{tmp350});
    ca_.Branch(tmp351, &block28, &block29, tmp331, tmp332, tmp333, tmp334, tmp335, tmp336, tmp337, tmp338, tmp339, tmp340, tmp341, tmp342, tmp343, tmp344, tmp345, tmp346, tmp347, tmp348, tmp349, tmp350);
  }

  if (block28.is_used()) {
    TNode<Context> tmp352;
    TNode<RawPtrT> tmp353;
    TNode<RawPtrT> tmp354;
    TNode<IntPtrT> tmp355;
    TNode<JSReceiver> tmp356;
    TNode<Number> tmp357;
    TNode<Number> tmp358;
    TNode<Smi> tmp359;
    TNode<Number> tmp360;
    TNode<Smi> tmp361;
    TNode<Smi> tmp362;
    TNode<Smi> tmp363;
    TNode<Smi> tmp364;
    TNode<Smi> tmp365;
    TNode<JSArray> tmp366;
    TNode<Map> tmp367;
    TNode<Int32T> tmp368;
    TNode<Int32T> tmp369;
    TNode<IntPtrT> tmp370;
    TNode<Object> tmp371;
    ca_.Bind(&block28, &tmp352, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363, &tmp364, &tmp365, &tmp366, &tmp367, &tmp368, &tmp369, &tmp370, &tmp371);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 138);
    TNode<HeapObject> tmp372;
    USE(tmp372);
    tmp372 = UnsafeCast10HeapObject_1448(state_, TNode<Context>{tmp352}, TNode<Object>{tmp371});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 139);
    TNode<BoolT> tmp373;
    USE(tmp373);
    tmp373 = CodeStubAssembler(state_).IsHeapNumber(TNode<HeapObject>{tmp372});
    ca_.Branch(tmp373, &block30, &block31, tmp352, tmp353, tmp354, tmp355, tmp356, tmp357, tmp358, tmp359, tmp360, tmp361, tmp362, tmp363, tmp364, tmp365, tmp366, tmp367, tmp368, tmp369, tmp370, tmp371, tmp372);
  }

  if (block30.is_used()) {
    TNode<Context> tmp374;
    TNode<RawPtrT> tmp375;
    TNode<RawPtrT> tmp376;
    TNode<IntPtrT> tmp377;
    TNode<JSReceiver> tmp378;
    TNode<Number> tmp379;
    TNode<Number> tmp380;
    TNode<Smi> tmp381;
    TNode<Number> tmp382;
    TNode<Smi> tmp383;
    TNode<Smi> tmp384;
    TNode<Smi> tmp385;
    TNode<Smi> tmp386;
    TNode<Smi> tmp387;
    TNode<JSArray> tmp388;
    TNode<Map> tmp389;
    TNode<Int32T> tmp390;
    TNode<Int32T> tmp391;
    TNode<IntPtrT> tmp392;
    TNode<Object> tmp393;
    TNode<HeapObject> tmp394;
    ca_.Bind(&block30, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381, &tmp382, &tmp383, &tmp384, &tmp385, &tmp386, &tmp387, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 140);
    TNode<Int32T> tmp395;
    USE(tmp395);
    tmp395 = AllowDoubleElements_219(state_, TNode<Int32T>{tmp390});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 139);
    ca_.Goto(&block33, tmp374, tmp375, tmp376, tmp377, tmp378, tmp379, tmp380, tmp381, tmp382, tmp383, tmp384, tmp385, tmp386, tmp387, tmp388, tmp389, tmp390, tmp391, tmp392, tmp393, tmp394, tmp395);
  }

  if (block31.is_used()) {
    TNode<Context> tmp396;
    TNode<RawPtrT> tmp397;
    TNode<RawPtrT> tmp398;
    TNode<IntPtrT> tmp399;
    TNode<JSReceiver> tmp400;
    TNode<Number> tmp401;
    TNode<Number> tmp402;
    TNode<Smi> tmp403;
    TNode<Number> tmp404;
    TNode<Smi> tmp405;
    TNode<Smi> tmp406;
    TNode<Smi> tmp407;
    TNode<Smi> tmp408;
    TNode<Smi> tmp409;
    TNode<JSArray> tmp410;
    TNode<Map> tmp411;
    TNode<Int32T> tmp412;
    TNode<Int32T> tmp413;
    TNode<IntPtrT> tmp414;
    TNode<Object> tmp415;
    TNode<HeapObject> tmp416;
    ca_.Bind(&block31, &tmp396, &tmp397, &tmp398, &tmp399, &tmp400, &tmp401, &tmp402, &tmp403, &tmp404, &tmp405, &tmp406, &tmp407, &tmp408, &tmp409, &tmp410, &tmp411, &tmp412, &tmp413, &tmp414, &tmp415, &tmp416);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 141);
    TNode<Int32T> tmp417;
    USE(tmp417);
    tmp417 = AllowNonNumberElements_220(state_, TNode<Int32T>{tmp412});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 139);
    ca_.Goto(&block32, tmp396, tmp397, tmp398, tmp399, tmp400, tmp401, tmp402, tmp403, tmp404, tmp405, tmp406, tmp407, tmp408, tmp409, tmp410, tmp411, tmp412, tmp413, tmp414, tmp415, tmp416, tmp417);
  }

  if (block33.is_used()) {
    TNode<Context> tmp418;
    TNode<RawPtrT> tmp419;
    TNode<RawPtrT> tmp420;
    TNode<IntPtrT> tmp421;
    TNode<JSReceiver> tmp422;
    TNode<Number> tmp423;
    TNode<Number> tmp424;
    TNode<Smi> tmp425;
    TNode<Number> tmp426;
    TNode<Smi> tmp427;
    TNode<Smi> tmp428;
    TNode<Smi> tmp429;
    TNode<Smi> tmp430;
    TNode<Smi> tmp431;
    TNode<JSArray> tmp432;
    TNode<Map> tmp433;
    TNode<Int32T> tmp434;
    TNode<Int32T> tmp435;
    TNode<IntPtrT> tmp436;
    TNode<Object> tmp437;
    TNode<HeapObject> tmp438;
    TNode<Int32T> tmp439;
    ca_.Bind(&block33, &tmp418, &tmp419, &tmp420, &tmp421, &tmp422, &tmp423, &tmp424, &tmp425, &tmp426, &tmp427, &tmp428, &tmp429, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434, &tmp435, &tmp436, &tmp437, &tmp438, &tmp439);
    ca_.Goto(&block32, tmp418, tmp419, tmp420, tmp421, tmp422, tmp423, tmp424, tmp425, tmp426, tmp427, tmp428, tmp429, tmp430, tmp431, tmp432, tmp433, tmp434, tmp435, tmp436, tmp437, tmp438, tmp439);
  }

  if (block32.is_used()) {
    TNode<Context> tmp440;
    TNode<RawPtrT> tmp441;
    TNode<RawPtrT> tmp442;
    TNode<IntPtrT> tmp443;
    TNode<JSReceiver> tmp444;
    TNode<Number> tmp445;
    TNode<Number> tmp446;
    TNode<Smi> tmp447;
    TNode<Number> tmp448;
    TNode<Smi> tmp449;
    TNode<Smi> tmp450;
    TNode<Smi> tmp451;
    TNode<Smi> tmp452;
    TNode<Smi> tmp453;
    TNode<JSArray> tmp454;
    TNode<Map> tmp455;
    TNode<Int32T> tmp456;
    TNode<Int32T> tmp457;
    TNode<IntPtrT> tmp458;
    TNode<Object> tmp459;
    TNode<HeapObject> tmp460;
    TNode<Int32T> tmp461;
    ca_.Bind(&block32, &tmp440, &tmp441, &tmp442, &tmp443, &tmp444, &tmp445, &tmp446, &tmp447, &tmp448, &tmp449, &tmp450, &tmp451, &tmp452, &tmp453, &tmp454, &tmp455, &tmp456, &tmp457, &tmp458, &tmp459, &tmp460, &tmp461);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 137);
    ca_.Goto(&block29, tmp440, tmp441, tmp442, tmp443, tmp444, tmp445, tmp446, tmp447, tmp448, tmp449, tmp450, tmp451, tmp452, tmp453, tmp454, tmp455, tmp461, tmp457, tmp458, tmp459);
  }

  if (block29.is_used()) {
    TNode<Context> tmp462;
    TNode<RawPtrT> tmp463;
    TNode<RawPtrT> tmp464;
    TNode<IntPtrT> tmp465;
    TNode<JSReceiver> tmp466;
    TNode<Number> tmp467;
    TNode<Number> tmp468;
    TNode<Smi> tmp469;
    TNode<Number> tmp470;
    TNode<Smi> tmp471;
    TNode<Smi> tmp472;
    TNode<Smi> tmp473;
    TNode<Smi> tmp474;
    TNode<Smi> tmp475;
    TNode<JSArray> tmp476;
    TNode<Map> tmp477;
    TNode<Int32T> tmp478;
    TNode<Int32T> tmp479;
    TNode<IntPtrT> tmp480;
    TNode<Object> tmp481;
    ca_.Bind(&block29, &tmp462, &tmp463, &tmp464, &tmp465, &tmp466, &tmp467, &tmp468, &tmp469, &tmp470, &tmp471, &tmp472, &tmp473, &tmp474, &tmp475, &tmp476, &tmp477, &tmp478, &tmp479, &tmp480, &tmp481);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 136);
    ca_.Goto(&block27, tmp462, tmp463, tmp464, tmp465, tmp466, tmp467, tmp468, tmp469, tmp470, tmp471, tmp472, tmp473, tmp474, tmp475, tmp476, tmp477, tmp478, tmp479, tmp480, tmp481);
  }

  if (block26.is_used()) {
    TNode<Context> tmp482;
    TNode<RawPtrT> tmp483;
    TNode<RawPtrT> tmp484;
    TNode<IntPtrT> tmp485;
    TNode<JSReceiver> tmp486;
    TNode<Number> tmp487;
    TNode<Number> tmp488;
    TNode<Smi> tmp489;
    TNode<Number> tmp490;
    TNode<Smi> tmp491;
    TNode<Smi> tmp492;
    TNode<Smi> tmp493;
    TNode<Smi> tmp494;
    TNode<Smi> tmp495;
    TNode<JSArray> tmp496;
    TNode<Map> tmp497;
    TNode<Int32T> tmp498;
    TNode<Int32T> tmp499;
    TNode<IntPtrT> tmp500;
    TNode<Object> tmp501;
    ca_.Bind(&block26, &tmp482, &tmp483, &tmp484, &tmp485, &tmp486, &tmp487, &tmp488, &tmp489, &tmp490, &tmp491, &tmp492, &tmp493, &tmp494, &tmp495, &tmp496, &tmp497, &tmp498, &tmp499, &tmp500, &tmp501);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 143);
    TNode<BoolT> tmp502;
    USE(tmp502);
    tmp502 = CodeStubAssembler(state_).IsDoubleElementsKind(TNode<Int32T>{tmp498});
    ca_.Branch(tmp502, &block34, &block35, tmp482, tmp483, tmp484, tmp485, tmp486, tmp487, tmp488, tmp489, tmp490, tmp491, tmp492, tmp493, tmp494, tmp495, tmp496, tmp497, tmp498, tmp499, tmp500, tmp501);
  }

  if (block34.is_used()) {
    TNode<Context> tmp503;
    TNode<RawPtrT> tmp504;
    TNode<RawPtrT> tmp505;
    TNode<IntPtrT> tmp506;
    TNode<JSReceiver> tmp507;
    TNode<Number> tmp508;
    TNode<Number> tmp509;
    TNode<Smi> tmp510;
    TNode<Number> tmp511;
    TNode<Smi> tmp512;
    TNode<Smi> tmp513;
    TNode<Smi> tmp514;
    TNode<Smi> tmp515;
    TNode<Smi> tmp516;
    TNode<JSArray> tmp517;
    TNode<Map> tmp518;
    TNode<Int32T> tmp519;
    TNode<Int32T> tmp520;
    TNode<IntPtrT> tmp521;
    TNode<Object> tmp522;
    ca_.Bind(&block34, &tmp503, &tmp504, &tmp505, &tmp506, &tmp507, &tmp508, &tmp509, &tmp510, &tmp511, &tmp512, &tmp513, &tmp514, &tmp515, &tmp516, &tmp517, &tmp518, &tmp519, &tmp520, &tmp521, &tmp522);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 144);
    TNode<BoolT> tmp523;
    USE(tmp523);
    tmp523 = CodeStubAssembler(state_).IsNumber(TNode<Object>{tmp522});
    TNode<BoolT> tmp524;
    USE(tmp524);
    tmp524 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp523});
    ca_.Branch(tmp524, &block36, &block37, tmp503, tmp504, tmp505, tmp506, tmp507, tmp508, tmp509, tmp510, tmp511, tmp512, tmp513, tmp514, tmp515, tmp516, tmp517, tmp518, tmp519, tmp520, tmp521, tmp522);
  }

  if (block36.is_used()) {
    TNode<Context> tmp525;
    TNode<RawPtrT> tmp526;
    TNode<RawPtrT> tmp527;
    TNode<IntPtrT> tmp528;
    TNode<JSReceiver> tmp529;
    TNode<Number> tmp530;
    TNode<Number> tmp531;
    TNode<Smi> tmp532;
    TNode<Number> tmp533;
    TNode<Smi> tmp534;
    TNode<Smi> tmp535;
    TNode<Smi> tmp536;
    TNode<Smi> tmp537;
    TNode<Smi> tmp538;
    TNode<JSArray> tmp539;
    TNode<Map> tmp540;
    TNode<Int32T> tmp541;
    TNode<Int32T> tmp542;
    TNode<IntPtrT> tmp543;
    TNode<Object> tmp544;
    ca_.Bind(&block36, &tmp525, &tmp526, &tmp527, &tmp528, &tmp529, &tmp530, &tmp531, &tmp532, &tmp533, &tmp534, &tmp535, &tmp536, &tmp537, &tmp538, &tmp539, &tmp540, &tmp541, &tmp542, &tmp543, &tmp544);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 145);
    TNode<Int32T> tmp545;
    USE(tmp545);
    tmp545 = AllowNonNumberElements_220(state_, TNode<Int32T>{tmp541});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 144);
    ca_.Goto(&block37, tmp525, tmp526, tmp527, tmp528, tmp529, tmp530, tmp531, tmp532, tmp533, tmp534, tmp535, tmp536, tmp537, tmp538, tmp539, tmp540, tmp545, tmp542, tmp543, tmp544);
  }

  if (block37.is_used()) {
    TNode<Context> tmp546;
    TNode<RawPtrT> tmp547;
    TNode<RawPtrT> tmp548;
    TNode<IntPtrT> tmp549;
    TNode<JSReceiver> tmp550;
    TNode<Number> tmp551;
    TNode<Number> tmp552;
    TNode<Smi> tmp553;
    TNode<Number> tmp554;
    TNode<Smi> tmp555;
    TNode<Smi> tmp556;
    TNode<Smi> tmp557;
    TNode<Smi> tmp558;
    TNode<Smi> tmp559;
    TNode<JSArray> tmp560;
    TNode<Map> tmp561;
    TNode<Int32T> tmp562;
    TNode<Int32T> tmp563;
    TNode<IntPtrT> tmp564;
    TNode<Object> tmp565;
    ca_.Bind(&block37, &tmp546, &tmp547, &tmp548, &tmp549, &tmp550, &tmp551, &tmp552, &tmp553, &tmp554, &tmp555, &tmp556, &tmp557, &tmp558, &tmp559, &tmp560, &tmp561, &tmp562, &tmp563, &tmp564, &tmp565);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 143);
    ca_.Goto(&block35, tmp546, tmp547, tmp548, tmp549, tmp550, tmp551, tmp552, tmp553, tmp554, tmp555, tmp556, tmp557, tmp558, tmp559, tmp560, tmp561, tmp562, tmp563, tmp564, tmp565);
  }

  if (block35.is_used()) {
    TNode<Context> tmp566;
    TNode<RawPtrT> tmp567;
    TNode<RawPtrT> tmp568;
    TNode<IntPtrT> tmp569;
    TNode<JSReceiver> tmp570;
    TNode<Number> tmp571;
    TNode<Number> tmp572;
    TNode<Smi> tmp573;
    TNode<Number> tmp574;
    TNode<Smi> tmp575;
    TNode<Smi> tmp576;
    TNode<Smi> tmp577;
    TNode<Smi> tmp578;
    TNode<Smi> tmp579;
    TNode<JSArray> tmp580;
    TNode<Map> tmp581;
    TNode<Int32T> tmp582;
    TNode<Int32T> tmp583;
    TNode<IntPtrT> tmp584;
    TNode<Object> tmp585;
    ca_.Bind(&block35, &tmp566, &tmp567, &tmp568, &tmp569, &tmp570, &tmp571, &tmp572, &tmp573, &tmp574, &tmp575, &tmp576, &tmp577, &tmp578, &tmp579, &tmp580, &tmp581, &tmp582, &tmp583, &tmp584, &tmp585);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 136);
    ca_.Goto(&block27, tmp566, tmp567, tmp568, tmp569, tmp570, tmp571, tmp572, tmp573, tmp574, tmp575, tmp576, tmp577, tmp578, tmp579, tmp580, tmp581, tmp582, tmp583, tmp584, tmp585);
  }

  if (block27.is_used()) {
    TNode<Context> tmp586;
    TNode<RawPtrT> tmp587;
    TNode<RawPtrT> tmp588;
    TNode<IntPtrT> tmp589;
    TNode<JSReceiver> tmp590;
    TNode<Number> tmp591;
    TNode<Number> tmp592;
    TNode<Smi> tmp593;
    TNode<Number> tmp594;
    TNode<Smi> tmp595;
    TNode<Smi> tmp596;
    TNode<Smi> tmp597;
    TNode<Smi> tmp598;
    TNode<Smi> tmp599;
    TNode<JSArray> tmp600;
    TNode<Map> tmp601;
    TNode<Int32T> tmp602;
    TNode<Int32T> tmp603;
    TNode<IntPtrT> tmp604;
    TNode<Object> tmp605;
    ca_.Bind(&block27, &tmp586, &tmp587, &tmp588, &tmp589, &tmp590, &tmp591, &tmp592, &tmp593, &tmp594, &tmp595, &tmp596, &tmp597, &tmp598, &tmp599, &tmp600, &tmp601, &tmp602, &tmp603, &tmp604, &tmp605);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 134);
    ca_.Goto(&block24, tmp586, tmp587, tmp588, tmp589, tmp590, tmp591, tmp592, tmp593, tmp594, tmp595, tmp596, tmp597, tmp598, tmp599, tmp600, tmp601, tmp602, tmp603, tmp604);
  }

  if (block24.is_used()) {
    TNode<Context> tmp606;
    TNode<RawPtrT> tmp607;
    TNode<RawPtrT> tmp608;
    TNode<IntPtrT> tmp609;
    TNode<JSReceiver> tmp610;
    TNode<Number> tmp611;
    TNode<Number> tmp612;
    TNode<Smi> tmp613;
    TNode<Number> tmp614;
    TNode<Smi> tmp615;
    TNode<Smi> tmp616;
    TNode<Smi> tmp617;
    TNode<Smi> tmp618;
    TNode<Smi> tmp619;
    TNode<JSArray> tmp620;
    TNode<Map> tmp621;
    TNode<Int32T> tmp622;
    TNode<Int32T> tmp623;
    TNode<IntPtrT> tmp624;
    ca_.Bind(&block24, &tmp606, &tmp607, &tmp608, &tmp609, &tmp610, &tmp611, &tmp612, &tmp613, &tmp614, &tmp615, &tmp616, &tmp617, &tmp618, &tmp619, &tmp620, &tmp621, &tmp622, &tmp623, &tmp624);
    TNode<IntPtrT> tmp625;
    USE(tmp625);
    tmp625 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<IntPtrT> tmp626;
    USE(tmp626);
    tmp626 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp624}, TNode<IntPtrT>{tmp625});
    ca_.Goto(&block23, tmp606, tmp607, tmp608, tmp609, tmp610, tmp611, tmp612, tmp613, tmp614, tmp615, tmp616, tmp617, tmp618, tmp619, tmp620, tmp621, tmp622, tmp623, tmp626);
  }

  if (block22.is_used()) {
    TNode<Context> tmp627;
    TNode<RawPtrT> tmp628;
    TNode<RawPtrT> tmp629;
    TNode<IntPtrT> tmp630;
    TNode<JSReceiver> tmp631;
    TNode<Number> tmp632;
    TNode<Number> tmp633;
    TNode<Smi> tmp634;
    TNode<Number> tmp635;
    TNode<Smi> tmp636;
    TNode<Smi> tmp637;
    TNode<Smi> tmp638;
    TNode<Smi> tmp639;
    TNode<Smi> tmp640;
    TNode<JSArray> tmp641;
    TNode<Map> tmp642;
    TNode<Int32T> tmp643;
    TNode<Int32T> tmp644;
    TNode<IntPtrT> tmp645;
    ca_.Bind(&block22, &tmp627, &tmp628, &tmp629, &tmp630, &tmp631, &tmp632, &tmp633, &tmp634, &tmp635, &tmp636, &tmp637, &tmp638, &tmp639, &tmp640, &tmp641, &tmp642, &tmp643, &tmp644, &tmp645);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 150);
    TNode<BoolT> tmp646;
    USE(tmp646);
    tmp646 = ElementsKindNotEqual_72(state_, TNode<Int32T>{tmp643}, TNode<Int32T>{tmp644});
    ca_.Branch(tmp646, &block38, &block39, tmp627, tmp628, tmp629, tmp630, tmp631, tmp632, tmp633, tmp634, tmp635, tmp636, tmp637, tmp638, tmp639, tmp640, tmp641, tmp642, tmp643, tmp644);
  }

  if (block38.is_used()) {
    TNode<Context> tmp647;
    TNode<RawPtrT> tmp648;
    TNode<RawPtrT> tmp649;
    TNode<IntPtrT> tmp650;
    TNode<JSReceiver> tmp651;
    TNode<Number> tmp652;
    TNode<Number> tmp653;
    TNode<Smi> tmp654;
    TNode<Number> tmp655;
    TNode<Smi> tmp656;
    TNode<Smi> tmp657;
    TNode<Smi> tmp658;
    TNode<Smi> tmp659;
    TNode<Smi> tmp660;
    TNode<JSArray> tmp661;
    TNode<Map> tmp662;
    TNode<Int32T> tmp663;
    TNode<Int32T> tmp664;
    ca_.Bind(&block38, &tmp647, &tmp648, &tmp649, &tmp650, &tmp651, &tmp652, &tmp653, &tmp654, &tmp655, &tmp656, &tmp657, &tmp658, &tmp659, &tmp660, &tmp661, &tmp662, &tmp663, &tmp664);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 151);
    TNode<Int32T> tmp665;
    USE(tmp665);
    tmp665 = Convert7ATint3214ATElementsKind_174(state_, TNode<Int32T>{tmp663});
    TNode<Smi> tmp666;
    USE(tmp666);
    tmp666 = Convert5ATSmi7ATint32_178(state_, TNode<Int32T>{tmp665});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 152);
    CodeStubAssembler(state_).CallRuntime(Runtime::kTransitionElementsKindWithKind, tmp647, tmp661, tmp666);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 150);
    ca_.Goto(&block39, tmp647, tmp648, tmp649, tmp650, tmp651, tmp652, tmp653, tmp654, tmp655, tmp656, tmp657, tmp658, tmp659, tmp660, tmp661, tmp662, tmp663, tmp664);
  }

  if (block39.is_used()) {
    TNode<Context> tmp668;
    TNode<RawPtrT> tmp669;
    TNode<RawPtrT> tmp670;
    TNode<IntPtrT> tmp671;
    TNode<JSReceiver> tmp672;
    TNode<Number> tmp673;
    TNode<Number> tmp674;
    TNode<Smi> tmp675;
    TNode<Number> tmp676;
    TNode<Smi> tmp677;
    TNode<Smi> tmp678;
    TNode<Smi> tmp679;
    TNode<Smi> tmp680;
    TNode<Smi> tmp681;
    TNode<JSArray> tmp682;
    TNode<Map> tmp683;
    TNode<Int32T> tmp684;
    TNode<Int32T> tmp685;
    ca_.Bind(&block39, &tmp668, &tmp669, &tmp670, &tmp671, &tmp672, &tmp673, &tmp674, &tmp675, &tmp676, &tmp677, &tmp678, &tmp679, &tmp680, &tmp681, &tmp682, &tmp683, &tmp684, &tmp685);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 156);
    TNode<IntPtrT> tmp686 = ca_.IntPtrConstant(JSArray::kLengthOffset);
    USE(tmp686);
    TNode<Number>tmp687 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp682, tmp686});
    TNode<Smi> tmp688;
    USE(tmp688);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp688 = Cast5ATSmi_83(state_, TNode<Object>{tmp687}, &label0);
    ca_.Goto(&block40, tmp668, tmp669, tmp670, tmp671, tmp672, tmp673, tmp674, tmp675, tmp676, tmp677, tmp678, tmp679, tmp680, tmp681, tmp682, tmp683, tmp684, tmp685, tmp687, tmp688);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block41, tmp668, tmp669, tmp670, tmp671, tmp672, tmp673, tmp674, tmp675, tmp676, tmp677, tmp678, tmp679, tmp680, tmp681, tmp682, tmp683, tmp684, tmp685, tmp687);
    }
  }

  if (block41.is_used()) {
    TNode<Context> tmp689;
    TNode<RawPtrT> tmp690;
    TNode<RawPtrT> tmp691;
    TNode<IntPtrT> tmp692;
    TNode<JSReceiver> tmp693;
    TNode<Number> tmp694;
    TNode<Number> tmp695;
    TNode<Smi> tmp696;
    TNode<Number> tmp697;
    TNode<Smi> tmp698;
    TNode<Smi> tmp699;
    TNode<Smi> tmp700;
    TNode<Smi> tmp701;
    TNode<Smi> tmp702;
    TNode<JSArray> tmp703;
    TNode<Map> tmp704;
    TNode<Int32T> tmp705;
    TNode<Int32T> tmp706;
    TNode<Number> tmp707;
    ca_.Bind(&block41, &tmp689, &tmp690, &tmp691, &tmp692, &tmp693, &tmp694, &tmp695, &tmp696, &tmp697, &tmp698, &tmp699, &tmp700, &tmp701, &tmp702, &tmp703, &tmp704, &tmp705, &tmp706, &tmp707);
    ca_.Goto(&block1);
  }

  if (block40.is_used()) {
    TNode<Context> tmp708;
    TNode<RawPtrT> tmp709;
    TNode<RawPtrT> tmp710;
    TNode<IntPtrT> tmp711;
    TNode<JSReceiver> tmp712;
    TNode<Number> tmp713;
    TNode<Number> tmp714;
    TNode<Smi> tmp715;
    TNode<Number> tmp716;
    TNode<Smi> tmp717;
    TNode<Smi> tmp718;
    TNode<Smi> tmp719;
    TNode<Smi> tmp720;
    TNode<Smi> tmp721;
    TNode<JSArray> tmp722;
    TNode<Map> tmp723;
    TNode<Int32T> tmp724;
    TNode<Int32T> tmp725;
    TNode<Number> tmp726;
    TNode<Smi> tmp727;
    ca_.Bind(&block40, &tmp708, &tmp709, &tmp710, &tmp711, &tmp712, &tmp713, &tmp714, &tmp715, &tmp716, &tmp717, &tmp718, &tmp719, &tmp720, &tmp721, &tmp722, &tmp723, &tmp724, &tmp725, &tmp726, &tmp727);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 157);
    TNode<BoolT> tmp728;
    USE(tmp728);
    tmp728 = CodeStubAssembler(state_).SmiNotEqual(TNode<Smi>{tmp717}, TNode<Smi>{tmp727});
    ca_.Branch(tmp728, &block42, &block43, tmp708, tmp709, tmp710, tmp711, tmp712, tmp713, tmp714, tmp715, tmp716, tmp717, tmp718, tmp719, tmp720, tmp721, tmp722, tmp723, tmp724, tmp725, tmp727);
  }

  if (block42.is_used()) {
    TNode<Context> tmp729;
    TNode<RawPtrT> tmp730;
    TNode<RawPtrT> tmp731;
    TNode<IntPtrT> tmp732;
    TNode<JSReceiver> tmp733;
    TNode<Number> tmp734;
    TNode<Number> tmp735;
    TNode<Smi> tmp736;
    TNode<Number> tmp737;
    TNode<Smi> tmp738;
    TNode<Smi> tmp739;
    TNode<Smi> tmp740;
    TNode<Smi> tmp741;
    TNode<Smi> tmp742;
    TNode<JSArray> tmp743;
    TNode<Map> tmp744;
    TNode<Int32T> tmp745;
    TNode<Int32T> tmp746;
    TNode<Smi> tmp747;
    ca_.Bind(&block42, &tmp729, &tmp730, &tmp731, &tmp732, &tmp733, &tmp734, &tmp735, &tmp736, &tmp737, &tmp738, &tmp739, &tmp740, &tmp741, &tmp742, &tmp743, &tmp744, &tmp745, &tmp746, &tmp747);
    ca_.Goto(&block1);
  }

  if (block43.is_used()) {
    TNode<Context> tmp748;
    TNode<RawPtrT> tmp749;
    TNode<RawPtrT> tmp750;
    TNode<IntPtrT> tmp751;
    TNode<JSReceiver> tmp752;
    TNode<Number> tmp753;
    TNode<Number> tmp754;
    TNode<Smi> tmp755;
    TNode<Number> tmp756;
    TNode<Smi> tmp757;
    TNode<Smi> tmp758;
    TNode<Smi> tmp759;
    TNode<Smi> tmp760;
    TNode<Smi> tmp761;
    TNode<JSArray> tmp762;
    TNode<Map> tmp763;
    TNode<Int32T> tmp764;
    TNode<Int32T> tmp765;
    TNode<Smi> tmp766;
    ca_.Bind(&block43, &tmp748, &tmp749, &tmp750, &tmp751, &tmp752, &tmp753, &tmp754, &tmp755, &tmp756, &tmp757, &tmp758, &tmp759, &tmp760, &tmp761, &tmp762, &tmp763, &tmp764, &tmp765, &tmp766);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 160);
    TNode<JSArray> tmp767;
    tmp767 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kExtractFastJSArray, tmp748, tmp762, tmp758, tmp759));
    USE(tmp767);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 159);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 162);
    TNode<Smi> tmp768;
    USE(tmp768);
    tmp768 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<BoolT> tmp769;
    USE(tmp769);
    tmp769 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp761}, TNode<Smi>{tmp768});
    ca_.Branch(tmp769, &block44, &block45, tmp748, tmp749, tmp750, tmp751, tmp752, tmp753, tmp754, tmp755, tmp756, tmp757, tmp758, tmp759, tmp760, tmp761, tmp762, tmp763, tmp764, tmp765, tmp766, tmp767);
  }

  if (block44.is_used()) {
    TNode<Context> tmp770;
    TNode<RawPtrT> tmp771;
    TNode<RawPtrT> tmp772;
    TNode<IntPtrT> tmp773;
    TNode<JSReceiver> tmp774;
    TNode<Number> tmp775;
    TNode<Number> tmp776;
    TNode<Smi> tmp777;
    TNode<Number> tmp778;
    TNode<Smi> tmp779;
    TNode<Smi> tmp780;
    TNode<Smi> tmp781;
    TNode<Smi> tmp782;
    TNode<Smi> tmp783;
    TNode<JSArray> tmp784;
    TNode<Map> tmp785;
    TNode<Int32T> tmp786;
    TNode<Int32T> tmp787;
    TNode<Smi> tmp788;
    TNode<JSArray> tmp789;
    ca_.Bind(&block44, &tmp770, &tmp771, &tmp772, &tmp773, &tmp774, &tmp775, &tmp776, &tmp777, &tmp778, &tmp779, &tmp780, &tmp781, &tmp782, &tmp783, &tmp784, &tmp785, &tmp786, &tmp787, &tmp788, &tmp789);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 163);
    TNode<IntPtrT> tmp790 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp790);
    TNode<FixedArray> tmp791;
    USE(tmp791);
    tmp791 = kEmptyFixedArray_214(state_);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp784, tmp790}, tmp791);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 164);
    TNode<IntPtrT> tmp792 = ca_.IntPtrConstant(JSArray::kLengthOffset);
    USE(tmp792);
    TNode<Number> tmp793;
    USE(tmp793);
    tmp793 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 0);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp784, tmp792}, tmp793);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 165);
    ca_.Goto(&block2, tmp770, tmp771, tmp772, tmp773, tmp774, tmp775, tmp776, tmp777, tmp778, tmp789);
  }

  if (block45.is_used()) {
    TNode<Context> tmp794;
    TNode<RawPtrT> tmp795;
    TNode<RawPtrT> tmp796;
    TNode<IntPtrT> tmp797;
    TNode<JSReceiver> tmp798;
    TNode<Number> tmp799;
    TNode<Number> tmp800;
    TNode<Smi> tmp801;
    TNode<Number> tmp802;
    TNode<Smi> tmp803;
    TNode<Smi> tmp804;
    TNode<Smi> tmp805;
    TNode<Smi> tmp806;
    TNode<Smi> tmp807;
    TNode<JSArray> tmp808;
    TNode<Map> tmp809;
    TNode<Int32T> tmp810;
    TNode<Int32T> tmp811;
    TNode<Smi> tmp812;
    TNode<JSArray> tmp813;
    ca_.Bind(&block45, &tmp794, &tmp795, &tmp796, &tmp797, &tmp798, &tmp799, &tmp800, &tmp801, &tmp802, &tmp803, &tmp804, &tmp805, &tmp806, &tmp807, &tmp808, &tmp809, &tmp810, &tmp811, &tmp812, &tmp813);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 168);
    TNode<BoolT> tmp814;
    USE(tmp814);
    tmp814 = CodeStubAssembler(state_).IsFastSmiOrTaggedElementsKind(TNode<Int32T>{tmp810});
    ca_.Branch(tmp814, &block46, &block47, tmp794, tmp795, tmp796, tmp797, tmp798, tmp799, tmp800, tmp801, tmp802, tmp803, tmp804, tmp805, tmp806, tmp807, tmp808, tmp809, tmp810, tmp811, tmp812, tmp813);
  }

  if (block46.is_used()) {
    TNode<Context> tmp815;
    TNode<RawPtrT> tmp816;
    TNode<RawPtrT> tmp817;
    TNode<IntPtrT> tmp818;
    TNode<JSReceiver> tmp819;
    TNode<Number> tmp820;
    TNode<Number> tmp821;
    TNode<Smi> tmp822;
    TNode<Number> tmp823;
    TNode<Smi> tmp824;
    TNode<Smi> tmp825;
    TNode<Smi> tmp826;
    TNode<Smi> tmp827;
    TNode<Smi> tmp828;
    TNode<JSArray> tmp829;
    TNode<Map> tmp830;
    TNode<Int32T> tmp831;
    TNode<Int32T> tmp832;
    TNode<Smi> tmp833;
    TNode<JSArray> tmp834;
    ca_.Bind(&block46, &tmp815, &tmp816, &tmp817, &tmp818, &tmp819, &tmp820, &tmp821, &tmp822, &tmp823, &tmp824, &tmp825, &tmp826, &tmp827, &tmp828, &tmp829, &tmp830, &tmp831, &tmp832, &tmp833, &tmp834);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 170);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 171);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 169);
    FastSplice10FixedArray90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol_1467(state_, TNode<Context>{tmp815}, TorqueStructArguments{TNode<RawPtrT>{tmp816}, TNode<RawPtrT>{tmp817}, TNode<IntPtrT>{tmp818}}, TNode<JSArray>{tmp829}, TNode<Smi>{tmp833}, TNode<Smi>{tmp828}, TNode<Smi>{tmp825}, TNode<Smi>{tmp822}, TNode<Smi>{tmp826});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 168);
    ca_.Goto(&block48, tmp815, tmp816, tmp817, tmp818, tmp819, tmp820, tmp821, tmp822, tmp823, tmp824, tmp825, tmp826, tmp827, tmp828, tmp829, tmp830, tmp831, tmp832, tmp833, tmp834);
  }

  if (block47.is_used()) {
    TNode<Context> tmp835;
    TNode<RawPtrT> tmp836;
    TNode<RawPtrT> tmp837;
    TNode<IntPtrT> tmp838;
    TNode<JSReceiver> tmp839;
    TNode<Number> tmp840;
    TNode<Number> tmp841;
    TNode<Smi> tmp842;
    TNode<Number> tmp843;
    TNode<Smi> tmp844;
    TNode<Smi> tmp845;
    TNode<Smi> tmp846;
    TNode<Smi> tmp847;
    TNode<Smi> tmp848;
    TNode<JSArray> tmp849;
    TNode<Map> tmp850;
    TNode<Int32T> tmp851;
    TNode<Int32T> tmp852;
    TNode<Smi> tmp853;
    TNode<JSArray> tmp854;
    ca_.Bind(&block47, &tmp835, &tmp836, &tmp837, &tmp838, &tmp839, &tmp840, &tmp841, &tmp842, &tmp843, &tmp844, &tmp845, &tmp846, &tmp847, &tmp848, &tmp849, &tmp850, &tmp851, &tmp852, &tmp853, &tmp854);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 174);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 175);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 173);
    FastSplice16FixedDoubleArray20UT5ATSmi10HeapNumber_1468(state_, TNode<Context>{tmp835}, TorqueStructArguments{TNode<RawPtrT>{tmp836}, TNode<RawPtrT>{tmp837}, TNode<IntPtrT>{tmp838}}, TNode<JSArray>{tmp849}, TNode<Smi>{tmp853}, TNode<Smi>{tmp848}, TNode<Smi>{tmp845}, TNode<Smi>{tmp842}, TNode<Smi>{tmp846});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 168);
    ca_.Goto(&block48, tmp835, tmp836, tmp837, tmp838, tmp839, tmp840, tmp841, tmp842, tmp843, tmp844, tmp845, tmp846, tmp847, tmp848, tmp849, tmp850, tmp851, tmp852, tmp853, tmp854);
  }

  if (block48.is_used()) {
    TNode<Context> tmp855;
    TNode<RawPtrT> tmp856;
    TNode<RawPtrT> tmp857;
    TNode<IntPtrT> tmp858;
    TNode<JSReceiver> tmp859;
    TNode<Number> tmp860;
    TNode<Number> tmp861;
    TNode<Smi> tmp862;
    TNode<Number> tmp863;
    TNode<Smi> tmp864;
    TNode<Smi> tmp865;
    TNode<Smi> tmp866;
    TNode<Smi> tmp867;
    TNode<Smi> tmp868;
    TNode<JSArray> tmp869;
    TNode<Map> tmp870;
    TNode<Int32T> tmp871;
    TNode<Int32T> tmp872;
    TNode<Smi> tmp873;
    TNode<JSArray> tmp874;
    ca_.Bind(&block48, &tmp855, &tmp856, &tmp857, &tmp858, &tmp859, &tmp860, &tmp861, &tmp862, &tmp863, &tmp864, &tmp865, &tmp866, &tmp867, &tmp868, &tmp869, &tmp870, &tmp871, &tmp872, &tmp873, &tmp874);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 178);
    ca_.Goto(&block2, tmp855, tmp856, tmp857, tmp858, tmp859, tmp860, tmp861, tmp862, tmp863, tmp874);
  }

  if (block2.is_used()) {
    TNode<Context> tmp875;
    TNode<RawPtrT> tmp876;
    TNode<RawPtrT> tmp877;
    TNode<IntPtrT> tmp878;
    TNode<JSReceiver> tmp879;
    TNode<Number> tmp880;
    TNode<Number> tmp881;
    TNode<Smi> tmp882;
    TNode<Number> tmp883;
    TNode<Object> tmp884;
    ca_.Bind(&block2, &tmp875, &tmp876, &tmp877, &tmp878, &tmp879, &tmp880, &tmp881, &tmp882, &tmp883, &tmp884);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 109);
    ca_.Goto(&block49, tmp875, tmp876, tmp877, tmp878, tmp879, tmp880, tmp881, tmp882, tmp883, tmp884);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Bailout);
  }

    TNode<Context> tmp885;
    TNode<RawPtrT> tmp886;
    TNode<RawPtrT> tmp887;
    TNode<IntPtrT> tmp888;
    TNode<JSReceiver> tmp889;
    TNode<Number> tmp890;
    TNode<Number> tmp891;
    TNode<Smi> tmp892;
    TNode<Number> tmp893;
    TNode<Object> tmp894;
    ca_.Bind(&block49, &tmp885, &tmp886, &tmp887, &tmp888, &tmp889, &tmp890, &tmp891, &tmp892, &tmp893, &tmp894);
  return TNode<Object>{tmp894};
}

TNode<Object> FillDeletedElementsArray_45(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Number> p_actualStart, TNode<Number> p_actualDeleteCount, TNode<JSReceiver> p_a) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, JSReceiver> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, JSReceiver, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, JSReceiver, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, JSReceiver, Number, Number, Oddball> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, JSReceiver, Number, Number, Oddball> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, JSReceiver, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, JSReceiver, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, JSReceiver, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o, p_actualStart, p_actualDeleteCount, p_a);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSReceiver> tmp1;
    TNode<Number> tmp2;
    TNode<Number> tmp3;
    TNode<JSReceiver> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 185);
    TNode<Number> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 188);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5);
  }

  if (block4.is_used()) {
    TNode<Context> tmp6;
    TNode<JSReceiver> tmp7;
    TNode<Number> tmp8;
    TNode<Number> tmp9;
    TNode<JSReceiver> tmp10;
    TNode<Number> tmp11;
    ca_.Bind(&block4, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = NumberIsLessThan_75(state_, TNode<Number>{tmp11}, TNode<Number>{tmp9});
    ca_.Branch(tmp12, &block2, &block3, tmp6, tmp7, tmp8, tmp9, tmp10, tmp11);
  }

  if (block2.is_used()) {
    TNode<Context> tmp13;
    TNode<JSReceiver> tmp14;
    TNode<Number> tmp15;
    TNode<Number> tmp16;
    TNode<JSReceiver> tmp17;
    TNode<Number> tmp18;
    ca_.Bind(&block2, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 190);
    TNode<Number> tmp19;
    USE(tmp19);
    tmp19 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{tmp15}, TNode<Number>{tmp18});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 193);
    TNode<Oddball> tmp20;
    tmp20 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kHasProperty, tmp13, tmp14, tmp19));
    USE(tmp20);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 196);
    TNode<Oddball> tmp21;
    USE(tmp21);
    tmp21 = True_65(state_);
    TNode<BoolT> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp20}, TNode<HeapObject>{tmp21});
    ca_.Branch(tmp22, &block5, &block6, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20);
  }

  if (block5.is_used()) {
    TNode<Context> tmp23;
    TNode<JSReceiver> tmp24;
    TNode<Number> tmp25;
    TNode<Number> tmp26;
    TNode<JSReceiver> tmp27;
    TNode<Number> tmp28;
    TNode<Number> tmp29;
    TNode<Oddball> tmp30;
    ca_.Bind(&block5, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 198);
    TNode<Object> tmp31;
    USE(tmp31);
    tmp31 = CodeStubAssembler(state_).GetProperty(TNode<Context>{tmp23}, TNode<Object>{tmp24}, TNode<Object>{tmp29});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 201);
    TNode<Object> tmp32;
    tmp32 = CodeStubAssembler(state_).CallBuiltin(Builtins::kFastCreateDataProperty, tmp23, tmp27, tmp28, tmp31);
    USE(tmp32);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 196);
    ca_.Goto(&block6, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30);
  }

  if (block6.is_used()) {
    TNode<Context> tmp33;
    TNode<JSReceiver> tmp34;
    TNode<Number> tmp35;
    TNode<Number> tmp36;
    TNode<JSReceiver> tmp37;
    TNode<Number> tmp38;
    TNode<Number> tmp39;
    TNode<Oddball> tmp40;
    ca_.Bind(&block6, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 205);
    TNode<Number> tmp41;
    USE(tmp41);
    tmp41 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 1);
    TNode<Number> tmp42;
    USE(tmp42);
    tmp42 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{tmp38}, TNode<Number>{tmp41});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 188);
    ca_.Goto(&block4, tmp33, tmp34, tmp35, tmp36, tmp37, tmp42);
  }

  if (block3.is_used()) {
    TNode<Context> tmp43;
    TNode<JSReceiver> tmp44;
    TNode<Number> tmp45;
    TNode<Number> tmp46;
    TNode<JSReceiver> tmp47;
    TNode<Number> tmp48;
    ca_.Bind(&block3, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 208);
    TNode<String> tmp49;
    USE(tmp49);
    tmp49 = kLengthString_68(state_);
    CodeStubAssembler(state_).CallBuiltin(Builtins::kSetProperty, tmp43, tmp47, tmp49, tmp46);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 209);
    ca_.Goto(&block1, tmp43, tmp44, tmp45, tmp46, tmp47, tmp47);
  }

  if (block1.is_used()) {
    TNode<Context> tmp51;
    TNode<JSReceiver> tmp52;
    TNode<Number> tmp53;
    TNode<Number> tmp54;
    TNode<JSReceiver> tmp55;
    TNode<Object> tmp56;
    ca_.Bind(&block1, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 181);
    ca_.Goto(&block7, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56);
  }

    TNode<Context> tmp57;
    TNode<JSReceiver> tmp58;
    TNode<Number> tmp59;
    TNode<Number> tmp60;
    TNode<JSReceiver> tmp61;
    TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
  return TNode<Object>{tmp62};
}

void HandleForwardCase_46(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Number> p_len, TNode<Number> p_itemCount, TNode<Number> p_actualStart, TNode<Number> p_actualDeleteCount) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number, Number, Number, Number, Oddball> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number, Number, Number, Number, Oddball> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number, Number, Number, Number, Oddball> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number, Number> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number, Number> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o, p_len, p_itemCount, p_actualStart, p_actualDeleteCount);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSReceiver> tmp1;
    TNode<Number> tmp2;
    TNode<Number> tmp3;
    TNode<Number> tmp4;
    TNode<Number> tmp5;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 219);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 222);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp4);
  }

  if (block4.is_used()) {
    TNode<Context> tmp6;
    TNode<JSReceiver> tmp7;
    TNode<Number> tmp8;
    TNode<Number> tmp9;
    TNode<Number> tmp10;
    TNode<Number> tmp11;
    TNode<Number> tmp12;
    ca_.Bind(&block4, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12);
    TNode<Number> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).NumberSub(TNode<Number>{tmp8}, TNode<Number>{tmp11});
    TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = NumberIsLessThan_75(state_, TNode<Number>{tmp12}, TNode<Number>{tmp13});
    ca_.Branch(tmp14, &block2, &block3, tmp6, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12);
  }

  if (block2.is_used()) {
    TNode<Context> tmp15;
    TNode<JSReceiver> tmp16;
    TNode<Number> tmp17;
    TNode<Number> tmp18;
    TNode<Number> tmp19;
    TNode<Number> tmp20;
    TNode<Number> tmp21;
    ca_.Bind(&block2, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 224);
    TNode<Number> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{tmp21}, TNode<Number>{tmp20});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 226);
    TNode<Number> tmp23;
    USE(tmp23);
    tmp23 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{tmp21}, TNode<Number>{tmp18});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 229);
    TNode<Oddball> tmp24;
    tmp24 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kHasProperty, tmp15, tmp16, tmp22));
    USE(tmp24);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 232);
    TNode<Oddball> tmp25;
    USE(tmp25);
    tmp25 = True_65(state_);
    TNode<BoolT> tmp26;
    USE(tmp26);
    tmp26 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp24}, TNode<HeapObject>{tmp25});
    ca_.Branch(tmp26, &block5, &block6, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24);
  }

  if (block5.is_used()) {
    TNode<Context> tmp27;
    TNode<JSReceiver> tmp28;
    TNode<Number> tmp29;
    TNode<Number> tmp30;
    TNode<Number> tmp31;
    TNode<Number> tmp32;
    TNode<Number> tmp33;
    TNode<Number> tmp34;
    TNode<Number> tmp35;
    TNode<Oddball> tmp36;
    ca_.Bind(&block5, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 234);
    TNode<Object> tmp37;
    USE(tmp37);
    tmp37 = CodeStubAssembler(state_).GetProperty(TNode<Context>{tmp27}, TNode<Object>{tmp28}, TNode<Object>{tmp34});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 237);
    CodeStubAssembler(state_).CallBuiltin(Builtins::kSetProperty, tmp27, tmp28, tmp35, tmp37);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 232);
    ca_.Goto(&block7, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36);
  }

  if (block6.is_used()) {
    TNode<Context> tmp39;
    TNode<JSReceiver> tmp40;
    TNode<Number> tmp41;
    TNode<Number> tmp42;
    TNode<Number> tmp43;
    TNode<Number> tmp44;
    TNode<Number> tmp45;
    TNode<Number> tmp46;
    TNode<Number> tmp47;
    TNode<Oddball> tmp48;
    ca_.Bind(&block6, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 242);
    TNode<Smi> tmp49;
    USE(tmp49);
    tmp49 = FromConstexpr14ATLanguageMode24ATconstexpr_LanguageMode_168(state_, LanguageMode::kStrict);
    TNode<Oddball> tmp50;
    tmp50 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kDeleteProperty, tmp39, tmp40, tmp47, tmp49));
    USE(tmp50);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 232);
    ca_.Goto(&block7, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block7.is_used()) {
    TNode<Context> tmp51;
    TNode<JSReceiver> tmp52;
    TNode<Number> tmp53;
    TNode<Number> tmp54;
    TNode<Number> tmp55;
    TNode<Number> tmp56;
    TNode<Number> tmp57;
    TNode<Number> tmp58;
    TNode<Number> tmp59;
    TNode<Oddball> tmp60;
    ca_.Bind(&block7, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 245);
    TNode<Number> tmp61;
    USE(tmp61);
    tmp61 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 1);
    TNode<Number> tmp62;
    USE(tmp62);
    tmp62 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{tmp57}, TNode<Number>{tmp61});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 222);
    ca_.Goto(&block4, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp62);
  }

  if (block3.is_used()) {
    TNode<Context> tmp63;
    TNode<JSReceiver> tmp64;
    TNode<Number> tmp65;
    TNode<Number> tmp66;
    TNode<Number> tmp67;
    TNode<Number> tmp68;
    TNode<Number> tmp69;
    ca_.Bind(&block3, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 249);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 252);
    ca_.Goto(&block10, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp65);
  }

  if (block10.is_used()) {
    TNode<Context> tmp70;
    TNode<JSReceiver> tmp71;
    TNode<Number> tmp72;
    TNode<Number> tmp73;
    TNode<Number> tmp74;
    TNode<Number> tmp75;
    TNode<Number> tmp76;
    ca_.Bind(&block10, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76);
    TNode<Number> tmp77;
    USE(tmp77);
    tmp77 = CodeStubAssembler(state_).NumberSub(TNode<Number>{tmp72}, TNode<Number>{tmp75});
    TNode<Number> tmp78;
    USE(tmp78);
    tmp78 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{tmp77}, TNode<Number>{tmp73});
    TNode<BoolT> tmp79;
    USE(tmp79);
    tmp79 = NumberIsGreaterThan_77(state_, TNode<Number>{tmp76}, TNode<Number>{tmp78});
    ca_.Branch(tmp79, &block8, &block9, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76);
  }

  if (block8.is_used()) {
    TNode<Context> tmp80;
    TNode<JSReceiver> tmp81;
    TNode<Number> tmp82;
    TNode<Number> tmp83;
    TNode<Number> tmp84;
    TNode<Number> tmp85;
    TNode<Number> tmp86;
    ca_.Bind(&block8, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 254);
    TNode<Number> tmp87;
    USE(tmp87);
    tmp87 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 1);
    TNode<Number> tmp88;
    USE(tmp88);
    tmp88 = CodeStubAssembler(state_).NumberSub(TNode<Number>{tmp86}, TNode<Number>{tmp87});
    TNode<Smi> tmp89;
    USE(tmp89);
    tmp89 = FromConstexpr14ATLanguageMode24ATconstexpr_LanguageMode_168(state_, LanguageMode::kStrict);
    TNode<Oddball> tmp90;
    tmp90 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kDeleteProperty, tmp80, tmp81, tmp88, tmp89));
    USE(tmp90);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 256);
    TNode<Number> tmp91;
    USE(tmp91);
    tmp91 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 1);
    TNode<Number> tmp92;
    USE(tmp92);
    tmp92 = CodeStubAssembler(state_).NumberSub(TNode<Number>{tmp86}, TNode<Number>{tmp91});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 252);
    ca_.Goto(&block10, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp92);
  }

  if (block9.is_used()) {
    TNode<Context> tmp93;
    TNode<JSReceiver> tmp94;
    TNode<Number> tmp95;
    TNode<Number> tmp96;
    TNode<Number> tmp97;
    TNode<Number> tmp98;
    TNode<Number> tmp99;
    ca_.Bind(&block9, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 216);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 214);
    ca_.Goto(&block1, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98);
  }

  if (block1.is_used()) {
    TNode<Context> tmp100;
    TNode<JSReceiver> tmp101;
    TNode<Number> tmp102;
    TNode<Number> tmp103;
    TNode<Number> tmp104;
    TNode<Number> tmp105;
    ca_.Bind(&block1, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105);
    ca_.Goto(&block11, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105);
  }

    TNode<Context> tmp106;
    TNode<JSReceiver> tmp107;
    TNode<Number> tmp108;
    TNode<Number> tmp109;
    TNode<Number> tmp110;
    TNode<Number> tmp111;
    ca_.Bind(&block11, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111);
}

void HandleBackwardCase_47(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Number> p_len, TNode<Number> p_itemCount, TNode<Number> p_actualStart, TNode<Number> p_actualDeleteCount) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number, Number, Number, Number, Oddball> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number, Number, Number, Number, Oddball> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number, Number, Number, Number, Oddball> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, Number, Number, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o, p_len, p_itemCount, p_actualStart, p_actualDeleteCount);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSReceiver> tmp1;
    TNode<Number> tmp2;
    TNode<Number> tmp3;
    TNode<Number> tmp4;
    TNode<Number> tmp5;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 267);
    TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).NumberSub(TNode<Number>{tmp2}, TNode<Number>{tmp5});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 270);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6);
  }

  if (block4.is_used()) {
    TNode<Context> tmp7;
    TNode<JSReceiver> tmp8;
    TNode<Number> tmp9;
    TNode<Number> tmp10;
    TNode<Number> tmp11;
    TNode<Number> tmp12;
    TNode<Number> tmp13;
    ca_.Bind(&block4, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = NumberIsGreaterThan_77(state_, TNode<Number>{tmp13}, TNode<Number>{tmp11});
    ca_.Branch(tmp14, &block2, &block3, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13);
  }

  if (block2.is_used()) {
    TNode<Context> tmp15;
    TNode<JSReceiver> tmp16;
    TNode<Number> tmp17;
    TNode<Number> tmp18;
    TNode<Number> tmp19;
    TNode<Number> tmp20;
    TNode<Number> tmp21;
    ca_.Bind(&block2, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 272);
    TNode<Number> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{tmp21}, TNode<Number>{tmp20});
    TNode<Number> tmp23;
    USE(tmp23);
    tmp23 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 1);
    TNode<Number> tmp24;
    USE(tmp24);
    tmp24 = CodeStubAssembler(state_).NumberSub(TNode<Number>{tmp22}, TNode<Number>{tmp23});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 275);
    TNode<Number> tmp25;
    USE(tmp25);
    tmp25 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{tmp21}, TNode<Number>{tmp18});
    TNode<Number> tmp26;
    USE(tmp26);
    tmp26 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 1);
    TNode<Number> tmp27;
    USE(tmp27);
    tmp27 = CodeStubAssembler(state_).NumberSub(TNode<Number>{tmp25}, TNode<Number>{tmp26});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 278);
    TNode<Oddball> tmp28;
    tmp28 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kHasProperty, tmp15, tmp16, tmp24));
    USE(tmp28);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 281);
    TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = True_65(state_);
    TNode<BoolT> tmp30;
    USE(tmp30);
    tmp30 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp28}, TNode<HeapObject>{tmp29});
    ca_.Branch(tmp30, &block5, &block6, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp24, tmp27, tmp28);
  }

  if (block5.is_used()) {
    TNode<Context> tmp31;
    TNode<JSReceiver> tmp32;
    TNode<Number> tmp33;
    TNode<Number> tmp34;
    TNode<Number> tmp35;
    TNode<Number> tmp36;
    TNode<Number> tmp37;
    TNode<Number> tmp38;
    TNode<Number> tmp39;
    TNode<Oddball> tmp40;
    ca_.Bind(&block5, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 283);
    TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetProperty(TNode<Context>{tmp31}, TNode<Object>{tmp32}, TNode<Object>{tmp38});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 286);
    CodeStubAssembler(state_).CallBuiltin(Builtins::kSetProperty, tmp31, tmp32, tmp39, tmp41);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 281);
    ca_.Goto(&block7, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40);
  }

  if (block6.is_used()) {
    TNode<Context> tmp43;
    TNode<JSReceiver> tmp44;
    TNode<Number> tmp45;
    TNode<Number> tmp46;
    TNode<Number> tmp47;
    TNode<Number> tmp48;
    TNode<Number> tmp49;
    TNode<Number> tmp50;
    TNode<Number> tmp51;
    TNode<Oddball> tmp52;
    ca_.Bind(&block6, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 291);
    TNode<Smi> tmp53;
    USE(tmp53);
    tmp53 = FromConstexpr14ATLanguageMode24ATconstexpr_LanguageMode_168(state_, LanguageMode::kStrict);
    TNode<Oddball> tmp54;
    tmp54 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kDeleteProperty, tmp43, tmp44, tmp51, tmp53));
    USE(tmp54);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 281);
    ca_.Goto(&block7, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52);
  }

  if (block7.is_used()) {
    TNode<Context> tmp55;
    TNode<JSReceiver> tmp56;
    TNode<Number> tmp57;
    TNode<Number> tmp58;
    TNode<Number> tmp59;
    TNode<Number> tmp60;
    TNode<Number> tmp61;
    TNode<Number> tmp62;
    TNode<Number> tmp63;
    TNode<Oddball> tmp64;
    ca_.Bind(&block7, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 295);
    TNode<Number> tmp65;
    USE(tmp65);
    tmp65 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 1);
    TNode<Number> tmp66;
    USE(tmp66);
    tmp66 = CodeStubAssembler(state_).NumberSub(TNode<Number>{tmp61}, TNode<Number>{tmp65});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 270);
    ca_.Goto(&block4, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp66);
  }

  if (block3.is_used()) {
    TNode<Context> tmp67;
    TNode<JSReceiver> tmp68;
    TNode<Number> tmp69;
    TNode<Number> tmp70;
    TNode<Number> tmp71;
    TNode<Number> tmp72;
    TNode<Number> tmp73;
    ca_.Bind(&block3, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 264);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 262);
    ca_.Goto(&block1, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72);
  }

  if (block1.is_used()) {
    TNode<Context> tmp74;
    TNode<JSReceiver> tmp75;
    TNode<Number> tmp76;
    TNode<Number> tmp77;
    TNode<Number> tmp78;
    TNode<Number> tmp79;
    ca_.Bind(&block1, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79);
    ca_.Goto(&block8, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79);
  }

    TNode<Context> tmp80;
    TNode<JSReceiver> tmp81;
    TNode<Number> tmp82;
    TNode<Number> tmp83;
    TNode<Number> tmp84;
    TNode<Number> tmp85;
    ca_.Bind(&block8, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85);
}

TNode<Object> SlowSplice_48(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructArguments p_arguments, TNode<JSReceiver> p_o, TNode<Number> p_len, TNode<Number> p_actualStart, TNode<Smi> p_insertCount, TNode<Number> p_actualDeleteCount) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, JSReceiver, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, JSReceiver, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, JSReceiver, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, JSReceiver, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, JSReceiver, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, JSReceiver, Number, Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, JSReceiver, Number, Number, IntPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, JSReceiver, Number, Number, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, JSReceiver, Number, Number, IntPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, JSReceiver, Number, Number, IntPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, JSReceiver, Number, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_arguments.frame, p_arguments.base, p_arguments.length, p_o, p_len, p_actualStart, p_insertCount, p_actualDeleteCount);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<RawPtrT> tmp2;
    TNode<IntPtrT> tmp3;
    TNode<JSReceiver> tmp4;
    TNode<Number> tmp5;
    TNode<Number> tmp6;
    TNode<Smi> tmp7;
    TNode<Number> tmp8;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5, &tmp6, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 303);
    TNode<JSReceiver> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).ArraySpeciesCreate(TNode<Context>{tmp0}, TNode<Object>{tmp4}, TNode<Number>{tmp8});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 304);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 307);
    TNode<Object> tmp10;
    USE(tmp10);
    tmp10 = FillDeletedElementsArray_45(state_, TNode<Context>{tmp0}, TNode<JSReceiver>{tmp4}, TNode<Number>{tmp6}, TNode<Number>{tmp8}, TNode<JSReceiver>{tmp9});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 317);
    TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = NumberIsLessThan_75(state_, TNode<Number>{tmp7}, TNode<Number>{tmp8});
    ca_.Branch(tmp11, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp9, tmp7);
  }

  if (block2.is_used()) {
    TNode<Context> tmp12;
    TNode<RawPtrT> tmp13;
    TNode<RawPtrT> tmp14;
    TNode<IntPtrT> tmp15;
    TNode<JSReceiver> tmp16;
    TNode<Number> tmp17;
    TNode<Number> tmp18;
    TNode<Smi> tmp19;
    TNode<Number> tmp20;
    TNode<JSReceiver> tmp21;
    TNode<Number> tmp22;
    ca_.Bind(&block2, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 319);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 318);
    HandleForwardCase_46(state_, TNode<Context>{tmp12}, TNode<JSReceiver>{tmp16}, TNode<Number>{tmp17}, TNode<Number>{tmp22}, TNode<Number>{tmp18}, TNode<Number>{tmp20});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 317);
    ca_.Goto(&block4, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22);
  }

  if (block3.is_used()) {
    TNode<Context> tmp23;
    TNode<RawPtrT> tmp24;
    TNode<RawPtrT> tmp25;
    TNode<IntPtrT> tmp26;
    TNode<JSReceiver> tmp27;
    TNode<Number> tmp28;
    TNode<Number> tmp29;
    TNode<Smi> tmp30;
    TNode<Number> tmp31;
    TNode<JSReceiver> tmp32;
    TNode<Number> tmp33;
    ca_.Bind(&block3, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 321);
    TNode<BoolT> tmp34;
    USE(tmp34);
    tmp34 = NumberIsGreaterThan_77(state_, TNode<Number>{tmp33}, TNode<Number>{tmp31});
    ca_.Branch(tmp34, &block5, &block6, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33);
  }

  if (block5.is_used()) {
    TNode<Context> tmp35;
    TNode<RawPtrT> tmp36;
    TNode<RawPtrT> tmp37;
    TNode<IntPtrT> tmp38;
    TNode<JSReceiver> tmp39;
    TNode<Number> tmp40;
    TNode<Number> tmp41;
    TNode<Smi> tmp42;
    TNode<Number> tmp43;
    TNode<JSReceiver> tmp44;
    TNode<Number> tmp45;
    ca_.Bind(&block5, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 323);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 322);
    HandleBackwardCase_47(state_, TNode<Context>{tmp35}, TNode<JSReceiver>{tmp39}, TNode<Number>{tmp40}, TNode<Number>{tmp45}, TNode<Number>{tmp41}, TNode<Number>{tmp43});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 321);
    ca_.Goto(&block6, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45);
  }

  if (block6.is_used()) {
    TNode<Context> tmp46;
    TNode<RawPtrT> tmp47;
    TNode<RawPtrT> tmp48;
    TNode<IntPtrT> tmp49;
    TNode<JSReceiver> tmp50;
    TNode<Number> tmp51;
    TNode<Number> tmp52;
    TNode<Smi> tmp53;
    TNode<Number> tmp54;
    TNode<JSReceiver> tmp55;
    TNode<Number> tmp56;
    ca_.Bind(&block6, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 317);
    ca_.Goto(&block4, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56);
  }

  if (block4.is_used()) {
    TNode<Context> tmp57;
    TNode<RawPtrT> tmp58;
    TNode<RawPtrT> tmp59;
    TNode<IntPtrT> tmp60;
    TNode<JSReceiver> tmp61;
    TNode<Number> tmp62;
    TNode<Number> tmp63;
    TNode<Smi> tmp64;
    TNode<Number> tmp65;
    TNode<JSReceiver> tmp66;
    TNode<Number> tmp67;
    ca_.Bind(&block4, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 327);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 332);
    TNode<IntPtrT> tmp68;
    USE(tmp68);
    tmp68 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 2);
    TNode<BoolT> tmp69;
    USE(tmp69);
    tmp69 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp60}, TNode<IntPtrT>{tmp68});
    ca_.Branch(tmp69, &block7, &block8, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp63);
  }

  if (block7.is_used()) {
    TNode<Context> tmp70;
    TNode<RawPtrT> tmp71;
    TNode<RawPtrT> tmp72;
    TNode<IntPtrT> tmp73;
    TNode<JSReceiver> tmp74;
    TNode<Number> tmp75;
    TNode<Number> tmp76;
    TNode<Smi> tmp77;
    TNode<Number> tmp78;
    TNode<JSReceiver> tmp79;
    TNode<Number> tmp80;
    TNode<Number> tmp81;
    ca_.Bind(&block7, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 333);
    TNode<IntPtrT> tmp82;
    USE(tmp82);
    tmp82 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 2);
    ca_.Goto(&block11, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82);
  }

  if (block11.is_used()) {
    TNode<Context> tmp83;
    TNode<RawPtrT> tmp84;
    TNode<RawPtrT> tmp85;
    TNode<IntPtrT> tmp86;
    TNode<JSReceiver> tmp87;
    TNode<Number> tmp88;
    TNode<Number> tmp89;
    TNode<Smi> tmp90;
    TNode<Number> tmp91;
    TNode<JSReceiver> tmp92;
    TNode<Number> tmp93;
    TNode<Number> tmp94;
    TNode<IntPtrT> tmp95;
    ca_.Bind(&block11, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    TNode<BoolT> tmp96;
    USE(tmp96);
    tmp96 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{tmp95}, TNode<IntPtrT>{tmp86});
    ca_.Branch(tmp96, &block9, &block10, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95);
  }

  if (block9.is_used()) {
    TNode<Context> tmp97;
    TNode<RawPtrT> tmp98;
    TNode<RawPtrT> tmp99;
    TNode<IntPtrT> tmp100;
    TNode<JSReceiver> tmp101;
    TNode<Number> tmp102;
    TNode<Number> tmp103;
    TNode<Smi> tmp104;
    TNode<Number> tmp105;
    TNode<JSReceiver> tmp106;
    TNode<Number> tmp107;
    TNode<Number> tmp108;
    TNode<IntPtrT> tmp109;
    ca_.Bind(&block9, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 334);
    TNode<Object> tmp110;
    USE(tmp110);
    tmp110 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp98}, TNode<RawPtrT>{tmp99}, TNode<IntPtrT>{tmp100}}, TNode<IntPtrT>{tmp109});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 336);
    CodeStubAssembler(state_).CallBuiltin(Builtins::kSetProperty, tmp97, tmp101, tmp108, tmp110);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 339);
    TNode<Number> tmp112;
    USE(tmp112);
    tmp112 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 1);
    TNode<Number> tmp113;
    USE(tmp113);
    tmp113 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{tmp108}, TNode<Number>{tmp112});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 333);
    ca_.Goto(&block12, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp113, tmp109);
  }

  if (block12.is_used()) {
    TNode<Context> tmp114;
    TNode<RawPtrT> tmp115;
    TNode<RawPtrT> tmp116;
    TNode<IntPtrT> tmp117;
    TNode<JSReceiver> tmp118;
    TNode<Number> tmp119;
    TNode<Number> tmp120;
    TNode<Smi> tmp121;
    TNode<Number> tmp122;
    TNode<JSReceiver> tmp123;
    TNode<Number> tmp124;
    TNode<Number> tmp125;
    TNode<IntPtrT> tmp126;
    ca_.Bind(&block12, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126);
    TNode<IntPtrT> tmp127;
    USE(tmp127);
    tmp127 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<IntPtrT> tmp128;
    USE(tmp128);
    tmp128 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp126}, TNode<IntPtrT>{tmp127});
    ca_.Goto(&block11, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp128);
  }

  if (block10.is_used()) {
    TNode<Context> tmp129;
    TNode<RawPtrT> tmp130;
    TNode<RawPtrT> tmp131;
    TNode<IntPtrT> tmp132;
    TNode<JSReceiver> tmp133;
    TNode<Number> tmp134;
    TNode<Number> tmp135;
    TNode<Smi> tmp136;
    TNode<Number> tmp137;
    TNode<JSReceiver> tmp138;
    TNode<Number> tmp139;
    TNode<Number> tmp140;
    TNode<IntPtrT> tmp141;
    ca_.Bind(&block10, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 332);
    ca_.Goto(&block8, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140);
  }

  if (block8.is_used()) {
    TNode<Context> tmp142;
    TNode<RawPtrT> tmp143;
    TNode<RawPtrT> tmp144;
    TNode<IntPtrT> tmp145;
    TNode<JSReceiver> tmp146;
    TNode<Number> tmp147;
    TNode<Number> tmp148;
    TNode<Smi> tmp149;
    TNode<Number> tmp150;
    TNode<JSReceiver> tmp151;
    TNode<Number> tmp152;
    TNode<Number> tmp153;
    ca_.Bind(&block8, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 345);
    TNode<String> tmp154;
    USE(tmp154);
    tmp154 = kLengthString_68(state_);
    TNode<Number> tmp155;
    USE(tmp155);
    tmp155 = CodeStubAssembler(state_).NumberSub(TNode<Number>{tmp147}, TNode<Number>{tmp150});
    TNode<Number> tmp156;
    USE(tmp156);
    tmp156 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{tmp155}, TNode<Number>{tmp152});
    CodeStubAssembler(state_).CallBuiltin(Builtins::kSetProperty, tmp142, tmp146, tmp154, tmp156);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 347);
    ca_.Goto(&block1, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151);
  }

  if (block1.is_used()) {
    TNode<Context> tmp158;
    TNode<RawPtrT> tmp159;
    TNode<RawPtrT> tmp160;
    TNode<IntPtrT> tmp161;
    TNode<JSReceiver> tmp162;
    TNode<Number> tmp163;
    TNode<Number> tmp164;
    TNode<Smi> tmp165;
    TNode<Number> tmp166;
    TNode<Object> tmp167;
    ca_.Bind(&block1, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 299);
    ca_.Goto(&block13, tmp158, tmp159, tmp160, tmp161, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167);
  }

    TNode<Context> tmp168;
    TNode<RawPtrT> tmp169;
    TNode<RawPtrT> tmp170;
    TNode<IntPtrT> tmp171;
    TNode<JSReceiver> tmp172;
    TNode<Number> tmp173;
    TNode<Number> tmp174;
    TNode<Smi> tmp175;
    TNode<Number> tmp176;
    TNode<Object> tmp177;
    ca_.Bind(&block13, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177);
  return TNode<Object>{tmp177};
}

TF_BUILTIN(ArrayPrototypeSplice, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(argc));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Smi, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Smi, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Smi, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Smi, Number> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Smi, Number> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Smi, Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Smi, Number, Number> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Smi, Number, Number> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Smi, Number, Number, Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Smi, Number, Number, Context, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Number, Smi, Number, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Smi, Number, Number> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Smi, Number, Number> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 355);
    TNode<JSReceiver> tmp5;
    tmp5 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kToObject, tmp3, tmp4));
    USE(tmp5);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 358);
    TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = GetLengthProperty_246(state_, TNode<Context>{tmp3}, TNode<Object>{tmp5});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 361);
    TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp0}, TNode<RawPtrT>{tmp1}, TNode<IntPtrT>{tmp2}}, TNode<IntPtrT>{tmp7});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 362);
    TNode<Number> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).ToInteger_Inline(TNode<Context>{tmp3}, TNode<Object>{tmp8});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 367);
    TNode<Number> tmp10;
    USE(tmp10);
    tmp10 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 0);
    TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = NumberIsLessThan_75(state_, TNode<Number>{tmp9}, TNode<Number>{tmp10});
    ca_.Branch(tmp11, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp8, tmp9);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp12;
    TNode<RawPtrT> tmp13;
    TNode<IntPtrT> tmp14;
    TNode<Context> tmp15;
    TNode<Object> tmp16;
    TNode<JSReceiver> tmp17;
    TNode<Number> tmp18;
    TNode<Object> tmp19;
    TNode<Number> tmp20;
    ca_.Bind(&block1, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 368);
    TNode<Number> tmp21;
    USE(tmp21);
    tmp21 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{tmp18}, TNode<Number>{tmp20});
    TNode<Number> tmp22;
    USE(tmp22);
    tmp22 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 0);
    TNode<Number> tmp23;
    USE(tmp23);
    tmp23 = Max_81(state_, TNode<Number>{tmp21}, TNode<Number>{tmp22});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 367);
    ca_.Goto(&block4, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp23);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp24;
    TNode<RawPtrT> tmp25;
    TNode<IntPtrT> tmp26;
    TNode<Context> tmp27;
    TNode<Object> tmp28;
    TNode<JSReceiver> tmp29;
    TNode<Number> tmp30;
    TNode<Object> tmp31;
    TNode<Number> tmp32;
    ca_.Bind(&block2, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 369);
    TNode<Number> tmp33;
    USE(tmp33);
    tmp33 = Min_80(state_, TNode<Number>{tmp32}, TNode<Number>{tmp30});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 367);
    ca_.Goto(&block3, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp34;
    TNode<RawPtrT> tmp35;
    TNode<IntPtrT> tmp36;
    TNode<Context> tmp37;
    TNode<Object> tmp38;
    TNode<JSReceiver> tmp39;
    TNode<Number> tmp40;
    TNode<Object> tmp41;
    TNode<Number> tmp42;
    TNode<Number> tmp43;
    ca_.Bind(&block4, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.Goto(&block3, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp44;
    TNode<RawPtrT> tmp45;
    TNode<IntPtrT> tmp46;
    TNode<Context> tmp47;
    TNode<Object> tmp48;
    TNode<JSReceiver> tmp49;
    TNode<Number> tmp50;
    TNode<Object> tmp51;
    TNode<Number> tmp52;
    TNode<Number> tmp53;
    ca_.Bind(&block3, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 371);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 372);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 374);
    TNode<IntPtrT> tmp54;
    USE(tmp54);
    tmp54 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<BoolT> tmp55;
    USE(tmp55);
    tmp55 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp46}, TNode<IntPtrT>{tmp54});
    ca_.Branch(tmp55, &block5, &block6, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, ca_.Uninitialized<Smi>(), ca_.Uninitialized<Number>());
  }

  if (block5.is_used()) {
    TNode<RawPtrT> tmp56;
    TNode<RawPtrT> tmp57;
    TNode<IntPtrT> tmp58;
    TNode<Context> tmp59;
    TNode<Object> tmp60;
    TNode<JSReceiver> tmp61;
    TNode<Number> tmp62;
    TNode<Object> tmp63;
    TNode<Number> tmp64;
    TNode<Number> tmp65;
    TNode<Smi> tmp66;
    TNode<Number> tmp67;
    ca_.Bind(&block5, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 376);
    TNode<Smi> tmp68;
    USE(tmp68);
    tmp68 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 378);
    TNode<Number> tmp69;
    USE(tmp69);
    tmp69 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 374);
    ca_.Goto(&block7, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp68, tmp69);
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp70;
    TNode<RawPtrT> tmp71;
    TNode<IntPtrT> tmp72;
    TNode<Context> tmp73;
    TNode<Object> tmp74;
    TNode<JSReceiver> tmp75;
    TNode<Number> tmp76;
    TNode<Object> tmp77;
    TNode<Number> tmp78;
    TNode<Number> tmp79;
    TNode<Smi> tmp80;
    TNode<Number> tmp81;
    ca_.Bind(&block6, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 380);
    TNode<IntPtrT> tmp82;
    USE(tmp82);
    tmp82 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<BoolT> tmp83;
    USE(tmp83);
    tmp83 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp72}, TNode<IntPtrT>{tmp82});
    ca_.Branch(tmp83, &block8, &block9, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81);
  }

  if (block8.is_used()) {
    TNode<RawPtrT> tmp84;
    TNode<RawPtrT> tmp85;
    TNode<IntPtrT> tmp86;
    TNode<Context> tmp87;
    TNode<Object> tmp88;
    TNode<JSReceiver> tmp89;
    TNode<Number> tmp90;
    TNode<Object> tmp91;
    TNode<Number> tmp92;
    TNode<Number> tmp93;
    TNode<Smi> tmp94;
    TNode<Number> tmp95;
    ca_.Bind(&block8, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 382);
    TNode<Smi> tmp96;
    USE(tmp96);
    tmp96 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 384);
    TNode<Number> tmp97;
    USE(tmp97);
    tmp97 = CodeStubAssembler(state_).NumberSub(TNode<Number>{tmp90}, TNode<Number>{tmp93});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 380);
    ca_.Goto(&block10, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp96, tmp97);
  }

  if (block9.is_used()) {
    TNode<RawPtrT> tmp98;
    TNode<RawPtrT> tmp99;
    TNode<IntPtrT> tmp100;
    TNode<Context> tmp101;
    TNode<Object> tmp102;
    TNode<JSReceiver> tmp103;
    TNode<Number> tmp104;
    TNode<Object> tmp105;
    TNode<Number> tmp106;
    TNode<Number> tmp107;
    TNode<Smi> tmp108;
    TNode<Number> tmp109;
    ca_.Bind(&block9, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 388);
    TNode<Smi> tmp110;
    USE(tmp110);
    tmp110 = Convert5ATSmi8ATintptr_186(state_, TNode<IntPtrT>{tmp100});
    TNode<Smi> tmp111;
    USE(tmp111);
    tmp111 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 2);
    TNode<Smi> tmp112;
    USE(tmp112);
    tmp112 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp110}, TNode<Smi>{tmp111});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 390);
    TNode<IntPtrT> tmp113;
    USE(tmp113);
    tmp113 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp114;
    USE(tmp114);
    tmp114 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp98}, TNode<RawPtrT>{tmp99}, TNode<IntPtrT>{tmp100}}, TNode<IntPtrT>{tmp113});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 391);
    TNode<Number> tmp115;
    USE(tmp115);
    tmp115 = CodeStubAssembler(state_).ToInteger_Inline(TNode<Context>{tmp101}, TNode<Object>{tmp114});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 393);
    TNode<Number> tmp116;
    USE(tmp116);
    tmp116 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 0);
    TNode<Number> tmp117;
    USE(tmp117);
    tmp117 = Max_81(state_, TNode<Number>{tmp115}, TNode<Number>{tmp116});
    TNode<Number> tmp118;
    USE(tmp118);
    tmp118 = CodeStubAssembler(state_).NumberSub(TNode<Number>{tmp104}, TNode<Number>{tmp107});
    TNode<Number> tmp119;
    USE(tmp119);
    tmp119 = Min_80(state_, TNode<Number>{tmp117}, TNode<Number>{tmp118});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 386);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 380);
    ca_.Goto(&block10, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp112, tmp119);
  }

  if (block10.is_used()) {
    TNode<RawPtrT> tmp120;
    TNode<RawPtrT> tmp121;
    TNode<IntPtrT> tmp122;
    TNode<Context> tmp123;
    TNode<Object> tmp124;
    TNode<JSReceiver> tmp125;
    TNode<Number> tmp126;
    TNode<Object> tmp127;
    TNode<Number> tmp128;
    TNode<Number> tmp129;
    TNode<Smi> tmp130;
    TNode<Number> tmp131;
    ca_.Bind(&block10, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 374);
    ca_.Goto(&block7, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp132;
    TNode<RawPtrT> tmp133;
    TNode<IntPtrT> tmp134;
    TNode<Context> tmp135;
    TNode<Object> tmp136;
    TNode<JSReceiver> tmp137;
    TNode<Number> tmp138;
    TNode<Object> tmp139;
    TNode<Number> tmp140;
    TNode<Number> tmp141;
    TNode<Smi> tmp142;
    TNode<Number> tmp143;
    ca_.Bind(&block7, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 398);
    TNode<Number> tmp144;
    USE(tmp144);
    tmp144 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{tmp138}, TNode<Number>{tmp142});
    TNode<Number> tmp145;
    USE(tmp145);
    tmp145 = CodeStubAssembler(state_).NumberSub(TNode<Number>{tmp144}, TNode<Number>{tmp143});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 399);
    TNode<Number> tmp146;
    USE(tmp146);
    tmp146 = FromConstexpr20UT5ATSmi10HeapNumber19ATconstexpr_float64_159(state_, kMaxSafeInteger);
    TNode<BoolT> tmp147;
    USE(tmp147);
    tmp147 = NumberIsGreaterThan_77(state_, TNode<Number>{tmp145}, TNode<Number>{tmp146});
    ca_.Branch(tmp147, &block11, &block12, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp145);
  }

  if (block11.is_used()) {
    TNode<RawPtrT> tmp148;
    TNode<RawPtrT> tmp149;
    TNode<IntPtrT> tmp150;
    TNode<Context> tmp151;
    TNode<Object> tmp152;
    TNode<JSReceiver> tmp153;
    TNode<Number> tmp154;
    TNode<Object> tmp155;
    TNode<Number> tmp156;
    TNode<Number> tmp157;
    TNode<Smi> tmp158;
    TNode<Number> tmp159;
    TNode<Number> tmp160;
    ca_.Bind(&block11, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 400);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp151}, MessageTemplate::kInvalidArrayLength, TNode<Object>{tmp155});
  }

  if (block12.is_used()) {
    TNode<RawPtrT> tmp161;
    TNode<RawPtrT> tmp162;
    TNode<IntPtrT> tmp163;
    TNode<Context> tmp164;
    TNode<Object> tmp165;
    TNode<JSReceiver> tmp166;
    TNode<Number> tmp167;
    TNode<Object> tmp168;
    TNode<Number> tmp169;
    TNode<Number> tmp170;
    TNode<Smi> tmp171;
    TNode<Number> tmp172;
    TNode<Number> tmp173;
    ca_.Bind(&block12, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 405);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 406);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 404);
    TNode<Object> tmp174;
    USE(tmp174);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp174 = FastArraySplice_44(state_, TNode<Context>{tmp164}, TorqueStructArguments{TNode<RawPtrT>{tmp161}, TNode<RawPtrT>{tmp162}, TNode<IntPtrT>{tmp163}}, TNode<JSReceiver>{tmp166}, TNode<Number>{tmp167}, TNode<Number>{tmp170}, TNode<Smi>{tmp171}, TNode<Number>{tmp172}, &label0);
    ca_.Goto(&block15, tmp161, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp164, tmp161, tmp162, tmp163, tmp166, tmp167, tmp170, tmp171, tmp172, tmp174);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp161, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp164, tmp161, tmp162, tmp163, tmp166, tmp167, tmp170, tmp171, tmp172);
    }
  }

  if (block16.is_used()) {
    TNode<RawPtrT> tmp175;
    TNode<RawPtrT> tmp176;
    TNode<IntPtrT> tmp177;
    TNode<Context> tmp178;
    TNode<Object> tmp179;
    TNode<JSReceiver> tmp180;
    TNode<Number> tmp181;
    TNode<Object> tmp182;
    TNode<Number> tmp183;
    TNode<Number> tmp184;
    TNode<Smi> tmp185;
    TNode<Number> tmp186;
    TNode<Number> tmp187;
    TNode<Context> tmp188;
    TNode<RawPtrT> tmp189;
    TNode<RawPtrT> tmp190;
    TNode<IntPtrT> tmp191;
    TNode<JSReceiver> tmp192;
    TNode<Number> tmp193;
    TNode<Number> tmp194;
    TNode<Smi> tmp195;
    TNode<Number> tmp196;
    ca_.Bind(&block16, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196);
    ca_.Goto(&block14, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187);
  }

  if (block15.is_used()) {
    TNode<RawPtrT> tmp197;
    TNode<RawPtrT> tmp198;
    TNode<IntPtrT> tmp199;
    TNode<Context> tmp200;
    TNode<Object> tmp201;
    TNode<JSReceiver> tmp202;
    TNode<Number> tmp203;
    TNode<Object> tmp204;
    TNode<Number> tmp205;
    TNode<Number> tmp206;
    TNode<Smi> tmp207;
    TNode<Number> tmp208;
    TNode<Number> tmp209;
    TNode<Context> tmp210;
    TNode<RawPtrT> tmp211;
    TNode<RawPtrT> tmp212;
    TNode<IntPtrT> tmp213;
    TNode<JSReceiver> tmp214;
    TNode<Number> tmp215;
    TNode<Number> tmp216;
    TNode<Smi> tmp217;
    TNode<Number> tmp218;
    TNode<Object> tmp219;
    ca_.Bind(&block15, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219);
    arguments.PopAndReturn(tmp219);
  }

  if (block14.is_used()) {
    TNode<RawPtrT> tmp220;
    TNode<RawPtrT> tmp221;
    TNode<IntPtrT> tmp222;
    TNode<Context> tmp223;
    TNode<Object> tmp224;
    TNode<JSReceiver> tmp225;
    TNode<Number> tmp226;
    TNode<Object> tmp227;
    TNode<Number> tmp228;
    TNode<Number> tmp229;
    TNode<Smi> tmp230;
    TNode<Number> tmp231;
    TNode<Number> tmp232;
    ca_.Bind(&block14, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 403);
    ca_.Goto(&block13, tmp220, tmp221, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232);
  }

  if (block13.is_used()) {
    TNode<RawPtrT> tmp233;
    TNode<RawPtrT> tmp234;
    TNode<IntPtrT> tmp235;
    TNode<Context> tmp236;
    TNode<Object> tmp237;
    TNode<JSReceiver> tmp238;
    TNode<Number> tmp239;
    TNode<Object> tmp240;
    TNode<Number> tmp241;
    TNode<Number> tmp242;
    TNode<Smi> tmp243;
    TNode<Number> tmp244;
    TNode<Number> tmp245;
    ca_.Bind(&block13, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 413);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 414);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 412);
    TNode<Object> tmp246;
    USE(tmp246);
    tmp246 = SlowSplice_48(state_, TNode<Context>{tmp236}, TorqueStructArguments{TNode<RawPtrT>{tmp233}, TNode<RawPtrT>{tmp234}, TNode<IntPtrT>{tmp235}}, TNode<JSReceiver>{tmp238}, TNode<Number>{tmp239}, TNode<Number>{tmp242}, TNode<Smi>{tmp243}, TNode<Number>{tmp244});
    arguments.PopAndReturn(tmp246);
  }
}

void FastSplice10FixedArray90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol_1467(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructArguments p_args, TNode<JSArray> p_a, TNode<Smi> p_length, TNode<Smi> p_newLength, TNode<Smi> p_actualStart, TNode<Smi> p_insertCount, TNode<Smi> p_actualDeleteCount) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi, Smi, FixedArray> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi, Smi, FixedArray> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, Smi, FixedArray, IntPtrT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, Smi, FixedArray, IntPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, Smi, FixedArray, IntPtrT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, Smi, FixedArray, IntPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_args.frame, p_args.base, p_args.length, p_a, p_length, p_newLength, p_actualStart, p_insertCount, p_actualDeleteCount);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<RawPtrT> tmp2;
    TNode<IntPtrT> tmp3;
    TNode<JSArray> tmp4;
    TNode<Smi> tmp5;
    TNode<Smi> tmp6;
    TNode<Smi> tmp7;
    TNode<Smi> tmp8;
    TNode<Smi> tmp9;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 59);
    EnsureWriteableFastElements_50(state_, TNode<Context>{tmp0}, TNode<JSArray>{tmp4});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 61);
    TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).SmiNotEqual(TNode<Smi>{tmp8}, TNode<Smi>{tmp9});
    ca_.Branch(tmp10, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp9);
  }

  if (block2.is_used()) {
    TNode<Context> tmp11;
    TNode<RawPtrT> tmp12;
    TNode<RawPtrT> tmp13;
    TNode<IntPtrT> tmp14;
    TNode<JSArray> tmp15;
    TNode<Smi> tmp16;
    TNode<Smi> tmp17;
    TNode<Smi> tmp18;
    TNode<Smi> tmp19;
    TNode<Smi> tmp20;
    ca_.Bind(&block2, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 62);
    TNode<IntPtrT> tmp21 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp21);
    TNode<FixedArrayBase>tmp22 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp15, tmp21});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 63);
    TNode<Smi> tmp23;
    USE(tmp23);
    tmp23 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp18}, TNode<Smi>{tmp19});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 64);
    TNode<Smi> tmp24;
    USE(tmp24);
    tmp24 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp18}, TNode<Smi>{tmp20});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 65);
    TNode<Smi> tmp25;
    USE(tmp25);
    tmp25 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp16}, TNode<Smi>{tmp20});
    TNode<Smi> tmp26;
    USE(tmp26);
    tmp26 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp25}, TNode<Smi>{tmp18});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 66);
    TNode<BoolT> tmp27;
    USE(tmp27);
    tmp27 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp19}, TNode<Smi>{tmp20});
    ca_.Branch(tmp27, &block4, &block5, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp22, tmp23, tmp24, tmp26);
  }

  if (block4.is_used()) {
    TNode<Context> tmp28;
    TNode<RawPtrT> tmp29;
    TNode<RawPtrT> tmp30;
    TNode<IntPtrT> tmp31;
    TNode<JSArray> tmp32;
    TNode<Smi> tmp33;
    TNode<Smi> tmp34;
    TNode<Smi> tmp35;
    TNode<Smi> tmp36;
    TNode<Smi> tmp37;
    TNode<FixedArrayBase> tmp38;
    TNode<Smi> tmp39;
    TNode<Smi> tmp40;
    TNode<Smi> tmp41;
    ca_.Bind(&block4, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 69);
    TNode<FixedArray> tmp42;
    USE(tmp42);
    tmp42 = UnsafeCast10FixedArray_1438(state_, TNode<Context>{tmp28}, TNode<Object>{tmp38});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 68);
    DoMoveElements10FixedArray_1519(state_, TNode<FixedArray>{tmp42}, TNode<Smi>{tmp39}, TNode<Smi>{tmp40}, TNode<Smi>{tmp41});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 71);
    TNode<FixedArray> tmp43;
    USE(tmp43);
    tmp43 = UnsafeCast10FixedArray_1438(state_, TNode<Context>{tmp28}, TNode<Object>{tmp38});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 70);
    StoreHoles10FixedArray_1520(state_, TNode<FixedArray>{tmp43}, TNode<Smi>{tmp34}, TNode<Smi>{tmp33});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 66);
    ca_.Goto(&block6, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41);
  }

  if (block5.is_used()) {
    TNode<Context> tmp44;
    TNode<RawPtrT> tmp45;
    TNode<RawPtrT> tmp46;
    TNode<IntPtrT> tmp47;
    TNode<JSArray> tmp48;
    TNode<Smi> tmp49;
    TNode<Smi> tmp50;
    TNode<Smi> tmp51;
    TNode<Smi> tmp52;
    TNode<Smi> tmp53;
    TNode<FixedArrayBase> tmp54;
    TNode<Smi> tmp55;
    TNode<Smi> tmp56;
    TNode<Smi> tmp57;
    ca_.Bind(&block5, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 72);
    TNode<BoolT> tmp58;
    USE(tmp58);
    tmp58 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp52}, TNode<Smi>{tmp53});
    ca_.Branch(tmp58, &block7, &block8, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57);
  }

  if (block7.is_used()) {
    TNode<Context> tmp59;
    TNode<RawPtrT> tmp60;
    TNode<RawPtrT> tmp61;
    TNode<IntPtrT> tmp62;
    TNode<JSArray> tmp63;
    TNode<Smi> tmp64;
    TNode<Smi> tmp65;
    TNode<Smi> tmp66;
    TNode<Smi> tmp67;
    TNode<Smi> tmp68;
    TNode<FixedArrayBase> tmp69;
    TNode<Smi> tmp70;
    TNode<Smi> tmp71;
    TNode<Smi> tmp72;
    ca_.Bind(&block7, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 74);
    TNode<IntPtrT> tmp73 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp73);
    TNode<Smi>tmp74 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp69, tmp73});
    TNode<BoolT> tmp75;
    USE(tmp75);
    tmp75 = CodeStubAssembler(state_).SmiLessThanOrEqual(TNode<Smi>{tmp65}, TNode<Smi>{tmp74});
    ca_.Branch(tmp75, &block9, &block10, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72);
  }

  if (block9.is_used()) {
    TNode<Context> tmp76;
    TNode<RawPtrT> tmp77;
    TNode<RawPtrT> tmp78;
    TNode<IntPtrT> tmp79;
    TNode<JSArray> tmp80;
    TNode<Smi> tmp81;
    TNode<Smi> tmp82;
    TNode<Smi> tmp83;
    TNode<Smi> tmp84;
    TNode<Smi> tmp85;
    TNode<FixedArrayBase> tmp86;
    TNode<Smi> tmp87;
    TNode<Smi> tmp88;
    TNode<Smi> tmp89;
    ca_.Bind(&block9, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 76);
    TNode<FixedArray> tmp90;
    USE(tmp90);
    tmp90 = UnsafeCast10FixedArray_1438(state_, TNode<Context>{tmp76}, TNode<Object>{tmp86});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 75);
    DoMoveElements10FixedArray_1519(state_, TNode<FixedArray>{tmp90}, TNode<Smi>{tmp87}, TNode<Smi>{tmp88}, TNode<Smi>{tmp89});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 74);
    ca_.Goto(&block11, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89);
  }

  if (block10.is_used()) {
    TNode<Context> tmp91;
    TNode<RawPtrT> tmp92;
    TNode<RawPtrT> tmp93;
    TNode<IntPtrT> tmp94;
    TNode<JSArray> tmp95;
    TNode<Smi> tmp96;
    TNode<Smi> tmp97;
    TNode<Smi> tmp98;
    TNode<Smi> tmp99;
    TNode<Smi> tmp100;
    TNode<FixedArrayBase> tmp101;
    TNode<Smi> tmp102;
    TNode<Smi> tmp103;
    TNode<Smi> tmp104;
    ca_.Bind(&block10, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 79);
    TNode<Smi> tmp105;
    USE(tmp105);
    tmp105 = CodeStubAssembler(state_).CalculateNewElementsCapacity(TNode<Smi>{tmp97});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 81);
    TNode<Smi> tmp106;
    USE(tmp106);
    tmp106 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<FixedArray> tmp107;
    USE(tmp107);
    tmp107 = Extract10FixedArray_42(state_, TNode<Context>{tmp91}, TNode<FixedArrayBase>{tmp101}, TNode<Smi>{tmp106}, TNode<Smi>{tmp98}, TNode<Smi>{tmp105});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 80);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 82);
    TNode<IntPtrT> tmp108 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp108);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp95, tmp108}, tmp107);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 83);
    TNode<IntPtrT> tmp109 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp109);
    TNode<Smi>tmp110 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp101, tmp109});
    TNode<Smi> tmp111;
    USE(tmp111);
    tmp111 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<BoolT> tmp112;
    USE(tmp112);
    tmp112 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp110}, TNode<Smi>{tmp111});
    ca_.Branch(tmp112, &block12, &block13, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp107);
  }

  if (block12.is_used()) {
    TNode<Context> tmp113;
    TNode<RawPtrT> tmp114;
    TNode<RawPtrT> tmp115;
    TNode<IntPtrT> tmp116;
    TNode<JSArray> tmp117;
    TNode<Smi> tmp118;
    TNode<Smi> tmp119;
    TNode<Smi> tmp120;
    TNode<Smi> tmp121;
    TNode<Smi> tmp122;
    TNode<FixedArrayBase> tmp123;
    TNode<Smi> tmp124;
    TNode<Smi> tmp125;
    TNode<Smi> tmp126;
    TNode<Smi> tmp127;
    TNode<FixedArray> tmp128;
    ca_.Bind(&block12, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 85);
    TNode<FixedArray> tmp129;
    USE(tmp129);
    tmp129 = UnsafeCast10FixedArray_1438(state_, TNode<Context>{tmp113}, TNode<Object>{tmp123});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 86);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 84);
    DoCopyElements10FixedArray_1521(state_, TNode<FixedArray>{tmp128}, TNode<Smi>{tmp124}, TNode<FixedArray>{tmp129}, TNode<Smi>{tmp125}, TNode<Smi>{tmp126});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 83);
    ca_.Goto(&block13, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128);
  }

  if (block13.is_used()) {
    TNode<Context> tmp130;
    TNode<RawPtrT> tmp131;
    TNode<RawPtrT> tmp132;
    TNode<IntPtrT> tmp133;
    TNode<JSArray> tmp134;
    TNode<Smi> tmp135;
    TNode<Smi> tmp136;
    TNode<Smi> tmp137;
    TNode<Smi> tmp138;
    TNode<Smi> tmp139;
    TNode<FixedArrayBase> tmp140;
    TNode<Smi> tmp141;
    TNode<Smi> tmp142;
    TNode<Smi> tmp143;
    TNode<Smi> tmp144;
    TNode<FixedArray> tmp145;
    ca_.Bind(&block13, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 77);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 74);
    ca_.Goto(&block11, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143);
  }

  if (block11.is_used()) {
    TNode<Context> tmp146;
    TNode<RawPtrT> tmp147;
    TNode<RawPtrT> tmp148;
    TNode<IntPtrT> tmp149;
    TNode<JSArray> tmp150;
    TNode<Smi> tmp151;
    TNode<Smi> tmp152;
    TNode<Smi> tmp153;
    TNode<Smi> tmp154;
    TNode<Smi> tmp155;
    TNode<FixedArrayBase> tmp156;
    TNode<Smi> tmp157;
    TNode<Smi> tmp158;
    TNode<Smi> tmp159;
    ca_.Bind(&block11, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 72);
    ca_.Goto(&block8, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159);
  }

  if (block8.is_used()) {
    TNode<Context> tmp160;
    TNode<RawPtrT> tmp161;
    TNode<RawPtrT> tmp162;
    TNode<IntPtrT> tmp163;
    TNode<JSArray> tmp164;
    TNode<Smi> tmp165;
    TNode<Smi> tmp166;
    TNode<Smi> tmp167;
    TNode<Smi> tmp168;
    TNode<Smi> tmp169;
    TNode<FixedArrayBase> tmp170;
    TNode<Smi> tmp171;
    TNode<Smi> tmp172;
    TNode<Smi> tmp173;
    ca_.Bind(&block8, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 66);
    ca_.Goto(&block6, tmp160, tmp161, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173);
  }

  if (block6.is_used()) {
    TNode<Context> tmp174;
    TNode<RawPtrT> tmp175;
    TNode<RawPtrT> tmp176;
    TNode<IntPtrT> tmp177;
    TNode<JSArray> tmp178;
    TNode<Smi> tmp179;
    TNode<Smi> tmp180;
    TNode<Smi> tmp181;
    TNode<Smi> tmp182;
    TNode<Smi> tmp183;
    TNode<FixedArrayBase> tmp184;
    TNode<Smi> tmp185;
    TNode<Smi> tmp186;
    TNode<Smi> tmp187;
    ca_.Bind(&block6, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 61);
    ca_.Goto(&block3, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183);
  }

  if (block3.is_used()) {
    TNode<Context> tmp188;
    TNode<RawPtrT> tmp189;
    TNode<RawPtrT> tmp190;
    TNode<IntPtrT> tmp191;
    TNode<JSArray> tmp192;
    TNode<Smi> tmp193;
    TNode<Smi> tmp194;
    TNode<Smi> tmp195;
    TNode<Smi> tmp196;
    TNode<Smi> tmp197;
    ca_.Bind(&block3, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 93);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 94);
    TNode<Smi> tmp198;
    USE(tmp198);
    tmp198 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<BoolT> tmp199;
    USE(tmp199);
    tmp199 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp196}, TNode<Smi>{tmp198});
    ca_.Branch(tmp199, &block14, &block15, tmp188, tmp189, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp195);
  }

  if (block14.is_used()) {
    TNode<Context> tmp200;
    TNode<RawPtrT> tmp201;
    TNode<RawPtrT> tmp202;
    TNode<IntPtrT> tmp203;
    TNode<JSArray> tmp204;
    TNode<Smi> tmp205;
    TNode<Smi> tmp206;
    TNode<Smi> tmp207;
    TNode<Smi> tmp208;
    TNode<Smi> tmp209;
    TNode<Smi> tmp210;
    ca_.Bind(&block14, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 96);
    TNode<IntPtrT> tmp211 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp211);
    TNode<FixedArrayBase>tmp212 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp204, tmp211});
    TNode<FixedArray> tmp213;
    USE(tmp213);
    tmp213 = UnsafeCast10FixedArray_1438(state_, TNode<Context>{tmp200}, TNode<Object>{tmp212});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 95);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 97);
    TNode<IntPtrT> tmp214;
    USE(tmp214);
    tmp214 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 2);
    ca_.Goto(&block18, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp213, tmp214);
  }

  if (block18.is_used()) {
    TNode<Context> tmp215;
    TNode<RawPtrT> tmp216;
    TNode<RawPtrT> tmp217;
    TNode<IntPtrT> tmp218;
    TNode<JSArray> tmp219;
    TNode<Smi> tmp220;
    TNode<Smi> tmp221;
    TNode<Smi> tmp222;
    TNode<Smi> tmp223;
    TNode<Smi> tmp224;
    TNode<Smi> tmp225;
    TNode<FixedArray> tmp226;
    TNode<IntPtrT> tmp227;
    ca_.Bind(&block18, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227);
    TNode<BoolT> tmp228;
    USE(tmp228);
    tmp228 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{tmp227}, TNode<IntPtrT>{tmp218});
    ca_.Branch(tmp228, &block16, &block17, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227);
  }

  if (block16.is_used()) {
    TNode<Context> tmp229;
    TNode<RawPtrT> tmp230;
    TNode<RawPtrT> tmp231;
    TNode<IntPtrT> tmp232;
    TNode<JSArray> tmp233;
    TNode<Smi> tmp234;
    TNode<Smi> tmp235;
    TNode<Smi> tmp236;
    TNode<Smi> tmp237;
    TNode<Smi> tmp238;
    TNode<Smi> tmp239;
    TNode<FixedArray> tmp240;
    TNode<IntPtrT> tmp241;
    ca_.Bind(&block16, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 98);
    TNode<Object> tmp242;
    USE(tmp242);
    tmp242 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp230}, TNode<RawPtrT>{tmp231}, TNode<IntPtrT>{tmp232}}, TNode<IntPtrT>{tmp241});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 101);
    TNode<Smi> tmp243;
    USE(tmp243);
    tmp243 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp244;
    USE(tmp244);
    tmp244 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp239}, TNode<Smi>{tmp243});
    TNode<Object> tmp245;
    USE(tmp245);
    tmp245 = UnsafeCast90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol_1441(state_, TNode<Context>{tmp229}, TNode<Object>{tmp242});
    StoreFixedArrayDirect_217(state_, TNode<FixedArray>{tmp240}, TNode<Smi>{tmp239}, TNode<Object>{tmp245});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 97);
    ca_.Goto(&block19, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp244, tmp240, tmp241);
  }

  if (block19.is_used()) {
    TNode<Context> tmp246;
    TNode<RawPtrT> tmp247;
    TNode<RawPtrT> tmp248;
    TNode<IntPtrT> tmp249;
    TNode<JSArray> tmp250;
    TNode<Smi> tmp251;
    TNode<Smi> tmp252;
    TNode<Smi> tmp253;
    TNode<Smi> tmp254;
    TNode<Smi> tmp255;
    TNode<Smi> tmp256;
    TNode<FixedArray> tmp257;
    TNode<IntPtrT> tmp258;
    ca_.Bind(&block19, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258);
    TNode<IntPtrT> tmp259;
    USE(tmp259);
    tmp259 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<IntPtrT> tmp260;
    USE(tmp260);
    tmp260 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp258}, TNode<IntPtrT>{tmp259});
    ca_.Goto(&block18, tmp246, tmp247, tmp248, tmp249, tmp250, tmp251, tmp252, tmp253, tmp254, tmp255, tmp256, tmp257, tmp260);
  }

  if (block17.is_used()) {
    TNode<Context> tmp261;
    TNode<RawPtrT> tmp262;
    TNode<RawPtrT> tmp263;
    TNode<IntPtrT> tmp264;
    TNode<JSArray> tmp265;
    TNode<Smi> tmp266;
    TNode<Smi> tmp267;
    TNode<Smi> tmp268;
    TNode<Smi> tmp269;
    TNode<Smi> tmp270;
    TNode<Smi> tmp271;
    TNode<FixedArray> tmp272;
    TNode<IntPtrT> tmp273;
    ca_.Bind(&block17, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 94);
    ca_.Goto(&block15, tmp261, tmp262, tmp263, tmp264, tmp265, tmp266, tmp267, tmp268, tmp269, tmp270, tmp271);
  }

  if (block15.is_used()) {
    TNode<Context> tmp274;
    TNode<RawPtrT> tmp275;
    TNode<RawPtrT> tmp276;
    TNode<IntPtrT> tmp277;
    TNode<JSArray> tmp278;
    TNode<Smi> tmp279;
    TNode<Smi> tmp280;
    TNode<Smi> tmp281;
    TNode<Smi> tmp282;
    TNode<Smi> tmp283;
    TNode<Smi> tmp284;
    ca_.Bind(&block15, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 106);
    TNode<IntPtrT> tmp285 = ca_.IntPtrConstant(JSArray::kLengthOffset);
    USE(tmp285);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp278, tmp285}, tmp280);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 57);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 169);
    ca_.Goto(&block1, tmp274, tmp275, tmp276, tmp277, tmp278, tmp279, tmp280, tmp281, tmp282, tmp283);
  }

  if (block1.is_used()) {
    TNode<Context> tmp286;
    TNode<RawPtrT> tmp287;
    TNode<RawPtrT> tmp288;
    TNode<IntPtrT> tmp289;
    TNode<JSArray> tmp290;
    TNode<Smi> tmp291;
    TNode<Smi> tmp292;
    TNode<Smi> tmp293;
    TNode<Smi> tmp294;
    TNode<Smi> tmp295;
    ca_.Bind(&block1, &tmp286, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295);
    ca_.Goto(&block20, tmp286, tmp287, tmp288, tmp289, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295);
  }

    TNode<Context> tmp296;
    TNode<RawPtrT> tmp297;
    TNode<RawPtrT> tmp298;
    TNode<IntPtrT> tmp299;
    TNode<JSArray> tmp300;
    TNode<Smi> tmp301;
    TNode<Smi> tmp302;
    TNode<Smi> tmp303;
    TNode<Smi> tmp304;
    TNode<Smi> tmp305;
    ca_.Bind(&block20, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305);
}

void FastSplice16FixedDoubleArray20UT5ATSmi10HeapNumber_1468(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructArguments p_args, TNode<JSArray> p_a, TNode<Smi> p_length, TNode<Smi> p_newLength, TNode<Smi> p_actualStart, TNode<Smi> p_insertCount, TNode<Smi> p_actualDeleteCount) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi, Smi, FixedDoubleArray> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi, Smi, FixedDoubleArray> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, FixedArrayBase, Smi, Smi, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, Smi, FixedDoubleArray, IntPtrT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, Smi, FixedDoubleArray, IntPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, Smi, FixedDoubleArray, IntPtrT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, Smi, FixedDoubleArray, IntPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT, IntPtrT, JSArray, Smi, Smi, Smi, Smi, Smi> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_args.frame, p_args.base, p_args.length, p_a, p_length, p_newLength, p_actualStart, p_insertCount, p_actualDeleteCount);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<RawPtrT> tmp2;
    TNode<IntPtrT> tmp3;
    TNode<JSArray> tmp4;
    TNode<Smi> tmp5;
    TNode<Smi> tmp6;
    TNode<Smi> tmp7;
    TNode<Smi> tmp8;
    TNode<Smi> tmp9;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 59);
    EnsureWriteableFastElements_50(state_, TNode<Context>{tmp0}, TNode<JSArray>{tmp4});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 61);
    TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).SmiNotEqual(TNode<Smi>{tmp8}, TNode<Smi>{tmp9});
    ca_.Branch(tmp10, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp9);
  }

  if (block2.is_used()) {
    TNode<Context> tmp11;
    TNode<RawPtrT> tmp12;
    TNode<RawPtrT> tmp13;
    TNode<IntPtrT> tmp14;
    TNode<JSArray> tmp15;
    TNode<Smi> tmp16;
    TNode<Smi> tmp17;
    TNode<Smi> tmp18;
    TNode<Smi> tmp19;
    TNode<Smi> tmp20;
    ca_.Bind(&block2, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 62);
    TNode<IntPtrT> tmp21 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp21);
    TNode<FixedArrayBase>tmp22 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp15, tmp21});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 63);
    TNode<Smi> tmp23;
    USE(tmp23);
    tmp23 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp18}, TNode<Smi>{tmp19});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 64);
    TNode<Smi> tmp24;
    USE(tmp24);
    tmp24 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp18}, TNode<Smi>{tmp20});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 65);
    TNode<Smi> tmp25;
    USE(tmp25);
    tmp25 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp16}, TNode<Smi>{tmp20});
    TNode<Smi> tmp26;
    USE(tmp26);
    tmp26 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp25}, TNode<Smi>{tmp18});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 66);
    TNode<BoolT> tmp27;
    USE(tmp27);
    tmp27 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp19}, TNode<Smi>{tmp20});
    ca_.Branch(tmp27, &block4, &block5, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp22, tmp23, tmp24, tmp26);
  }

  if (block4.is_used()) {
    TNode<Context> tmp28;
    TNode<RawPtrT> tmp29;
    TNode<RawPtrT> tmp30;
    TNode<IntPtrT> tmp31;
    TNode<JSArray> tmp32;
    TNode<Smi> tmp33;
    TNode<Smi> tmp34;
    TNode<Smi> tmp35;
    TNode<Smi> tmp36;
    TNode<Smi> tmp37;
    TNode<FixedArrayBase> tmp38;
    TNode<Smi> tmp39;
    TNode<Smi> tmp40;
    TNode<Smi> tmp41;
    ca_.Bind(&block4, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 69);
    TNode<FixedDoubleArray> tmp42;
    USE(tmp42);
    tmp42 = UnsafeCast16FixedDoubleArray_1442(state_, TNode<Context>{tmp28}, TNode<Object>{tmp38});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 68);
    DoMoveElements16FixedDoubleArray_1522(state_, TNode<FixedDoubleArray>{tmp42}, TNode<Smi>{tmp39}, TNode<Smi>{tmp40}, TNode<Smi>{tmp41});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 71);
    TNode<FixedDoubleArray> tmp43;
    USE(tmp43);
    tmp43 = UnsafeCast16FixedDoubleArray_1442(state_, TNode<Context>{tmp28}, TNode<Object>{tmp38});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 70);
    StoreHoles16FixedDoubleArray_1523(state_, TNode<FixedDoubleArray>{tmp43}, TNode<Smi>{tmp34}, TNode<Smi>{tmp33});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 66);
    ca_.Goto(&block6, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41);
  }

  if (block5.is_used()) {
    TNode<Context> tmp44;
    TNode<RawPtrT> tmp45;
    TNode<RawPtrT> tmp46;
    TNode<IntPtrT> tmp47;
    TNode<JSArray> tmp48;
    TNode<Smi> tmp49;
    TNode<Smi> tmp50;
    TNode<Smi> tmp51;
    TNode<Smi> tmp52;
    TNode<Smi> tmp53;
    TNode<FixedArrayBase> tmp54;
    TNode<Smi> tmp55;
    TNode<Smi> tmp56;
    TNode<Smi> tmp57;
    ca_.Bind(&block5, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 72);
    TNode<BoolT> tmp58;
    USE(tmp58);
    tmp58 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp52}, TNode<Smi>{tmp53});
    ca_.Branch(tmp58, &block7, &block8, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57);
  }

  if (block7.is_used()) {
    TNode<Context> tmp59;
    TNode<RawPtrT> tmp60;
    TNode<RawPtrT> tmp61;
    TNode<IntPtrT> tmp62;
    TNode<JSArray> tmp63;
    TNode<Smi> tmp64;
    TNode<Smi> tmp65;
    TNode<Smi> tmp66;
    TNode<Smi> tmp67;
    TNode<Smi> tmp68;
    TNode<FixedArrayBase> tmp69;
    TNode<Smi> tmp70;
    TNode<Smi> tmp71;
    TNode<Smi> tmp72;
    ca_.Bind(&block7, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 74);
    TNode<IntPtrT> tmp73 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp73);
    TNode<Smi>tmp74 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp69, tmp73});
    TNode<BoolT> tmp75;
    USE(tmp75);
    tmp75 = CodeStubAssembler(state_).SmiLessThanOrEqual(TNode<Smi>{tmp65}, TNode<Smi>{tmp74});
    ca_.Branch(tmp75, &block9, &block10, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72);
  }

  if (block9.is_used()) {
    TNode<Context> tmp76;
    TNode<RawPtrT> tmp77;
    TNode<RawPtrT> tmp78;
    TNode<IntPtrT> tmp79;
    TNode<JSArray> tmp80;
    TNode<Smi> tmp81;
    TNode<Smi> tmp82;
    TNode<Smi> tmp83;
    TNode<Smi> tmp84;
    TNode<Smi> tmp85;
    TNode<FixedArrayBase> tmp86;
    TNode<Smi> tmp87;
    TNode<Smi> tmp88;
    TNode<Smi> tmp89;
    ca_.Bind(&block9, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 76);
    TNode<FixedDoubleArray> tmp90;
    USE(tmp90);
    tmp90 = UnsafeCast16FixedDoubleArray_1442(state_, TNode<Context>{tmp76}, TNode<Object>{tmp86});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 75);
    DoMoveElements16FixedDoubleArray_1522(state_, TNode<FixedDoubleArray>{tmp90}, TNode<Smi>{tmp87}, TNode<Smi>{tmp88}, TNode<Smi>{tmp89});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 74);
    ca_.Goto(&block11, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89);
  }

  if (block10.is_used()) {
    TNode<Context> tmp91;
    TNode<RawPtrT> tmp92;
    TNode<RawPtrT> tmp93;
    TNode<IntPtrT> tmp94;
    TNode<JSArray> tmp95;
    TNode<Smi> tmp96;
    TNode<Smi> tmp97;
    TNode<Smi> tmp98;
    TNode<Smi> tmp99;
    TNode<Smi> tmp100;
    TNode<FixedArrayBase> tmp101;
    TNode<Smi> tmp102;
    TNode<Smi> tmp103;
    TNode<Smi> tmp104;
    ca_.Bind(&block10, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 79);
    TNode<Smi> tmp105;
    USE(tmp105);
    tmp105 = CodeStubAssembler(state_).CalculateNewElementsCapacity(TNode<Smi>{tmp97});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 81);
    TNode<Smi> tmp106;
    USE(tmp106);
    tmp106 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<FixedDoubleArray> tmp107;
    USE(tmp107);
    tmp107 = Extract16FixedDoubleArray_43(state_, TNode<Context>{tmp91}, TNode<FixedArrayBase>{tmp101}, TNode<Smi>{tmp106}, TNode<Smi>{tmp98}, TNode<Smi>{tmp105});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 80);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 82);
    TNode<IntPtrT> tmp108 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp108);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp95, tmp108}, tmp107);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 83);
    TNode<IntPtrT> tmp109 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp109);
    TNode<Smi>tmp110 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp101, tmp109});
    TNode<Smi> tmp111;
    USE(tmp111);
    tmp111 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<BoolT> tmp112;
    USE(tmp112);
    tmp112 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp110}, TNode<Smi>{tmp111});
    ca_.Branch(tmp112, &block12, &block13, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp107);
  }

  if (block12.is_used()) {
    TNode<Context> tmp113;
    TNode<RawPtrT> tmp114;
    TNode<RawPtrT> tmp115;
    TNode<IntPtrT> tmp116;
    TNode<JSArray> tmp117;
    TNode<Smi> tmp118;
    TNode<Smi> tmp119;
    TNode<Smi> tmp120;
    TNode<Smi> tmp121;
    TNode<Smi> tmp122;
    TNode<FixedArrayBase> tmp123;
    TNode<Smi> tmp124;
    TNode<Smi> tmp125;
    TNode<Smi> tmp126;
    TNode<Smi> tmp127;
    TNode<FixedDoubleArray> tmp128;
    ca_.Bind(&block12, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 85);
    TNode<FixedDoubleArray> tmp129;
    USE(tmp129);
    tmp129 = UnsafeCast16FixedDoubleArray_1442(state_, TNode<Context>{tmp113}, TNode<Object>{tmp123});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 86);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 84);
    DoCopyElements16FixedDoubleArray_1524(state_, TNode<FixedDoubleArray>{tmp128}, TNode<Smi>{tmp124}, TNode<FixedDoubleArray>{tmp129}, TNode<Smi>{tmp125}, TNode<Smi>{tmp126});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 83);
    ca_.Goto(&block13, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128);
  }

  if (block13.is_used()) {
    TNode<Context> tmp130;
    TNode<RawPtrT> tmp131;
    TNode<RawPtrT> tmp132;
    TNode<IntPtrT> tmp133;
    TNode<JSArray> tmp134;
    TNode<Smi> tmp135;
    TNode<Smi> tmp136;
    TNode<Smi> tmp137;
    TNode<Smi> tmp138;
    TNode<Smi> tmp139;
    TNode<FixedArrayBase> tmp140;
    TNode<Smi> tmp141;
    TNode<Smi> tmp142;
    TNode<Smi> tmp143;
    TNode<Smi> tmp144;
    TNode<FixedDoubleArray> tmp145;
    ca_.Bind(&block13, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 77);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 74);
    ca_.Goto(&block11, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143);
  }

  if (block11.is_used()) {
    TNode<Context> tmp146;
    TNode<RawPtrT> tmp147;
    TNode<RawPtrT> tmp148;
    TNode<IntPtrT> tmp149;
    TNode<JSArray> tmp150;
    TNode<Smi> tmp151;
    TNode<Smi> tmp152;
    TNode<Smi> tmp153;
    TNode<Smi> tmp154;
    TNode<Smi> tmp155;
    TNode<FixedArrayBase> tmp156;
    TNode<Smi> tmp157;
    TNode<Smi> tmp158;
    TNode<Smi> tmp159;
    ca_.Bind(&block11, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 72);
    ca_.Goto(&block8, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159);
  }

  if (block8.is_used()) {
    TNode<Context> tmp160;
    TNode<RawPtrT> tmp161;
    TNode<RawPtrT> tmp162;
    TNode<IntPtrT> tmp163;
    TNode<JSArray> tmp164;
    TNode<Smi> tmp165;
    TNode<Smi> tmp166;
    TNode<Smi> tmp167;
    TNode<Smi> tmp168;
    TNode<Smi> tmp169;
    TNode<FixedArrayBase> tmp170;
    TNode<Smi> tmp171;
    TNode<Smi> tmp172;
    TNode<Smi> tmp173;
    ca_.Bind(&block8, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 66);
    ca_.Goto(&block6, tmp160, tmp161, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173);
  }

  if (block6.is_used()) {
    TNode<Context> tmp174;
    TNode<RawPtrT> tmp175;
    TNode<RawPtrT> tmp176;
    TNode<IntPtrT> tmp177;
    TNode<JSArray> tmp178;
    TNode<Smi> tmp179;
    TNode<Smi> tmp180;
    TNode<Smi> tmp181;
    TNode<Smi> tmp182;
    TNode<Smi> tmp183;
    TNode<FixedArrayBase> tmp184;
    TNode<Smi> tmp185;
    TNode<Smi> tmp186;
    TNode<Smi> tmp187;
    ca_.Bind(&block6, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 61);
    ca_.Goto(&block3, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183);
  }

  if (block3.is_used()) {
    TNode<Context> tmp188;
    TNode<RawPtrT> tmp189;
    TNode<RawPtrT> tmp190;
    TNode<IntPtrT> tmp191;
    TNode<JSArray> tmp192;
    TNode<Smi> tmp193;
    TNode<Smi> tmp194;
    TNode<Smi> tmp195;
    TNode<Smi> tmp196;
    TNode<Smi> tmp197;
    ca_.Bind(&block3, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 93);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 94);
    TNode<Smi> tmp198;
    USE(tmp198);
    tmp198 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<BoolT> tmp199;
    USE(tmp199);
    tmp199 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp196}, TNode<Smi>{tmp198});
    ca_.Branch(tmp199, &block14, &block15, tmp188, tmp189, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp195);
  }

  if (block14.is_used()) {
    TNode<Context> tmp200;
    TNode<RawPtrT> tmp201;
    TNode<RawPtrT> tmp202;
    TNode<IntPtrT> tmp203;
    TNode<JSArray> tmp204;
    TNode<Smi> tmp205;
    TNode<Smi> tmp206;
    TNode<Smi> tmp207;
    TNode<Smi> tmp208;
    TNode<Smi> tmp209;
    TNode<Smi> tmp210;
    ca_.Bind(&block14, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 96);
    TNode<IntPtrT> tmp211 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp211);
    TNode<FixedArrayBase>tmp212 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp204, tmp211});
    TNode<FixedDoubleArray> tmp213;
    USE(tmp213);
    tmp213 = UnsafeCast16FixedDoubleArray_1442(state_, TNode<Context>{tmp200}, TNode<Object>{tmp212});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 95);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 97);
    TNode<IntPtrT> tmp214;
    USE(tmp214);
    tmp214 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 2);
    ca_.Goto(&block18, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp213, tmp214);
  }

  if (block18.is_used()) {
    TNode<Context> tmp215;
    TNode<RawPtrT> tmp216;
    TNode<RawPtrT> tmp217;
    TNode<IntPtrT> tmp218;
    TNode<JSArray> tmp219;
    TNode<Smi> tmp220;
    TNode<Smi> tmp221;
    TNode<Smi> tmp222;
    TNode<Smi> tmp223;
    TNode<Smi> tmp224;
    TNode<Smi> tmp225;
    TNode<FixedDoubleArray> tmp226;
    TNode<IntPtrT> tmp227;
    ca_.Bind(&block18, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227);
    TNode<BoolT> tmp228;
    USE(tmp228);
    tmp228 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{tmp227}, TNode<IntPtrT>{tmp218});
    ca_.Branch(tmp228, &block16, &block17, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227);
  }

  if (block16.is_used()) {
    TNode<Context> tmp229;
    TNode<RawPtrT> tmp230;
    TNode<RawPtrT> tmp231;
    TNode<IntPtrT> tmp232;
    TNode<JSArray> tmp233;
    TNode<Smi> tmp234;
    TNode<Smi> tmp235;
    TNode<Smi> tmp236;
    TNode<Smi> tmp237;
    TNode<Smi> tmp238;
    TNode<Smi> tmp239;
    TNode<FixedDoubleArray> tmp240;
    TNode<IntPtrT> tmp241;
    ca_.Bind(&block16, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 98);
    TNode<Object> tmp242;
    USE(tmp242);
    tmp242 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp230}, TNode<RawPtrT>{tmp231}, TNode<IntPtrT>{tmp232}}, TNode<IntPtrT>{tmp241});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 101);
    TNode<Smi> tmp243;
    USE(tmp243);
    tmp243 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp244;
    USE(tmp244);
    tmp244 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp239}, TNode<Smi>{tmp243});
    TNode<Number> tmp245;
    USE(tmp245);
    tmp245 = UnsafeCast20UT5ATSmi10HeapNumber_1525(state_, TNode<Context>{tmp229}, TNode<Object>{tmp242});
    StoreFixedDoubleArrayDirect_216(state_, TNode<FixedDoubleArray>{tmp240}, TNode<Smi>{tmp239}, TNode<Number>{tmp245});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 97);
    ca_.Goto(&block19, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp244, tmp240, tmp241);
  }

  if (block19.is_used()) {
    TNode<Context> tmp246;
    TNode<RawPtrT> tmp247;
    TNode<RawPtrT> tmp248;
    TNode<IntPtrT> tmp249;
    TNode<JSArray> tmp250;
    TNode<Smi> tmp251;
    TNode<Smi> tmp252;
    TNode<Smi> tmp253;
    TNode<Smi> tmp254;
    TNode<Smi> tmp255;
    TNode<Smi> tmp256;
    TNode<FixedDoubleArray> tmp257;
    TNode<IntPtrT> tmp258;
    ca_.Bind(&block19, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258);
    TNode<IntPtrT> tmp259;
    USE(tmp259);
    tmp259 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<IntPtrT> tmp260;
    USE(tmp260);
    tmp260 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp258}, TNode<IntPtrT>{tmp259});
    ca_.Goto(&block18, tmp246, tmp247, tmp248, tmp249, tmp250, tmp251, tmp252, tmp253, tmp254, tmp255, tmp256, tmp257, tmp260);
  }

  if (block17.is_used()) {
    TNode<Context> tmp261;
    TNode<RawPtrT> tmp262;
    TNode<RawPtrT> tmp263;
    TNode<IntPtrT> tmp264;
    TNode<JSArray> tmp265;
    TNode<Smi> tmp266;
    TNode<Smi> tmp267;
    TNode<Smi> tmp268;
    TNode<Smi> tmp269;
    TNode<Smi> tmp270;
    TNode<Smi> tmp271;
    TNode<FixedDoubleArray> tmp272;
    TNode<IntPtrT> tmp273;
    ca_.Bind(&block17, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 94);
    ca_.Goto(&block15, tmp261, tmp262, tmp263, tmp264, tmp265, tmp266, tmp267, tmp268, tmp269, tmp270, tmp271);
  }

  if (block15.is_used()) {
    TNode<Context> tmp274;
    TNode<RawPtrT> tmp275;
    TNode<RawPtrT> tmp276;
    TNode<IntPtrT> tmp277;
    TNode<JSArray> tmp278;
    TNode<Smi> tmp279;
    TNode<Smi> tmp280;
    TNode<Smi> tmp281;
    TNode<Smi> tmp282;
    TNode<Smi> tmp283;
    TNode<Smi> tmp284;
    ca_.Bind(&block15, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 106);
    TNode<IntPtrT> tmp285 = ca_.IntPtrConstant(JSArray::kLengthOffset);
    USE(tmp285);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp278, tmp285}, tmp280);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 57);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 173);
    ca_.Goto(&block1, tmp274, tmp275, tmp276, tmp277, tmp278, tmp279, tmp280, tmp281, tmp282, tmp283);
  }

  if (block1.is_used()) {
    TNode<Context> tmp286;
    TNode<RawPtrT> tmp287;
    TNode<RawPtrT> tmp288;
    TNode<IntPtrT> tmp289;
    TNode<JSArray> tmp290;
    TNode<Smi> tmp291;
    TNode<Smi> tmp292;
    TNode<Smi> tmp293;
    TNode<Smi> tmp294;
    TNode<Smi> tmp295;
    ca_.Bind(&block1, &tmp286, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295);
    ca_.Goto(&block20, tmp286, tmp287, tmp288, tmp289, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295);
  }

    TNode<Context> tmp296;
    TNode<RawPtrT> tmp297;
    TNode<RawPtrT> tmp298;
    TNode<IntPtrT> tmp299;
    TNode<JSArray> tmp300;
    TNode<Smi> tmp301;
    TNode<Smi> tmp302;
    TNode<Smi> tmp303;
    TNode<Smi> tmp304;
    TNode<Smi> tmp305;
    ca_.Bind(&block20, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305);
}

void DoMoveElements10FixedArray_1519(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_elements, TNode<Smi> p_dstIndex, TNode<Smi> p_srcIndex, TNode<Smi> p_count) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, Smi, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_elements, p_dstIndex, p_srcIndex, p_count);

  if (block0.is_used()) {
    TNode<FixedArray> tmp0;
    TNode<Smi> tmp1;
    TNode<Smi> tmp2;
    TNode<Smi> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 35);
    TNode<IntPtrT> tmp4;
    USE(tmp4);
    tmp4 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp1});
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 36);
    TNode<IntPtrT> tmp6;
    USE(tmp6);
    tmp6 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp3});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 34);
    TorqueMoveElements_232(state_, TNode<FixedArray>{tmp0}, TNode<IntPtrT>{tmp4}, TNode<IntPtrT>{tmp5}, TNode<IntPtrT>{tmp6});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 68);
    ca_.Goto(&block1, tmp0, tmp1, tmp2, tmp3);
  }

  if (block1.is_used()) {
    TNode<FixedArray> tmp7;
    TNode<Smi> tmp8;
    TNode<Smi> tmp9;
    TNode<Smi> tmp10;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block2, tmp7, tmp8, tmp9, tmp10);
  }

    TNode<FixedArray> tmp11;
    TNode<Smi> tmp12;
    TNode<Smi> tmp13;
    TNode<Smi> tmp14;
    ca_.Bind(&block2, &tmp11, &tmp12, &tmp13, &tmp14);
}

void StoreHoles10FixedArray_1520(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_elements, TNode<Smi> p_holeStartIndex, TNode<Smi> p_holeEndIndex) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_elements, p_holeStartIndex, p_holeEndIndex);

  if (block0.is_used()) {
    TNode<FixedArray> tmp0;
    TNode<Smi> tmp1;
    TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 41);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp1);
  }

  if (block4.is_used()) {
    TNode<FixedArray> tmp3;
    TNode<Smi> tmp4;
    TNode<Smi> tmp5;
    TNode<Smi> tmp6;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5, &tmp6);
    TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp6}, TNode<Smi>{tmp5});
    ca_.Branch(tmp7, &block2, &block3, tmp3, tmp4, tmp5, tmp6);
  }

  if (block2.is_used()) {
    TNode<FixedArray> tmp8;
    TNode<Smi> tmp9;
    TNode<Smi> tmp10;
    TNode<Smi> tmp11;
    ca_.Bind(&block2, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 42);
    StoreArrayHole_54(state_, TNode<FixedArray>{tmp8}, TNode<Smi>{tmp11});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 41);
    ca_.Goto(&block5, tmp8, tmp9, tmp10, tmp11);
  }

  if (block5.is_used()) {
    TNode<FixedArray> tmp12;
    TNode<Smi> tmp13;
    TNode<Smi> tmp14;
    TNode<Smi> tmp15;
    ca_.Bind(&block5, &tmp12, &tmp13, &tmp14, &tmp15);
    TNode<Smi> tmp16;
    USE(tmp16);
    tmp16 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp17;
    USE(tmp17);
    tmp17 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp15}, TNode<Smi>{tmp16});
    ca_.Goto(&block4, tmp12, tmp13, tmp14, tmp17);
  }

  if (block3.is_used()) {
    TNode<FixedArray> tmp18;
    TNode<Smi> tmp19;
    TNode<Smi> tmp20;
    TNode<Smi> tmp21;
    ca_.Bind(&block3, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 70);
    ca_.Goto(&block1, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    TNode<FixedArray> tmp22;
    TNode<Smi> tmp23;
    TNode<Smi> tmp24;
    ca_.Bind(&block1, &tmp22, &tmp23, &tmp24);
    ca_.Goto(&block6, tmp22, tmp23, tmp24);
  }

    TNode<FixedArray> tmp25;
    TNode<Smi> tmp26;
    TNode<Smi> tmp27;
    ca_.Bind(&block6, &tmp25, &tmp26, &tmp27);
}

void DoCopyElements10FixedArray_1521(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_dstElements, TNode<Smi> p_dstIndex, TNode<FixedArray> p_srcElements, TNode<Smi> p_srcIndex, TNode<Smi> p_count) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, FixedArray, Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, FixedArray, Smi, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, FixedArray, Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_dstElements, p_dstIndex, p_srcElements, p_srcIndex, p_count);

  if (block0.is_used()) {
    TNode<FixedArray> tmp0;
    TNode<Smi> tmp1;
    TNode<FixedArray> tmp2;
    TNode<Smi> tmp3;
    TNode<Smi> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 50);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 51);
    TNode<IntPtrT> tmp6;
    USE(tmp6);
    tmp6 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp3});
    TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp4});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 49);
    TorqueCopyElements_234(state_, TNode<FixedArray>{tmp0}, TNode<IntPtrT>{tmp5}, TNode<FixedArray>{tmp2}, TNode<IntPtrT>{tmp6}, TNode<IntPtrT>{tmp7});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 84);
    ca_.Goto(&block1, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    TNode<FixedArray> tmp8;
    TNode<Smi> tmp9;
    TNode<FixedArray> tmp10;
    TNode<Smi> tmp11;
    TNode<Smi> tmp12;
    ca_.Bind(&block1, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.Goto(&block2, tmp8, tmp9, tmp10, tmp11, tmp12);
  }

    TNode<FixedArray> tmp13;
    TNode<Smi> tmp14;
    TNode<FixedArray> tmp15;
    TNode<Smi> tmp16;
    TNode<Smi> tmp17;
    ca_.Bind(&block2, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
}

void DoMoveElements16FixedDoubleArray_1522(compiler::CodeAssemblerState* state_, TNode<FixedDoubleArray> p_elements, TNode<Smi> p_dstIndex, TNode<Smi> p_srcIndex, TNode<Smi> p_count) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Smi, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_elements, p_dstIndex, p_srcIndex, p_count);

  if (block0.is_used()) {
    TNode<FixedDoubleArray> tmp0;
    TNode<Smi> tmp1;
    TNode<Smi> tmp2;
    TNode<Smi> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 35);
    TNode<IntPtrT> tmp4;
    USE(tmp4);
    tmp4 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp1});
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 36);
    TNode<IntPtrT> tmp6;
    USE(tmp6);
    tmp6 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp3});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 34);
    TorqueMoveElements_233(state_, TNode<FixedDoubleArray>{tmp0}, TNode<IntPtrT>{tmp4}, TNode<IntPtrT>{tmp5}, TNode<IntPtrT>{tmp6});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 68);
    ca_.Goto(&block1, tmp0, tmp1, tmp2, tmp3);
  }

  if (block1.is_used()) {
    TNode<FixedDoubleArray> tmp7;
    TNode<Smi> tmp8;
    TNode<Smi> tmp9;
    TNode<Smi> tmp10;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block2, tmp7, tmp8, tmp9, tmp10);
  }

    TNode<FixedDoubleArray> tmp11;
    TNode<Smi> tmp12;
    TNode<Smi> tmp13;
    TNode<Smi> tmp14;
    ca_.Bind(&block2, &tmp11, &tmp12, &tmp13, &tmp14);
}

void StoreHoles16FixedDoubleArray_1523(compiler::CodeAssemblerState* state_, TNode<FixedDoubleArray> p_elements, TNode<Smi> p_holeStartIndex, TNode<Smi> p_holeEndIndex) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_elements, p_holeStartIndex, p_holeEndIndex);

  if (block0.is_used()) {
    TNode<FixedDoubleArray> tmp0;
    TNode<Smi> tmp1;
    TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 41);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp1);
  }

  if (block4.is_used()) {
    TNode<FixedDoubleArray> tmp3;
    TNode<Smi> tmp4;
    TNode<Smi> tmp5;
    TNode<Smi> tmp6;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5, &tmp6);
    TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp6}, TNode<Smi>{tmp5});
    ca_.Branch(tmp7, &block2, &block3, tmp3, tmp4, tmp5, tmp6);
  }

  if (block2.is_used()) {
    TNode<FixedDoubleArray> tmp8;
    TNode<Smi> tmp9;
    TNode<Smi> tmp10;
    TNode<Smi> tmp11;
    ca_.Bind(&block2, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 42);
    StoreArrayHole_53(state_, TNode<FixedDoubleArray>{tmp8}, TNode<Smi>{tmp11});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 41);
    ca_.Goto(&block5, tmp8, tmp9, tmp10, tmp11);
  }

  if (block5.is_used()) {
    TNode<FixedDoubleArray> tmp12;
    TNode<Smi> tmp13;
    TNode<Smi> tmp14;
    TNode<Smi> tmp15;
    ca_.Bind(&block5, &tmp12, &tmp13, &tmp14, &tmp15);
    TNode<Smi> tmp16;
    USE(tmp16);
    tmp16 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp17;
    USE(tmp17);
    tmp17 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp15}, TNode<Smi>{tmp16});
    ca_.Goto(&block4, tmp12, tmp13, tmp14, tmp17);
  }

  if (block3.is_used()) {
    TNode<FixedDoubleArray> tmp18;
    TNode<Smi> tmp19;
    TNode<Smi> tmp20;
    TNode<Smi> tmp21;
    ca_.Bind(&block3, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 70);
    ca_.Goto(&block1, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    TNode<FixedDoubleArray> tmp22;
    TNode<Smi> tmp23;
    TNode<Smi> tmp24;
    ca_.Bind(&block1, &tmp22, &tmp23, &tmp24);
    ca_.Goto(&block6, tmp22, tmp23, tmp24);
  }

    TNode<FixedDoubleArray> tmp25;
    TNode<Smi> tmp26;
    TNode<Smi> tmp27;
    ca_.Bind(&block6, &tmp25, &tmp26, &tmp27);
}

void DoCopyElements16FixedDoubleArray_1524(compiler::CodeAssemblerState* state_, TNode<FixedDoubleArray> p_dstElements, TNode<Smi> p_dstIndex, TNode<FixedDoubleArray> p_srcElements, TNode<Smi> p_srcIndex, TNode<Smi> p_count) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, FixedDoubleArray, Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, FixedDoubleArray, Smi, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, FixedDoubleArray, Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_dstElements, p_dstIndex, p_srcElements, p_srcIndex, p_count);

  if (block0.is_used()) {
    TNode<FixedDoubleArray> tmp0;
    TNode<Smi> tmp1;
    TNode<FixedDoubleArray> tmp2;
    TNode<Smi> tmp3;
    TNode<Smi> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 50);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 51);
    TNode<IntPtrT> tmp6;
    USE(tmp6);
    tmp6 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp3});
    TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp4});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 49);
    TorqueCopyElements_235(state_, TNode<FixedDoubleArray>{tmp0}, TNode<IntPtrT>{tmp5}, TNode<FixedDoubleArray>{tmp2}, TNode<IntPtrT>{tmp6}, TNode<IntPtrT>{tmp7});
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 84);
    ca_.Goto(&block1, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    TNode<FixedDoubleArray> tmp8;
    TNode<Smi> tmp9;
    TNode<FixedDoubleArray> tmp10;
    TNode<Smi> tmp11;
    TNode<Smi> tmp12;
    ca_.Bind(&block1, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.Goto(&block2, tmp8, tmp9, tmp10, tmp11, tmp12);
  }

    TNode<FixedDoubleArray> tmp13;
    TNode<Smi> tmp14;
    TNode<FixedDoubleArray> tmp15;
    TNode<Smi> tmp16;
    TNode<Smi> tmp17;
    ca_.Bind(&block2, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
}

TNode<Number> UnsafeCast20UT5ATSmi10HeapNumber_1525(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 2846);
    TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    TNode<Number> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/array-splice.tq", 101);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    TNode<Context> tmp6;
    TNode<Object> tmp7;
    TNode<Number> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return TNode<Number>{tmp8};
}

}  // namespace internal
}  // namespace v8

