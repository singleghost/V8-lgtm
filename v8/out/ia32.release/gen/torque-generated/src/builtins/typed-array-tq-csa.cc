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

TNode<JSTypedArray> EnsureAttached_376(compiler::CodeAssemblerState* state_, TNode<JSTypedArray> p_array, compiler::CodeAssemblerLabel* label_Detached) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_array);

  if (block0.is_used()) {
    TNode<JSTypedArray> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 90);
    TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp1);
    TNode<JSArrayBuffer>tmp2 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp0, tmp1});
    TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).IsDetachedBuffer(TNode<JSArrayBuffer>{tmp2});
    ca_.Branch(tmp3, &block3, &block4, tmp0);
  }

  if (block3.is_used()) {
    TNode<JSTypedArray> tmp4;
    ca_.Bind(&block3, &tmp4);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    TNode<JSTypedArray> tmp5;
    ca_.Bind(&block4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 91);
    TNode<JSTypedArray> tmp6;
    USE(tmp6);
    tmp6 = (TNode<JSTypedArray>{tmp5});
    ca_.Goto(&block2, tmp5, tmp6);
  }

  if (block2.is_used()) {
    TNode<JSTypedArray> tmp7;
    TNode<JSTypedArray> tmp8;
    ca_.Bind(&block2, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 88);
    ca_.Goto(&block5, tmp7, tmp8);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Detached);
  }

    TNode<JSTypedArray> tmp9;
    TNode<JSTypedArray> tmp10;
    ca_.Bind(&block5, &tmp9, &tmp10);
  return TNode<JSTypedArray>{tmp10};
}

TorqueStructAttachedJSTypedArrayWitness NewAttachedJSTypedArrayWitness_377(compiler::CodeAssemblerState* state_, TNode<JSTypedArray> p_array) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, JSTypedArray, BuiltinPtr> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, JSTypedArray, BuiltinPtr> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_array);

  if (block0.is_used()) {
    TNode<JSTypedArray> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 120);
    TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = CodeStubAssembler(state_).LoadElementsKind(TNode<JSTypedArray>{tmp0});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 122);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 123);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 124);
    TNode<BuiltinPtr> tmp2;
    USE(tmp2);
    tmp2 = GetLoadFnForElementsKind_378(state_, TNode<Int32T>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 121);
    ca_.Goto(&block1, tmp0, tmp0, tmp0, tmp2);
  }

  if (block1.is_used()) {
    TNode<JSTypedArray> tmp3;
    TNode<JSTypedArray> tmp4;
    TNode<JSTypedArray> tmp5;
    TNode<BuiltinPtr> tmp6;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 118);
    ca_.Goto(&block2, tmp3, tmp4, tmp5, tmp6);
  }

    TNode<JSTypedArray> tmp7;
    TNode<JSTypedArray> tmp8;
    TNode<JSTypedArray> tmp9;
    TNode<BuiltinPtr> tmp10;
    ca_.Bind(&block2, &tmp7, &tmp8, &tmp9, &tmp10);
  return TorqueStructAttachedJSTypedArrayWitness{TNode<JSTypedArray>{tmp8}, TNode<JSTypedArray>{tmp9}, TNode<BuiltinPtr>{tmp10}};
}

TNode<BuiltinPtr> GetLoadFnForElementsKind_378(compiler::CodeAssemblerState* state_, TNode<Int32T> p_elementsKind) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T, BuiltinPtr> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T, BuiltinPtr> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_elementsKind);

  if (block0.is_used()) {
    TNode<Int32T> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 129);
    TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = CodeStubAssembler(state_).IsElementsKindGreaterThan(TNode<Int32T>{tmp0}, UINT32_ELEMENTS);
    ca_.Branch(tmp1, &block2, &block3, tmp0);
  }

  if (block2.is_used()) {
    TNode<Int32T> tmp2;
    ca_.Bind(&block2, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 130);
    TNode<Int32T> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_169(state_, INT32_ELEMENTS);
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp2}, TNode<Int32T>{tmp3});
    ca_.Branch(tmp4, &block5, &block6, tmp2);
  }

  if (block5.is_used()) {
    TNode<Int32T> tmp5;
    ca_.Bind(&block5, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 131);
    ca_.Goto(&block1, tmp5, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement15ATInt32Elements)));
  }

  if (block6.is_used()) {
    TNode<Int32T> tmp6;
    ca_.Bind(&block6, &tmp6);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 132);
    TNode<Int32T> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_169(state_, FLOAT32_ELEMENTS);
    TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp6}, TNode<Int32T>{tmp7});
    ca_.Branch(tmp8, &block8, &block9, tmp6);
  }

  if (block8.is_used()) {
    TNode<Int32T> tmp9;
    ca_.Bind(&block8, &tmp9);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 133);
    ca_.Goto(&block1, tmp9, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement17ATFloat32Elements)));
  }

  if (block9.is_used()) {
    TNode<Int32T> tmp10;
    ca_.Bind(&block9, &tmp10);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 134);
    TNode<Int32T> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_169(state_, FLOAT64_ELEMENTS);
    TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp10}, TNode<Int32T>{tmp11});
    ca_.Branch(tmp12, &block11, &block12, tmp10);
  }

  if (block11.is_used()) {
    TNode<Int32T> tmp13;
    ca_.Bind(&block11, &tmp13);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 135);
    ca_.Goto(&block1, tmp13, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement17ATFloat64Elements)));
  }

  if (block12.is_used()) {
    TNode<Int32T> tmp14;
    ca_.Bind(&block12, &tmp14);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 136);
    TNode<Int32T> tmp15;
    USE(tmp15);
    tmp15 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_169(state_, UINT8_CLAMPED_ELEMENTS);
    TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp14}, TNode<Int32T>{tmp15});
    ca_.Branch(tmp16, &block14, &block15, tmp14);
  }

  if (block14.is_used()) {
    TNode<Int32T> tmp17;
    ca_.Bind(&block14, &tmp17);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 137);
    ca_.Goto(&block1, tmp17, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement22ATUint8ClampedElements)));
  }

  if (block15.is_used()) {
    TNode<Int32T> tmp18;
    ca_.Bind(&block15, &tmp18);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 138);
    TNode<Int32T> tmp19;
    USE(tmp19);
    tmp19 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_169(state_, BIGUINT64_ELEMENTS);
    TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp18}, TNode<Int32T>{tmp19});
    ca_.Branch(tmp20, &block17, &block18, tmp18);
  }

  if (block17.is_used()) {
    TNode<Int32T> tmp21;
    ca_.Bind(&block17, &tmp21);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 139);
    ca_.Goto(&block1, tmp21, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement19ATBigUint64Elements)));
  }

  if (block18.is_used()) {
    TNode<Int32T> tmp22;
    ca_.Bind(&block18, &tmp22);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 140);
    TNode<Int32T> tmp23;
    USE(tmp23);
    tmp23 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_169(state_, BIGINT64_ELEMENTS);
    TNode<BoolT> tmp24;
    USE(tmp24);
    tmp24 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp22}, TNode<Int32T>{tmp23});
    ca_.Branch(tmp24, &block20, &block21, tmp22);
  }

  if (block20.is_used()) {
    TNode<Int32T> tmp25;
    ca_.Bind(&block20, &tmp25);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 141);
    ca_.Goto(&block1, tmp25, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement18ATBigInt64Elements)));
  }

  if (block21.is_used()) {
    TNode<Int32T> tmp26;
    ca_.Bind(&block21, &tmp26);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 143);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block3.is_used()) {
    TNode<Int32T> tmp27;
    ca_.Bind(&block3, &tmp27);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 146);
    TNode<Int32T> tmp28;
    USE(tmp28);
    tmp28 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_169(state_, UINT8_ELEMENTS);
    TNode<BoolT> tmp29;
    USE(tmp29);
    tmp29 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp27}, TNode<Int32T>{tmp28});
    ca_.Branch(tmp29, &block23, &block24, tmp27);
  }

  if (block23.is_used()) {
    TNode<Int32T> tmp30;
    ca_.Bind(&block23, &tmp30);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 147);
    ca_.Goto(&block1, tmp30, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement15ATUint8Elements)));
  }

  if (block24.is_used()) {
    TNode<Int32T> tmp31;
    ca_.Bind(&block24, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 148);
    TNode<Int32T> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_169(state_, INT8_ELEMENTS);
    TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp31}, TNode<Int32T>{tmp32});
    ca_.Branch(tmp33, &block26, &block27, tmp31);
  }

  if (block26.is_used()) {
    TNode<Int32T> tmp34;
    ca_.Bind(&block26, &tmp34);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 149);
    ca_.Goto(&block1, tmp34, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement14ATInt8Elements)));
  }

  if (block27.is_used()) {
    TNode<Int32T> tmp35;
    ca_.Bind(&block27, &tmp35);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 150);
    TNode<Int32T> tmp36;
    USE(tmp36);
    tmp36 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_169(state_, UINT16_ELEMENTS);
    TNode<BoolT> tmp37;
    USE(tmp37);
    tmp37 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp35}, TNode<Int32T>{tmp36});
    ca_.Branch(tmp37, &block29, &block30, tmp35);
  }

  if (block29.is_used()) {
    TNode<Int32T> tmp38;
    ca_.Bind(&block29, &tmp38);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 151);
    ca_.Goto(&block1, tmp38, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement16ATUint16Elements)));
  }

  if (block30.is_used()) {
    TNode<Int32T> tmp39;
    ca_.Bind(&block30, &tmp39);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 152);
    TNode<Int32T> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_169(state_, INT16_ELEMENTS);
    TNode<BoolT> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp39}, TNode<Int32T>{tmp40});
    ca_.Branch(tmp41, &block32, &block33, tmp39);
  }

  if (block32.is_used()) {
    TNode<Int32T> tmp42;
    ca_.Bind(&block32, &tmp42);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 153);
    ca_.Goto(&block1, tmp42, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement15ATInt16Elements)));
  }

  if (block33.is_used()) {
    TNode<Int32T> tmp43;
    ca_.Bind(&block33, &tmp43);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 154);
    TNode<Int32T> tmp44;
    USE(tmp44);
    tmp44 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_169(state_, UINT32_ELEMENTS);
    TNode<BoolT> tmp45;
    USE(tmp45);
    tmp45 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp43}, TNode<Int32T>{tmp44});
    ca_.Branch(tmp45, &block35, &block36, tmp43);
  }

  if (block35.is_used()) {
    TNode<Int32T> tmp46;
    ca_.Bind(&block35, &tmp46);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 155);
    ca_.Goto(&block1, tmp46, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement16ATUint32Elements)));
  }

  if (block36.is_used()) {
    TNode<Int32T> tmp47;
    ca_.Bind(&block36, &tmp47);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 157);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block1.is_used()) {
    TNode<Int32T> tmp48;
    TNode<BuiltinPtr> tmp49;
    ca_.Bind(&block1, &tmp48, &tmp49);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 128);
    ca_.Goto(&block38, tmp48, tmp49);
  }

    TNode<Int32T> tmp50;
    TNode<BuiltinPtr> tmp51;
    ca_.Bind(&block38, &tmp50, &tmp51);
  return TNode<BuiltinPtr>{tmp51};
}

ElementsKind KindForArrayType15ATUint8Elements_379(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 164);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 163);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return UINT8_ELEMENTS;
}

ElementsKind KindForArrayType14ATInt8Elements_380(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 167);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 166);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return INT8_ELEMENTS;
}

ElementsKind KindForArrayType16ATUint16Elements_381(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 170);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 169);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return UINT16_ELEMENTS;
}

ElementsKind KindForArrayType15ATInt16Elements_382(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 173);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 172);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return INT16_ELEMENTS;
}

ElementsKind KindForArrayType16ATUint32Elements_383(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 176);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 175);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return UINT32_ELEMENTS;
}

ElementsKind KindForArrayType15ATInt32Elements_384(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 179);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 178);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return INT32_ELEMENTS;
}

ElementsKind KindForArrayType17ATFloat32Elements_385(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 182);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 181);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return FLOAT32_ELEMENTS;
}

ElementsKind KindForArrayType17ATFloat64Elements_386(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 185);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 184);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return FLOAT64_ELEMENTS;
}

ElementsKind KindForArrayType22ATUint8ClampedElements_387(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 188);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 187);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return UINT8_CLAMPED_ELEMENTS;
}

ElementsKind KindForArrayType19ATBigUint64Elements_388(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 191);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 190);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return BIGUINT64_ELEMENTS;
}

ElementsKind KindForArrayType18ATBigInt64Elements_389(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 194);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 193);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return BIGINT64_ELEMENTS;
}

TNode<Number> CallCompare_390(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<JSReceiver> p_comparefn, TNode<Object> p_a, TNode<Object> p_b) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, Object, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, Object, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, Object, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, Object, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, Object, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, Object, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_array, p_comparefn, p_a, p_b);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSTypedArray> tmp1;
    TNode<JSReceiver> tmp2;
    TNode<Object> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 216);
    TNode<Oddball> tmp5;
    USE(tmp5);
    tmp5 = Undefined_64(state_);
    TNode<Object> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).Call(TNode<Context>{tmp0}, TNode<JSReceiver>{tmp2}, TNode<Object>{tmp5}, TNode<Object>{tmp3}, TNode<Object>{tmp4});
    TNode<Number> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).ToNumber_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp6});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 215);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 219);
    TNode<IntPtrT> tmp8 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp8);
    TNode<JSArrayBuffer>tmp9 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp1, tmp8});
    TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).IsDetachedBuffer(TNode<JSArrayBuffer>{tmp9});
    ca_.Branch(tmp10, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp7);
  }

  if (block2.is_used()) {
    TNode<Context> tmp11;
    TNode<JSTypedArray> tmp12;
    TNode<JSReceiver> tmp13;
    TNode<Object> tmp14;
    TNode<Object> tmp15;
    TNode<Number> tmp16;
    ca_.Bind(&block2, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 220);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp11}, MessageTemplate::kDetachedOperation, "%TypedArray%.prototype.sort");
  }

  if (block3.is_used()) {
    TNode<Context> tmp17;
    TNode<JSTypedArray> tmp18;
    TNode<JSReceiver> tmp19;
    TNode<Object> tmp20;
    TNode<Object> tmp21;
    TNode<Number> tmp22;
    ca_.Bind(&block3, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 224);
    TNode<BoolT> tmp23;
    USE(tmp23);
    tmp23 = NumberIsNaN_240(state_, TNode<Number>{tmp22});
    ca_.Branch(tmp23, &block4, &block5, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22);
  }

  if (block4.is_used()) {
    TNode<Context> tmp24;
    TNode<JSTypedArray> tmp25;
    TNode<JSReceiver> tmp26;
    TNode<Object> tmp27;
    TNode<Object> tmp28;
    TNode<Number> tmp29;
    ca_.Bind(&block4, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    TNode<Number> tmp30;
    USE(tmp30);
    tmp30 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 0);
    ca_.Goto(&block1, tmp24, tmp25, tmp26, tmp27, tmp28, tmp30);
  }

  if (block5.is_used()) {
    TNode<Context> tmp31;
    TNode<JSTypedArray> tmp32;
    TNode<JSReceiver> tmp33;
    TNode<Object> tmp34;
    TNode<Object> tmp35;
    TNode<Number> tmp36;
    ca_.Bind(&block5, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 227);
    ca_.Goto(&block1, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36);
  }

  if (block1.is_used()) {
    TNode<Context> tmp37;
    TNode<JSTypedArray> tmp38;
    TNode<JSReceiver> tmp39;
    TNode<Object> tmp40;
    TNode<Object> tmp41;
    TNode<Number> tmp42;
    ca_.Bind(&block1, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 211);
    ca_.Goto(&block6, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42);
  }

    TNode<Context> tmp43;
    TNode<JSTypedArray> tmp44;
    TNode<JSReceiver> tmp45;
    TNode<Object> tmp46;
    TNode<Object> tmp47;
    TNode<Number> tmp48;
    ca_.Bind(&block6, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48);
  return TNode<Number>{tmp48};
}

void TypedArrayMerge_391(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<JSReceiver> p_comparefn, TNode<FixedArray> p_source, TNode<Smi> p_from, TNode<Smi> p_middle, TNode<Smi> p_to, TNode<FixedArray> p_target) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, BoolT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, BoolT, BoolT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block65(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block63(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block71(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block72(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block70(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block69(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block68(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block67(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray> block74(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_array, p_comparefn, p_source, p_from, p_middle, p_to, p_target);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSTypedArray> tmp1;
    TNode<JSReceiver> tmp2;
    TNode<FixedArray> tmp3;
    TNode<Smi> tmp4;
    TNode<Smi> tmp5;
    TNode<Smi> tmp6;
    TNode<FixedArray> tmp7;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5, &tmp6, &tmp7);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 236);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 237);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 239);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp4, tmp5, tmp4);
  }

  if (block4.is_used()) {
    TNode<Context> tmp8;
    TNode<JSTypedArray> tmp9;
    TNode<JSReceiver> tmp10;
    TNode<FixedArray> tmp11;
    TNode<Smi> tmp12;
    TNode<Smi> tmp13;
    TNode<Smi> tmp14;
    TNode<FixedArray> tmp15;
    TNode<Smi> tmp16;
    TNode<Smi> tmp17;
    TNode<Smi> tmp18;
    ca_.Bind(&block4, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    TNode<BoolT> tmp19;
    USE(tmp19);
    tmp19 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp18}, TNode<Smi>{tmp14});
    ca_.Branch(tmp19, &block2, &block3, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18);
  }

  if (block2.is_used()) {
    TNode<Context> tmp20;
    TNode<JSTypedArray> tmp21;
    TNode<JSReceiver> tmp22;
    TNode<FixedArray> tmp23;
    TNode<Smi> tmp24;
    TNode<Smi> tmp25;
    TNode<Smi> tmp26;
    TNode<FixedArray> tmp27;
    TNode<Smi> tmp28;
    TNode<Smi> tmp29;
    TNode<Smi> tmp30;
    ca_.Bind(&block2, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 240);
    TNode<BoolT> tmp31;
    USE(tmp31);
    tmp31 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp28}, TNode<Smi>{tmp25});
    ca_.Branch(tmp31, &block8, &block9, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block8.is_used()) {
    TNode<Context> tmp32;
    TNode<JSTypedArray> tmp33;
    TNode<JSReceiver> tmp34;
    TNode<FixedArray> tmp35;
    TNode<Smi> tmp36;
    TNode<Smi> tmp37;
    TNode<Smi> tmp38;
    TNode<FixedArray> tmp39;
    TNode<Smi> tmp40;
    TNode<Smi> tmp41;
    TNode<Smi> tmp42;
    TNode<BoolT> tmp43;
    ca_.Bind(&block8, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    TNode<BoolT> tmp44;
    USE(tmp44);
    tmp44 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(TNode<Smi>{tmp41}, TNode<Smi>{tmp38});
    ca_.Goto(&block10, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44);
  }

  if (block9.is_used()) {
    TNode<Context> tmp45;
    TNode<JSTypedArray> tmp46;
    TNode<JSReceiver> tmp47;
    TNode<FixedArray> tmp48;
    TNode<Smi> tmp49;
    TNode<Smi> tmp50;
    TNode<Smi> tmp51;
    TNode<FixedArray> tmp52;
    TNode<Smi> tmp53;
    TNode<Smi> tmp54;
    TNode<Smi> tmp55;
    TNode<BoolT> tmp56;
    ca_.Bind(&block9, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    TNode<BoolT> tmp57;
    USE(tmp57);
    tmp57 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    ca_.Goto(&block10, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57);
  }

  if (block10.is_used()) {
    TNode<Context> tmp58;
    TNode<JSTypedArray> tmp59;
    TNode<JSReceiver> tmp60;
    TNode<FixedArray> tmp61;
    TNode<Smi> tmp62;
    TNode<Smi> tmp63;
    TNode<Smi> tmp64;
    TNode<FixedArray> tmp65;
    TNode<Smi> tmp66;
    TNode<Smi> tmp67;
    TNode<Smi> tmp68;
    TNode<BoolT> tmp69;
    TNode<BoolT> tmp70;
    ca_.Bind(&block10, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70);
    ca_.Branch(tmp70, &block6, &block7, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68);
  }

  if (block6.is_used()) {
    TNode<Context> tmp71;
    TNode<JSTypedArray> tmp72;
    TNode<JSReceiver> tmp73;
    TNode<FixedArray> tmp74;
    TNode<Smi> tmp75;
    TNode<Smi> tmp76;
    TNode<Smi> tmp77;
    TNode<FixedArray> tmp78;
    TNode<Smi> tmp79;
    TNode<Smi> tmp80;
    TNode<Smi> tmp81;
    ca_.Bind(&block6, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 243);
    TNode<IntPtrT> tmp82 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp82);
    TNode<IntPtrT> tmp83 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp83);
    TNode<Smi>tmp84 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp78, tmp83});
    TNode<IntPtrT> tmp85;
    USE(tmp85);
    tmp85 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp84});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    TNode<IntPtrT> tmp86;
    USE(tmp86);
    tmp86 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp81});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp87;
    USE(tmp87);
    tmp87 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp86});
    TNode<UintPtrT> tmp88;
    USE(tmp88);
    tmp88 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp85});
    TNode<BoolT> tmp89;
    USE(tmp89);
    tmp89 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp87}, TNode<UintPtrT>{tmp88});
    ca_.Branch(tmp89, &block16, &block17, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp78, tmp82, tmp85, tmp81, tmp81, tmp86, tmp78, tmp82, tmp85, tmp86, tmp86);
  }

  if (block16.is_used()) {
    TNode<Context> tmp90;
    TNode<JSTypedArray> tmp91;
    TNode<JSReceiver> tmp92;
    TNode<FixedArray> tmp93;
    TNode<Smi> tmp94;
    TNode<Smi> tmp95;
    TNode<Smi> tmp96;
    TNode<FixedArray> tmp97;
    TNode<Smi> tmp98;
    TNode<Smi> tmp99;
    TNode<Smi> tmp100;
    TNode<FixedArray> tmp101;
    TNode<IntPtrT> tmp102;
    TNode<IntPtrT> tmp103;
    TNode<Smi> tmp104;
    TNode<Smi> tmp105;
    TNode<IntPtrT> tmp106;
    TNode<HeapObject> tmp107;
    TNode<IntPtrT> tmp108;
    TNode<IntPtrT> tmp109;
    TNode<IntPtrT> tmp110;
    TNode<IntPtrT> tmp111;
    ca_.Bind(&block16, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp112;
    USE(tmp112);
    tmp112 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp113;
    USE(tmp113);
    tmp113 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp111}, TNode<IntPtrT>{tmp112});
    TNode<IntPtrT> tmp114;
    USE(tmp114);
    tmp114 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp108}, TNode<IntPtrT>{tmp113});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp115;
    USE(tmp115);
    TNode<IntPtrT> tmp116;
    USE(tmp116);
    std::tie(tmp115, tmp116) = UnsafeNewReference20UT5ATSmi10HeapObject_1434(state_, TNode<HeapObject>{tmp107}, TNode<IntPtrT>{tmp114}).Flatten();
    ca_.Goto(&block15, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp115, tmp116);
  }

  if (block17.is_used()) {
    TNode<Context> tmp117;
    TNode<JSTypedArray> tmp118;
    TNode<JSReceiver> tmp119;
    TNode<FixedArray> tmp120;
    TNode<Smi> tmp121;
    TNode<Smi> tmp122;
    TNode<Smi> tmp123;
    TNode<FixedArray> tmp124;
    TNode<Smi> tmp125;
    TNode<Smi> tmp126;
    TNode<Smi> tmp127;
    TNode<FixedArray> tmp128;
    TNode<IntPtrT> tmp129;
    TNode<IntPtrT> tmp130;
    TNode<Smi> tmp131;
    TNode<Smi> tmp132;
    TNode<IntPtrT> tmp133;
    TNode<HeapObject> tmp134;
    TNode<IntPtrT> tmp135;
    TNode<IntPtrT> tmp136;
    TNode<IntPtrT> tmp137;
    TNode<IntPtrT> tmp138;
    ca_.Bind(&block17, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block14, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133);
  }

  if (block15.is_used()) {
    TNode<Context> tmp139;
    TNode<JSTypedArray> tmp140;
    TNode<JSReceiver> tmp141;
    TNode<FixedArray> tmp142;
    TNode<Smi> tmp143;
    TNode<Smi> tmp144;
    TNode<Smi> tmp145;
    TNode<FixedArray> tmp146;
    TNode<Smi> tmp147;
    TNode<Smi> tmp148;
    TNode<Smi> tmp149;
    TNode<FixedArray> tmp150;
    TNode<IntPtrT> tmp151;
    TNode<IntPtrT> tmp152;
    TNode<Smi> tmp153;
    TNode<Smi> tmp154;
    TNode<IntPtrT> tmp155;
    TNode<HeapObject> tmp156;
    TNode<IntPtrT> tmp157;
    TNode<IntPtrT> tmp158;
    TNode<IntPtrT> tmp159;
    TNode<IntPtrT> tmp160;
    TNode<HeapObject> tmp161;
    TNode<IntPtrT> tmp162;
    ca_.Bind(&block15, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block13, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp161, tmp162);
  }

  if (block14.is_used()) {
    TNode<Context> tmp163;
    TNode<JSTypedArray> tmp164;
    TNode<JSReceiver> tmp165;
    TNode<FixedArray> tmp166;
    TNode<Smi> tmp167;
    TNode<Smi> tmp168;
    TNode<Smi> tmp169;
    TNode<FixedArray> tmp170;
    TNode<Smi> tmp171;
    TNode<Smi> tmp172;
    TNode<Smi> tmp173;
    TNode<FixedArray> tmp174;
    TNode<IntPtrT> tmp175;
    TNode<IntPtrT> tmp176;
    TNode<Smi> tmp177;
    TNode<Smi> tmp178;
    TNode<IntPtrT> tmp179;
    ca_.Bind(&block14, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block13.is_used()) {
    TNode<Context> tmp180;
    TNode<JSTypedArray> tmp181;
    TNode<JSReceiver> tmp182;
    TNode<FixedArray> tmp183;
    TNode<Smi> tmp184;
    TNode<Smi> tmp185;
    TNode<Smi> tmp186;
    TNode<FixedArray> tmp187;
    TNode<Smi> tmp188;
    TNode<Smi> tmp189;
    TNode<Smi> tmp190;
    TNode<FixedArray> tmp191;
    TNode<IntPtrT> tmp192;
    TNode<IntPtrT> tmp193;
    TNode<Smi> tmp194;
    TNode<Smi> tmp195;
    TNode<IntPtrT> tmp196;
    TNode<HeapObject> tmp197;
    TNode<IntPtrT> tmp198;
    ca_.Bind(&block13, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198);
    ca_.Goto(&block12, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195, tmp197, tmp198);
  }

  if (block12.is_used()) {
    TNode<Context> tmp199;
    TNode<JSTypedArray> tmp200;
    TNode<JSReceiver> tmp201;
    TNode<FixedArray> tmp202;
    TNode<Smi> tmp203;
    TNode<Smi> tmp204;
    TNode<Smi> tmp205;
    TNode<FixedArray> tmp206;
    TNode<Smi> tmp207;
    TNode<Smi> tmp208;
    TNode<Smi> tmp209;
    TNode<FixedArray> tmp210;
    TNode<IntPtrT> tmp211;
    TNode<IntPtrT> tmp212;
    TNode<Smi> tmp213;
    TNode<Smi> tmp214;
    TNode<HeapObject> tmp215;
    TNode<IntPtrT> tmp216;
    ca_.Bind(&block12, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 243);
    TNode<IntPtrT> tmp217 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp217);
    TNode<IntPtrT> tmp218 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp218);
    TNode<Smi>tmp219 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp202, tmp218});
    TNode<IntPtrT> tmp220;
    USE(tmp220);
    tmp220 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp219});
    TNode<Smi> tmp221;
    USE(tmp221);
    tmp221 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp222;
    USE(tmp222);
    tmp222 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp207}, TNode<Smi>{tmp221});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    TNode<IntPtrT> tmp223;
    USE(tmp223);
    tmp223 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp207});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp224;
    USE(tmp224);
    tmp224 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp223});
    TNode<UintPtrT> tmp225;
    USE(tmp225);
    tmp225 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp220});
    TNode<BoolT> tmp226;
    USE(tmp226);
    tmp226 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp224}, TNode<UintPtrT>{tmp225});
    ca_.Branch(tmp226, &block23, &block24, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp222, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp202, tmp217, tmp220, tmp207, tmp207, tmp223, tmp202, tmp217, tmp220, tmp223, tmp223);
  }

  if (block23.is_used()) {
    TNode<Context> tmp227;
    TNode<JSTypedArray> tmp228;
    TNode<JSReceiver> tmp229;
    TNode<FixedArray> tmp230;
    TNode<Smi> tmp231;
    TNode<Smi> tmp232;
    TNode<Smi> tmp233;
    TNode<FixedArray> tmp234;
    TNode<Smi> tmp235;
    TNode<Smi> tmp236;
    TNode<Smi> tmp237;
    TNode<FixedArray> tmp238;
    TNode<IntPtrT> tmp239;
    TNode<IntPtrT> tmp240;
    TNode<Smi> tmp241;
    TNode<Smi> tmp242;
    TNode<HeapObject> tmp243;
    TNode<IntPtrT> tmp244;
    TNode<FixedArray> tmp245;
    TNode<IntPtrT> tmp246;
    TNode<IntPtrT> tmp247;
    TNode<Smi> tmp248;
    TNode<Smi> tmp249;
    TNode<IntPtrT> tmp250;
    TNode<HeapObject> tmp251;
    TNode<IntPtrT> tmp252;
    TNode<IntPtrT> tmp253;
    TNode<IntPtrT> tmp254;
    TNode<IntPtrT> tmp255;
    ca_.Bind(&block23, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp256;
    USE(tmp256);
    tmp256 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp257;
    USE(tmp257);
    tmp257 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp255}, TNode<IntPtrT>{tmp256});
    TNode<IntPtrT> tmp258;
    USE(tmp258);
    tmp258 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp252}, TNode<IntPtrT>{tmp257});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp259;
    USE(tmp259);
    TNode<IntPtrT> tmp260;
    USE(tmp260);
    std::tie(tmp259, tmp260) = UnsafeNewReference20UT5ATSmi10HeapObject_1434(state_, TNode<HeapObject>{tmp251}, TNode<IntPtrT>{tmp258}).Flatten();
    ca_.Goto(&block22, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp240, tmp241, tmp242, tmp243, tmp244, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp251, tmp252, tmp253, tmp254, tmp255, tmp259, tmp260);
  }

  if (block24.is_used()) {
    TNode<Context> tmp261;
    TNode<JSTypedArray> tmp262;
    TNode<JSReceiver> tmp263;
    TNode<FixedArray> tmp264;
    TNode<Smi> tmp265;
    TNode<Smi> tmp266;
    TNode<Smi> tmp267;
    TNode<FixedArray> tmp268;
    TNode<Smi> tmp269;
    TNode<Smi> tmp270;
    TNode<Smi> tmp271;
    TNode<FixedArray> tmp272;
    TNode<IntPtrT> tmp273;
    TNode<IntPtrT> tmp274;
    TNode<Smi> tmp275;
    TNode<Smi> tmp276;
    TNode<HeapObject> tmp277;
    TNode<IntPtrT> tmp278;
    TNode<FixedArray> tmp279;
    TNode<IntPtrT> tmp280;
    TNode<IntPtrT> tmp281;
    TNode<Smi> tmp282;
    TNode<Smi> tmp283;
    TNode<IntPtrT> tmp284;
    TNode<HeapObject> tmp285;
    TNode<IntPtrT> tmp286;
    TNode<IntPtrT> tmp287;
    TNode<IntPtrT> tmp288;
    TNode<IntPtrT> tmp289;
    ca_.Bind(&block24, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288, &tmp289);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block21, tmp261, tmp262, tmp263, tmp264, tmp265, tmp266, tmp267, tmp268, tmp269, tmp270, tmp271, tmp272, tmp273, tmp274, tmp275, tmp276, tmp277, tmp278, tmp279, tmp280, tmp281, tmp282, tmp283, tmp284);
  }

  if (block22.is_used()) {
    TNode<Context> tmp290;
    TNode<JSTypedArray> tmp291;
    TNode<JSReceiver> tmp292;
    TNode<FixedArray> tmp293;
    TNode<Smi> tmp294;
    TNode<Smi> tmp295;
    TNode<Smi> tmp296;
    TNode<FixedArray> tmp297;
    TNode<Smi> tmp298;
    TNode<Smi> tmp299;
    TNode<Smi> tmp300;
    TNode<FixedArray> tmp301;
    TNode<IntPtrT> tmp302;
    TNode<IntPtrT> tmp303;
    TNode<Smi> tmp304;
    TNode<Smi> tmp305;
    TNode<HeapObject> tmp306;
    TNode<IntPtrT> tmp307;
    TNode<FixedArray> tmp308;
    TNode<IntPtrT> tmp309;
    TNode<IntPtrT> tmp310;
    TNode<Smi> tmp311;
    TNode<Smi> tmp312;
    TNode<IntPtrT> tmp313;
    TNode<HeapObject> tmp314;
    TNode<IntPtrT> tmp315;
    TNode<IntPtrT> tmp316;
    TNode<IntPtrT> tmp317;
    TNode<IntPtrT> tmp318;
    TNode<HeapObject> tmp319;
    TNode<IntPtrT> tmp320;
    ca_.Bind(&block22, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305, &tmp306, &tmp307, &tmp308, &tmp309, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block20, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295, tmp296, tmp297, tmp298, tmp299, tmp300, tmp301, tmp302, tmp303, tmp304, tmp305, tmp306, tmp307, tmp308, tmp309, tmp310, tmp311, tmp312, tmp313, tmp319, tmp320);
  }

  if (block21.is_used()) {
    TNode<Context> tmp321;
    TNode<JSTypedArray> tmp322;
    TNode<JSReceiver> tmp323;
    TNode<FixedArray> tmp324;
    TNode<Smi> tmp325;
    TNode<Smi> tmp326;
    TNode<Smi> tmp327;
    TNode<FixedArray> tmp328;
    TNode<Smi> tmp329;
    TNode<Smi> tmp330;
    TNode<Smi> tmp331;
    TNode<FixedArray> tmp332;
    TNode<IntPtrT> tmp333;
    TNode<IntPtrT> tmp334;
    TNode<Smi> tmp335;
    TNode<Smi> tmp336;
    TNode<HeapObject> tmp337;
    TNode<IntPtrT> tmp338;
    TNode<FixedArray> tmp339;
    TNode<IntPtrT> tmp340;
    TNode<IntPtrT> tmp341;
    TNode<Smi> tmp342;
    TNode<Smi> tmp343;
    TNode<IntPtrT> tmp344;
    ca_.Bind(&block21, &tmp321, &tmp322, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343, &tmp344);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block20.is_used()) {
    TNode<Context> tmp345;
    TNode<JSTypedArray> tmp346;
    TNode<JSReceiver> tmp347;
    TNode<FixedArray> tmp348;
    TNode<Smi> tmp349;
    TNode<Smi> tmp350;
    TNode<Smi> tmp351;
    TNode<FixedArray> tmp352;
    TNode<Smi> tmp353;
    TNode<Smi> tmp354;
    TNode<Smi> tmp355;
    TNode<FixedArray> tmp356;
    TNode<IntPtrT> tmp357;
    TNode<IntPtrT> tmp358;
    TNode<Smi> tmp359;
    TNode<Smi> tmp360;
    TNode<HeapObject> tmp361;
    TNode<IntPtrT> tmp362;
    TNode<FixedArray> tmp363;
    TNode<IntPtrT> tmp364;
    TNode<IntPtrT> tmp365;
    TNode<Smi> tmp366;
    TNode<Smi> tmp367;
    TNode<IntPtrT> tmp368;
    TNode<HeapObject> tmp369;
    TNode<IntPtrT> tmp370;
    ca_.Bind(&block20, &tmp345, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350, &tmp351, &tmp352, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363, &tmp364, &tmp365, &tmp366, &tmp367, &tmp368, &tmp369, &tmp370);
    ca_.Goto(&block19, tmp345, tmp346, tmp347, tmp348, tmp349, tmp350, tmp351, tmp352, tmp353, tmp354, tmp355, tmp356, tmp357, tmp358, tmp359, tmp360, tmp361, tmp362, tmp363, tmp364, tmp365, tmp366, tmp367, tmp369, tmp370);
  }

  if (block19.is_used()) {
    TNode<Context> tmp371;
    TNode<JSTypedArray> tmp372;
    TNode<JSReceiver> tmp373;
    TNode<FixedArray> tmp374;
    TNode<Smi> tmp375;
    TNode<Smi> tmp376;
    TNode<Smi> tmp377;
    TNode<FixedArray> tmp378;
    TNode<Smi> tmp379;
    TNode<Smi> tmp380;
    TNode<Smi> tmp381;
    TNode<FixedArray> tmp382;
    TNode<IntPtrT> tmp383;
    TNode<IntPtrT> tmp384;
    TNode<Smi> tmp385;
    TNode<Smi> tmp386;
    TNode<HeapObject> tmp387;
    TNode<IntPtrT> tmp388;
    TNode<FixedArray> tmp389;
    TNode<IntPtrT> tmp390;
    TNode<IntPtrT> tmp391;
    TNode<Smi> tmp392;
    TNode<Smi> tmp393;
    TNode<HeapObject> tmp394;
    TNode<IntPtrT> tmp395;
    ca_.Bind(&block19, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381, &tmp382, &tmp383, &tmp384, &tmp385, &tmp386, &tmp387, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 243);
    TNode<Object>tmp396 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp394, tmp395});
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp387, tmp388}, tmp396);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 240);
    ca_.Goto(&block11, tmp371, tmp372, tmp373, tmp374, tmp375, tmp376, tmp377, tmp378, tmp379, tmp380, tmp381);
  }

  if (block7.is_used()) {
    TNode<Context> tmp397;
    TNode<JSTypedArray> tmp398;
    TNode<JSReceiver> tmp399;
    TNode<FixedArray> tmp400;
    TNode<Smi> tmp401;
    TNode<Smi> tmp402;
    TNode<Smi> tmp403;
    TNode<FixedArray> tmp404;
    TNode<Smi> tmp405;
    TNode<Smi> tmp406;
    TNode<Smi> tmp407;
    ca_.Bind(&block7, &tmp397, &tmp398, &tmp399, &tmp400, &tmp401, &tmp402, &tmp403, &tmp404, &tmp405, &tmp406, &tmp407);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 244);
    TNode<BoolT> tmp408;
    USE(tmp408);
    tmp408 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp405}, TNode<Smi>{tmp402});
    ca_.Branch(tmp408, &block26, &block27, tmp397, tmp398, tmp399, tmp400, tmp401, tmp402, tmp403, tmp404, tmp405, tmp406, tmp407);
  }

  if (block26.is_used()) {
    TNode<Context> tmp409;
    TNode<JSTypedArray> tmp410;
    TNode<JSReceiver> tmp411;
    TNode<FixedArray> tmp412;
    TNode<Smi> tmp413;
    TNode<Smi> tmp414;
    TNode<Smi> tmp415;
    TNode<FixedArray> tmp416;
    TNode<Smi> tmp417;
    TNode<Smi> tmp418;
    TNode<Smi> tmp419;
    ca_.Bind(&block26, &tmp409, &tmp410, &tmp411, &tmp412, &tmp413, &tmp414, &tmp415, &tmp416, &tmp417, &tmp418, &tmp419);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 246);
    TNode<IntPtrT> tmp420 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp420);
    TNode<IntPtrT> tmp421 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp421);
    TNode<Smi>tmp422 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp412, tmp421});
    TNode<IntPtrT> tmp423;
    USE(tmp423);
    tmp423 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp422});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    TNode<IntPtrT> tmp424;
    USE(tmp424);
    tmp424 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp417});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp425;
    USE(tmp425);
    tmp425 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp424});
    TNode<UintPtrT> tmp426;
    USE(tmp426);
    tmp426 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp423});
    TNode<BoolT> tmp427;
    USE(tmp427);
    tmp427 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp425}, TNode<UintPtrT>{tmp426});
    ca_.Branch(tmp427, &block33, &block34, tmp409, tmp410, tmp411, tmp412, tmp413, tmp414, tmp415, tmp416, tmp417, tmp418, tmp419, tmp412, tmp420, tmp423, tmp417, tmp417, tmp424, tmp412, tmp420, tmp423, tmp424, tmp424);
  }

  if (block33.is_used()) {
    TNode<Context> tmp428;
    TNode<JSTypedArray> tmp429;
    TNode<JSReceiver> tmp430;
    TNode<FixedArray> tmp431;
    TNode<Smi> tmp432;
    TNode<Smi> tmp433;
    TNode<Smi> tmp434;
    TNode<FixedArray> tmp435;
    TNode<Smi> tmp436;
    TNode<Smi> tmp437;
    TNode<Smi> tmp438;
    TNode<FixedArray> tmp439;
    TNode<IntPtrT> tmp440;
    TNode<IntPtrT> tmp441;
    TNode<Smi> tmp442;
    TNode<Smi> tmp443;
    TNode<IntPtrT> tmp444;
    TNode<HeapObject> tmp445;
    TNode<IntPtrT> tmp446;
    TNode<IntPtrT> tmp447;
    TNode<IntPtrT> tmp448;
    TNode<IntPtrT> tmp449;
    ca_.Bind(&block33, &tmp428, &tmp429, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434, &tmp435, &tmp436, &tmp437, &tmp438, &tmp439, &tmp440, &tmp441, &tmp442, &tmp443, &tmp444, &tmp445, &tmp446, &tmp447, &tmp448, &tmp449);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp450;
    USE(tmp450);
    tmp450 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp451;
    USE(tmp451);
    tmp451 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp449}, TNode<IntPtrT>{tmp450});
    TNode<IntPtrT> tmp452;
    USE(tmp452);
    tmp452 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp446}, TNode<IntPtrT>{tmp451});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp453;
    USE(tmp453);
    TNode<IntPtrT> tmp454;
    USE(tmp454);
    std::tie(tmp453, tmp454) = UnsafeNewReference20UT5ATSmi10HeapObject_1434(state_, TNode<HeapObject>{tmp445}, TNode<IntPtrT>{tmp452}).Flatten();
    ca_.Goto(&block32, tmp428, tmp429, tmp430, tmp431, tmp432, tmp433, tmp434, tmp435, tmp436, tmp437, tmp438, tmp439, tmp440, tmp441, tmp442, tmp443, tmp444, tmp445, tmp446, tmp447, tmp448, tmp449, tmp453, tmp454);
  }

  if (block34.is_used()) {
    TNode<Context> tmp455;
    TNode<JSTypedArray> tmp456;
    TNode<JSReceiver> tmp457;
    TNode<FixedArray> tmp458;
    TNode<Smi> tmp459;
    TNode<Smi> tmp460;
    TNode<Smi> tmp461;
    TNode<FixedArray> tmp462;
    TNode<Smi> tmp463;
    TNode<Smi> tmp464;
    TNode<Smi> tmp465;
    TNode<FixedArray> tmp466;
    TNode<IntPtrT> tmp467;
    TNode<IntPtrT> tmp468;
    TNode<Smi> tmp469;
    TNode<Smi> tmp470;
    TNode<IntPtrT> tmp471;
    TNode<HeapObject> tmp472;
    TNode<IntPtrT> tmp473;
    TNode<IntPtrT> tmp474;
    TNode<IntPtrT> tmp475;
    TNode<IntPtrT> tmp476;
    ca_.Bind(&block34, &tmp455, &tmp456, &tmp457, &tmp458, &tmp459, &tmp460, &tmp461, &tmp462, &tmp463, &tmp464, &tmp465, &tmp466, &tmp467, &tmp468, &tmp469, &tmp470, &tmp471, &tmp472, &tmp473, &tmp474, &tmp475, &tmp476);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block31, tmp455, tmp456, tmp457, tmp458, tmp459, tmp460, tmp461, tmp462, tmp463, tmp464, tmp465, tmp466, tmp467, tmp468, tmp469, tmp470, tmp471);
  }

  if (block32.is_used()) {
    TNode<Context> tmp477;
    TNode<JSTypedArray> tmp478;
    TNode<JSReceiver> tmp479;
    TNode<FixedArray> tmp480;
    TNode<Smi> tmp481;
    TNode<Smi> tmp482;
    TNode<Smi> tmp483;
    TNode<FixedArray> tmp484;
    TNode<Smi> tmp485;
    TNode<Smi> tmp486;
    TNode<Smi> tmp487;
    TNode<FixedArray> tmp488;
    TNode<IntPtrT> tmp489;
    TNode<IntPtrT> tmp490;
    TNode<Smi> tmp491;
    TNode<Smi> tmp492;
    TNode<IntPtrT> tmp493;
    TNode<HeapObject> tmp494;
    TNode<IntPtrT> tmp495;
    TNode<IntPtrT> tmp496;
    TNode<IntPtrT> tmp497;
    TNode<IntPtrT> tmp498;
    TNode<HeapObject> tmp499;
    TNode<IntPtrT> tmp500;
    ca_.Bind(&block32, &tmp477, &tmp478, &tmp479, &tmp480, &tmp481, &tmp482, &tmp483, &tmp484, &tmp485, &tmp486, &tmp487, &tmp488, &tmp489, &tmp490, &tmp491, &tmp492, &tmp493, &tmp494, &tmp495, &tmp496, &tmp497, &tmp498, &tmp499, &tmp500);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block30, tmp477, tmp478, tmp479, tmp480, tmp481, tmp482, tmp483, tmp484, tmp485, tmp486, tmp487, tmp488, tmp489, tmp490, tmp491, tmp492, tmp493, tmp499, tmp500);
  }

  if (block31.is_used()) {
    TNode<Context> tmp501;
    TNode<JSTypedArray> tmp502;
    TNode<JSReceiver> tmp503;
    TNode<FixedArray> tmp504;
    TNode<Smi> tmp505;
    TNode<Smi> tmp506;
    TNode<Smi> tmp507;
    TNode<FixedArray> tmp508;
    TNode<Smi> tmp509;
    TNode<Smi> tmp510;
    TNode<Smi> tmp511;
    TNode<FixedArray> tmp512;
    TNode<IntPtrT> tmp513;
    TNode<IntPtrT> tmp514;
    TNode<Smi> tmp515;
    TNode<Smi> tmp516;
    TNode<IntPtrT> tmp517;
    ca_.Bind(&block31, &tmp501, &tmp502, &tmp503, &tmp504, &tmp505, &tmp506, &tmp507, &tmp508, &tmp509, &tmp510, &tmp511, &tmp512, &tmp513, &tmp514, &tmp515, &tmp516, &tmp517);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block30.is_used()) {
    TNode<Context> tmp518;
    TNode<JSTypedArray> tmp519;
    TNode<JSReceiver> tmp520;
    TNode<FixedArray> tmp521;
    TNode<Smi> tmp522;
    TNode<Smi> tmp523;
    TNode<Smi> tmp524;
    TNode<FixedArray> tmp525;
    TNode<Smi> tmp526;
    TNode<Smi> tmp527;
    TNode<Smi> tmp528;
    TNode<FixedArray> tmp529;
    TNode<IntPtrT> tmp530;
    TNode<IntPtrT> tmp531;
    TNode<Smi> tmp532;
    TNode<Smi> tmp533;
    TNode<IntPtrT> tmp534;
    TNode<HeapObject> tmp535;
    TNode<IntPtrT> tmp536;
    ca_.Bind(&block30, &tmp518, &tmp519, &tmp520, &tmp521, &tmp522, &tmp523, &tmp524, &tmp525, &tmp526, &tmp527, &tmp528, &tmp529, &tmp530, &tmp531, &tmp532, &tmp533, &tmp534, &tmp535, &tmp536);
    ca_.Goto(&block29, tmp518, tmp519, tmp520, tmp521, tmp522, tmp523, tmp524, tmp525, tmp526, tmp527, tmp528, tmp529, tmp530, tmp531, tmp532, tmp533, tmp535, tmp536);
  }

  if (block29.is_used()) {
    TNode<Context> tmp537;
    TNode<JSTypedArray> tmp538;
    TNode<JSReceiver> tmp539;
    TNode<FixedArray> tmp540;
    TNode<Smi> tmp541;
    TNode<Smi> tmp542;
    TNode<Smi> tmp543;
    TNode<FixedArray> tmp544;
    TNode<Smi> tmp545;
    TNode<Smi> tmp546;
    TNode<Smi> tmp547;
    TNode<FixedArray> tmp548;
    TNode<IntPtrT> tmp549;
    TNode<IntPtrT> tmp550;
    TNode<Smi> tmp551;
    TNode<Smi> tmp552;
    TNode<HeapObject> tmp553;
    TNode<IntPtrT> tmp554;
    ca_.Bind(&block29, &tmp537, &tmp538, &tmp539, &tmp540, &tmp541, &tmp542, &tmp543, &tmp544, &tmp545, &tmp546, &tmp547, &tmp548, &tmp549, &tmp550, &tmp551, &tmp552, &tmp553, &tmp554);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 246);
    TNode<Object>tmp555 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp553, tmp554});
    TNode<Object> tmp556;
    USE(tmp556);
    tmp556 = UnsafeCast90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol_1435(state_, TNode<Context>{tmp537}, TNode<Object>{tmp555});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 247);
    TNode<IntPtrT> tmp557 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp557);
    TNode<IntPtrT> tmp558 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp558);
    TNode<Smi>tmp559 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp540, tmp558});
    TNode<IntPtrT> tmp560;
    USE(tmp560);
    tmp560 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp559});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    TNode<IntPtrT> tmp561;
    USE(tmp561);
    tmp561 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp546});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp562;
    USE(tmp562);
    tmp562 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp561});
    TNode<UintPtrT> tmp563;
    USE(tmp563);
    tmp563 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp560});
    TNode<BoolT> tmp564;
    USE(tmp564);
    tmp564 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp562}, TNode<UintPtrT>{tmp563});
    ca_.Branch(tmp564, &block40, &block41, tmp537, tmp538, tmp539, tmp540, tmp541, tmp542, tmp543, tmp544, tmp545, tmp546, tmp547, tmp556, tmp540, tmp557, tmp560, tmp546, tmp546, tmp561, tmp540, tmp557, tmp560, tmp561, tmp561);
  }

  if (block40.is_used()) {
    TNode<Context> tmp565;
    TNode<JSTypedArray> tmp566;
    TNode<JSReceiver> tmp567;
    TNode<FixedArray> tmp568;
    TNode<Smi> tmp569;
    TNode<Smi> tmp570;
    TNode<Smi> tmp571;
    TNode<FixedArray> tmp572;
    TNode<Smi> tmp573;
    TNode<Smi> tmp574;
    TNode<Smi> tmp575;
    TNode<Object> tmp576;
    TNode<FixedArray> tmp577;
    TNode<IntPtrT> tmp578;
    TNode<IntPtrT> tmp579;
    TNode<Smi> tmp580;
    TNode<Smi> tmp581;
    TNode<IntPtrT> tmp582;
    TNode<HeapObject> tmp583;
    TNode<IntPtrT> tmp584;
    TNode<IntPtrT> tmp585;
    TNode<IntPtrT> tmp586;
    TNode<IntPtrT> tmp587;
    ca_.Bind(&block40, &tmp565, &tmp566, &tmp567, &tmp568, &tmp569, &tmp570, &tmp571, &tmp572, &tmp573, &tmp574, &tmp575, &tmp576, &tmp577, &tmp578, &tmp579, &tmp580, &tmp581, &tmp582, &tmp583, &tmp584, &tmp585, &tmp586, &tmp587);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp588;
    USE(tmp588);
    tmp588 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp589;
    USE(tmp589);
    tmp589 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp587}, TNode<IntPtrT>{tmp588});
    TNode<IntPtrT> tmp590;
    USE(tmp590);
    tmp590 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp584}, TNode<IntPtrT>{tmp589});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp591;
    USE(tmp591);
    TNode<IntPtrT> tmp592;
    USE(tmp592);
    std::tie(tmp591, tmp592) = UnsafeNewReference20UT5ATSmi10HeapObject_1434(state_, TNode<HeapObject>{tmp583}, TNode<IntPtrT>{tmp590}).Flatten();
    ca_.Goto(&block39, tmp565, tmp566, tmp567, tmp568, tmp569, tmp570, tmp571, tmp572, tmp573, tmp574, tmp575, tmp576, tmp577, tmp578, tmp579, tmp580, tmp581, tmp582, tmp583, tmp584, tmp585, tmp586, tmp587, tmp591, tmp592);
  }

  if (block41.is_used()) {
    TNode<Context> tmp593;
    TNode<JSTypedArray> tmp594;
    TNode<JSReceiver> tmp595;
    TNode<FixedArray> tmp596;
    TNode<Smi> tmp597;
    TNode<Smi> tmp598;
    TNode<Smi> tmp599;
    TNode<FixedArray> tmp600;
    TNode<Smi> tmp601;
    TNode<Smi> tmp602;
    TNode<Smi> tmp603;
    TNode<Object> tmp604;
    TNode<FixedArray> tmp605;
    TNode<IntPtrT> tmp606;
    TNode<IntPtrT> tmp607;
    TNode<Smi> tmp608;
    TNode<Smi> tmp609;
    TNode<IntPtrT> tmp610;
    TNode<HeapObject> tmp611;
    TNode<IntPtrT> tmp612;
    TNode<IntPtrT> tmp613;
    TNode<IntPtrT> tmp614;
    TNode<IntPtrT> tmp615;
    ca_.Bind(&block41, &tmp593, &tmp594, &tmp595, &tmp596, &tmp597, &tmp598, &tmp599, &tmp600, &tmp601, &tmp602, &tmp603, &tmp604, &tmp605, &tmp606, &tmp607, &tmp608, &tmp609, &tmp610, &tmp611, &tmp612, &tmp613, &tmp614, &tmp615);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block38, tmp593, tmp594, tmp595, tmp596, tmp597, tmp598, tmp599, tmp600, tmp601, tmp602, tmp603, tmp604, tmp605, tmp606, tmp607, tmp608, tmp609, tmp610);
  }

  if (block39.is_used()) {
    TNode<Context> tmp616;
    TNode<JSTypedArray> tmp617;
    TNode<JSReceiver> tmp618;
    TNode<FixedArray> tmp619;
    TNode<Smi> tmp620;
    TNode<Smi> tmp621;
    TNode<Smi> tmp622;
    TNode<FixedArray> tmp623;
    TNode<Smi> tmp624;
    TNode<Smi> tmp625;
    TNode<Smi> tmp626;
    TNode<Object> tmp627;
    TNode<FixedArray> tmp628;
    TNode<IntPtrT> tmp629;
    TNode<IntPtrT> tmp630;
    TNode<Smi> tmp631;
    TNode<Smi> tmp632;
    TNode<IntPtrT> tmp633;
    TNode<HeapObject> tmp634;
    TNode<IntPtrT> tmp635;
    TNode<IntPtrT> tmp636;
    TNode<IntPtrT> tmp637;
    TNode<IntPtrT> tmp638;
    TNode<HeapObject> tmp639;
    TNode<IntPtrT> tmp640;
    ca_.Bind(&block39, &tmp616, &tmp617, &tmp618, &tmp619, &tmp620, &tmp621, &tmp622, &tmp623, &tmp624, &tmp625, &tmp626, &tmp627, &tmp628, &tmp629, &tmp630, &tmp631, &tmp632, &tmp633, &tmp634, &tmp635, &tmp636, &tmp637, &tmp638, &tmp639, &tmp640);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block37, tmp616, tmp617, tmp618, tmp619, tmp620, tmp621, tmp622, tmp623, tmp624, tmp625, tmp626, tmp627, tmp628, tmp629, tmp630, tmp631, tmp632, tmp633, tmp639, tmp640);
  }

  if (block38.is_used()) {
    TNode<Context> tmp641;
    TNode<JSTypedArray> tmp642;
    TNode<JSReceiver> tmp643;
    TNode<FixedArray> tmp644;
    TNode<Smi> tmp645;
    TNode<Smi> tmp646;
    TNode<Smi> tmp647;
    TNode<FixedArray> tmp648;
    TNode<Smi> tmp649;
    TNode<Smi> tmp650;
    TNode<Smi> tmp651;
    TNode<Object> tmp652;
    TNode<FixedArray> tmp653;
    TNode<IntPtrT> tmp654;
    TNode<IntPtrT> tmp655;
    TNode<Smi> tmp656;
    TNode<Smi> tmp657;
    TNode<IntPtrT> tmp658;
    ca_.Bind(&block38, &tmp641, &tmp642, &tmp643, &tmp644, &tmp645, &tmp646, &tmp647, &tmp648, &tmp649, &tmp650, &tmp651, &tmp652, &tmp653, &tmp654, &tmp655, &tmp656, &tmp657, &tmp658);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block37.is_used()) {
    TNode<Context> tmp659;
    TNode<JSTypedArray> tmp660;
    TNode<JSReceiver> tmp661;
    TNode<FixedArray> tmp662;
    TNode<Smi> tmp663;
    TNode<Smi> tmp664;
    TNode<Smi> tmp665;
    TNode<FixedArray> tmp666;
    TNode<Smi> tmp667;
    TNode<Smi> tmp668;
    TNode<Smi> tmp669;
    TNode<Object> tmp670;
    TNode<FixedArray> tmp671;
    TNode<IntPtrT> tmp672;
    TNode<IntPtrT> tmp673;
    TNode<Smi> tmp674;
    TNode<Smi> tmp675;
    TNode<IntPtrT> tmp676;
    TNode<HeapObject> tmp677;
    TNode<IntPtrT> tmp678;
    ca_.Bind(&block37, &tmp659, &tmp660, &tmp661, &tmp662, &tmp663, &tmp664, &tmp665, &tmp666, &tmp667, &tmp668, &tmp669, &tmp670, &tmp671, &tmp672, &tmp673, &tmp674, &tmp675, &tmp676, &tmp677, &tmp678);
    ca_.Goto(&block36, tmp659, tmp660, tmp661, tmp662, tmp663, tmp664, tmp665, tmp666, tmp667, tmp668, tmp669, tmp670, tmp671, tmp672, tmp673, tmp674, tmp675, tmp677, tmp678);
  }

  if (block36.is_used()) {
    TNode<Context> tmp679;
    TNode<JSTypedArray> tmp680;
    TNode<JSReceiver> tmp681;
    TNode<FixedArray> tmp682;
    TNode<Smi> tmp683;
    TNode<Smi> tmp684;
    TNode<Smi> tmp685;
    TNode<FixedArray> tmp686;
    TNode<Smi> tmp687;
    TNode<Smi> tmp688;
    TNode<Smi> tmp689;
    TNode<Object> tmp690;
    TNode<FixedArray> tmp691;
    TNode<IntPtrT> tmp692;
    TNode<IntPtrT> tmp693;
    TNode<Smi> tmp694;
    TNode<Smi> tmp695;
    TNode<HeapObject> tmp696;
    TNode<IntPtrT> tmp697;
    ca_.Bind(&block36, &tmp679, &tmp680, &tmp681, &tmp682, &tmp683, &tmp684, &tmp685, &tmp686, &tmp687, &tmp688, &tmp689, &tmp690, &tmp691, &tmp692, &tmp693, &tmp694, &tmp695, &tmp696, &tmp697);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 247);
    TNode<Object>tmp698 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp696, tmp697});
    TNode<Object> tmp699;
    USE(tmp699);
    tmp699 = UnsafeCast90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol_1435(state_, TNode<Context>{tmp679}, TNode<Object>{tmp698});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 248);
    TNode<Number> tmp700;
    USE(tmp700);
    tmp700 = CallCompare_390(state_, TNode<Context>{tmp679}, TNode<JSTypedArray>{tmp680}, TNode<JSReceiver>{tmp681}, TNode<Object>{tmp690}, TNode<Object>{tmp699});
    TNode<Number> tmp701;
    USE(tmp701);
    tmp701 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 0);
    TNode<BoolT> tmp702;
    USE(tmp702);
    tmp702 = NumberIsLessThanOrEqual_76(state_, TNode<Number>{tmp700}, TNode<Number>{tmp701});
    ca_.Branch(tmp702, &block43, &block44, tmp679, tmp680, tmp681, tmp682, tmp683, tmp684, tmp685, tmp686, tmp687, tmp688, tmp689, tmp690, tmp699);
  }

  if (block43.is_used()) {
    TNode<Context> tmp703;
    TNode<JSTypedArray> tmp704;
    TNode<JSReceiver> tmp705;
    TNode<FixedArray> tmp706;
    TNode<Smi> tmp707;
    TNode<Smi> tmp708;
    TNode<Smi> tmp709;
    TNode<FixedArray> tmp710;
    TNode<Smi> tmp711;
    TNode<Smi> tmp712;
    TNode<Smi> tmp713;
    TNode<Object> tmp714;
    TNode<Object> tmp715;
    ca_.Bind(&block43, &tmp703, &tmp704, &tmp705, &tmp706, &tmp707, &tmp708, &tmp709, &tmp710, &tmp711, &tmp712, &tmp713, &tmp714, &tmp715);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 249);
    TNode<IntPtrT> tmp716 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp716);
    TNode<IntPtrT> tmp717 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp717);
    TNode<Smi>tmp718 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp710, tmp717});
    TNode<IntPtrT> tmp719;
    USE(tmp719);
    tmp719 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp718});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    TNode<IntPtrT> tmp720;
    USE(tmp720);
    tmp720 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp713});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp721;
    USE(tmp721);
    tmp721 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp720});
    TNode<UintPtrT> tmp722;
    USE(tmp722);
    tmp722 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp719});
    TNode<BoolT> tmp723;
    USE(tmp723);
    tmp723 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp721}, TNode<UintPtrT>{tmp722});
    ca_.Branch(tmp723, &block50, &block51, tmp703, tmp704, tmp705, tmp706, tmp707, tmp708, tmp709, tmp710, tmp711, tmp712, tmp713, tmp714, tmp715, tmp710, tmp716, tmp719, tmp713, tmp713, tmp720, tmp710, tmp716, tmp719, tmp720, tmp720);
  }

  if (block50.is_used()) {
    TNode<Context> tmp724;
    TNode<JSTypedArray> tmp725;
    TNode<JSReceiver> tmp726;
    TNode<FixedArray> tmp727;
    TNode<Smi> tmp728;
    TNode<Smi> tmp729;
    TNode<Smi> tmp730;
    TNode<FixedArray> tmp731;
    TNode<Smi> tmp732;
    TNode<Smi> tmp733;
    TNode<Smi> tmp734;
    TNode<Object> tmp735;
    TNode<Object> tmp736;
    TNode<FixedArray> tmp737;
    TNode<IntPtrT> tmp738;
    TNode<IntPtrT> tmp739;
    TNode<Smi> tmp740;
    TNode<Smi> tmp741;
    TNode<IntPtrT> tmp742;
    TNode<HeapObject> tmp743;
    TNode<IntPtrT> tmp744;
    TNode<IntPtrT> tmp745;
    TNode<IntPtrT> tmp746;
    TNode<IntPtrT> tmp747;
    ca_.Bind(&block50, &tmp724, &tmp725, &tmp726, &tmp727, &tmp728, &tmp729, &tmp730, &tmp731, &tmp732, &tmp733, &tmp734, &tmp735, &tmp736, &tmp737, &tmp738, &tmp739, &tmp740, &tmp741, &tmp742, &tmp743, &tmp744, &tmp745, &tmp746, &tmp747);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp748;
    USE(tmp748);
    tmp748 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp749;
    USE(tmp749);
    tmp749 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp747}, TNode<IntPtrT>{tmp748});
    TNode<IntPtrT> tmp750;
    USE(tmp750);
    tmp750 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp744}, TNode<IntPtrT>{tmp749});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp751;
    USE(tmp751);
    TNode<IntPtrT> tmp752;
    USE(tmp752);
    std::tie(tmp751, tmp752) = UnsafeNewReference20UT5ATSmi10HeapObject_1434(state_, TNode<HeapObject>{tmp743}, TNode<IntPtrT>{tmp750}).Flatten();
    ca_.Goto(&block49, tmp724, tmp725, tmp726, tmp727, tmp728, tmp729, tmp730, tmp731, tmp732, tmp733, tmp734, tmp735, tmp736, tmp737, tmp738, tmp739, tmp740, tmp741, tmp742, tmp743, tmp744, tmp745, tmp746, tmp747, tmp751, tmp752);
  }

  if (block51.is_used()) {
    TNode<Context> tmp753;
    TNode<JSTypedArray> tmp754;
    TNode<JSReceiver> tmp755;
    TNode<FixedArray> tmp756;
    TNode<Smi> tmp757;
    TNode<Smi> tmp758;
    TNode<Smi> tmp759;
    TNode<FixedArray> tmp760;
    TNode<Smi> tmp761;
    TNode<Smi> tmp762;
    TNode<Smi> tmp763;
    TNode<Object> tmp764;
    TNode<Object> tmp765;
    TNode<FixedArray> tmp766;
    TNode<IntPtrT> tmp767;
    TNode<IntPtrT> tmp768;
    TNode<Smi> tmp769;
    TNode<Smi> tmp770;
    TNode<IntPtrT> tmp771;
    TNode<HeapObject> tmp772;
    TNode<IntPtrT> tmp773;
    TNode<IntPtrT> tmp774;
    TNode<IntPtrT> tmp775;
    TNode<IntPtrT> tmp776;
    ca_.Bind(&block51, &tmp753, &tmp754, &tmp755, &tmp756, &tmp757, &tmp758, &tmp759, &tmp760, &tmp761, &tmp762, &tmp763, &tmp764, &tmp765, &tmp766, &tmp767, &tmp768, &tmp769, &tmp770, &tmp771, &tmp772, &tmp773, &tmp774, &tmp775, &tmp776);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block48, tmp753, tmp754, tmp755, tmp756, tmp757, tmp758, tmp759, tmp760, tmp761, tmp762, tmp763, tmp764, tmp765, tmp766, tmp767, tmp768, tmp769, tmp770, tmp771);
  }

  if (block49.is_used()) {
    TNode<Context> tmp777;
    TNode<JSTypedArray> tmp778;
    TNode<JSReceiver> tmp779;
    TNode<FixedArray> tmp780;
    TNode<Smi> tmp781;
    TNode<Smi> tmp782;
    TNode<Smi> tmp783;
    TNode<FixedArray> tmp784;
    TNode<Smi> tmp785;
    TNode<Smi> tmp786;
    TNode<Smi> tmp787;
    TNode<Object> tmp788;
    TNode<Object> tmp789;
    TNode<FixedArray> tmp790;
    TNode<IntPtrT> tmp791;
    TNode<IntPtrT> tmp792;
    TNode<Smi> tmp793;
    TNode<Smi> tmp794;
    TNode<IntPtrT> tmp795;
    TNode<HeapObject> tmp796;
    TNode<IntPtrT> tmp797;
    TNode<IntPtrT> tmp798;
    TNode<IntPtrT> tmp799;
    TNode<IntPtrT> tmp800;
    TNode<HeapObject> tmp801;
    TNode<IntPtrT> tmp802;
    ca_.Bind(&block49, &tmp777, &tmp778, &tmp779, &tmp780, &tmp781, &tmp782, &tmp783, &tmp784, &tmp785, &tmp786, &tmp787, &tmp788, &tmp789, &tmp790, &tmp791, &tmp792, &tmp793, &tmp794, &tmp795, &tmp796, &tmp797, &tmp798, &tmp799, &tmp800, &tmp801, &tmp802);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block47, tmp777, tmp778, tmp779, tmp780, tmp781, tmp782, tmp783, tmp784, tmp785, tmp786, tmp787, tmp788, tmp789, tmp790, tmp791, tmp792, tmp793, tmp794, tmp795, tmp801, tmp802);
  }

  if (block48.is_used()) {
    TNode<Context> tmp803;
    TNode<JSTypedArray> tmp804;
    TNode<JSReceiver> tmp805;
    TNode<FixedArray> tmp806;
    TNode<Smi> tmp807;
    TNode<Smi> tmp808;
    TNode<Smi> tmp809;
    TNode<FixedArray> tmp810;
    TNode<Smi> tmp811;
    TNode<Smi> tmp812;
    TNode<Smi> tmp813;
    TNode<Object> tmp814;
    TNode<Object> tmp815;
    TNode<FixedArray> tmp816;
    TNode<IntPtrT> tmp817;
    TNode<IntPtrT> tmp818;
    TNode<Smi> tmp819;
    TNode<Smi> tmp820;
    TNode<IntPtrT> tmp821;
    ca_.Bind(&block48, &tmp803, &tmp804, &tmp805, &tmp806, &tmp807, &tmp808, &tmp809, &tmp810, &tmp811, &tmp812, &tmp813, &tmp814, &tmp815, &tmp816, &tmp817, &tmp818, &tmp819, &tmp820, &tmp821);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block47.is_used()) {
    TNode<Context> tmp822;
    TNode<JSTypedArray> tmp823;
    TNode<JSReceiver> tmp824;
    TNode<FixedArray> tmp825;
    TNode<Smi> tmp826;
    TNode<Smi> tmp827;
    TNode<Smi> tmp828;
    TNode<FixedArray> tmp829;
    TNode<Smi> tmp830;
    TNode<Smi> tmp831;
    TNode<Smi> tmp832;
    TNode<Object> tmp833;
    TNode<Object> tmp834;
    TNode<FixedArray> tmp835;
    TNode<IntPtrT> tmp836;
    TNode<IntPtrT> tmp837;
    TNode<Smi> tmp838;
    TNode<Smi> tmp839;
    TNode<IntPtrT> tmp840;
    TNode<HeapObject> tmp841;
    TNode<IntPtrT> tmp842;
    ca_.Bind(&block47, &tmp822, &tmp823, &tmp824, &tmp825, &tmp826, &tmp827, &tmp828, &tmp829, &tmp830, &tmp831, &tmp832, &tmp833, &tmp834, &tmp835, &tmp836, &tmp837, &tmp838, &tmp839, &tmp840, &tmp841, &tmp842);
    ca_.Goto(&block46, tmp822, tmp823, tmp824, tmp825, tmp826, tmp827, tmp828, tmp829, tmp830, tmp831, tmp832, tmp833, tmp834, tmp835, tmp836, tmp837, tmp838, tmp839, tmp841, tmp842);
  }

  if (block46.is_used()) {
    TNode<Context> tmp843;
    TNode<JSTypedArray> tmp844;
    TNode<JSReceiver> tmp845;
    TNode<FixedArray> tmp846;
    TNode<Smi> tmp847;
    TNode<Smi> tmp848;
    TNode<Smi> tmp849;
    TNode<FixedArray> tmp850;
    TNode<Smi> tmp851;
    TNode<Smi> tmp852;
    TNode<Smi> tmp853;
    TNode<Object> tmp854;
    TNode<Object> tmp855;
    TNode<FixedArray> tmp856;
    TNode<IntPtrT> tmp857;
    TNode<IntPtrT> tmp858;
    TNode<Smi> tmp859;
    TNode<Smi> tmp860;
    TNode<HeapObject> tmp861;
    TNode<IntPtrT> tmp862;
    ca_.Bind(&block46, &tmp843, &tmp844, &tmp845, &tmp846, &tmp847, &tmp848, &tmp849, &tmp850, &tmp851, &tmp852, &tmp853, &tmp854, &tmp855, &tmp856, &tmp857, &tmp858, &tmp859, &tmp860, &tmp861, &tmp862);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 249);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp861, tmp862}, tmp854);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 250);
    TNode<Smi> tmp863;
    USE(tmp863);
    tmp863 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp864;
    USE(tmp864);
    tmp864 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp851}, TNode<Smi>{tmp863});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 248);
    ca_.Goto(&block45, tmp843, tmp844, tmp845, tmp846, tmp847, tmp848, tmp849, tmp850, tmp864, tmp852, tmp853, tmp854, tmp855);
  }

  if (block44.is_used()) {
    TNode<Context> tmp865;
    TNode<JSTypedArray> tmp866;
    TNode<JSReceiver> tmp867;
    TNode<FixedArray> tmp868;
    TNode<Smi> tmp869;
    TNode<Smi> tmp870;
    TNode<Smi> tmp871;
    TNode<FixedArray> tmp872;
    TNode<Smi> tmp873;
    TNode<Smi> tmp874;
    TNode<Smi> tmp875;
    TNode<Object> tmp876;
    TNode<Object> tmp877;
    ca_.Bind(&block44, &tmp865, &tmp866, &tmp867, &tmp868, &tmp869, &tmp870, &tmp871, &tmp872, &tmp873, &tmp874, &tmp875, &tmp876, &tmp877);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 252);
    TNode<IntPtrT> tmp878 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp878);
    TNode<IntPtrT> tmp879 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp879);
    TNode<Smi>tmp880 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp872, tmp879});
    TNode<IntPtrT> tmp881;
    USE(tmp881);
    tmp881 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp880});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    TNode<IntPtrT> tmp882;
    USE(tmp882);
    tmp882 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp875});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp883;
    USE(tmp883);
    tmp883 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp882});
    TNode<UintPtrT> tmp884;
    USE(tmp884);
    tmp884 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp881});
    TNode<BoolT> tmp885;
    USE(tmp885);
    tmp885 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp883}, TNode<UintPtrT>{tmp884});
    ca_.Branch(tmp885, &block57, &block58, tmp865, tmp866, tmp867, tmp868, tmp869, tmp870, tmp871, tmp872, tmp873, tmp874, tmp875, tmp876, tmp877, tmp872, tmp878, tmp881, tmp875, tmp875, tmp882, tmp872, tmp878, tmp881, tmp882, tmp882);
  }

  if (block57.is_used()) {
    TNode<Context> tmp886;
    TNode<JSTypedArray> tmp887;
    TNode<JSReceiver> tmp888;
    TNode<FixedArray> tmp889;
    TNode<Smi> tmp890;
    TNode<Smi> tmp891;
    TNode<Smi> tmp892;
    TNode<FixedArray> tmp893;
    TNode<Smi> tmp894;
    TNode<Smi> tmp895;
    TNode<Smi> tmp896;
    TNode<Object> tmp897;
    TNode<Object> tmp898;
    TNode<FixedArray> tmp899;
    TNode<IntPtrT> tmp900;
    TNode<IntPtrT> tmp901;
    TNode<Smi> tmp902;
    TNode<Smi> tmp903;
    TNode<IntPtrT> tmp904;
    TNode<HeapObject> tmp905;
    TNode<IntPtrT> tmp906;
    TNode<IntPtrT> tmp907;
    TNode<IntPtrT> tmp908;
    TNode<IntPtrT> tmp909;
    ca_.Bind(&block57, &tmp886, &tmp887, &tmp888, &tmp889, &tmp890, &tmp891, &tmp892, &tmp893, &tmp894, &tmp895, &tmp896, &tmp897, &tmp898, &tmp899, &tmp900, &tmp901, &tmp902, &tmp903, &tmp904, &tmp905, &tmp906, &tmp907, &tmp908, &tmp909);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp910;
    USE(tmp910);
    tmp910 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp911;
    USE(tmp911);
    tmp911 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp909}, TNode<IntPtrT>{tmp910});
    TNode<IntPtrT> tmp912;
    USE(tmp912);
    tmp912 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp906}, TNode<IntPtrT>{tmp911});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp913;
    USE(tmp913);
    TNode<IntPtrT> tmp914;
    USE(tmp914);
    std::tie(tmp913, tmp914) = UnsafeNewReference20UT5ATSmi10HeapObject_1434(state_, TNode<HeapObject>{tmp905}, TNode<IntPtrT>{tmp912}).Flatten();
    ca_.Goto(&block56, tmp886, tmp887, tmp888, tmp889, tmp890, tmp891, tmp892, tmp893, tmp894, tmp895, tmp896, tmp897, tmp898, tmp899, tmp900, tmp901, tmp902, tmp903, tmp904, tmp905, tmp906, tmp907, tmp908, tmp909, tmp913, tmp914);
  }

  if (block58.is_used()) {
    TNode<Context> tmp915;
    TNode<JSTypedArray> tmp916;
    TNode<JSReceiver> tmp917;
    TNode<FixedArray> tmp918;
    TNode<Smi> tmp919;
    TNode<Smi> tmp920;
    TNode<Smi> tmp921;
    TNode<FixedArray> tmp922;
    TNode<Smi> tmp923;
    TNode<Smi> tmp924;
    TNode<Smi> tmp925;
    TNode<Object> tmp926;
    TNode<Object> tmp927;
    TNode<FixedArray> tmp928;
    TNode<IntPtrT> tmp929;
    TNode<IntPtrT> tmp930;
    TNode<Smi> tmp931;
    TNode<Smi> tmp932;
    TNode<IntPtrT> tmp933;
    TNode<HeapObject> tmp934;
    TNode<IntPtrT> tmp935;
    TNode<IntPtrT> tmp936;
    TNode<IntPtrT> tmp937;
    TNode<IntPtrT> tmp938;
    ca_.Bind(&block58, &tmp915, &tmp916, &tmp917, &tmp918, &tmp919, &tmp920, &tmp921, &tmp922, &tmp923, &tmp924, &tmp925, &tmp926, &tmp927, &tmp928, &tmp929, &tmp930, &tmp931, &tmp932, &tmp933, &tmp934, &tmp935, &tmp936, &tmp937, &tmp938);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block55, tmp915, tmp916, tmp917, tmp918, tmp919, tmp920, tmp921, tmp922, tmp923, tmp924, tmp925, tmp926, tmp927, tmp928, tmp929, tmp930, tmp931, tmp932, tmp933);
  }

  if (block56.is_used()) {
    TNode<Context> tmp939;
    TNode<JSTypedArray> tmp940;
    TNode<JSReceiver> tmp941;
    TNode<FixedArray> tmp942;
    TNode<Smi> tmp943;
    TNode<Smi> tmp944;
    TNode<Smi> tmp945;
    TNode<FixedArray> tmp946;
    TNode<Smi> tmp947;
    TNode<Smi> tmp948;
    TNode<Smi> tmp949;
    TNode<Object> tmp950;
    TNode<Object> tmp951;
    TNode<FixedArray> tmp952;
    TNode<IntPtrT> tmp953;
    TNode<IntPtrT> tmp954;
    TNode<Smi> tmp955;
    TNode<Smi> tmp956;
    TNode<IntPtrT> tmp957;
    TNode<HeapObject> tmp958;
    TNode<IntPtrT> tmp959;
    TNode<IntPtrT> tmp960;
    TNode<IntPtrT> tmp961;
    TNode<IntPtrT> tmp962;
    TNode<HeapObject> tmp963;
    TNode<IntPtrT> tmp964;
    ca_.Bind(&block56, &tmp939, &tmp940, &tmp941, &tmp942, &tmp943, &tmp944, &tmp945, &tmp946, &tmp947, &tmp948, &tmp949, &tmp950, &tmp951, &tmp952, &tmp953, &tmp954, &tmp955, &tmp956, &tmp957, &tmp958, &tmp959, &tmp960, &tmp961, &tmp962, &tmp963, &tmp964);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block54, tmp939, tmp940, tmp941, tmp942, tmp943, tmp944, tmp945, tmp946, tmp947, tmp948, tmp949, tmp950, tmp951, tmp952, tmp953, tmp954, tmp955, tmp956, tmp957, tmp963, tmp964);
  }

  if (block55.is_used()) {
    TNode<Context> tmp965;
    TNode<JSTypedArray> tmp966;
    TNode<JSReceiver> tmp967;
    TNode<FixedArray> tmp968;
    TNode<Smi> tmp969;
    TNode<Smi> tmp970;
    TNode<Smi> tmp971;
    TNode<FixedArray> tmp972;
    TNode<Smi> tmp973;
    TNode<Smi> tmp974;
    TNode<Smi> tmp975;
    TNode<Object> tmp976;
    TNode<Object> tmp977;
    TNode<FixedArray> tmp978;
    TNode<IntPtrT> tmp979;
    TNode<IntPtrT> tmp980;
    TNode<Smi> tmp981;
    TNode<Smi> tmp982;
    TNode<IntPtrT> tmp983;
    ca_.Bind(&block55, &tmp965, &tmp966, &tmp967, &tmp968, &tmp969, &tmp970, &tmp971, &tmp972, &tmp973, &tmp974, &tmp975, &tmp976, &tmp977, &tmp978, &tmp979, &tmp980, &tmp981, &tmp982, &tmp983);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block54.is_used()) {
    TNode<Context> tmp984;
    TNode<JSTypedArray> tmp985;
    TNode<JSReceiver> tmp986;
    TNode<FixedArray> tmp987;
    TNode<Smi> tmp988;
    TNode<Smi> tmp989;
    TNode<Smi> tmp990;
    TNode<FixedArray> tmp991;
    TNode<Smi> tmp992;
    TNode<Smi> tmp993;
    TNode<Smi> tmp994;
    TNode<Object> tmp995;
    TNode<Object> tmp996;
    TNode<FixedArray> tmp997;
    TNode<IntPtrT> tmp998;
    TNode<IntPtrT> tmp999;
    TNode<Smi> tmp1000;
    TNode<Smi> tmp1001;
    TNode<IntPtrT> tmp1002;
    TNode<HeapObject> tmp1003;
    TNode<IntPtrT> tmp1004;
    ca_.Bind(&block54, &tmp984, &tmp985, &tmp986, &tmp987, &tmp988, &tmp989, &tmp990, &tmp991, &tmp992, &tmp993, &tmp994, &tmp995, &tmp996, &tmp997, &tmp998, &tmp999, &tmp1000, &tmp1001, &tmp1002, &tmp1003, &tmp1004);
    ca_.Goto(&block53, tmp984, tmp985, tmp986, tmp987, tmp988, tmp989, tmp990, tmp991, tmp992, tmp993, tmp994, tmp995, tmp996, tmp997, tmp998, tmp999, tmp1000, tmp1001, tmp1003, tmp1004);
  }

  if (block53.is_used()) {
    TNode<Context> tmp1005;
    TNode<JSTypedArray> tmp1006;
    TNode<JSReceiver> tmp1007;
    TNode<FixedArray> tmp1008;
    TNode<Smi> tmp1009;
    TNode<Smi> tmp1010;
    TNode<Smi> tmp1011;
    TNode<FixedArray> tmp1012;
    TNode<Smi> tmp1013;
    TNode<Smi> tmp1014;
    TNode<Smi> tmp1015;
    TNode<Object> tmp1016;
    TNode<Object> tmp1017;
    TNode<FixedArray> tmp1018;
    TNode<IntPtrT> tmp1019;
    TNode<IntPtrT> tmp1020;
    TNode<Smi> tmp1021;
    TNode<Smi> tmp1022;
    TNode<HeapObject> tmp1023;
    TNode<IntPtrT> tmp1024;
    ca_.Bind(&block53, &tmp1005, &tmp1006, &tmp1007, &tmp1008, &tmp1009, &tmp1010, &tmp1011, &tmp1012, &tmp1013, &tmp1014, &tmp1015, &tmp1016, &tmp1017, &tmp1018, &tmp1019, &tmp1020, &tmp1021, &tmp1022, &tmp1023, &tmp1024);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 252);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp1023, tmp1024}, tmp1017);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 253);
    TNode<Smi> tmp1025;
    USE(tmp1025);
    tmp1025 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp1026;
    USE(tmp1026);
    tmp1026 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp1014}, TNode<Smi>{tmp1025});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 248);
    ca_.Goto(&block45, tmp1005, tmp1006, tmp1007, tmp1008, tmp1009, tmp1010, tmp1011, tmp1012, tmp1013, tmp1026, tmp1015, tmp1016, tmp1017);
  }

  if (block45.is_used()) {
    TNode<Context> tmp1027;
    TNode<JSTypedArray> tmp1028;
    TNode<JSReceiver> tmp1029;
    TNode<FixedArray> tmp1030;
    TNode<Smi> tmp1031;
    TNode<Smi> tmp1032;
    TNode<Smi> tmp1033;
    TNode<FixedArray> tmp1034;
    TNode<Smi> tmp1035;
    TNode<Smi> tmp1036;
    TNode<Smi> tmp1037;
    TNode<Object> tmp1038;
    TNode<Object> tmp1039;
    ca_.Bind(&block45, &tmp1027, &tmp1028, &tmp1029, &tmp1030, &tmp1031, &tmp1032, &tmp1033, &tmp1034, &tmp1035, &tmp1036, &tmp1037, &tmp1038, &tmp1039);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 244);
    ca_.Goto(&block28, tmp1027, tmp1028, tmp1029, tmp1030, tmp1031, tmp1032, tmp1033, tmp1034, tmp1035, tmp1036, tmp1037);
  }

  if (block27.is_used()) {
    TNode<Context> tmp1040;
    TNode<JSTypedArray> tmp1041;
    TNode<JSReceiver> tmp1042;
    TNode<FixedArray> tmp1043;
    TNode<Smi> tmp1044;
    TNode<Smi> tmp1045;
    TNode<Smi> tmp1046;
    TNode<FixedArray> tmp1047;
    TNode<Smi> tmp1048;
    TNode<Smi> tmp1049;
    TNode<Smi> tmp1050;
    ca_.Bind(&block27, &tmp1040, &tmp1041, &tmp1042, &tmp1043, &tmp1044, &tmp1045, &tmp1046, &tmp1047, &tmp1048, &tmp1049, &tmp1050);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 259);
    TNode<IntPtrT> tmp1051 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp1051);
    TNode<IntPtrT> tmp1052 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp1052);
    TNode<Smi>tmp1053 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp1047, tmp1052});
    TNode<IntPtrT> tmp1054;
    USE(tmp1054);
    tmp1054 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp1053});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    TNode<IntPtrT> tmp1055;
    USE(tmp1055);
    tmp1055 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp1050});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp1056;
    USE(tmp1056);
    tmp1056 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp1055});
    TNode<UintPtrT> tmp1057;
    USE(tmp1057);
    tmp1057 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp1054});
    TNode<BoolT> tmp1058;
    USE(tmp1058);
    tmp1058 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp1056}, TNode<UintPtrT>{tmp1057});
    ca_.Branch(tmp1058, &block64, &block65, tmp1040, tmp1041, tmp1042, tmp1043, tmp1044, tmp1045, tmp1046, tmp1047, tmp1048, tmp1049, tmp1050, tmp1047, tmp1051, tmp1054, tmp1050, tmp1050, tmp1055, tmp1047, tmp1051, tmp1054, tmp1055, tmp1055);
  }

  if (block64.is_used()) {
    TNode<Context> tmp1059;
    TNode<JSTypedArray> tmp1060;
    TNode<JSReceiver> tmp1061;
    TNode<FixedArray> tmp1062;
    TNode<Smi> tmp1063;
    TNode<Smi> tmp1064;
    TNode<Smi> tmp1065;
    TNode<FixedArray> tmp1066;
    TNode<Smi> tmp1067;
    TNode<Smi> tmp1068;
    TNode<Smi> tmp1069;
    TNode<FixedArray> tmp1070;
    TNode<IntPtrT> tmp1071;
    TNode<IntPtrT> tmp1072;
    TNode<Smi> tmp1073;
    TNode<Smi> tmp1074;
    TNode<IntPtrT> tmp1075;
    TNode<HeapObject> tmp1076;
    TNode<IntPtrT> tmp1077;
    TNode<IntPtrT> tmp1078;
    TNode<IntPtrT> tmp1079;
    TNode<IntPtrT> tmp1080;
    ca_.Bind(&block64, &tmp1059, &tmp1060, &tmp1061, &tmp1062, &tmp1063, &tmp1064, &tmp1065, &tmp1066, &tmp1067, &tmp1068, &tmp1069, &tmp1070, &tmp1071, &tmp1072, &tmp1073, &tmp1074, &tmp1075, &tmp1076, &tmp1077, &tmp1078, &tmp1079, &tmp1080);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp1081;
    USE(tmp1081);
    tmp1081 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp1082;
    USE(tmp1082);
    tmp1082 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp1080}, TNode<IntPtrT>{tmp1081});
    TNode<IntPtrT> tmp1083;
    USE(tmp1083);
    tmp1083 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1077}, TNode<IntPtrT>{tmp1082});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp1084;
    USE(tmp1084);
    TNode<IntPtrT> tmp1085;
    USE(tmp1085);
    std::tie(tmp1084, tmp1085) = UnsafeNewReference20UT5ATSmi10HeapObject_1434(state_, TNode<HeapObject>{tmp1076}, TNode<IntPtrT>{tmp1083}).Flatten();
    ca_.Goto(&block63, tmp1059, tmp1060, tmp1061, tmp1062, tmp1063, tmp1064, tmp1065, tmp1066, tmp1067, tmp1068, tmp1069, tmp1070, tmp1071, tmp1072, tmp1073, tmp1074, tmp1075, tmp1076, tmp1077, tmp1078, tmp1079, tmp1080, tmp1084, tmp1085);
  }

  if (block65.is_used()) {
    TNode<Context> tmp1086;
    TNode<JSTypedArray> tmp1087;
    TNode<JSReceiver> tmp1088;
    TNode<FixedArray> tmp1089;
    TNode<Smi> tmp1090;
    TNode<Smi> tmp1091;
    TNode<Smi> tmp1092;
    TNode<FixedArray> tmp1093;
    TNode<Smi> tmp1094;
    TNode<Smi> tmp1095;
    TNode<Smi> tmp1096;
    TNode<FixedArray> tmp1097;
    TNode<IntPtrT> tmp1098;
    TNode<IntPtrT> tmp1099;
    TNode<Smi> tmp1100;
    TNode<Smi> tmp1101;
    TNode<IntPtrT> tmp1102;
    TNode<HeapObject> tmp1103;
    TNode<IntPtrT> tmp1104;
    TNode<IntPtrT> tmp1105;
    TNode<IntPtrT> tmp1106;
    TNode<IntPtrT> tmp1107;
    ca_.Bind(&block65, &tmp1086, &tmp1087, &tmp1088, &tmp1089, &tmp1090, &tmp1091, &tmp1092, &tmp1093, &tmp1094, &tmp1095, &tmp1096, &tmp1097, &tmp1098, &tmp1099, &tmp1100, &tmp1101, &tmp1102, &tmp1103, &tmp1104, &tmp1105, &tmp1106, &tmp1107);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block62, tmp1086, tmp1087, tmp1088, tmp1089, tmp1090, tmp1091, tmp1092, tmp1093, tmp1094, tmp1095, tmp1096, tmp1097, tmp1098, tmp1099, tmp1100, tmp1101, tmp1102);
  }

  if (block63.is_used()) {
    TNode<Context> tmp1108;
    TNode<JSTypedArray> tmp1109;
    TNode<JSReceiver> tmp1110;
    TNode<FixedArray> tmp1111;
    TNode<Smi> tmp1112;
    TNode<Smi> tmp1113;
    TNode<Smi> tmp1114;
    TNode<FixedArray> tmp1115;
    TNode<Smi> tmp1116;
    TNode<Smi> tmp1117;
    TNode<Smi> tmp1118;
    TNode<FixedArray> tmp1119;
    TNode<IntPtrT> tmp1120;
    TNode<IntPtrT> tmp1121;
    TNode<Smi> tmp1122;
    TNode<Smi> tmp1123;
    TNode<IntPtrT> tmp1124;
    TNode<HeapObject> tmp1125;
    TNode<IntPtrT> tmp1126;
    TNode<IntPtrT> tmp1127;
    TNode<IntPtrT> tmp1128;
    TNode<IntPtrT> tmp1129;
    TNode<HeapObject> tmp1130;
    TNode<IntPtrT> tmp1131;
    ca_.Bind(&block63, &tmp1108, &tmp1109, &tmp1110, &tmp1111, &tmp1112, &tmp1113, &tmp1114, &tmp1115, &tmp1116, &tmp1117, &tmp1118, &tmp1119, &tmp1120, &tmp1121, &tmp1122, &tmp1123, &tmp1124, &tmp1125, &tmp1126, &tmp1127, &tmp1128, &tmp1129, &tmp1130, &tmp1131);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block61, tmp1108, tmp1109, tmp1110, tmp1111, tmp1112, tmp1113, tmp1114, tmp1115, tmp1116, tmp1117, tmp1118, tmp1119, tmp1120, tmp1121, tmp1122, tmp1123, tmp1124, tmp1130, tmp1131);
  }

  if (block62.is_used()) {
    TNode<Context> tmp1132;
    TNode<JSTypedArray> tmp1133;
    TNode<JSReceiver> tmp1134;
    TNode<FixedArray> tmp1135;
    TNode<Smi> tmp1136;
    TNode<Smi> tmp1137;
    TNode<Smi> tmp1138;
    TNode<FixedArray> tmp1139;
    TNode<Smi> tmp1140;
    TNode<Smi> tmp1141;
    TNode<Smi> tmp1142;
    TNode<FixedArray> tmp1143;
    TNode<IntPtrT> tmp1144;
    TNode<IntPtrT> tmp1145;
    TNode<Smi> tmp1146;
    TNode<Smi> tmp1147;
    TNode<IntPtrT> tmp1148;
    ca_.Bind(&block62, &tmp1132, &tmp1133, &tmp1134, &tmp1135, &tmp1136, &tmp1137, &tmp1138, &tmp1139, &tmp1140, &tmp1141, &tmp1142, &tmp1143, &tmp1144, &tmp1145, &tmp1146, &tmp1147, &tmp1148);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block61.is_used()) {
    TNode<Context> tmp1149;
    TNode<JSTypedArray> tmp1150;
    TNode<JSReceiver> tmp1151;
    TNode<FixedArray> tmp1152;
    TNode<Smi> tmp1153;
    TNode<Smi> tmp1154;
    TNode<Smi> tmp1155;
    TNode<FixedArray> tmp1156;
    TNode<Smi> tmp1157;
    TNode<Smi> tmp1158;
    TNode<Smi> tmp1159;
    TNode<FixedArray> tmp1160;
    TNode<IntPtrT> tmp1161;
    TNode<IntPtrT> tmp1162;
    TNode<Smi> tmp1163;
    TNode<Smi> tmp1164;
    TNode<IntPtrT> tmp1165;
    TNode<HeapObject> tmp1166;
    TNode<IntPtrT> tmp1167;
    ca_.Bind(&block61, &tmp1149, &tmp1150, &tmp1151, &tmp1152, &tmp1153, &tmp1154, &tmp1155, &tmp1156, &tmp1157, &tmp1158, &tmp1159, &tmp1160, &tmp1161, &tmp1162, &tmp1163, &tmp1164, &tmp1165, &tmp1166, &tmp1167);
    ca_.Goto(&block60, tmp1149, tmp1150, tmp1151, tmp1152, tmp1153, tmp1154, tmp1155, tmp1156, tmp1157, tmp1158, tmp1159, tmp1160, tmp1161, tmp1162, tmp1163, tmp1164, tmp1166, tmp1167);
  }

  if (block60.is_used()) {
    TNode<Context> tmp1168;
    TNode<JSTypedArray> tmp1169;
    TNode<JSReceiver> tmp1170;
    TNode<FixedArray> tmp1171;
    TNode<Smi> tmp1172;
    TNode<Smi> tmp1173;
    TNode<Smi> tmp1174;
    TNode<FixedArray> tmp1175;
    TNode<Smi> tmp1176;
    TNode<Smi> tmp1177;
    TNode<Smi> tmp1178;
    TNode<FixedArray> tmp1179;
    TNode<IntPtrT> tmp1180;
    TNode<IntPtrT> tmp1181;
    TNode<Smi> tmp1182;
    TNode<Smi> tmp1183;
    TNode<HeapObject> tmp1184;
    TNode<IntPtrT> tmp1185;
    ca_.Bind(&block60, &tmp1168, &tmp1169, &tmp1170, &tmp1171, &tmp1172, &tmp1173, &tmp1174, &tmp1175, &tmp1176, &tmp1177, &tmp1178, &tmp1179, &tmp1180, &tmp1181, &tmp1182, &tmp1183, &tmp1184, &tmp1185);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 259);
    TNode<IntPtrT> tmp1186 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp1186);
    TNode<IntPtrT> tmp1187 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp1187);
    TNode<Smi>tmp1188 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp1171, tmp1187});
    TNode<IntPtrT> tmp1189;
    USE(tmp1189);
    tmp1189 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp1188});
    TNode<Smi> tmp1190;
    USE(tmp1190);
    tmp1190 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp1191;
    USE(tmp1191);
    tmp1191 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp1177}, TNode<Smi>{tmp1190});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    TNode<IntPtrT> tmp1192;
    USE(tmp1192);
    tmp1192 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp1177});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp1193;
    USE(tmp1193);
    tmp1193 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp1192});
    TNode<UintPtrT> tmp1194;
    USE(tmp1194);
    tmp1194 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp1189});
    TNode<BoolT> tmp1195;
    USE(tmp1195);
    tmp1195 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp1193}, TNode<UintPtrT>{tmp1194});
    ca_.Branch(tmp1195, &block71, &block72, tmp1168, tmp1169, tmp1170, tmp1171, tmp1172, tmp1173, tmp1174, tmp1175, tmp1176, tmp1191, tmp1178, tmp1179, tmp1180, tmp1181, tmp1182, tmp1183, tmp1184, tmp1185, tmp1171, tmp1186, tmp1189, tmp1177, tmp1177, tmp1192, tmp1171, tmp1186, tmp1189, tmp1192, tmp1192);
  }

  if (block71.is_used()) {
    TNode<Context> tmp1196;
    TNode<JSTypedArray> tmp1197;
    TNode<JSReceiver> tmp1198;
    TNode<FixedArray> tmp1199;
    TNode<Smi> tmp1200;
    TNode<Smi> tmp1201;
    TNode<Smi> tmp1202;
    TNode<FixedArray> tmp1203;
    TNode<Smi> tmp1204;
    TNode<Smi> tmp1205;
    TNode<Smi> tmp1206;
    TNode<FixedArray> tmp1207;
    TNode<IntPtrT> tmp1208;
    TNode<IntPtrT> tmp1209;
    TNode<Smi> tmp1210;
    TNode<Smi> tmp1211;
    TNode<HeapObject> tmp1212;
    TNode<IntPtrT> tmp1213;
    TNode<FixedArray> tmp1214;
    TNode<IntPtrT> tmp1215;
    TNode<IntPtrT> tmp1216;
    TNode<Smi> tmp1217;
    TNode<Smi> tmp1218;
    TNode<IntPtrT> tmp1219;
    TNode<HeapObject> tmp1220;
    TNode<IntPtrT> tmp1221;
    TNode<IntPtrT> tmp1222;
    TNode<IntPtrT> tmp1223;
    TNode<IntPtrT> tmp1224;
    ca_.Bind(&block71, &tmp1196, &tmp1197, &tmp1198, &tmp1199, &tmp1200, &tmp1201, &tmp1202, &tmp1203, &tmp1204, &tmp1205, &tmp1206, &tmp1207, &tmp1208, &tmp1209, &tmp1210, &tmp1211, &tmp1212, &tmp1213, &tmp1214, &tmp1215, &tmp1216, &tmp1217, &tmp1218, &tmp1219, &tmp1220, &tmp1221, &tmp1222, &tmp1223, &tmp1224);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp1225;
    USE(tmp1225);
    tmp1225 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp1226;
    USE(tmp1226);
    tmp1226 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp1224}, TNode<IntPtrT>{tmp1225});
    TNode<IntPtrT> tmp1227;
    USE(tmp1227);
    tmp1227 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1221}, TNode<IntPtrT>{tmp1226});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp1228;
    USE(tmp1228);
    TNode<IntPtrT> tmp1229;
    USE(tmp1229);
    std::tie(tmp1228, tmp1229) = UnsafeNewReference20UT5ATSmi10HeapObject_1434(state_, TNode<HeapObject>{tmp1220}, TNode<IntPtrT>{tmp1227}).Flatten();
    ca_.Goto(&block70, tmp1196, tmp1197, tmp1198, tmp1199, tmp1200, tmp1201, tmp1202, tmp1203, tmp1204, tmp1205, tmp1206, tmp1207, tmp1208, tmp1209, tmp1210, tmp1211, tmp1212, tmp1213, tmp1214, tmp1215, tmp1216, tmp1217, tmp1218, tmp1219, tmp1220, tmp1221, tmp1222, tmp1223, tmp1224, tmp1228, tmp1229);
  }

  if (block72.is_used()) {
    TNode<Context> tmp1230;
    TNode<JSTypedArray> tmp1231;
    TNode<JSReceiver> tmp1232;
    TNode<FixedArray> tmp1233;
    TNode<Smi> tmp1234;
    TNode<Smi> tmp1235;
    TNode<Smi> tmp1236;
    TNode<FixedArray> tmp1237;
    TNode<Smi> tmp1238;
    TNode<Smi> tmp1239;
    TNode<Smi> tmp1240;
    TNode<FixedArray> tmp1241;
    TNode<IntPtrT> tmp1242;
    TNode<IntPtrT> tmp1243;
    TNode<Smi> tmp1244;
    TNode<Smi> tmp1245;
    TNode<HeapObject> tmp1246;
    TNode<IntPtrT> tmp1247;
    TNode<FixedArray> tmp1248;
    TNode<IntPtrT> tmp1249;
    TNode<IntPtrT> tmp1250;
    TNode<Smi> tmp1251;
    TNode<Smi> tmp1252;
    TNode<IntPtrT> tmp1253;
    TNode<HeapObject> tmp1254;
    TNode<IntPtrT> tmp1255;
    TNode<IntPtrT> tmp1256;
    TNode<IntPtrT> tmp1257;
    TNode<IntPtrT> tmp1258;
    ca_.Bind(&block72, &tmp1230, &tmp1231, &tmp1232, &tmp1233, &tmp1234, &tmp1235, &tmp1236, &tmp1237, &tmp1238, &tmp1239, &tmp1240, &tmp1241, &tmp1242, &tmp1243, &tmp1244, &tmp1245, &tmp1246, &tmp1247, &tmp1248, &tmp1249, &tmp1250, &tmp1251, &tmp1252, &tmp1253, &tmp1254, &tmp1255, &tmp1256, &tmp1257, &tmp1258);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block69, tmp1230, tmp1231, tmp1232, tmp1233, tmp1234, tmp1235, tmp1236, tmp1237, tmp1238, tmp1239, tmp1240, tmp1241, tmp1242, tmp1243, tmp1244, tmp1245, tmp1246, tmp1247, tmp1248, tmp1249, tmp1250, tmp1251, tmp1252, tmp1253);
  }

  if (block70.is_used()) {
    TNode<Context> tmp1259;
    TNode<JSTypedArray> tmp1260;
    TNode<JSReceiver> tmp1261;
    TNode<FixedArray> tmp1262;
    TNode<Smi> tmp1263;
    TNode<Smi> tmp1264;
    TNode<Smi> tmp1265;
    TNode<FixedArray> tmp1266;
    TNode<Smi> tmp1267;
    TNode<Smi> tmp1268;
    TNode<Smi> tmp1269;
    TNode<FixedArray> tmp1270;
    TNode<IntPtrT> tmp1271;
    TNode<IntPtrT> tmp1272;
    TNode<Smi> tmp1273;
    TNode<Smi> tmp1274;
    TNode<HeapObject> tmp1275;
    TNode<IntPtrT> tmp1276;
    TNode<FixedArray> tmp1277;
    TNode<IntPtrT> tmp1278;
    TNode<IntPtrT> tmp1279;
    TNode<Smi> tmp1280;
    TNode<Smi> tmp1281;
    TNode<IntPtrT> tmp1282;
    TNode<HeapObject> tmp1283;
    TNode<IntPtrT> tmp1284;
    TNode<IntPtrT> tmp1285;
    TNode<IntPtrT> tmp1286;
    TNode<IntPtrT> tmp1287;
    TNode<HeapObject> tmp1288;
    TNode<IntPtrT> tmp1289;
    ca_.Bind(&block70, &tmp1259, &tmp1260, &tmp1261, &tmp1262, &tmp1263, &tmp1264, &tmp1265, &tmp1266, &tmp1267, &tmp1268, &tmp1269, &tmp1270, &tmp1271, &tmp1272, &tmp1273, &tmp1274, &tmp1275, &tmp1276, &tmp1277, &tmp1278, &tmp1279, &tmp1280, &tmp1281, &tmp1282, &tmp1283, &tmp1284, &tmp1285, &tmp1286, &tmp1287, &tmp1288, &tmp1289);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block68, tmp1259, tmp1260, tmp1261, tmp1262, tmp1263, tmp1264, tmp1265, tmp1266, tmp1267, tmp1268, tmp1269, tmp1270, tmp1271, tmp1272, tmp1273, tmp1274, tmp1275, tmp1276, tmp1277, tmp1278, tmp1279, tmp1280, tmp1281, tmp1282, tmp1288, tmp1289);
  }

  if (block69.is_used()) {
    TNode<Context> tmp1290;
    TNode<JSTypedArray> tmp1291;
    TNode<JSReceiver> tmp1292;
    TNode<FixedArray> tmp1293;
    TNode<Smi> tmp1294;
    TNode<Smi> tmp1295;
    TNode<Smi> tmp1296;
    TNode<FixedArray> tmp1297;
    TNode<Smi> tmp1298;
    TNode<Smi> tmp1299;
    TNode<Smi> tmp1300;
    TNode<FixedArray> tmp1301;
    TNode<IntPtrT> tmp1302;
    TNode<IntPtrT> tmp1303;
    TNode<Smi> tmp1304;
    TNode<Smi> tmp1305;
    TNode<HeapObject> tmp1306;
    TNode<IntPtrT> tmp1307;
    TNode<FixedArray> tmp1308;
    TNode<IntPtrT> tmp1309;
    TNode<IntPtrT> tmp1310;
    TNode<Smi> tmp1311;
    TNode<Smi> tmp1312;
    TNode<IntPtrT> tmp1313;
    ca_.Bind(&block69, &tmp1290, &tmp1291, &tmp1292, &tmp1293, &tmp1294, &tmp1295, &tmp1296, &tmp1297, &tmp1298, &tmp1299, &tmp1300, &tmp1301, &tmp1302, &tmp1303, &tmp1304, &tmp1305, &tmp1306, &tmp1307, &tmp1308, &tmp1309, &tmp1310, &tmp1311, &tmp1312, &tmp1313);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block68.is_used()) {
    TNode<Context> tmp1314;
    TNode<JSTypedArray> tmp1315;
    TNode<JSReceiver> tmp1316;
    TNode<FixedArray> tmp1317;
    TNode<Smi> tmp1318;
    TNode<Smi> tmp1319;
    TNode<Smi> tmp1320;
    TNode<FixedArray> tmp1321;
    TNode<Smi> tmp1322;
    TNode<Smi> tmp1323;
    TNode<Smi> tmp1324;
    TNode<FixedArray> tmp1325;
    TNode<IntPtrT> tmp1326;
    TNode<IntPtrT> tmp1327;
    TNode<Smi> tmp1328;
    TNode<Smi> tmp1329;
    TNode<HeapObject> tmp1330;
    TNode<IntPtrT> tmp1331;
    TNode<FixedArray> tmp1332;
    TNode<IntPtrT> tmp1333;
    TNode<IntPtrT> tmp1334;
    TNode<Smi> tmp1335;
    TNode<Smi> tmp1336;
    TNode<IntPtrT> tmp1337;
    TNode<HeapObject> tmp1338;
    TNode<IntPtrT> tmp1339;
    ca_.Bind(&block68, &tmp1314, &tmp1315, &tmp1316, &tmp1317, &tmp1318, &tmp1319, &tmp1320, &tmp1321, &tmp1322, &tmp1323, &tmp1324, &tmp1325, &tmp1326, &tmp1327, &tmp1328, &tmp1329, &tmp1330, &tmp1331, &tmp1332, &tmp1333, &tmp1334, &tmp1335, &tmp1336, &tmp1337, &tmp1338, &tmp1339);
    ca_.Goto(&block67, tmp1314, tmp1315, tmp1316, tmp1317, tmp1318, tmp1319, tmp1320, tmp1321, tmp1322, tmp1323, tmp1324, tmp1325, tmp1326, tmp1327, tmp1328, tmp1329, tmp1330, tmp1331, tmp1332, tmp1333, tmp1334, tmp1335, tmp1336, tmp1338, tmp1339);
  }

  if (block67.is_used()) {
    TNode<Context> tmp1340;
    TNode<JSTypedArray> tmp1341;
    TNode<JSReceiver> tmp1342;
    TNode<FixedArray> tmp1343;
    TNode<Smi> tmp1344;
    TNode<Smi> tmp1345;
    TNode<Smi> tmp1346;
    TNode<FixedArray> tmp1347;
    TNode<Smi> tmp1348;
    TNode<Smi> tmp1349;
    TNode<Smi> tmp1350;
    TNode<FixedArray> tmp1351;
    TNode<IntPtrT> tmp1352;
    TNode<IntPtrT> tmp1353;
    TNode<Smi> tmp1354;
    TNode<Smi> tmp1355;
    TNode<HeapObject> tmp1356;
    TNode<IntPtrT> tmp1357;
    TNode<FixedArray> tmp1358;
    TNode<IntPtrT> tmp1359;
    TNode<IntPtrT> tmp1360;
    TNode<Smi> tmp1361;
    TNode<Smi> tmp1362;
    TNode<HeapObject> tmp1363;
    TNode<IntPtrT> tmp1364;
    ca_.Bind(&block67, &tmp1340, &tmp1341, &tmp1342, &tmp1343, &tmp1344, &tmp1345, &tmp1346, &tmp1347, &tmp1348, &tmp1349, &tmp1350, &tmp1351, &tmp1352, &tmp1353, &tmp1354, &tmp1355, &tmp1356, &tmp1357, &tmp1358, &tmp1359, &tmp1360, &tmp1361, &tmp1362, &tmp1363, &tmp1364);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 259);
    TNode<Object>tmp1365 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp1363, tmp1364});
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp1356, tmp1357}, tmp1365);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 244);
    ca_.Goto(&block28, tmp1340, tmp1341, tmp1342, tmp1343, tmp1344, tmp1345, tmp1346, tmp1347, tmp1348, tmp1349, tmp1350);
  }

  if (block28.is_used()) {
    TNode<Context> tmp1366;
    TNode<JSTypedArray> tmp1367;
    TNode<JSReceiver> tmp1368;
    TNode<FixedArray> tmp1369;
    TNode<Smi> tmp1370;
    TNode<Smi> tmp1371;
    TNode<Smi> tmp1372;
    TNode<FixedArray> tmp1373;
    TNode<Smi> tmp1374;
    TNode<Smi> tmp1375;
    TNode<Smi> tmp1376;
    ca_.Bind(&block28, &tmp1366, &tmp1367, &tmp1368, &tmp1369, &tmp1370, &tmp1371, &tmp1372, &tmp1373, &tmp1374, &tmp1375, &tmp1376);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 240);
    ca_.Goto(&block11, tmp1366, tmp1367, tmp1368, tmp1369, tmp1370, tmp1371, tmp1372, tmp1373, tmp1374, tmp1375, tmp1376);
  }

  if (block11.is_used()) {
    TNode<Context> tmp1377;
    TNode<JSTypedArray> tmp1378;
    TNode<JSReceiver> tmp1379;
    TNode<FixedArray> tmp1380;
    TNode<Smi> tmp1381;
    TNode<Smi> tmp1382;
    TNode<Smi> tmp1383;
    TNode<FixedArray> tmp1384;
    TNode<Smi> tmp1385;
    TNode<Smi> tmp1386;
    TNode<Smi> tmp1387;
    ca_.Bind(&block11, &tmp1377, &tmp1378, &tmp1379, &tmp1380, &tmp1381, &tmp1382, &tmp1383, &tmp1384, &tmp1385, &tmp1386, &tmp1387);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 239);
    ca_.Goto(&block5, tmp1377, tmp1378, tmp1379, tmp1380, tmp1381, tmp1382, tmp1383, tmp1384, tmp1385, tmp1386, tmp1387);
  }

  if (block5.is_used()) {
    TNode<Context> tmp1388;
    TNode<JSTypedArray> tmp1389;
    TNode<JSReceiver> tmp1390;
    TNode<FixedArray> tmp1391;
    TNode<Smi> tmp1392;
    TNode<Smi> tmp1393;
    TNode<Smi> tmp1394;
    TNode<FixedArray> tmp1395;
    TNode<Smi> tmp1396;
    TNode<Smi> tmp1397;
    TNode<Smi> tmp1398;
    ca_.Bind(&block5, &tmp1388, &tmp1389, &tmp1390, &tmp1391, &tmp1392, &tmp1393, &tmp1394, &tmp1395, &tmp1396, &tmp1397, &tmp1398);
    TNode<Smi> tmp1399;
    USE(tmp1399);
    tmp1399 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp1400;
    USE(tmp1400);
    tmp1400 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp1398}, TNode<Smi>{tmp1399});
    ca_.Goto(&block4, tmp1388, tmp1389, tmp1390, tmp1391, tmp1392, tmp1393, tmp1394, tmp1395, tmp1396, tmp1397, tmp1400);
  }

  if (block3.is_used()) {
    TNode<Context> tmp1401;
    TNode<JSTypedArray> tmp1402;
    TNode<JSReceiver> tmp1403;
    TNode<FixedArray> tmp1404;
    TNode<Smi> tmp1405;
    TNode<Smi> tmp1406;
    TNode<Smi> tmp1407;
    TNode<FixedArray> tmp1408;
    TNode<Smi> tmp1409;
    TNode<Smi> tmp1410;
    TNode<Smi> tmp1411;
    ca_.Bind(&block3, &tmp1401, &tmp1402, &tmp1403, &tmp1404, &tmp1405, &tmp1406, &tmp1407, &tmp1408, &tmp1409, &tmp1410, &tmp1411);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 235);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 232);
    ca_.Goto(&block1, tmp1401, tmp1402, tmp1403, tmp1404, tmp1405, tmp1406, tmp1407, tmp1408);
  }

  if (block1.is_used()) {
    TNode<Context> tmp1412;
    TNode<JSTypedArray> tmp1413;
    TNode<JSReceiver> tmp1414;
    TNode<FixedArray> tmp1415;
    TNode<Smi> tmp1416;
    TNode<Smi> tmp1417;
    TNode<Smi> tmp1418;
    TNode<FixedArray> tmp1419;
    ca_.Bind(&block1, &tmp1412, &tmp1413, &tmp1414, &tmp1415, &tmp1416, &tmp1417, &tmp1418, &tmp1419);
    ca_.Goto(&block74, tmp1412, tmp1413, tmp1414, tmp1415, tmp1416, tmp1417, tmp1418, tmp1419);
  }

    TNode<Context> tmp1420;
    TNode<JSTypedArray> tmp1421;
    TNode<JSReceiver> tmp1422;
    TNode<FixedArray> tmp1423;
    TNode<Smi> tmp1424;
    TNode<Smi> tmp1425;
    TNode<Smi> tmp1426;
    TNode<FixedArray> tmp1427;
    ca_.Bind(&block74, &tmp1420, &tmp1421, &tmp1422, &tmp1423, &tmp1424, &tmp1425, &tmp1426, &tmp1427);
}

TF_BUILTIN(TypedArrayMergeSort, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  TNode<JSReceiver> parameter2 = UncheckedCast<JSReceiver>(Parameter(Descriptor::kComparefn));
  USE(parameter2);
  TNode<FixedArray> parameter3 = UncheckedCast<FixedArray>(Parameter(Descriptor::kSource));
  USE(parameter3);
  TNode<Smi> parameter4 = UncheckedCast<Smi>(Parameter(Descriptor::kFrom));
  USE(parameter4);
  TNode<Smi> parameter5 = UncheckedCast<Smi>(Parameter(Descriptor::kTo));
  USE(parameter5);
  TNode<FixedArray> parameter6 = UncheckedCast<FixedArray>(Parameter(Descriptor::kTarget));
  USE(parameter6);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, FixedArray> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, FixedArray, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, FixedArray, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, FixedArray, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, FixedArray, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3, parameter4, parameter5, parameter6);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSTypedArray> tmp1;
    TNode<JSReceiver> tmp2;
    TNode<FixedArray> tmp3;
    TNode<Smi> tmp4;
    TNode<Smi> tmp5;
    TNode<FixedArray> tmp6;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 269);
    TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp5}, TNode<Smi>{tmp4});
    TNode<Smi> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).SmiSar(TNode<Smi>{tmp7}, 1);
    TNode<Smi> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp4}, TNode<Smi>{tmp8});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 274);
    TNode<Smi> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp9}, TNode<Smi>{tmp4});
    TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp10}, TNode<Smi>{tmp11});
    ca_.Branch(tmp12, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp9);
  }

  if (block1.is_used()) {
    TNode<Context> tmp13;
    TNode<JSTypedArray> tmp14;
    TNode<JSReceiver> tmp15;
    TNode<FixedArray> tmp16;
    TNode<Smi> tmp17;
    TNode<Smi> tmp18;
    TNode<FixedArray> tmp19;
    TNode<Smi> tmp20;
    ca_.Bind(&block1, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    TNode<Object> tmp21;
    tmp21 = CodeStubAssembler(state_).CallBuiltin(Builtins::kTypedArrayMergeSort, tmp13, tmp14, tmp15, tmp19, tmp17, tmp20, tmp16);
    USE(tmp21);
    ca_.Goto(&block2, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20);
  }

  if (block2.is_used()) {
    TNode<Context> tmp22;
    TNode<JSTypedArray> tmp23;
    TNode<JSReceiver> tmp24;
    TNode<FixedArray> tmp25;
    TNode<Smi> tmp26;
    TNode<Smi> tmp27;
    TNode<FixedArray> tmp28;
    TNode<Smi> tmp29;
    ca_.Bind(&block2, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 275);
    TNode<Smi> tmp30;
    USE(tmp30);
    tmp30 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp27}, TNode<Smi>{tmp29});
    TNode<Smi> tmp31;
    USE(tmp31);
    tmp31 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<BoolT> tmp32;
    USE(tmp32);
    tmp32 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp30}, TNode<Smi>{tmp31});
    ca_.Branch(tmp32, &block3, &block4, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29);
  }

  if (block3.is_used()) {
    TNode<Context> tmp33;
    TNode<JSTypedArray> tmp34;
    TNode<JSReceiver> tmp35;
    TNode<FixedArray> tmp36;
    TNode<Smi> tmp37;
    TNode<Smi> tmp38;
    TNode<FixedArray> tmp39;
    TNode<Smi> tmp40;
    ca_.Bind(&block3, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    TNode<Object> tmp41;
    tmp41 = CodeStubAssembler(state_).CallBuiltin(Builtins::kTypedArrayMergeSort, tmp33, tmp34, tmp35, tmp39, tmp40, tmp38, tmp36);
    USE(tmp41);
    ca_.Goto(&block4, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40);
  }

  if (block4.is_used()) {
    TNode<Context> tmp42;
    TNode<JSTypedArray> tmp43;
    TNode<JSReceiver> tmp44;
    TNode<FixedArray> tmp45;
    TNode<Smi> tmp46;
    TNode<Smi> tmp47;
    TNode<FixedArray> tmp48;
    TNode<Smi> tmp49;
    ca_.Bind(&block4, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 277);
    TypedArrayMerge_391(state_, TNode<Context>{tmp42}, TNode<JSTypedArray>{tmp43}, TNode<JSReceiver>{tmp44}, TNode<FixedArray>{tmp45}, TNode<Smi>{tmp46}, TNode<Smi>{tmp49}, TNode<Smi>{tmp47}, TNode<FixedArray>{tmp48});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 279);
    TNode<Oddball> tmp50;
    USE(tmp50);
    tmp50 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp50);
  }
}

TF_BUILTIN(TypedArrayPrototypeSort, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, BoolT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, BoolT, BoolT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Number> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Number, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, Object> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, Object, JSReceiver> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block66(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block67(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block65(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block63(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block73(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block74(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block72(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block71(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block70(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block69(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi> block78(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi> block76(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Context, JSTypedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block84(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Context, JSTypedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block85(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Context, JSTypedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block83(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Context, JSTypedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block82(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Context, JSTypedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block81(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Context, JSTypedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block80(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi> block79(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi> block77(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 288);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp7;
    TNode<RawPtrT> tmp8;
    TNode<IntPtrT> tmp9;
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp7}, TNode<RawPtrT>{tmp8}, TNode<IntPtrT>{tmp9}}, TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp14;
    TNode<RawPtrT> tmp15;
    TNode<IntPtrT> tmp16;
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_64(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp20;
    TNode<RawPtrT> tmp21;
    TNode<IntPtrT> tmp22;
    TNode<Context> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp26;
    TNode<RawPtrT> tmp27;
    TNode<IntPtrT> tmp28;
    TNode<Context> tmp29;
    TNode<Object> tmp30;
    TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 289);
    TNode<Oddball> tmp32;
    USE(tmp32);
    tmp32 = Undefined_64(state_);
    TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).TaggedNotEqual(TNode<Object>{tmp31}, TNode<HeapObject>{tmp32});
    ca_.Branch(tmp33, &block7, &block8, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp33);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp34;
    TNode<RawPtrT> tmp35;
    TNode<IntPtrT> tmp36;
    TNode<Context> tmp37;
    TNode<Object> tmp38;
    TNode<Object> tmp39;
    TNode<BoolT> tmp40;
    ca_.Bind(&block7, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    TNode<BoolT> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).TaggedIsCallable(TNode<Object>{tmp39});
    TNode<BoolT> tmp42;
    USE(tmp42);
    tmp42 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp41});
    ca_.Goto(&block9, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp42);
  }

  if (block8.is_used()) {
    TNode<RawPtrT> tmp43;
    TNode<RawPtrT> tmp44;
    TNode<IntPtrT> tmp45;
    TNode<Context> tmp46;
    TNode<Object> tmp47;
    TNode<Object> tmp48;
    TNode<BoolT> tmp49;
    ca_.Bind(&block8, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49);
    TNode<BoolT> tmp50;
    USE(tmp50);
    tmp50 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    ca_.Goto(&block9, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50);
  }

  if (block9.is_used()) {
    TNode<RawPtrT> tmp51;
    TNode<RawPtrT> tmp52;
    TNode<IntPtrT> tmp53;
    TNode<Context> tmp54;
    TNode<Object> tmp55;
    TNode<Object> tmp56;
    TNode<BoolT> tmp57;
    TNode<BoolT> tmp58;
    ca_.Bind(&block9, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
    ca_.Branch(tmp58, &block5, &block6, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56);
  }

  if (block5.is_used()) {
    TNode<RawPtrT> tmp59;
    TNode<RawPtrT> tmp60;
    TNode<IntPtrT> tmp61;
    TNode<Context> tmp62;
    TNode<Object> tmp63;
    TNode<Object> tmp64;
    ca_.Bind(&block5, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 290);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp62}, MessageTemplate::kBadSortComparisonFunction, TNode<Object>{tmp64});
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp65;
    TNode<RawPtrT> tmp66;
    TNode<IntPtrT> tmp67;
    TNode<Context> tmp68;
    TNode<Object> tmp69;
    TNode<Object> tmp70;
    ca_.Bind(&block6, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 294);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 299);
    TNode<JSTypedArray> tmp71;
    USE(tmp71);
    tmp71 = TypedArrayBuiltinsAssembler(state_).ValidateTypedArray(TNode<Context>{tmp68}, TNode<Object>{tmp69}, "%TypedArray%.prototype.sort");
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 298);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 302);
    TNode<Oddball> tmp72;
    USE(tmp72);
    tmp72 = Undefined_64(state_);
    TNode<BoolT> tmp73;
    USE(tmp73);
    tmp73 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp70}, TNode<HeapObject>{tmp72});
    ca_.Branch(tmp73, &block10, &block11, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp69, tmp71);
  }

  if (block10.is_used()) {
    TNode<RawPtrT> tmp74;
    TNode<RawPtrT> tmp75;
    TNode<IntPtrT> tmp76;
    TNode<Context> tmp77;
    TNode<Object> tmp78;
    TNode<Object> tmp79;
    TNode<Object> tmp80;
    TNode<JSTypedArray> tmp81;
    ca_.Bind(&block10, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 303);
    TNode<JSTypedArray> tmp82;
    tmp82 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kTypedArraySortFast, tmp77, tmp80)); 
    USE(tmp82);
    arguments.PopAndReturn(tmp82);
  }

  if (block11.is_used()) {
    TNode<RawPtrT> tmp83;
    TNode<RawPtrT> tmp84;
    TNode<IntPtrT> tmp85;
    TNode<Context> tmp86;
    TNode<Object> tmp87;
    TNode<Object> tmp88;
    TNode<Object> tmp89;
    TNode<JSTypedArray> tmp90;
    ca_.Bind(&block11, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 308);
    TNode<IntPtrT> tmp91 = ca_.IntPtrConstant(JSTypedArray::kLengthOffset);
    USE(tmp91);
    TNode<UintPtrT>tmp92 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp90, tmp91});
    TNode<Number> tmp93;
    USE(tmp93);
    tmp93 = Convert20UT5ATSmi10HeapNumber9ATuintptr_203(state_, TNode<UintPtrT>{tmp92});
    TNode<Smi> tmp94;
    USE(tmp94);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp94 = Cast5ATSmi_83(state_, TNode<Object>{tmp93}, &label0);
    ca_.Goto(&block14, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp93, tmp94);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block15, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp93);
    }
  }

  if (block15.is_used()) {
    TNode<RawPtrT> tmp95;
    TNode<RawPtrT> tmp96;
    TNode<IntPtrT> tmp97;
    TNode<Context> tmp98;
    TNode<Object> tmp99;
    TNode<Object> tmp100;
    TNode<Object> tmp101;
    TNode<JSTypedArray> tmp102;
    TNode<Number> tmp103;
    ca_.Bind(&block15, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103);
    ca_.Goto(&block13, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102);
  }

  if (block14.is_used()) {
    TNode<RawPtrT> tmp104;
    TNode<RawPtrT> tmp105;
    TNode<IntPtrT> tmp106;
    TNode<Context> tmp107;
    TNode<Object> tmp108;
    TNode<Object> tmp109;
    TNode<Object> tmp110;
    TNode<JSTypedArray> tmp111;
    TNode<Number> tmp112;
    TNode<Smi> tmp113;
    ca_.Bind(&block14, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113);
    ca_.Goto(&block12, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp113);
  }

  if (block13.is_used()) {
    TNode<RawPtrT> tmp114;
    TNode<RawPtrT> tmp115;
    TNode<IntPtrT> tmp116;
    TNode<Context> tmp117;
    TNode<Object> tmp118;
    TNode<Object> tmp119;
    TNode<Object> tmp120;
    TNode<JSTypedArray> tmp121;
    ca_.Bind(&block13, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block12.is_used()) {
    TNode<RawPtrT> tmp122;
    TNode<RawPtrT> tmp123;
    TNode<IntPtrT> tmp124;
    TNode<Context> tmp125;
    TNode<Object> tmp126;
    TNode<Object> tmp127;
    TNode<Object> tmp128;
    TNode<JSTypedArray> tmp129;
    TNode<Smi> tmp130;
    ca_.Bind(&block12, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 311);
    TNode<Smi> tmp131;
    USE(tmp131);
    tmp131 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 2);
    TNode<BoolT> tmp132;
    USE(tmp132);
    tmp132 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp130}, TNode<Smi>{tmp131});
    ca_.Branch(tmp132, &block16, &block17, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130);
  }

  if (block16.is_used()) {
    TNode<RawPtrT> tmp133;
    TNode<RawPtrT> tmp134;
    TNode<IntPtrT> tmp135;
    TNode<Context> tmp136;
    TNode<Object> tmp137;
    TNode<Object> tmp138;
    TNode<Object> tmp139;
    TNode<JSTypedArray> tmp140;
    TNode<Smi> tmp141;
    ca_.Bind(&block16, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141);
    arguments.PopAndReturn(tmp140);
  }

  if (block17.is_used()) {
    TNode<RawPtrT> tmp142;
    TNode<RawPtrT> tmp143;
    TNode<IntPtrT> tmp144;
    TNode<Context> tmp145;
    TNode<Object> tmp146;
    TNode<Object> tmp147;
    TNode<Object> tmp148;
    TNode<JSTypedArray> tmp149;
    TNode<Smi> tmp150;
    ca_.Bind(&block17, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 314);
    TNode<JSReceiver> tmp151;
    USE(tmp151);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp151 = Cast71UT19ATCallableApiObject17ATCallableJSProxy15JSBoundFunction10JSFunction_1428(state_, TNode<Context>{tmp145}, TNode<Object>{tmp147}, &label0);
    ca_.Goto(&block20, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp147, tmp151);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block21, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp147);
    }
  }

  if (block21.is_used()) {
    TNode<RawPtrT> tmp152;
    TNode<RawPtrT> tmp153;
    TNode<IntPtrT> tmp154;
    TNode<Context> tmp155;
    TNode<Object> tmp156;
    TNode<Object> tmp157;
    TNode<Object> tmp158;
    TNode<JSTypedArray> tmp159;
    TNode<Smi> tmp160;
    TNode<Object> tmp161;
    ca_.Bind(&block21, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161);
    ca_.Goto(&block19, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160);
  }

  if (block20.is_used()) {
    TNode<RawPtrT> tmp162;
    TNode<RawPtrT> tmp163;
    TNode<IntPtrT> tmp164;
    TNode<Context> tmp165;
    TNode<Object> tmp166;
    TNode<Object> tmp167;
    TNode<Object> tmp168;
    TNode<JSTypedArray> tmp169;
    TNode<Smi> tmp170;
    TNode<Object> tmp171;
    TNode<JSReceiver> tmp172;
    ca_.Bind(&block20, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172);
    ca_.Goto(&block18, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp172);
  }

  if (block19.is_used()) {
    TNode<RawPtrT> tmp173;
    TNode<RawPtrT> tmp174;
    TNode<IntPtrT> tmp175;
    TNode<Context> tmp176;
    TNode<Object> tmp177;
    TNode<Object> tmp178;
    TNode<Object> tmp179;
    TNode<JSTypedArray> tmp180;
    TNode<Smi> tmp181;
    ca_.Bind(&block19, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block18.is_used()) {
    TNode<RawPtrT> tmp182;
    TNode<RawPtrT> tmp183;
    TNode<IntPtrT> tmp184;
    TNode<Context> tmp185;
    TNode<Object> tmp186;
    TNode<Object> tmp187;
    TNode<Object> tmp188;
    TNode<JSTypedArray> tmp189;
    TNode<Smi> tmp190;
    TNode<JSReceiver> tmp191;
    ca_.Bind(&block18, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 313);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 315);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 316);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 318);
    TNode<Int32T> tmp192;
    USE(tmp192);
    tmp192 = CodeStubAssembler(state_).LoadElementsKind(TNode<JSTypedArray>{tmp189});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 320);
    TNode<BoolT> tmp193;
    USE(tmp193);
    tmp193 = CodeStubAssembler(state_).IsElementsKindGreaterThan(TNode<Int32T>{tmp192}, UINT32_ELEMENTS);
    ca_.Branch(tmp193, &block22, &block23, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191, ca_.Uninitialized<BuiltinPtr>(), ca_.Uninitialized<BuiltinPtr>(), tmp192);
  }

  if (block22.is_used()) {
    TNode<RawPtrT> tmp194;
    TNode<RawPtrT> tmp195;
    TNode<IntPtrT> tmp196;
    TNode<Context> tmp197;
    TNode<Object> tmp198;
    TNode<Object> tmp199;
    TNode<Object> tmp200;
    TNode<JSTypedArray> tmp201;
    TNode<Smi> tmp202;
    TNode<JSReceiver> tmp203;
    TNode<BuiltinPtr> tmp204;
    TNode<BuiltinPtr> tmp205;
    TNode<Int32T> tmp206;
    ca_.Bind(&block22, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 321);
    TNode<Int32T> tmp207;
    USE(tmp207);
    tmp207 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_169(state_, INT32_ELEMENTS);
    TNode<BoolT> tmp208;
    USE(tmp208);
    tmp208 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp206}, TNode<Int32T>{tmp207});
    ca_.Branch(tmp208, &block25, &block26, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206);
  }

  if (block25.is_used()) {
    TNode<RawPtrT> tmp209;
    TNode<RawPtrT> tmp210;
    TNode<IntPtrT> tmp211;
    TNode<Context> tmp212;
    TNode<Object> tmp213;
    TNode<Object> tmp214;
    TNode<Object> tmp215;
    TNode<JSTypedArray> tmp216;
    TNode<Smi> tmp217;
    TNode<JSReceiver> tmp218;
    TNode<BuiltinPtr> tmp219;
    TNode<BuiltinPtr> tmp220;
    TNode<Int32T> tmp221;
    ca_.Bind(&block25, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 322);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 323);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 321);
    ca_.Goto(&block27, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement15ATInt32Elements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement15ATInt32Elements)), tmp221);
  }

  if (block26.is_used()) {
    TNode<RawPtrT> tmp222;
    TNode<RawPtrT> tmp223;
    TNode<IntPtrT> tmp224;
    TNode<Context> tmp225;
    TNode<Object> tmp226;
    TNode<Object> tmp227;
    TNode<Object> tmp228;
    TNode<JSTypedArray> tmp229;
    TNode<Smi> tmp230;
    TNode<JSReceiver> tmp231;
    TNode<BuiltinPtr> tmp232;
    TNode<BuiltinPtr> tmp233;
    TNode<Int32T> tmp234;
    ca_.Bind(&block26, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 324);
    TNode<Int32T> tmp235;
    USE(tmp235);
    tmp235 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_169(state_, FLOAT32_ELEMENTS);
    TNode<BoolT> tmp236;
    USE(tmp236);
    tmp236 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp234}, TNode<Int32T>{tmp235});
    ca_.Branch(tmp236, &block28, &block29, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234);
  }

  if (block28.is_used()) {
    TNode<RawPtrT> tmp237;
    TNode<RawPtrT> tmp238;
    TNode<IntPtrT> tmp239;
    TNode<Context> tmp240;
    TNode<Object> tmp241;
    TNode<Object> tmp242;
    TNode<Object> tmp243;
    TNode<JSTypedArray> tmp244;
    TNode<Smi> tmp245;
    TNode<JSReceiver> tmp246;
    TNode<BuiltinPtr> tmp247;
    TNode<BuiltinPtr> tmp248;
    TNode<Int32T> tmp249;
    ca_.Bind(&block28, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 325);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 326);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 324);
    ca_.Goto(&block30, tmp237, tmp238, tmp239, tmp240, tmp241, tmp242, tmp243, tmp244, tmp245, tmp246, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement17ATFloat32Elements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement17ATFloat32Elements)), tmp249);
  }

  if (block29.is_used()) {
    TNode<RawPtrT> tmp250;
    TNode<RawPtrT> tmp251;
    TNode<IntPtrT> tmp252;
    TNode<Context> tmp253;
    TNode<Object> tmp254;
    TNode<Object> tmp255;
    TNode<Object> tmp256;
    TNode<JSTypedArray> tmp257;
    TNode<Smi> tmp258;
    TNode<JSReceiver> tmp259;
    TNode<BuiltinPtr> tmp260;
    TNode<BuiltinPtr> tmp261;
    TNode<Int32T> tmp262;
    ca_.Bind(&block29, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 327);
    TNode<Int32T> tmp263;
    USE(tmp263);
    tmp263 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_169(state_, FLOAT64_ELEMENTS);
    TNode<BoolT> tmp264;
    USE(tmp264);
    tmp264 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp262}, TNode<Int32T>{tmp263});
    ca_.Branch(tmp264, &block31, &block32, tmp250, tmp251, tmp252, tmp253, tmp254, tmp255, tmp256, tmp257, tmp258, tmp259, tmp260, tmp261, tmp262);
  }

  if (block31.is_used()) {
    TNode<RawPtrT> tmp265;
    TNode<RawPtrT> tmp266;
    TNode<IntPtrT> tmp267;
    TNode<Context> tmp268;
    TNode<Object> tmp269;
    TNode<Object> tmp270;
    TNode<Object> tmp271;
    TNode<JSTypedArray> tmp272;
    TNode<Smi> tmp273;
    TNode<JSReceiver> tmp274;
    TNode<BuiltinPtr> tmp275;
    TNode<BuiltinPtr> tmp276;
    TNode<Int32T> tmp277;
    ca_.Bind(&block31, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 328);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 329);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 327);
    ca_.Goto(&block33, tmp265, tmp266, tmp267, tmp268, tmp269, tmp270, tmp271, tmp272, tmp273, tmp274, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement17ATFloat64Elements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement17ATFloat64Elements)), tmp277);
  }

  if (block32.is_used()) {
    TNode<RawPtrT> tmp278;
    TNode<RawPtrT> tmp279;
    TNode<IntPtrT> tmp280;
    TNode<Context> tmp281;
    TNode<Object> tmp282;
    TNode<Object> tmp283;
    TNode<Object> tmp284;
    TNode<JSTypedArray> tmp285;
    TNode<Smi> tmp286;
    TNode<JSReceiver> tmp287;
    TNode<BuiltinPtr> tmp288;
    TNode<BuiltinPtr> tmp289;
    TNode<Int32T> tmp290;
    ca_.Bind(&block32, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288, &tmp289, &tmp290);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 330);
    TNode<Int32T> tmp291;
    USE(tmp291);
    tmp291 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_169(state_, UINT8_CLAMPED_ELEMENTS);
    TNode<BoolT> tmp292;
    USE(tmp292);
    tmp292 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp290}, TNode<Int32T>{tmp291});
    ca_.Branch(tmp292, &block34, &block35, tmp278, tmp279, tmp280, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289, tmp290);
  }

  if (block34.is_used()) {
    TNode<RawPtrT> tmp293;
    TNode<RawPtrT> tmp294;
    TNode<IntPtrT> tmp295;
    TNode<Context> tmp296;
    TNode<Object> tmp297;
    TNode<Object> tmp298;
    TNode<Object> tmp299;
    TNode<JSTypedArray> tmp300;
    TNode<Smi> tmp301;
    TNode<JSReceiver> tmp302;
    TNode<BuiltinPtr> tmp303;
    TNode<BuiltinPtr> tmp304;
    TNode<Int32T> tmp305;
    ca_.Bind(&block34, &tmp293, &tmp294, &tmp295, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 331);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 332);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 330);
    ca_.Goto(&block36, tmp293, tmp294, tmp295, tmp296, tmp297, tmp298, tmp299, tmp300, tmp301, tmp302, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement22ATUint8ClampedElements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement22ATUint8ClampedElements)), tmp305);
  }

  if (block35.is_used()) {
    TNode<RawPtrT> tmp306;
    TNode<RawPtrT> tmp307;
    TNode<IntPtrT> tmp308;
    TNode<Context> tmp309;
    TNode<Object> tmp310;
    TNode<Object> tmp311;
    TNode<Object> tmp312;
    TNode<JSTypedArray> tmp313;
    TNode<Smi> tmp314;
    TNode<JSReceiver> tmp315;
    TNode<BuiltinPtr> tmp316;
    TNode<BuiltinPtr> tmp317;
    TNode<Int32T> tmp318;
    ca_.Bind(&block35, &tmp306, &tmp307, &tmp308, &tmp309, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317, &tmp318);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 333);
    TNode<Int32T> tmp319;
    USE(tmp319);
    tmp319 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_169(state_, BIGUINT64_ELEMENTS);
    TNode<BoolT> tmp320;
    USE(tmp320);
    tmp320 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp318}, TNode<Int32T>{tmp319});
    ca_.Branch(tmp320, &block37, &block38, tmp306, tmp307, tmp308, tmp309, tmp310, tmp311, tmp312, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318);
  }

  if (block37.is_used()) {
    TNode<RawPtrT> tmp321;
    TNode<RawPtrT> tmp322;
    TNode<IntPtrT> tmp323;
    TNode<Context> tmp324;
    TNode<Object> tmp325;
    TNode<Object> tmp326;
    TNode<Object> tmp327;
    TNode<JSTypedArray> tmp328;
    TNode<Smi> tmp329;
    TNode<JSReceiver> tmp330;
    TNode<BuiltinPtr> tmp331;
    TNode<BuiltinPtr> tmp332;
    TNode<Int32T> tmp333;
    ca_.Bind(&block37, &tmp321, &tmp322, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331, &tmp332, &tmp333);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 334);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 335);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 333);
    ca_.Goto(&block39, tmp321, tmp322, tmp323, tmp324, tmp325, tmp326, tmp327, tmp328, tmp329, tmp330, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement19ATBigUint64Elements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement19ATBigUint64Elements)), tmp333);
  }

  if (block38.is_used()) {
    TNode<RawPtrT> tmp334;
    TNode<RawPtrT> tmp335;
    TNode<IntPtrT> tmp336;
    TNode<Context> tmp337;
    TNode<Object> tmp338;
    TNode<Object> tmp339;
    TNode<Object> tmp340;
    TNode<JSTypedArray> tmp341;
    TNode<Smi> tmp342;
    TNode<JSReceiver> tmp343;
    TNode<BuiltinPtr> tmp344;
    TNode<BuiltinPtr> tmp345;
    TNode<Int32T> tmp346;
    ca_.Bind(&block38, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343, &tmp344, &tmp345, &tmp346);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 336);
    TNode<Int32T> tmp347;
    USE(tmp347);
    tmp347 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_169(state_, BIGINT64_ELEMENTS);
    TNode<BoolT> tmp348;
    USE(tmp348);
    tmp348 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp346}, TNode<Int32T>{tmp347});
    ca_.Branch(tmp348, &block40, &block41, tmp334, tmp335, tmp336, tmp337, tmp338, tmp339, tmp340, tmp341, tmp342, tmp343, tmp344, tmp345, tmp346);
  }

  if (block40.is_used()) {
    TNode<RawPtrT> tmp349;
    TNode<RawPtrT> tmp350;
    TNode<IntPtrT> tmp351;
    TNode<Context> tmp352;
    TNode<Object> tmp353;
    TNode<Object> tmp354;
    TNode<Object> tmp355;
    TNode<JSTypedArray> tmp356;
    TNode<Smi> tmp357;
    TNode<JSReceiver> tmp358;
    TNode<BuiltinPtr> tmp359;
    TNode<BuiltinPtr> tmp360;
    TNode<Int32T> tmp361;
    ca_.Bind(&block40, &tmp349, &tmp350, &tmp351, &tmp352, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 337);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 338);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 336);
    ca_.Goto(&block42, tmp349, tmp350, tmp351, tmp352, tmp353, tmp354, tmp355, tmp356, tmp357, tmp358, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement18ATBigInt64Elements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement18ATBigInt64Elements)), tmp361);
  }

  if (block41.is_used()) {
    TNode<RawPtrT> tmp362;
    TNode<RawPtrT> tmp363;
    TNode<IntPtrT> tmp364;
    TNode<Context> tmp365;
    TNode<Object> tmp366;
    TNode<Object> tmp367;
    TNode<Object> tmp368;
    TNode<JSTypedArray> tmp369;
    TNode<Smi> tmp370;
    TNode<JSReceiver> tmp371;
    TNode<BuiltinPtr> tmp372;
    TNode<BuiltinPtr> tmp373;
    TNode<Int32T> tmp374;
    ca_.Bind(&block41, &tmp362, &tmp363, &tmp364, &tmp365, &tmp366, &tmp367, &tmp368, &tmp369, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 340);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block42.is_used()) {
    TNode<RawPtrT> tmp375;
    TNode<RawPtrT> tmp376;
    TNode<IntPtrT> tmp377;
    TNode<Context> tmp378;
    TNode<Object> tmp379;
    TNode<Object> tmp380;
    TNode<Object> tmp381;
    TNode<JSTypedArray> tmp382;
    TNode<Smi> tmp383;
    TNode<JSReceiver> tmp384;
    TNode<BuiltinPtr> tmp385;
    TNode<BuiltinPtr> tmp386;
    TNode<Int32T> tmp387;
    ca_.Bind(&block42, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381, &tmp382, &tmp383, &tmp384, &tmp385, &tmp386, &tmp387);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 333);
    ca_.Goto(&block39, tmp375, tmp376, tmp377, tmp378, tmp379, tmp380, tmp381, tmp382, tmp383, tmp384, tmp385, tmp386, tmp387);
  }

  if (block39.is_used()) {
    TNode<RawPtrT> tmp388;
    TNode<RawPtrT> tmp389;
    TNode<IntPtrT> tmp390;
    TNode<Context> tmp391;
    TNode<Object> tmp392;
    TNode<Object> tmp393;
    TNode<Object> tmp394;
    TNode<JSTypedArray> tmp395;
    TNode<Smi> tmp396;
    TNode<JSReceiver> tmp397;
    TNode<BuiltinPtr> tmp398;
    TNode<BuiltinPtr> tmp399;
    TNode<Int32T> tmp400;
    ca_.Bind(&block39, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395, &tmp396, &tmp397, &tmp398, &tmp399, &tmp400);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 330);
    ca_.Goto(&block36, tmp388, tmp389, tmp390, tmp391, tmp392, tmp393, tmp394, tmp395, tmp396, tmp397, tmp398, tmp399, tmp400);
  }

  if (block36.is_used()) {
    TNode<RawPtrT> tmp401;
    TNode<RawPtrT> tmp402;
    TNode<IntPtrT> tmp403;
    TNode<Context> tmp404;
    TNode<Object> tmp405;
    TNode<Object> tmp406;
    TNode<Object> tmp407;
    TNode<JSTypedArray> tmp408;
    TNode<Smi> tmp409;
    TNode<JSReceiver> tmp410;
    TNode<BuiltinPtr> tmp411;
    TNode<BuiltinPtr> tmp412;
    TNode<Int32T> tmp413;
    ca_.Bind(&block36, &tmp401, &tmp402, &tmp403, &tmp404, &tmp405, &tmp406, &tmp407, &tmp408, &tmp409, &tmp410, &tmp411, &tmp412, &tmp413);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 327);
    ca_.Goto(&block33, tmp401, tmp402, tmp403, tmp404, tmp405, tmp406, tmp407, tmp408, tmp409, tmp410, tmp411, tmp412, tmp413);
  }

  if (block33.is_used()) {
    TNode<RawPtrT> tmp414;
    TNode<RawPtrT> tmp415;
    TNode<IntPtrT> tmp416;
    TNode<Context> tmp417;
    TNode<Object> tmp418;
    TNode<Object> tmp419;
    TNode<Object> tmp420;
    TNode<JSTypedArray> tmp421;
    TNode<Smi> tmp422;
    TNode<JSReceiver> tmp423;
    TNode<BuiltinPtr> tmp424;
    TNode<BuiltinPtr> tmp425;
    TNode<Int32T> tmp426;
    ca_.Bind(&block33, &tmp414, &tmp415, &tmp416, &tmp417, &tmp418, &tmp419, &tmp420, &tmp421, &tmp422, &tmp423, &tmp424, &tmp425, &tmp426);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 324);
    ca_.Goto(&block30, tmp414, tmp415, tmp416, tmp417, tmp418, tmp419, tmp420, tmp421, tmp422, tmp423, tmp424, tmp425, tmp426);
  }

  if (block30.is_used()) {
    TNode<RawPtrT> tmp427;
    TNode<RawPtrT> tmp428;
    TNode<IntPtrT> tmp429;
    TNode<Context> tmp430;
    TNode<Object> tmp431;
    TNode<Object> tmp432;
    TNode<Object> tmp433;
    TNode<JSTypedArray> tmp434;
    TNode<Smi> tmp435;
    TNode<JSReceiver> tmp436;
    TNode<BuiltinPtr> tmp437;
    TNode<BuiltinPtr> tmp438;
    TNode<Int32T> tmp439;
    ca_.Bind(&block30, &tmp427, &tmp428, &tmp429, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434, &tmp435, &tmp436, &tmp437, &tmp438, &tmp439);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 321);
    ca_.Goto(&block27, tmp427, tmp428, tmp429, tmp430, tmp431, tmp432, tmp433, tmp434, tmp435, tmp436, tmp437, tmp438, tmp439);
  }

  if (block27.is_used()) {
    TNode<RawPtrT> tmp440;
    TNode<RawPtrT> tmp441;
    TNode<IntPtrT> tmp442;
    TNode<Context> tmp443;
    TNode<Object> tmp444;
    TNode<Object> tmp445;
    TNode<Object> tmp446;
    TNode<JSTypedArray> tmp447;
    TNode<Smi> tmp448;
    TNode<JSReceiver> tmp449;
    TNode<BuiltinPtr> tmp450;
    TNode<BuiltinPtr> tmp451;
    TNode<Int32T> tmp452;
    ca_.Bind(&block27, &tmp440, &tmp441, &tmp442, &tmp443, &tmp444, &tmp445, &tmp446, &tmp447, &tmp448, &tmp449, &tmp450, &tmp451, &tmp452);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 320);
    ca_.Goto(&block24, tmp440, tmp441, tmp442, tmp443, tmp444, tmp445, tmp446, tmp447, tmp448, tmp449, tmp450, tmp451, tmp452);
  }

  if (block23.is_used()) {
    TNode<RawPtrT> tmp453;
    TNode<RawPtrT> tmp454;
    TNode<IntPtrT> tmp455;
    TNode<Context> tmp456;
    TNode<Object> tmp457;
    TNode<Object> tmp458;
    TNode<Object> tmp459;
    TNode<JSTypedArray> tmp460;
    TNode<Smi> tmp461;
    TNode<JSReceiver> tmp462;
    TNode<BuiltinPtr> tmp463;
    TNode<BuiltinPtr> tmp464;
    TNode<Int32T> tmp465;
    ca_.Bind(&block23, &tmp453, &tmp454, &tmp455, &tmp456, &tmp457, &tmp458, &tmp459, &tmp460, &tmp461, &tmp462, &tmp463, &tmp464, &tmp465);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 343);
    TNode<Int32T> tmp466;
    USE(tmp466);
    tmp466 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_169(state_, UINT8_ELEMENTS);
    TNode<BoolT> tmp467;
    USE(tmp467);
    tmp467 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp465}, TNode<Int32T>{tmp466});
    ca_.Branch(tmp467, &block43, &block44, tmp453, tmp454, tmp455, tmp456, tmp457, tmp458, tmp459, tmp460, tmp461, tmp462, tmp463, tmp464, tmp465);
  }

  if (block43.is_used()) {
    TNode<RawPtrT> tmp468;
    TNode<RawPtrT> tmp469;
    TNode<IntPtrT> tmp470;
    TNode<Context> tmp471;
    TNode<Object> tmp472;
    TNode<Object> tmp473;
    TNode<Object> tmp474;
    TNode<JSTypedArray> tmp475;
    TNode<Smi> tmp476;
    TNode<JSReceiver> tmp477;
    TNode<BuiltinPtr> tmp478;
    TNode<BuiltinPtr> tmp479;
    TNode<Int32T> tmp480;
    ca_.Bind(&block43, &tmp468, &tmp469, &tmp470, &tmp471, &tmp472, &tmp473, &tmp474, &tmp475, &tmp476, &tmp477, &tmp478, &tmp479, &tmp480);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 344);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 345);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 343);
    ca_.Goto(&block45, tmp468, tmp469, tmp470, tmp471, tmp472, tmp473, tmp474, tmp475, tmp476, tmp477, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement15ATUint8Elements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement15ATUint8Elements)), tmp480);
  }

  if (block44.is_used()) {
    TNode<RawPtrT> tmp481;
    TNode<RawPtrT> tmp482;
    TNode<IntPtrT> tmp483;
    TNode<Context> tmp484;
    TNode<Object> tmp485;
    TNode<Object> tmp486;
    TNode<Object> tmp487;
    TNode<JSTypedArray> tmp488;
    TNode<Smi> tmp489;
    TNode<JSReceiver> tmp490;
    TNode<BuiltinPtr> tmp491;
    TNode<BuiltinPtr> tmp492;
    TNode<Int32T> tmp493;
    ca_.Bind(&block44, &tmp481, &tmp482, &tmp483, &tmp484, &tmp485, &tmp486, &tmp487, &tmp488, &tmp489, &tmp490, &tmp491, &tmp492, &tmp493);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 346);
    TNode<Int32T> tmp494;
    USE(tmp494);
    tmp494 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_169(state_, INT8_ELEMENTS);
    TNode<BoolT> tmp495;
    USE(tmp495);
    tmp495 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp493}, TNode<Int32T>{tmp494});
    ca_.Branch(tmp495, &block46, &block47, tmp481, tmp482, tmp483, tmp484, tmp485, tmp486, tmp487, tmp488, tmp489, tmp490, tmp491, tmp492, tmp493);
  }

  if (block46.is_used()) {
    TNode<RawPtrT> tmp496;
    TNode<RawPtrT> tmp497;
    TNode<IntPtrT> tmp498;
    TNode<Context> tmp499;
    TNode<Object> tmp500;
    TNode<Object> tmp501;
    TNode<Object> tmp502;
    TNode<JSTypedArray> tmp503;
    TNode<Smi> tmp504;
    TNode<JSReceiver> tmp505;
    TNode<BuiltinPtr> tmp506;
    TNode<BuiltinPtr> tmp507;
    TNode<Int32T> tmp508;
    ca_.Bind(&block46, &tmp496, &tmp497, &tmp498, &tmp499, &tmp500, &tmp501, &tmp502, &tmp503, &tmp504, &tmp505, &tmp506, &tmp507, &tmp508);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 347);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 348);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 346);
    ca_.Goto(&block48, tmp496, tmp497, tmp498, tmp499, tmp500, tmp501, tmp502, tmp503, tmp504, tmp505, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement14ATInt8Elements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement14ATInt8Elements)), tmp508);
  }

  if (block47.is_used()) {
    TNode<RawPtrT> tmp509;
    TNode<RawPtrT> tmp510;
    TNode<IntPtrT> tmp511;
    TNode<Context> tmp512;
    TNode<Object> tmp513;
    TNode<Object> tmp514;
    TNode<Object> tmp515;
    TNode<JSTypedArray> tmp516;
    TNode<Smi> tmp517;
    TNode<JSReceiver> tmp518;
    TNode<BuiltinPtr> tmp519;
    TNode<BuiltinPtr> tmp520;
    TNode<Int32T> tmp521;
    ca_.Bind(&block47, &tmp509, &tmp510, &tmp511, &tmp512, &tmp513, &tmp514, &tmp515, &tmp516, &tmp517, &tmp518, &tmp519, &tmp520, &tmp521);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 349);
    TNode<Int32T> tmp522;
    USE(tmp522);
    tmp522 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_169(state_, UINT16_ELEMENTS);
    TNode<BoolT> tmp523;
    USE(tmp523);
    tmp523 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp521}, TNode<Int32T>{tmp522});
    ca_.Branch(tmp523, &block49, &block50, tmp509, tmp510, tmp511, tmp512, tmp513, tmp514, tmp515, tmp516, tmp517, tmp518, tmp519, tmp520, tmp521);
  }

  if (block49.is_used()) {
    TNode<RawPtrT> tmp524;
    TNode<RawPtrT> tmp525;
    TNode<IntPtrT> tmp526;
    TNode<Context> tmp527;
    TNode<Object> tmp528;
    TNode<Object> tmp529;
    TNode<Object> tmp530;
    TNode<JSTypedArray> tmp531;
    TNode<Smi> tmp532;
    TNode<JSReceiver> tmp533;
    TNode<BuiltinPtr> tmp534;
    TNode<BuiltinPtr> tmp535;
    TNode<Int32T> tmp536;
    ca_.Bind(&block49, &tmp524, &tmp525, &tmp526, &tmp527, &tmp528, &tmp529, &tmp530, &tmp531, &tmp532, &tmp533, &tmp534, &tmp535, &tmp536);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 350);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 351);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 349);
    ca_.Goto(&block51, tmp524, tmp525, tmp526, tmp527, tmp528, tmp529, tmp530, tmp531, tmp532, tmp533, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement16ATUint16Elements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement16ATUint16Elements)), tmp536);
  }

  if (block50.is_used()) {
    TNode<RawPtrT> tmp537;
    TNode<RawPtrT> tmp538;
    TNode<IntPtrT> tmp539;
    TNode<Context> tmp540;
    TNode<Object> tmp541;
    TNode<Object> tmp542;
    TNode<Object> tmp543;
    TNode<JSTypedArray> tmp544;
    TNode<Smi> tmp545;
    TNode<JSReceiver> tmp546;
    TNode<BuiltinPtr> tmp547;
    TNode<BuiltinPtr> tmp548;
    TNode<Int32T> tmp549;
    ca_.Bind(&block50, &tmp537, &tmp538, &tmp539, &tmp540, &tmp541, &tmp542, &tmp543, &tmp544, &tmp545, &tmp546, &tmp547, &tmp548, &tmp549);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 352);
    TNode<Int32T> tmp550;
    USE(tmp550);
    tmp550 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_169(state_, INT16_ELEMENTS);
    TNode<BoolT> tmp551;
    USE(tmp551);
    tmp551 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp549}, TNode<Int32T>{tmp550});
    ca_.Branch(tmp551, &block52, &block53, tmp537, tmp538, tmp539, tmp540, tmp541, tmp542, tmp543, tmp544, tmp545, tmp546, tmp547, tmp548, tmp549);
  }

  if (block52.is_used()) {
    TNode<RawPtrT> tmp552;
    TNode<RawPtrT> tmp553;
    TNode<IntPtrT> tmp554;
    TNode<Context> tmp555;
    TNode<Object> tmp556;
    TNode<Object> tmp557;
    TNode<Object> tmp558;
    TNode<JSTypedArray> tmp559;
    TNode<Smi> tmp560;
    TNode<JSReceiver> tmp561;
    TNode<BuiltinPtr> tmp562;
    TNode<BuiltinPtr> tmp563;
    TNode<Int32T> tmp564;
    ca_.Bind(&block52, &tmp552, &tmp553, &tmp554, &tmp555, &tmp556, &tmp557, &tmp558, &tmp559, &tmp560, &tmp561, &tmp562, &tmp563, &tmp564);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 353);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 354);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 352);
    ca_.Goto(&block54, tmp552, tmp553, tmp554, tmp555, tmp556, tmp557, tmp558, tmp559, tmp560, tmp561, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement15ATInt16Elements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement15ATInt16Elements)), tmp564);
  }

  if (block53.is_used()) {
    TNode<RawPtrT> tmp565;
    TNode<RawPtrT> tmp566;
    TNode<IntPtrT> tmp567;
    TNode<Context> tmp568;
    TNode<Object> tmp569;
    TNode<Object> tmp570;
    TNode<Object> tmp571;
    TNode<JSTypedArray> tmp572;
    TNode<Smi> tmp573;
    TNode<JSReceiver> tmp574;
    TNode<BuiltinPtr> tmp575;
    TNode<BuiltinPtr> tmp576;
    TNode<Int32T> tmp577;
    ca_.Bind(&block53, &tmp565, &tmp566, &tmp567, &tmp568, &tmp569, &tmp570, &tmp571, &tmp572, &tmp573, &tmp574, &tmp575, &tmp576, &tmp577);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 355);
    TNode<Int32T> tmp578;
    USE(tmp578);
    tmp578 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_169(state_, UINT32_ELEMENTS);
    TNode<BoolT> tmp579;
    USE(tmp579);
    tmp579 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp577}, TNode<Int32T>{tmp578});
    ca_.Branch(tmp579, &block55, &block56, tmp565, tmp566, tmp567, tmp568, tmp569, tmp570, tmp571, tmp572, tmp573, tmp574, tmp575, tmp576, tmp577);
  }

  if (block55.is_used()) {
    TNode<RawPtrT> tmp580;
    TNode<RawPtrT> tmp581;
    TNode<IntPtrT> tmp582;
    TNode<Context> tmp583;
    TNode<Object> tmp584;
    TNode<Object> tmp585;
    TNode<Object> tmp586;
    TNode<JSTypedArray> tmp587;
    TNode<Smi> tmp588;
    TNode<JSReceiver> tmp589;
    TNode<BuiltinPtr> tmp590;
    TNode<BuiltinPtr> tmp591;
    TNode<Int32T> tmp592;
    ca_.Bind(&block55, &tmp580, &tmp581, &tmp582, &tmp583, &tmp584, &tmp585, &tmp586, &tmp587, &tmp588, &tmp589, &tmp590, &tmp591, &tmp592);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 356);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 357);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 355);
    ca_.Goto(&block57, tmp580, tmp581, tmp582, tmp583, tmp584, tmp585, tmp586, tmp587, tmp588, tmp589, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement16ATUint32Elements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement16ATUint32Elements)), tmp592);
  }

  if (block56.is_used()) {
    TNode<RawPtrT> tmp593;
    TNode<RawPtrT> tmp594;
    TNode<IntPtrT> tmp595;
    TNode<Context> tmp596;
    TNode<Object> tmp597;
    TNode<Object> tmp598;
    TNode<Object> tmp599;
    TNode<JSTypedArray> tmp600;
    TNode<Smi> tmp601;
    TNode<JSReceiver> tmp602;
    TNode<BuiltinPtr> tmp603;
    TNode<BuiltinPtr> tmp604;
    TNode<Int32T> tmp605;
    ca_.Bind(&block56, &tmp593, &tmp594, &tmp595, &tmp596, &tmp597, &tmp598, &tmp599, &tmp600, &tmp601, &tmp602, &tmp603, &tmp604, &tmp605);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 359);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block57.is_used()) {
    TNode<RawPtrT> tmp606;
    TNode<RawPtrT> tmp607;
    TNode<IntPtrT> tmp608;
    TNode<Context> tmp609;
    TNode<Object> tmp610;
    TNode<Object> tmp611;
    TNode<Object> tmp612;
    TNode<JSTypedArray> tmp613;
    TNode<Smi> tmp614;
    TNode<JSReceiver> tmp615;
    TNode<BuiltinPtr> tmp616;
    TNode<BuiltinPtr> tmp617;
    TNode<Int32T> tmp618;
    ca_.Bind(&block57, &tmp606, &tmp607, &tmp608, &tmp609, &tmp610, &tmp611, &tmp612, &tmp613, &tmp614, &tmp615, &tmp616, &tmp617, &tmp618);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 352);
    ca_.Goto(&block54, tmp606, tmp607, tmp608, tmp609, tmp610, tmp611, tmp612, tmp613, tmp614, tmp615, tmp616, tmp617, tmp618);
  }

  if (block54.is_used()) {
    TNode<RawPtrT> tmp619;
    TNode<RawPtrT> tmp620;
    TNode<IntPtrT> tmp621;
    TNode<Context> tmp622;
    TNode<Object> tmp623;
    TNode<Object> tmp624;
    TNode<Object> tmp625;
    TNode<JSTypedArray> tmp626;
    TNode<Smi> tmp627;
    TNode<JSReceiver> tmp628;
    TNode<BuiltinPtr> tmp629;
    TNode<BuiltinPtr> tmp630;
    TNode<Int32T> tmp631;
    ca_.Bind(&block54, &tmp619, &tmp620, &tmp621, &tmp622, &tmp623, &tmp624, &tmp625, &tmp626, &tmp627, &tmp628, &tmp629, &tmp630, &tmp631);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 349);
    ca_.Goto(&block51, tmp619, tmp620, tmp621, tmp622, tmp623, tmp624, tmp625, tmp626, tmp627, tmp628, tmp629, tmp630, tmp631);
  }

  if (block51.is_used()) {
    TNode<RawPtrT> tmp632;
    TNode<RawPtrT> tmp633;
    TNode<IntPtrT> tmp634;
    TNode<Context> tmp635;
    TNode<Object> tmp636;
    TNode<Object> tmp637;
    TNode<Object> tmp638;
    TNode<JSTypedArray> tmp639;
    TNode<Smi> tmp640;
    TNode<JSReceiver> tmp641;
    TNode<BuiltinPtr> tmp642;
    TNode<BuiltinPtr> tmp643;
    TNode<Int32T> tmp644;
    ca_.Bind(&block51, &tmp632, &tmp633, &tmp634, &tmp635, &tmp636, &tmp637, &tmp638, &tmp639, &tmp640, &tmp641, &tmp642, &tmp643, &tmp644);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 346);
    ca_.Goto(&block48, tmp632, tmp633, tmp634, tmp635, tmp636, tmp637, tmp638, tmp639, tmp640, tmp641, tmp642, tmp643, tmp644);
  }

  if (block48.is_used()) {
    TNode<RawPtrT> tmp645;
    TNode<RawPtrT> tmp646;
    TNode<IntPtrT> tmp647;
    TNode<Context> tmp648;
    TNode<Object> tmp649;
    TNode<Object> tmp650;
    TNode<Object> tmp651;
    TNode<JSTypedArray> tmp652;
    TNode<Smi> tmp653;
    TNode<JSReceiver> tmp654;
    TNode<BuiltinPtr> tmp655;
    TNode<BuiltinPtr> tmp656;
    TNode<Int32T> tmp657;
    ca_.Bind(&block48, &tmp645, &tmp646, &tmp647, &tmp648, &tmp649, &tmp650, &tmp651, &tmp652, &tmp653, &tmp654, &tmp655, &tmp656, &tmp657);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 343);
    ca_.Goto(&block45, tmp645, tmp646, tmp647, tmp648, tmp649, tmp650, tmp651, tmp652, tmp653, tmp654, tmp655, tmp656, tmp657);
  }

  if (block45.is_used()) {
    TNode<RawPtrT> tmp658;
    TNode<RawPtrT> tmp659;
    TNode<IntPtrT> tmp660;
    TNode<Context> tmp661;
    TNode<Object> tmp662;
    TNode<Object> tmp663;
    TNode<Object> tmp664;
    TNode<JSTypedArray> tmp665;
    TNode<Smi> tmp666;
    TNode<JSReceiver> tmp667;
    TNode<BuiltinPtr> tmp668;
    TNode<BuiltinPtr> tmp669;
    TNode<Int32T> tmp670;
    ca_.Bind(&block45, &tmp658, &tmp659, &tmp660, &tmp661, &tmp662, &tmp663, &tmp664, &tmp665, &tmp666, &tmp667, &tmp668, &tmp669, &tmp670);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 320);
    ca_.Goto(&block24, tmp658, tmp659, tmp660, tmp661, tmp662, tmp663, tmp664, tmp665, tmp666, tmp667, tmp668, tmp669, tmp670);
  }

  if (block24.is_used()) {
    TNode<RawPtrT> tmp671;
    TNode<RawPtrT> tmp672;
    TNode<IntPtrT> tmp673;
    TNode<Context> tmp674;
    TNode<Object> tmp675;
    TNode<Object> tmp676;
    TNode<Object> tmp677;
    TNode<JSTypedArray> tmp678;
    TNode<Smi> tmp679;
    TNode<JSReceiver> tmp680;
    TNode<BuiltinPtr> tmp681;
    TNode<BuiltinPtr> tmp682;
    TNode<Int32T> tmp683;
    ca_.Bind(&block24, &tmp671, &tmp672, &tmp673, &tmp674, &tmp675, &tmp676, &tmp677, &tmp678, &tmp679, &tmp680, &tmp681, &tmp682, &tmp683);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 366);
    TNode<IntPtrT> tmp684;
    USE(tmp684);
    tmp684 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp679});
    TNode<FixedArray> tmp685;
    USE(tmp685);
    tmp685 = CodeStubAssembler(state_).AllocateZeroedFixedArray(TNode<IntPtrT>{tmp684});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 367);
    TNode<IntPtrT> tmp686;
    USE(tmp686);
    tmp686 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp679});
    TNode<FixedArray> tmp687;
    USE(tmp687);
    tmp687 = CodeStubAssembler(state_).AllocateZeroedFixedArray(TNode<IntPtrT>{tmp686});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 369);
    TNode<Smi> tmp688;
    USE(tmp688);
    tmp688 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.Goto(&block60, tmp671, tmp672, tmp673, tmp674, tmp675, tmp676, tmp677, tmp678, tmp679, tmp680, tmp681, tmp682, tmp683, tmp685, tmp687, tmp688);
  }

  if (block60.is_used()) {
    TNode<RawPtrT> tmp689;
    TNode<RawPtrT> tmp690;
    TNode<IntPtrT> tmp691;
    TNode<Context> tmp692;
    TNode<Object> tmp693;
    TNode<Object> tmp694;
    TNode<Object> tmp695;
    TNode<JSTypedArray> tmp696;
    TNode<Smi> tmp697;
    TNode<JSReceiver> tmp698;
    TNode<BuiltinPtr> tmp699;
    TNode<BuiltinPtr> tmp700;
    TNode<Int32T> tmp701;
    TNode<FixedArray> tmp702;
    TNode<FixedArray> tmp703;
    TNode<Smi> tmp704;
    ca_.Bind(&block60, &tmp689, &tmp690, &tmp691, &tmp692, &tmp693, &tmp694, &tmp695, &tmp696, &tmp697, &tmp698, &tmp699, &tmp700, &tmp701, &tmp702, &tmp703, &tmp704);
    TNode<BoolT> tmp705;
    USE(tmp705);
    tmp705 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp704}, TNode<Smi>{tmp697});
    ca_.Branch(tmp705, &block58, &block59, tmp689, tmp690, tmp691, tmp692, tmp693, tmp694, tmp695, tmp696, tmp697, tmp698, tmp699, tmp700, tmp701, tmp702, tmp703, tmp704);
  }

  if (block58.is_used()) {
    TNode<RawPtrT> tmp706;
    TNode<RawPtrT> tmp707;
    TNode<IntPtrT> tmp708;
    TNode<Context> tmp709;
    TNode<Object> tmp710;
    TNode<Object> tmp711;
    TNode<Object> tmp712;
    TNode<JSTypedArray> tmp713;
    TNode<Smi> tmp714;
    TNode<JSReceiver> tmp715;
    TNode<BuiltinPtr> tmp716;
    TNode<BuiltinPtr> tmp717;
    TNode<Int32T> tmp718;
    TNode<FixedArray> tmp719;
    TNode<FixedArray> tmp720;
    TNode<Smi> tmp721;
    ca_.Bind(&block58, &tmp706, &tmp707, &tmp708, &tmp709, &tmp710, &tmp711, &tmp712, &tmp713, &tmp714, &tmp715, &tmp716, &tmp717, &tmp718, &tmp719, &tmp720, &tmp721);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 370);
    TNode<Object> tmp722 = CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(1)).descriptor(), tmp716, tmp709, tmp713, tmp721); 
    USE(tmp722);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 371);
    TNode<IntPtrT> tmp723 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp723);
    TNode<IntPtrT> tmp724 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp724);
    TNode<Smi>tmp725 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp719, tmp724});
    TNode<IntPtrT> tmp726;
    USE(tmp726);
    tmp726 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp725});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    TNode<IntPtrT> tmp727;
    USE(tmp727);
    tmp727 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp721});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp728;
    USE(tmp728);
    tmp728 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp727});
    TNode<UintPtrT> tmp729;
    USE(tmp729);
    tmp729 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp726});
    TNode<BoolT> tmp730;
    USE(tmp730);
    tmp730 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp728}, TNode<UintPtrT>{tmp729});
    ca_.Branch(tmp730, &block66, &block67, tmp706, tmp707, tmp708, tmp709, tmp710, tmp711, tmp712, tmp713, tmp714, tmp715, tmp716, tmp717, tmp718, tmp719, tmp720, tmp721, tmp722, tmp719, tmp723, tmp726, tmp721, tmp721, tmp727, tmp719, tmp723, tmp726, tmp727, tmp727);
  }

  if (block66.is_used()) {
    TNode<RawPtrT> tmp731;
    TNode<RawPtrT> tmp732;
    TNode<IntPtrT> tmp733;
    TNode<Context> tmp734;
    TNode<Object> tmp735;
    TNode<Object> tmp736;
    TNode<Object> tmp737;
    TNode<JSTypedArray> tmp738;
    TNode<Smi> tmp739;
    TNode<JSReceiver> tmp740;
    TNode<BuiltinPtr> tmp741;
    TNode<BuiltinPtr> tmp742;
    TNode<Int32T> tmp743;
    TNode<FixedArray> tmp744;
    TNode<FixedArray> tmp745;
    TNode<Smi> tmp746;
    TNode<Object> tmp747;
    TNode<FixedArray> tmp748;
    TNode<IntPtrT> tmp749;
    TNode<IntPtrT> tmp750;
    TNode<Smi> tmp751;
    TNode<Smi> tmp752;
    TNode<IntPtrT> tmp753;
    TNode<HeapObject> tmp754;
    TNode<IntPtrT> tmp755;
    TNode<IntPtrT> tmp756;
    TNode<IntPtrT> tmp757;
    TNode<IntPtrT> tmp758;
    ca_.Bind(&block66, &tmp731, &tmp732, &tmp733, &tmp734, &tmp735, &tmp736, &tmp737, &tmp738, &tmp739, &tmp740, &tmp741, &tmp742, &tmp743, &tmp744, &tmp745, &tmp746, &tmp747, &tmp748, &tmp749, &tmp750, &tmp751, &tmp752, &tmp753, &tmp754, &tmp755, &tmp756, &tmp757, &tmp758);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp759;
    USE(tmp759);
    tmp759 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp760;
    USE(tmp760);
    tmp760 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp758}, TNode<IntPtrT>{tmp759});
    TNode<IntPtrT> tmp761;
    USE(tmp761);
    tmp761 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp755}, TNode<IntPtrT>{tmp760});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp762;
    USE(tmp762);
    TNode<IntPtrT> tmp763;
    USE(tmp763);
    std::tie(tmp762, tmp763) = UnsafeNewReference20UT5ATSmi10HeapObject_1434(state_, TNode<HeapObject>{tmp754}, TNode<IntPtrT>{tmp761}).Flatten();
    ca_.Goto(&block65, tmp731, tmp732, tmp733, tmp734, tmp735, tmp736, tmp737, tmp738, tmp739, tmp740, tmp741, tmp742, tmp743, tmp744, tmp745, tmp746, tmp747, tmp748, tmp749, tmp750, tmp751, tmp752, tmp753, tmp754, tmp755, tmp756, tmp757, tmp758, tmp762, tmp763);
  }

  if (block67.is_used()) {
    TNode<RawPtrT> tmp764;
    TNode<RawPtrT> tmp765;
    TNode<IntPtrT> tmp766;
    TNode<Context> tmp767;
    TNode<Object> tmp768;
    TNode<Object> tmp769;
    TNode<Object> tmp770;
    TNode<JSTypedArray> tmp771;
    TNode<Smi> tmp772;
    TNode<JSReceiver> tmp773;
    TNode<BuiltinPtr> tmp774;
    TNode<BuiltinPtr> tmp775;
    TNode<Int32T> tmp776;
    TNode<FixedArray> tmp777;
    TNode<FixedArray> tmp778;
    TNode<Smi> tmp779;
    TNode<Object> tmp780;
    TNode<FixedArray> tmp781;
    TNode<IntPtrT> tmp782;
    TNode<IntPtrT> tmp783;
    TNode<Smi> tmp784;
    TNode<Smi> tmp785;
    TNode<IntPtrT> tmp786;
    TNode<HeapObject> tmp787;
    TNode<IntPtrT> tmp788;
    TNode<IntPtrT> tmp789;
    TNode<IntPtrT> tmp790;
    TNode<IntPtrT> tmp791;
    ca_.Bind(&block67, &tmp764, &tmp765, &tmp766, &tmp767, &tmp768, &tmp769, &tmp770, &tmp771, &tmp772, &tmp773, &tmp774, &tmp775, &tmp776, &tmp777, &tmp778, &tmp779, &tmp780, &tmp781, &tmp782, &tmp783, &tmp784, &tmp785, &tmp786, &tmp787, &tmp788, &tmp789, &tmp790, &tmp791);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block64, tmp764, tmp765, tmp766, tmp767, tmp768, tmp769, tmp770, tmp771, tmp772, tmp773, tmp774, tmp775, tmp776, tmp777, tmp778, tmp779, tmp780, tmp781, tmp782, tmp783, tmp784, tmp785, tmp786);
  }

  if (block65.is_used()) {
    TNode<RawPtrT> tmp792;
    TNode<RawPtrT> tmp793;
    TNode<IntPtrT> tmp794;
    TNode<Context> tmp795;
    TNode<Object> tmp796;
    TNode<Object> tmp797;
    TNode<Object> tmp798;
    TNode<JSTypedArray> tmp799;
    TNode<Smi> tmp800;
    TNode<JSReceiver> tmp801;
    TNode<BuiltinPtr> tmp802;
    TNode<BuiltinPtr> tmp803;
    TNode<Int32T> tmp804;
    TNode<FixedArray> tmp805;
    TNode<FixedArray> tmp806;
    TNode<Smi> tmp807;
    TNode<Object> tmp808;
    TNode<FixedArray> tmp809;
    TNode<IntPtrT> tmp810;
    TNode<IntPtrT> tmp811;
    TNode<Smi> tmp812;
    TNode<Smi> tmp813;
    TNode<IntPtrT> tmp814;
    TNode<HeapObject> tmp815;
    TNode<IntPtrT> tmp816;
    TNode<IntPtrT> tmp817;
    TNode<IntPtrT> tmp818;
    TNode<IntPtrT> tmp819;
    TNode<HeapObject> tmp820;
    TNode<IntPtrT> tmp821;
    ca_.Bind(&block65, &tmp792, &tmp793, &tmp794, &tmp795, &tmp796, &tmp797, &tmp798, &tmp799, &tmp800, &tmp801, &tmp802, &tmp803, &tmp804, &tmp805, &tmp806, &tmp807, &tmp808, &tmp809, &tmp810, &tmp811, &tmp812, &tmp813, &tmp814, &tmp815, &tmp816, &tmp817, &tmp818, &tmp819, &tmp820, &tmp821);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block63, tmp792, tmp793, tmp794, tmp795, tmp796, tmp797, tmp798, tmp799, tmp800, tmp801, tmp802, tmp803, tmp804, tmp805, tmp806, tmp807, tmp808, tmp809, tmp810, tmp811, tmp812, tmp813, tmp814, tmp820, tmp821);
  }

  if (block64.is_used()) {
    TNode<RawPtrT> tmp822;
    TNode<RawPtrT> tmp823;
    TNode<IntPtrT> tmp824;
    TNode<Context> tmp825;
    TNode<Object> tmp826;
    TNode<Object> tmp827;
    TNode<Object> tmp828;
    TNode<JSTypedArray> tmp829;
    TNode<Smi> tmp830;
    TNode<JSReceiver> tmp831;
    TNode<BuiltinPtr> tmp832;
    TNode<BuiltinPtr> tmp833;
    TNode<Int32T> tmp834;
    TNode<FixedArray> tmp835;
    TNode<FixedArray> tmp836;
    TNode<Smi> tmp837;
    TNode<Object> tmp838;
    TNode<FixedArray> tmp839;
    TNode<IntPtrT> tmp840;
    TNode<IntPtrT> tmp841;
    TNode<Smi> tmp842;
    TNode<Smi> tmp843;
    TNode<IntPtrT> tmp844;
    ca_.Bind(&block64, &tmp822, &tmp823, &tmp824, &tmp825, &tmp826, &tmp827, &tmp828, &tmp829, &tmp830, &tmp831, &tmp832, &tmp833, &tmp834, &tmp835, &tmp836, &tmp837, &tmp838, &tmp839, &tmp840, &tmp841, &tmp842, &tmp843, &tmp844);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block63.is_used()) {
    TNode<RawPtrT> tmp845;
    TNode<RawPtrT> tmp846;
    TNode<IntPtrT> tmp847;
    TNode<Context> tmp848;
    TNode<Object> tmp849;
    TNode<Object> tmp850;
    TNode<Object> tmp851;
    TNode<JSTypedArray> tmp852;
    TNode<Smi> tmp853;
    TNode<JSReceiver> tmp854;
    TNode<BuiltinPtr> tmp855;
    TNode<BuiltinPtr> tmp856;
    TNode<Int32T> tmp857;
    TNode<FixedArray> tmp858;
    TNode<FixedArray> tmp859;
    TNode<Smi> tmp860;
    TNode<Object> tmp861;
    TNode<FixedArray> tmp862;
    TNode<IntPtrT> tmp863;
    TNode<IntPtrT> tmp864;
    TNode<Smi> tmp865;
    TNode<Smi> tmp866;
    TNode<IntPtrT> tmp867;
    TNode<HeapObject> tmp868;
    TNode<IntPtrT> tmp869;
    ca_.Bind(&block63, &tmp845, &tmp846, &tmp847, &tmp848, &tmp849, &tmp850, &tmp851, &tmp852, &tmp853, &tmp854, &tmp855, &tmp856, &tmp857, &tmp858, &tmp859, &tmp860, &tmp861, &tmp862, &tmp863, &tmp864, &tmp865, &tmp866, &tmp867, &tmp868, &tmp869);
    ca_.Goto(&block62, tmp845, tmp846, tmp847, tmp848, tmp849, tmp850, tmp851, tmp852, tmp853, tmp854, tmp855, tmp856, tmp857, tmp858, tmp859, tmp860, tmp861, tmp862, tmp863, tmp864, tmp865, tmp866, tmp868, tmp869);
  }

  if (block62.is_used()) {
    TNode<RawPtrT> tmp870;
    TNode<RawPtrT> tmp871;
    TNode<IntPtrT> tmp872;
    TNode<Context> tmp873;
    TNode<Object> tmp874;
    TNode<Object> tmp875;
    TNode<Object> tmp876;
    TNode<JSTypedArray> tmp877;
    TNode<Smi> tmp878;
    TNode<JSReceiver> tmp879;
    TNode<BuiltinPtr> tmp880;
    TNode<BuiltinPtr> tmp881;
    TNode<Int32T> tmp882;
    TNode<FixedArray> tmp883;
    TNode<FixedArray> tmp884;
    TNode<Smi> tmp885;
    TNode<Object> tmp886;
    TNode<FixedArray> tmp887;
    TNode<IntPtrT> tmp888;
    TNode<IntPtrT> tmp889;
    TNode<Smi> tmp890;
    TNode<Smi> tmp891;
    TNode<HeapObject> tmp892;
    TNode<IntPtrT> tmp893;
    ca_.Bind(&block62, &tmp870, &tmp871, &tmp872, &tmp873, &tmp874, &tmp875, &tmp876, &tmp877, &tmp878, &tmp879, &tmp880, &tmp881, &tmp882, &tmp883, &tmp884, &tmp885, &tmp886, &tmp887, &tmp888, &tmp889, &tmp890, &tmp891, &tmp892, &tmp893);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 371);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp892, tmp893}, tmp886);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 372);
    TNode<IntPtrT> tmp894 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp894);
    TNode<IntPtrT> tmp895 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp895);
    TNode<Smi>tmp896 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp884, tmp895});
    TNode<IntPtrT> tmp897;
    USE(tmp897);
    tmp897 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp896});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    TNode<IntPtrT> tmp898;
    USE(tmp898);
    tmp898 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp885});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp899;
    USE(tmp899);
    tmp899 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp898});
    TNode<UintPtrT> tmp900;
    USE(tmp900);
    tmp900 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp897});
    TNode<BoolT> tmp901;
    USE(tmp901);
    tmp901 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp899}, TNode<UintPtrT>{tmp900});
    ca_.Branch(tmp901, &block73, &block74, tmp870, tmp871, tmp872, tmp873, tmp874, tmp875, tmp876, tmp877, tmp878, tmp879, tmp880, tmp881, tmp882, tmp883, tmp884, tmp885, tmp886, tmp884, tmp894, tmp897, tmp885, tmp885, tmp898, tmp884, tmp894, tmp897, tmp898, tmp898);
  }

  if (block73.is_used()) {
    TNode<RawPtrT> tmp902;
    TNode<RawPtrT> tmp903;
    TNode<IntPtrT> tmp904;
    TNode<Context> tmp905;
    TNode<Object> tmp906;
    TNode<Object> tmp907;
    TNode<Object> tmp908;
    TNode<JSTypedArray> tmp909;
    TNode<Smi> tmp910;
    TNode<JSReceiver> tmp911;
    TNode<BuiltinPtr> tmp912;
    TNode<BuiltinPtr> tmp913;
    TNode<Int32T> tmp914;
    TNode<FixedArray> tmp915;
    TNode<FixedArray> tmp916;
    TNode<Smi> tmp917;
    TNode<Object> tmp918;
    TNode<FixedArray> tmp919;
    TNode<IntPtrT> tmp920;
    TNode<IntPtrT> tmp921;
    TNode<Smi> tmp922;
    TNode<Smi> tmp923;
    TNode<IntPtrT> tmp924;
    TNode<HeapObject> tmp925;
    TNode<IntPtrT> tmp926;
    TNode<IntPtrT> tmp927;
    TNode<IntPtrT> tmp928;
    TNode<IntPtrT> tmp929;
    ca_.Bind(&block73, &tmp902, &tmp903, &tmp904, &tmp905, &tmp906, &tmp907, &tmp908, &tmp909, &tmp910, &tmp911, &tmp912, &tmp913, &tmp914, &tmp915, &tmp916, &tmp917, &tmp918, &tmp919, &tmp920, &tmp921, &tmp922, &tmp923, &tmp924, &tmp925, &tmp926, &tmp927, &tmp928, &tmp929);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp930;
    USE(tmp930);
    tmp930 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp931;
    USE(tmp931);
    tmp931 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp929}, TNode<IntPtrT>{tmp930});
    TNode<IntPtrT> tmp932;
    USE(tmp932);
    tmp932 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp926}, TNode<IntPtrT>{tmp931});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp933;
    USE(tmp933);
    TNode<IntPtrT> tmp934;
    USE(tmp934);
    std::tie(tmp933, tmp934) = UnsafeNewReference20UT5ATSmi10HeapObject_1434(state_, TNode<HeapObject>{tmp925}, TNode<IntPtrT>{tmp932}).Flatten();
    ca_.Goto(&block72, tmp902, tmp903, tmp904, tmp905, tmp906, tmp907, tmp908, tmp909, tmp910, tmp911, tmp912, tmp913, tmp914, tmp915, tmp916, tmp917, tmp918, tmp919, tmp920, tmp921, tmp922, tmp923, tmp924, tmp925, tmp926, tmp927, tmp928, tmp929, tmp933, tmp934);
  }

  if (block74.is_used()) {
    TNode<RawPtrT> tmp935;
    TNode<RawPtrT> tmp936;
    TNode<IntPtrT> tmp937;
    TNode<Context> tmp938;
    TNode<Object> tmp939;
    TNode<Object> tmp940;
    TNode<Object> tmp941;
    TNode<JSTypedArray> tmp942;
    TNode<Smi> tmp943;
    TNode<JSReceiver> tmp944;
    TNode<BuiltinPtr> tmp945;
    TNode<BuiltinPtr> tmp946;
    TNode<Int32T> tmp947;
    TNode<FixedArray> tmp948;
    TNode<FixedArray> tmp949;
    TNode<Smi> tmp950;
    TNode<Object> tmp951;
    TNode<FixedArray> tmp952;
    TNode<IntPtrT> tmp953;
    TNode<IntPtrT> tmp954;
    TNode<Smi> tmp955;
    TNode<Smi> tmp956;
    TNode<IntPtrT> tmp957;
    TNode<HeapObject> tmp958;
    TNode<IntPtrT> tmp959;
    TNode<IntPtrT> tmp960;
    TNode<IntPtrT> tmp961;
    TNode<IntPtrT> tmp962;
    ca_.Bind(&block74, &tmp935, &tmp936, &tmp937, &tmp938, &tmp939, &tmp940, &tmp941, &tmp942, &tmp943, &tmp944, &tmp945, &tmp946, &tmp947, &tmp948, &tmp949, &tmp950, &tmp951, &tmp952, &tmp953, &tmp954, &tmp955, &tmp956, &tmp957, &tmp958, &tmp959, &tmp960, &tmp961, &tmp962);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block71, tmp935, tmp936, tmp937, tmp938, tmp939, tmp940, tmp941, tmp942, tmp943, tmp944, tmp945, tmp946, tmp947, tmp948, tmp949, tmp950, tmp951, tmp952, tmp953, tmp954, tmp955, tmp956, tmp957);
  }

  if (block72.is_used()) {
    TNode<RawPtrT> tmp963;
    TNode<RawPtrT> tmp964;
    TNode<IntPtrT> tmp965;
    TNode<Context> tmp966;
    TNode<Object> tmp967;
    TNode<Object> tmp968;
    TNode<Object> tmp969;
    TNode<JSTypedArray> tmp970;
    TNode<Smi> tmp971;
    TNode<JSReceiver> tmp972;
    TNode<BuiltinPtr> tmp973;
    TNode<BuiltinPtr> tmp974;
    TNode<Int32T> tmp975;
    TNode<FixedArray> tmp976;
    TNode<FixedArray> tmp977;
    TNode<Smi> tmp978;
    TNode<Object> tmp979;
    TNode<FixedArray> tmp980;
    TNode<IntPtrT> tmp981;
    TNode<IntPtrT> tmp982;
    TNode<Smi> tmp983;
    TNode<Smi> tmp984;
    TNode<IntPtrT> tmp985;
    TNode<HeapObject> tmp986;
    TNode<IntPtrT> tmp987;
    TNode<IntPtrT> tmp988;
    TNode<IntPtrT> tmp989;
    TNode<IntPtrT> tmp990;
    TNode<HeapObject> tmp991;
    TNode<IntPtrT> tmp992;
    ca_.Bind(&block72, &tmp963, &tmp964, &tmp965, &tmp966, &tmp967, &tmp968, &tmp969, &tmp970, &tmp971, &tmp972, &tmp973, &tmp974, &tmp975, &tmp976, &tmp977, &tmp978, &tmp979, &tmp980, &tmp981, &tmp982, &tmp983, &tmp984, &tmp985, &tmp986, &tmp987, &tmp988, &tmp989, &tmp990, &tmp991, &tmp992);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block70, tmp963, tmp964, tmp965, tmp966, tmp967, tmp968, tmp969, tmp970, tmp971, tmp972, tmp973, tmp974, tmp975, tmp976, tmp977, tmp978, tmp979, tmp980, tmp981, tmp982, tmp983, tmp984, tmp985, tmp991, tmp992);
  }

  if (block71.is_used()) {
    TNode<RawPtrT> tmp993;
    TNode<RawPtrT> tmp994;
    TNode<IntPtrT> tmp995;
    TNode<Context> tmp996;
    TNode<Object> tmp997;
    TNode<Object> tmp998;
    TNode<Object> tmp999;
    TNode<JSTypedArray> tmp1000;
    TNode<Smi> tmp1001;
    TNode<JSReceiver> tmp1002;
    TNode<BuiltinPtr> tmp1003;
    TNode<BuiltinPtr> tmp1004;
    TNode<Int32T> tmp1005;
    TNode<FixedArray> tmp1006;
    TNode<FixedArray> tmp1007;
    TNode<Smi> tmp1008;
    TNode<Object> tmp1009;
    TNode<FixedArray> tmp1010;
    TNode<IntPtrT> tmp1011;
    TNode<IntPtrT> tmp1012;
    TNode<Smi> tmp1013;
    TNode<Smi> tmp1014;
    TNode<IntPtrT> tmp1015;
    ca_.Bind(&block71, &tmp993, &tmp994, &tmp995, &tmp996, &tmp997, &tmp998, &tmp999, &tmp1000, &tmp1001, &tmp1002, &tmp1003, &tmp1004, &tmp1005, &tmp1006, &tmp1007, &tmp1008, &tmp1009, &tmp1010, &tmp1011, &tmp1012, &tmp1013, &tmp1014, &tmp1015);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block70.is_used()) {
    TNode<RawPtrT> tmp1016;
    TNode<RawPtrT> tmp1017;
    TNode<IntPtrT> tmp1018;
    TNode<Context> tmp1019;
    TNode<Object> tmp1020;
    TNode<Object> tmp1021;
    TNode<Object> tmp1022;
    TNode<JSTypedArray> tmp1023;
    TNode<Smi> tmp1024;
    TNode<JSReceiver> tmp1025;
    TNode<BuiltinPtr> tmp1026;
    TNode<BuiltinPtr> tmp1027;
    TNode<Int32T> tmp1028;
    TNode<FixedArray> tmp1029;
    TNode<FixedArray> tmp1030;
    TNode<Smi> tmp1031;
    TNode<Object> tmp1032;
    TNode<FixedArray> tmp1033;
    TNode<IntPtrT> tmp1034;
    TNode<IntPtrT> tmp1035;
    TNode<Smi> tmp1036;
    TNode<Smi> tmp1037;
    TNode<IntPtrT> tmp1038;
    TNode<HeapObject> tmp1039;
    TNode<IntPtrT> tmp1040;
    ca_.Bind(&block70, &tmp1016, &tmp1017, &tmp1018, &tmp1019, &tmp1020, &tmp1021, &tmp1022, &tmp1023, &tmp1024, &tmp1025, &tmp1026, &tmp1027, &tmp1028, &tmp1029, &tmp1030, &tmp1031, &tmp1032, &tmp1033, &tmp1034, &tmp1035, &tmp1036, &tmp1037, &tmp1038, &tmp1039, &tmp1040);
    ca_.Goto(&block69, tmp1016, tmp1017, tmp1018, tmp1019, tmp1020, tmp1021, tmp1022, tmp1023, tmp1024, tmp1025, tmp1026, tmp1027, tmp1028, tmp1029, tmp1030, tmp1031, tmp1032, tmp1033, tmp1034, tmp1035, tmp1036, tmp1037, tmp1039, tmp1040);
  }

  if (block69.is_used()) {
    TNode<RawPtrT> tmp1041;
    TNode<RawPtrT> tmp1042;
    TNode<IntPtrT> tmp1043;
    TNode<Context> tmp1044;
    TNode<Object> tmp1045;
    TNode<Object> tmp1046;
    TNode<Object> tmp1047;
    TNode<JSTypedArray> tmp1048;
    TNode<Smi> tmp1049;
    TNode<JSReceiver> tmp1050;
    TNode<BuiltinPtr> tmp1051;
    TNode<BuiltinPtr> tmp1052;
    TNode<Int32T> tmp1053;
    TNode<FixedArray> tmp1054;
    TNode<FixedArray> tmp1055;
    TNode<Smi> tmp1056;
    TNode<Object> tmp1057;
    TNode<FixedArray> tmp1058;
    TNode<IntPtrT> tmp1059;
    TNode<IntPtrT> tmp1060;
    TNode<Smi> tmp1061;
    TNode<Smi> tmp1062;
    TNode<HeapObject> tmp1063;
    TNode<IntPtrT> tmp1064;
    ca_.Bind(&block69, &tmp1041, &tmp1042, &tmp1043, &tmp1044, &tmp1045, &tmp1046, &tmp1047, &tmp1048, &tmp1049, &tmp1050, &tmp1051, &tmp1052, &tmp1053, &tmp1054, &tmp1055, &tmp1056, &tmp1057, &tmp1058, &tmp1059, &tmp1060, &tmp1061, &tmp1062, &tmp1063, &tmp1064);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 372);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp1063, tmp1064}, tmp1057);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 369);
    ca_.Goto(&block61, tmp1041, tmp1042, tmp1043, tmp1044, tmp1045, tmp1046, tmp1047, tmp1048, tmp1049, tmp1050, tmp1051, tmp1052, tmp1053, tmp1054, tmp1055, tmp1056);
  }

  if (block61.is_used()) {
    TNode<RawPtrT> tmp1065;
    TNode<RawPtrT> tmp1066;
    TNode<IntPtrT> tmp1067;
    TNode<Context> tmp1068;
    TNode<Object> tmp1069;
    TNode<Object> tmp1070;
    TNode<Object> tmp1071;
    TNode<JSTypedArray> tmp1072;
    TNode<Smi> tmp1073;
    TNode<JSReceiver> tmp1074;
    TNode<BuiltinPtr> tmp1075;
    TNode<BuiltinPtr> tmp1076;
    TNode<Int32T> tmp1077;
    TNode<FixedArray> tmp1078;
    TNode<FixedArray> tmp1079;
    TNode<Smi> tmp1080;
    ca_.Bind(&block61, &tmp1065, &tmp1066, &tmp1067, &tmp1068, &tmp1069, &tmp1070, &tmp1071, &tmp1072, &tmp1073, &tmp1074, &tmp1075, &tmp1076, &tmp1077, &tmp1078, &tmp1079, &tmp1080);
    TNode<Smi> tmp1081;
    USE(tmp1081);
    tmp1081 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp1082;
    USE(tmp1082);
    tmp1082 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp1080}, TNode<Smi>{tmp1081});
    ca_.Goto(&block60, tmp1065, tmp1066, tmp1067, tmp1068, tmp1069, tmp1070, tmp1071, tmp1072, tmp1073, tmp1074, tmp1075, tmp1076, tmp1077, tmp1078, tmp1079, tmp1082);
  }

  if (block59.is_used()) {
    TNode<RawPtrT> tmp1083;
    TNode<RawPtrT> tmp1084;
    TNode<IntPtrT> tmp1085;
    TNode<Context> tmp1086;
    TNode<Object> tmp1087;
    TNode<Object> tmp1088;
    TNode<Object> tmp1089;
    TNode<JSTypedArray> tmp1090;
    TNode<Smi> tmp1091;
    TNode<JSReceiver> tmp1092;
    TNode<BuiltinPtr> tmp1093;
    TNode<BuiltinPtr> tmp1094;
    TNode<Int32T> tmp1095;
    TNode<FixedArray> tmp1096;
    TNode<FixedArray> tmp1097;
    TNode<Smi> tmp1098;
    ca_.Bind(&block59, &tmp1083, &tmp1084, &tmp1085, &tmp1086, &tmp1087, &tmp1088, &tmp1089, &tmp1090, &tmp1091, &tmp1092, &tmp1093, &tmp1094, &tmp1095, &tmp1096, &tmp1097, &tmp1098);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 375);
    TNode<Smi> tmp1099;
    USE(tmp1099);
    tmp1099 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<Object> tmp1100;
    tmp1100 = CodeStubAssembler(state_).CallBuiltin(Builtins::kTypedArrayMergeSort, tmp1086, tmp1090, tmp1092, tmp1097, tmp1099, tmp1091, tmp1096);
    USE(tmp1100);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 378);
    TNode<Smi> tmp1101;
    USE(tmp1101);
    tmp1101 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.Goto(&block78, tmp1083, tmp1084, tmp1085, tmp1086, tmp1087, tmp1088, tmp1089, tmp1090, tmp1091, tmp1092, tmp1093, tmp1094, tmp1095, tmp1096, tmp1097, tmp1101);
  }

  if (block78.is_used()) {
    TNode<RawPtrT> tmp1102;
    TNode<RawPtrT> tmp1103;
    TNode<IntPtrT> tmp1104;
    TNode<Context> tmp1105;
    TNode<Object> tmp1106;
    TNode<Object> tmp1107;
    TNode<Object> tmp1108;
    TNode<JSTypedArray> tmp1109;
    TNode<Smi> tmp1110;
    TNode<JSReceiver> tmp1111;
    TNode<BuiltinPtr> tmp1112;
    TNode<BuiltinPtr> tmp1113;
    TNode<Int32T> tmp1114;
    TNode<FixedArray> tmp1115;
    TNode<FixedArray> tmp1116;
    TNode<Smi> tmp1117;
    ca_.Bind(&block78, &tmp1102, &tmp1103, &tmp1104, &tmp1105, &tmp1106, &tmp1107, &tmp1108, &tmp1109, &tmp1110, &tmp1111, &tmp1112, &tmp1113, &tmp1114, &tmp1115, &tmp1116, &tmp1117);
    TNode<BoolT> tmp1118;
    USE(tmp1118);
    tmp1118 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp1117}, TNode<Smi>{tmp1110});
    ca_.Branch(tmp1118, &block76, &block77, tmp1102, tmp1103, tmp1104, tmp1105, tmp1106, tmp1107, tmp1108, tmp1109, tmp1110, tmp1111, tmp1112, tmp1113, tmp1114, tmp1115, tmp1116, tmp1117);
  }

  if (block76.is_used()) {
    TNode<RawPtrT> tmp1119;
    TNode<RawPtrT> tmp1120;
    TNode<IntPtrT> tmp1121;
    TNode<Context> tmp1122;
    TNode<Object> tmp1123;
    TNode<Object> tmp1124;
    TNode<Object> tmp1125;
    TNode<JSTypedArray> tmp1126;
    TNode<Smi> tmp1127;
    TNode<JSReceiver> tmp1128;
    TNode<BuiltinPtr> tmp1129;
    TNode<BuiltinPtr> tmp1130;
    TNode<Int32T> tmp1131;
    TNode<FixedArray> tmp1132;
    TNode<FixedArray> tmp1133;
    TNode<Smi> tmp1134;
    ca_.Bind(&block76, &tmp1119, &tmp1120, &tmp1121, &tmp1122, &tmp1123, &tmp1124, &tmp1125, &tmp1126, &tmp1127, &tmp1128, &tmp1129, &tmp1130, &tmp1131, &tmp1132, &tmp1133, &tmp1134);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 379);
    TNode<IntPtrT> tmp1135 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp1135);
    TNode<IntPtrT> tmp1136 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp1136);
    TNode<Smi>tmp1137 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp1132, tmp1136});
    TNode<IntPtrT> tmp1138;
    USE(tmp1138);
    tmp1138 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp1137});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    TNode<IntPtrT> tmp1139;
    USE(tmp1139);
    tmp1139 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp1134});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp1140;
    USE(tmp1140);
    tmp1140 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp1139});
    TNode<UintPtrT> tmp1141;
    USE(tmp1141);
    tmp1141 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp1138});
    TNode<BoolT> tmp1142;
    USE(tmp1142);
    tmp1142 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp1140}, TNode<UintPtrT>{tmp1141});
    ca_.Branch(tmp1142, &block84, &block85, tmp1119, tmp1120, tmp1121, tmp1122, tmp1123, tmp1124, tmp1125, tmp1126, tmp1127, tmp1128, tmp1129, tmp1130, tmp1131, tmp1132, tmp1133, tmp1134, tmp1122, tmp1126, tmp1134, tmp1132, tmp1135, tmp1138, tmp1134, tmp1134, tmp1139, tmp1132, tmp1135, tmp1138, tmp1139, tmp1139);
  }

  if (block84.is_used()) {
    TNode<RawPtrT> tmp1143;
    TNode<RawPtrT> tmp1144;
    TNode<IntPtrT> tmp1145;
    TNode<Context> tmp1146;
    TNode<Object> tmp1147;
    TNode<Object> tmp1148;
    TNode<Object> tmp1149;
    TNode<JSTypedArray> tmp1150;
    TNode<Smi> tmp1151;
    TNode<JSReceiver> tmp1152;
    TNode<BuiltinPtr> tmp1153;
    TNode<BuiltinPtr> tmp1154;
    TNode<Int32T> tmp1155;
    TNode<FixedArray> tmp1156;
    TNode<FixedArray> tmp1157;
    TNode<Smi> tmp1158;
    TNode<Context> tmp1159;
    TNode<JSTypedArray> tmp1160;
    TNode<Smi> tmp1161;
    TNode<FixedArray> tmp1162;
    TNode<IntPtrT> tmp1163;
    TNode<IntPtrT> tmp1164;
    TNode<Smi> tmp1165;
    TNode<Smi> tmp1166;
    TNode<IntPtrT> tmp1167;
    TNode<HeapObject> tmp1168;
    TNode<IntPtrT> tmp1169;
    TNode<IntPtrT> tmp1170;
    TNode<IntPtrT> tmp1171;
    TNode<IntPtrT> tmp1172;
    ca_.Bind(&block84, &tmp1143, &tmp1144, &tmp1145, &tmp1146, &tmp1147, &tmp1148, &tmp1149, &tmp1150, &tmp1151, &tmp1152, &tmp1153, &tmp1154, &tmp1155, &tmp1156, &tmp1157, &tmp1158, &tmp1159, &tmp1160, &tmp1161, &tmp1162, &tmp1163, &tmp1164, &tmp1165, &tmp1166, &tmp1167, &tmp1168, &tmp1169, &tmp1170, &tmp1171, &tmp1172);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp1173;
    USE(tmp1173);
    tmp1173 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp1174;
    USE(tmp1174);
    tmp1174 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp1172}, TNode<IntPtrT>{tmp1173});
    TNode<IntPtrT> tmp1175;
    USE(tmp1175);
    tmp1175 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1169}, TNode<IntPtrT>{tmp1174});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp1176;
    USE(tmp1176);
    TNode<IntPtrT> tmp1177;
    USE(tmp1177);
    std::tie(tmp1176, tmp1177) = UnsafeNewReference20UT5ATSmi10HeapObject_1434(state_, TNode<HeapObject>{tmp1168}, TNode<IntPtrT>{tmp1175}).Flatten();
    ca_.Goto(&block83, tmp1143, tmp1144, tmp1145, tmp1146, tmp1147, tmp1148, tmp1149, tmp1150, tmp1151, tmp1152, tmp1153, tmp1154, tmp1155, tmp1156, tmp1157, tmp1158, tmp1159, tmp1160, tmp1161, tmp1162, tmp1163, tmp1164, tmp1165, tmp1166, tmp1167, tmp1168, tmp1169, tmp1170, tmp1171, tmp1172, tmp1176, tmp1177);
  }

  if (block85.is_used()) {
    TNode<RawPtrT> tmp1178;
    TNode<RawPtrT> tmp1179;
    TNode<IntPtrT> tmp1180;
    TNode<Context> tmp1181;
    TNode<Object> tmp1182;
    TNode<Object> tmp1183;
    TNode<Object> tmp1184;
    TNode<JSTypedArray> tmp1185;
    TNode<Smi> tmp1186;
    TNode<JSReceiver> tmp1187;
    TNode<BuiltinPtr> tmp1188;
    TNode<BuiltinPtr> tmp1189;
    TNode<Int32T> tmp1190;
    TNode<FixedArray> tmp1191;
    TNode<FixedArray> tmp1192;
    TNode<Smi> tmp1193;
    TNode<Context> tmp1194;
    TNode<JSTypedArray> tmp1195;
    TNode<Smi> tmp1196;
    TNode<FixedArray> tmp1197;
    TNode<IntPtrT> tmp1198;
    TNode<IntPtrT> tmp1199;
    TNode<Smi> tmp1200;
    TNode<Smi> tmp1201;
    TNode<IntPtrT> tmp1202;
    TNode<HeapObject> tmp1203;
    TNode<IntPtrT> tmp1204;
    TNode<IntPtrT> tmp1205;
    TNode<IntPtrT> tmp1206;
    TNode<IntPtrT> tmp1207;
    ca_.Bind(&block85, &tmp1178, &tmp1179, &tmp1180, &tmp1181, &tmp1182, &tmp1183, &tmp1184, &tmp1185, &tmp1186, &tmp1187, &tmp1188, &tmp1189, &tmp1190, &tmp1191, &tmp1192, &tmp1193, &tmp1194, &tmp1195, &tmp1196, &tmp1197, &tmp1198, &tmp1199, &tmp1200, &tmp1201, &tmp1202, &tmp1203, &tmp1204, &tmp1205, &tmp1206, &tmp1207);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block82, tmp1178, tmp1179, tmp1180, tmp1181, tmp1182, tmp1183, tmp1184, tmp1185, tmp1186, tmp1187, tmp1188, tmp1189, tmp1190, tmp1191, tmp1192, tmp1193, tmp1194, tmp1195, tmp1196, tmp1197, tmp1198, tmp1199, tmp1200, tmp1201, tmp1202);
  }

  if (block83.is_used()) {
    TNode<RawPtrT> tmp1208;
    TNode<RawPtrT> tmp1209;
    TNode<IntPtrT> tmp1210;
    TNode<Context> tmp1211;
    TNode<Object> tmp1212;
    TNode<Object> tmp1213;
    TNode<Object> tmp1214;
    TNode<JSTypedArray> tmp1215;
    TNode<Smi> tmp1216;
    TNode<JSReceiver> tmp1217;
    TNode<BuiltinPtr> tmp1218;
    TNode<BuiltinPtr> tmp1219;
    TNode<Int32T> tmp1220;
    TNode<FixedArray> tmp1221;
    TNode<FixedArray> tmp1222;
    TNode<Smi> tmp1223;
    TNode<Context> tmp1224;
    TNode<JSTypedArray> tmp1225;
    TNode<Smi> tmp1226;
    TNode<FixedArray> tmp1227;
    TNode<IntPtrT> tmp1228;
    TNode<IntPtrT> tmp1229;
    TNode<Smi> tmp1230;
    TNode<Smi> tmp1231;
    TNode<IntPtrT> tmp1232;
    TNode<HeapObject> tmp1233;
    TNode<IntPtrT> tmp1234;
    TNode<IntPtrT> tmp1235;
    TNode<IntPtrT> tmp1236;
    TNode<IntPtrT> tmp1237;
    TNode<HeapObject> tmp1238;
    TNode<IntPtrT> tmp1239;
    ca_.Bind(&block83, &tmp1208, &tmp1209, &tmp1210, &tmp1211, &tmp1212, &tmp1213, &tmp1214, &tmp1215, &tmp1216, &tmp1217, &tmp1218, &tmp1219, &tmp1220, &tmp1221, &tmp1222, &tmp1223, &tmp1224, &tmp1225, &tmp1226, &tmp1227, &tmp1228, &tmp1229, &tmp1230, &tmp1231, &tmp1232, &tmp1233, &tmp1234, &tmp1235, &tmp1236, &tmp1237, &tmp1238, &tmp1239);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block81, tmp1208, tmp1209, tmp1210, tmp1211, tmp1212, tmp1213, tmp1214, tmp1215, tmp1216, tmp1217, tmp1218, tmp1219, tmp1220, tmp1221, tmp1222, tmp1223, tmp1224, tmp1225, tmp1226, tmp1227, tmp1228, tmp1229, tmp1230, tmp1231, tmp1232, tmp1238, tmp1239);
  }

  if (block82.is_used()) {
    TNode<RawPtrT> tmp1240;
    TNode<RawPtrT> tmp1241;
    TNode<IntPtrT> tmp1242;
    TNode<Context> tmp1243;
    TNode<Object> tmp1244;
    TNode<Object> tmp1245;
    TNode<Object> tmp1246;
    TNode<JSTypedArray> tmp1247;
    TNode<Smi> tmp1248;
    TNode<JSReceiver> tmp1249;
    TNode<BuiltinPtr> tmp1250;
    TNode<BuiltinPtr> tmp1251;
    TNode<Int32T> tmp1252;
    TNode<FixedArray> tmp1253;
    TNode<FixedArray> tmp1254;
    TNode<Smi> tmp1255;
    TNode<Context> tmp1256;
    TNode<JSTypedArray> tmp1257;
    TNode<Smi> tmp1258;
    TNode<FixedArray> tmp1259;
    TNode<IntPtrT> tmp1260;
    TNode<IntPtrT> tmp1261;
    TNode<Smi> tmp1262;
    TNode<Smi> tmp1263;
    TNode<IntPtrT> tmp1264;
    ca_.Bind(&block82, &tmp1240, &tmp1241, &tmp1242, &tmp1243, &tmp1244, &tmp1245, &tmp1246, &tmp1247, &tmp1248, &tmp1249, &tmp1250, &tmp1251, &tmp1252, &tmp1253, &tmp1254, &tmp1255, &tmp1256, &tmp1257, &tmp1258, &tmp1259, &tmp1260, &tmp1261, &tmp1262, &tmp1263, &tmp1264);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block81.is_used()) {
    TNode<RawPtrT> tmp1265;
    TNode<RawPtrT> tmp1266;
    TNode<IntPtrT> tmp1267;
    TNode<Context> tmp1268;
    TNode<Object> tmp1269;
    TNode<Object> tmp1270;
    TNode<Object> tmp1271;
    TNode<JSTypedArray> tmp1272;
    TNode<Smi> tmp1273;
    TNode<JSReceiver> tmp1274;
    TNode<BuiltinPtr> tmp1275;
    TNode<BuiltinPtr> tmp1276;
    TNode<Int32T> tmp1277;
    TNode<FixedArray> tmp1278;
    TNode<FixedArray> tmp1279;
    TNode<Smi> tmp1280;
    TNode<Context> tmp1281;
    TNode<JSTypedArray> tmp1282;
    TNode<Smi> tmp1283;
    TNode<FixedArray> tmp1284;
    TNode<IntPtrT> tmp1285;
    TNode<IntPtrT> tmp1286;
    TNode<Smi> tmp1287;
    TNode<Smi> tmp1288;
    TNode<IntPtrT> tmp1289;
    TNode<HeapObject> tmp1290;
    TNode<IntPtrT> tmp1291;
    ca_.Bind(&block81, &tmp1265, &tmp1266, &tmp1267, &tmp1268, &tmp1269, &tmp1270, &tmp1271, &tmp1272, &tmp1273, &tmp1274, &tmp1275, &tmp1276, &tmp1277, &tmp1278, &tmp1279, &tmp1280, &tmp1281, &tmp1282, &tmp1283, &tmp1284, &tmp1285, &tmp1286, &tmp1287, &tmp1288, &tmp1289, &tmp1290, &tmp1291);
    ca_.Goto(&block80, tmp1265, tmp1266, tmp1267, tmp1268, tmp1269, tmp1270, tmp1271, tmp1272, tmp1273, tmp1274, tmp1275, tmp1276, tmp1277, tmp1278, tmp1279, tmp1280, tmp1281, tmp1282, tmp1283, tmp1284, tmp1285, tmp1286, tmp1287, tmp1288, tmp1290, tmp1291);
  }

  if (block80.is_used()) {
    TNode<RawPtrT> tmp1292;
    TNode<RawPtrT> tmp1293;
    TNode<IntPtrT> tmp1294;
    TNode<Context> tmp1295;
    TNode<Object> tmp1296;
    TNode<Object> tmp1297;
    TNode<Object> tmp1298;
    TNode<JSTypedArray> tmp1299;
    TNode<Smi> tmp1300;
    TNode<JSReceiver> tmp1301;
    TNode<BuiltinPtr> tmp1302;
    TNode<BuiltinPtr> tmp1303;
    TNode<Int32T> tmp1304;
    TNode<FixedArray> tmp1305;
    TNode<FixedArray> tmp1306;
    TNode<Smi> tmp1307;
    TNode<Context> tmp1308;
    TNode<JSTypedArray> tmp1309;
    TNode<Smi> tmp1310;
    TNode<FixedArray> tmp1311;
    TNode<IntPtrT> tmp1312;
    TNode<IntPtrT> tmp1313;
    TNode<Smi> tmp1314;
    TNode<Smi> tmp1315;
    TNode<HeapObject> tmp1316;
    TNode<IntPtrT> tmp1317;
    ca_.Bind(&block80, &tmp1292, &tmp1293, &tmp1294, &tmp1295, &tmp1296, &tmp1297, &tmp1298, &tmp1299, &tmp1300, &tmp1301, &tmp1302, &tmp1303, &tmp1304, &tmp1305, &tmp1306, &tmp1307, &tmp1308, &tmp1309, &tmp1310, &tmp1311, &tmp1312, &tmp1313, &tmp1314, &tmp1315, &tmp1316, &tmp1317);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 379);
    TNode<Object>tmp1318 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp1316, tmp1317});
    TNode<Object> tmp1319;
    USE(tmp1319);
    tmp1319 = UnsafeCast90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol_1435(state_, TNode<Context>{tmp1295}, TNode<Object>{tmp1318});
    TNode<Object> tmp1320 = CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(2)).descriptor(), tmp1303, tmp1308, tmp1309, tmp1310, tmp1319); 
    USE(tmp1320);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 378);
    ca_.Goto(&block79, tmp1292, tmp1293, tmp1294, tmp1295, tmp1296, tmp1297, tmp1298, tmp1299, tmp1300, tmp1301, tmp1302, tmp1303, tmp1304, tmp1305, tmp1306, tmp1307);
  }

  if (block79.is_used()) {
    TNode<RawPtrT> tmp1321;
    TNode<RawPtrT> tmp1322;
    TNode<IntPtrT> tmp1323;
    TNode<Context> tmp1324;
    TNode<Object> tmp1325;
    TNode<Object> tmp1326;
    TNode<Object> tmp1327;
    TNode<JSTypedArray> tmp1328;
    TNode<Smi> tmp1329;
    TNode<JSReceiver> tmp1330;
    TNode<BuiltinPtr> tmp1331;
    TNode<BuiltinPtr> tmp1332;
    TNode<Int32T> tmp1333;
    TNode<FixedArray> tmp1334;
    TNode<FixedArray> tmp1335;
    TNode<Smi> tmp1336;
    ca_.Bind(&block79, &tmp1321, &tmp1322, &tmp1323, &tmp1324, &tmp1325, &tmp1326, &tmp1327, &tmp1328, &tmp1329, &tmp1330, &tmp1331, &tmp1332, &tmp1333, &tmp1334, &tmp1335, &tmp1336);
    TNode<Smi> tmp1337;
    USE(tmp1337);
    tmp1337 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp1338;
    USE(tmp1338);
    tmp1338 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp1336}, TNode<Smi>{tmp1337});
    ca_.Goto(&block78, tmp1321, tmp1322, tmp1323, tmp1324, tmp1325, tmp1326, tmp1327, tmp1328, tmp1329, tmp1330, tmp1331, tmp1332, tmp1333, tmp1334, tmp1335, tmp1338);
  }

  if (block77.is_used()) {
    TNode<RawPtrT> tmp1339;
    TNode<RawPtrT> tmp1340;
    TNode<IntPtrT> tmp1341;
    TNode<Context> tmp1342;
    TNode<Object> tmp1343;
    TNode<Object> tmp1344;
    TNode<Object> tmp1345;
    TNode<JSTypedArray> tmp1346;
    TNode<Smi> tmp1347;
    TNode<JSReceiver> tmp1348;
    TNode<BuiltinPtr> tmp1349;
    TNode<BuiltinPtr> tmp1350;
    TNode<Int32T> tmp1351;
    TNode<FixedArray> tmp1352;
    TNode<FixedArray> tmp1353;
    TNode<Smi> tmp1354;
    ca_.Bind(&block77, &tmp1339, &tmp1340, &tmp1341, &tmp1342, &tmp1343, &tmp1344, &tmp1345, &tmp1346, &tmp1347, &tmp1348, &tmp1349, &tmp1350, &tmp1351, &tmp1352, &tmp1353, &tmp1354);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 381);
    arguments.PopAndReturn(tmp1346);
  }
}

TF_BUILTIN(LoadFixedElement15ATInt32Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSTypedArray> tmp1;
    TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 200);
    TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 199);
    TNode<Numeric> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp3}, TNode<Smi>{tmp2}, (KindForArrayType15ATInt32Elements_384(state_)));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(LoadFixedElement17ATFloat32Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSTypedArray> tmp1;
    TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 200);
    TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 199);
    TNode<Numeric> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp3}, TNode<Smi>{tmp2}, (KindForArrayType17ATFloat32Elements_385(state_)));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(LoadFixedElement17ATFloat64Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSTypedArray> tmp1;
    TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 200);
    TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 199);
    TNode<Numeric> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp3}, TNode<Smi>{tmp2}, (KindForArrayType17ATFloat64Elements_386(state_)));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(LoadFixedElement22ATUint8ClampedElements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSTypedArray> tmp1;
    TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 200);
    TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 199);
    TNode<Numeric> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp3}, TNode<Smi>{tmp2}, (KindForArrayType22ATUint8ClampedElements_387(state_)));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(LoadFixedElement19ATBigUint64Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSTypedArray> tmp1;
    TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 200);
    TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 199);
    TNode<Numeric> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp3}, TNode<Smi>{tmp2}, (KindForArrayType19ATBigUint64Elements_388(state_)));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(LoadFixedElement18ATBigInt64Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSTypedArray> tmp1;
    TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 200);
    TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 199);
    TNode<Numeric> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp3}, TNode<Smi>{tmp2}, (KindForArrayType18ATBigInt64Elements_389(state_)));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(LoadFixedElement15ATUint8Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSTypedArray> tmp1;
    TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 200);
    TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 199);
    TNode<Numeric> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp3}, TNode<Smi>{tmp2}, (KindForArrayType15ATUint8Elements_379(state_)));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(LoadFixedElement14ATInt8Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSTypedArray> tmp1;
    TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 200);
    TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 199);
    TNode<Numeric> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp3}, TNode<Smi>{tmp2}, (KindForArrayType14ATInt8Elements_380(state_)));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(LoadFixedElement16ATUint16Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSTypedArray> tmp1;
    TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 200);
    TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 199);
    TNode<Numeric> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp3}, TNode<Smi>{tmp2}, (KindForArrayType16ATUint16Elements_381(state_)));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(LoadFixedElement15ATInt16Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSTypedArray> tmp1;
    TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 200);
    TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 199);
    TNode<Numeric> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp3}, TNode<Smi>{tmp2}, (KindForArrayType15ATInt16Elements_382(state_)));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(LoadFixedElement16ATUint32Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSTypedArray> tmp1;
    TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 200);
    TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 199);
    TNode<Numeric> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp3}, TNode<Smi>{tmp2}, (KindForArrayType16ATUint32Elements_383(state_)));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement15ATInt32Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kTypedArray));
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSTypedArray> tmp1;
    TNode<Smi> tmp2;
    TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 207);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 206);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromTagged(TNode<Context>{tmp0}, TNode<JSTypedArray>{tmp1}, TNode<Smi>{tmp2}, TNode<Object>{tmp3}, (KindForArrayType15ATInt32Elements_384(state_)));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 208);
    TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement17ATFloat32Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kTypedArray));
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSTypedArray> tmp1;
    TNode<Smi> tmp2;
    TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 207);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 206);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromTagged(TNode<Context>{tmp0}, TNode<JSTypedArray>{tmp1}, TNode<Smi>{tmp2}, TNode<Object>{tmp3}, (KindForArrayType17ATFloat32Elements_385(state_)));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 208);
    TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement17ATFloat64Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kTypedArray));
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSTypedArray> tmp1;
    TNode<Smi> tmp2;
    TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 207);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 206);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromTagged(TNode<Context>{tmp0}, TNode<JSTypedArray>{tmp1}, TNode<Smi>{tmp2}, TNode<Object>{tmp3}, (KindForArrayType17ATFloat64Elements_386(state_)));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 208);
    TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement22ATUint8ClampedElements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kTypedArray));
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSTypedArray> tmp1;
    TNode<Smi> tmp2;
    TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 207);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 206);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromTagged(TNode<Context>{tmp0}, TNode<JSTypedArray>{tmp1}, TNode<Smi>{tmp2}, TNode<Object>{tmp3}, (KindForArrayType22ATUint8ClampedElements_387(state_)));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 208);
    TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement19ATBigUint64Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kTypedArray));
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSTypedArray> tmp1;
    TNode<Smi> tmp2;
    TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 207);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 206);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromTagged(TNode<Context>{tmp0}, TNode<JSTypedArray>{tmp1}, TNode<Smi>{tmp2}, TNode<Object>{tmp3}, (KindForArrayType19ATBigUint64Elements_388(state_)));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 208);
    TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement18ATBigInt64Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kTypedArray));
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSTypedArray> tmp1;
    TNode<Smi> tmp2;
    TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 207);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 206);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromTagged(TNode<Context>{tmp0}, TNode<JSTypedArray>{tmp1}, TNode<Smi>{tmp2}, TNode<Object>{tmp3}, (KindForArrayType18ATBigInt64Elements_389(state_)));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 208);
    TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement15ATUint8Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kTypedArray));
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSTypedArray> tmp1;
    TNode<Smi> tmp2;
    TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 207);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 206);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromTagged(TNode<Context>{tmp0}, TNode<JSTypedArray>{tmp1}, TNode<Smi>{tmp2}, TNode<Object>{tmp3}, (KindForArrayType15ATUint8Elements_379(state_)));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 208);
    TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement14ATInt8Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kTypedArray));
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSTypedArray> tmp1;
    TNode<Smi> tmp2;
    TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 207);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 206);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromTagged(TNode<Context>{tmp0}, TNode<JSTypedArray>{tmp1}, TNode<Smi>{tmp2}, TNode<Object>{tmp3}, (KindForArrayType14ATInt8Elements_380(state_)));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 208);
    TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement16ATUint16Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kTypedArray));
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSTypedArray> tmp1;
    TNode<Smi> tmp2;
    TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 207);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 206);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromTagged(TNode<Context>{tmp0}, TNode<JSTypedArray>{tmp1}, TNode<Smi>{tmp2}, TNode<Object>{tmp3}, (KindForArrayType16ATUint16Elements_381(state_)));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 208);
    TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement15ATInt16Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kTypedArray));
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSTypedArray> tmp1;
    TNode<Smi> tmp2;
    TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 207);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 206);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromTagged(TNode<Context>{tmp0}, TNode<JSTypedArray>{tmp1}, TNode<Smi>{tmp2}, TNode<Object>{tmp3}, (KindForArrayType15ATInt16Elements_382(state_)));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 208);
    TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement16ATUint32Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kTypedArray));
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSTypedArray> tmp1;
    TNode<Smi> tmp2;
    TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 207);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 206);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromTagged(TNode<Context>{tmp0}, TNode<JSTypedArray>{tmp1}, TNode<Smi>{tmp2}, TNode<Object>{tmp3}, (KindForArrayType16ATUint32Elements_383(state_)));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 208);
    TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp4);
  }
}

}  // namespace internal
}  // namespace v8

