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

void EnsureWriteableFastElements_50(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSArray> p_array) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, FixedArrayBase> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, FixedArrayBase> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, FixedArrayBase, Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, FixedArrayBase, Number, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, FixedArrayBase> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, FixedArrayBase, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_array);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSArray> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 22);
    TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp2);
    TNode<FixedArrayBase>tmp3 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp1, tmp2});
    ca_.SetSourcePosition("../../src/builtins/array.tq", 23);
    TNode<IntPtrT> tmp4 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp4);
    TNode<Map>tmp5 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp3, tmp4});
    TNode<Map> tmp6;
    USE(tmp6);
    tmp6 = kCOWMap_212(state_);
    TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).TaggedNotEqual(TNode<HeapObject>{tmp5}, TNode<HeapObject>{tmp6});
    ca_.Branch(tmp7, &block2, &block3, tmp0, tmp1, tmp3);
  }

  if (block2.is_used()) {
    TNode<Context> tmp8;
    TNode<JSArray> tmp9;
    TNode<FixedArrayBase> tmp10;
    ca_.Bind(&block2, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block1, tmp8, tmp9);
  }

  if (block3.is_used()) {
    TNode<Context> tmp11;
    TNode<JSArray> tmp12;
    TNode<FixedArrayBase> tmp13;
    ca_.Bind(&block3, &tmp11, &tmp12, &tmp13);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 29);
    TNode<IntPtrT> tmp14 = ca_.IntPtrConstant(JSArray::kLengthOffset);
    USE(tmp14);
    TNode<Number>tmp15 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp12, tmp14});
    TNode<Smi> tmp16;
    USE(tmp16);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp16 = Cast5ATSmi_83(state_, TNode<Object>{tmp15}, &label0);
    ca_.Goto(&block6, tmp11, tmp12, tmp13, tmp15, tmp16);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block7, tmp11, tmp12, tmp13, tmp15);
    }
  }

  if (block7.is_used()) {
    TNode<Context> tmp17;
    TNode<JSArray> tmp18;
    TNode<FixedArrayBase> tmp19;
    TNode<Number> tmp20;
    ca_.Bind(&block7, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.Goto(&block5, tmp17, tmp18, tmp19);
  }

  if (block6.is_used()) {
    TNode<Context> tmp21;
    TNode<JSArray> tmp22;
    TNode<FixedArrayBase> tmp23;
    TNode<Number> tmp24;
    TNode<Smi> tmp25;
    ca_.Bind(&block6, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block4, tmp21, tmp22, tmp23, tmp25);
  }

  if (block5.is_used()) {
    TNode<Context> tmp26;
    TNode<JSArray> tmp27;
    TNode<FixedArrayBase> tmp28;
    ca_.Bind(&block5, &tmp26, &tmp27, &tmp28);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block4.is_used()) {
    TNode<Context> tmp29;
    TNode<JSArray> tmp30;
    TNode<FixedArrayBase> tmp31;
    TNode<Smi> tmp32;
    ca_.Bind(&block4, &tmp29, &tmp30, &tmp31, &tmp32);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 30);
    TNode<IntPtrT> tmp33 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp33);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 31);
    TNode<Smi> tmp34;
    USE(tmp34);
    tmp34 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<FixedArrayBase> tmp35;
    USE(tmp35);
    tmp35 = CodeStubAssembler(state_).ExtractFixedArray(TNode<FixedArrayBase>{tmp31}, TNode<Smi>{tmp34}, TNode<Smi>{tmp32}, TNode<Smi>{tmp32}, CodeStubAssembler::ExtractFixedArrayFlag::kFixedArrays);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 30);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp30, tmp33}, tmp35);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 19);
    ca_.Goto(&block1, tmp29, tmp30);
  }

  if (block1.is_used()) {
    TNode<Context> tmp36;
    TNode<JSArray> tmp37;
    ca_.Bind(&block1, &tmp36, &tmp37);
    ca_.Goto(&block8, tmp36, tmp37);
  }

    TNode<Context> tmp38;
    TNode<JSArray> tmp39;
    ca_.Bind(&block8, &tmp38, &tmp39);
}

TNode<Object> LoadElementOrUndefined_51(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArray> p_a, TNode<Smi> p_i) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_a, p_i);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<FixedArray> tmp1;
    TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 37);
    TNode<IntPtrT> tmp3 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp3);
    TNode<IntPtrT> tmp4 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp4);
    TNode<Smi>tmp5 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp1, tmp4});
    TNode<IntPtrT> tmp6;
    USE(tmp6);
    tmp6 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp5});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp8;
    USE(tmp8);
    tmp8 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp7});
    TNode<UintPtrT> tmp9;
    USE(tmp9);
    tmp9 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp6});
    TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp8}, TNode<UintPtrT>{tmp9});
    ca_.Branch(tmp10, &block6, &block7, tmp0, tmp1, tmp2, tmp1, tmp3, tmp6, tmp2, tmp2, tmp7, tmp1, tmp3, tmp6, tmp7, tmp7);
  }

  if (block6.is_used()) {
    TNode<Context> tmp11;
    TNode<FixedArray> tmp12;
    TNode<Smi> tmp13;
    TNode<FixedArray> tmp14;
    TNode<IntPtrT> tmp15;
    TNode<IntPtrT> tmp16;
    TNode<Smi> tmp17;
    TNode<Smi> tmp18;
    TNode<IntPtrT> tmp19;
    TNode<HeapObject> tmp20;
    TNode<IntPtrT> tmp21;
    TNode<IntPtrT> tmp22;
    TNode<IntPtrT> tmp23;
    TNode<IntPtrT> tmp24;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp25;
    USE(tmp25);
    tmp25 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp26;
    USE(tmp26);
    tmp26 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp24}, TNode<IntPtrT>{tmp25});
    TNode<IntPtrT> tmp27;
    USE(tmp27);
    tmp27 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp21}, TNode<IntPtrT>{tmp26});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp28;
    USE(tmp28);
    TNode<IntPtrT> tmp29;
    USE(tmp29);
    std::tie(tmp28, tmp29) = UnsafeNewReference20UT5ATSmi10HeapObject_1434(state_, TNode<HeapObject>{tmp20}, TNode<IntPtrT>{tmp27}).Flatten();
    ca_.Goto(&block5, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp28, tmp29);
  }

  if (block7.is_used()) {
    TNode<Context> tmp30;
    TNode<FixedArray> tmp31;
    TNode<Smi> tmp32;
    TNode<FixedArray> tmp33;
    TNode<IntPtrT> tmp34;
    TNode<IntPtrT> tmp35;
    TNode<Smi> tmp36;
    TNode<Smi> tmp37;
    TNode<IntPtrT> tmp38;
    TNode<HeapObject> tmp39;
    TNode<IntPtrT> tmp40;
    TNode<IntPtrT> tmp41;
    TNode<IntPtrT> tmp42;
    TNode<IntPtrT> tmp43;
    ca_.Bind(&block7, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block4, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38);
  }

  if (block5.is_used()) {
    TNode<Context> tmp44;
    TNode<FixedArray> tmp45;
    TNode<Smi> tmp46;
    TNode<FixedArray> tmp47;
    TNode<IntPtrT> tmp48;
    TNode<IntPtrT> tmp49;
    TNode<Smi> tmp50;
    TNode<Smi> tmp51;
    TNode<IntPtrT> tmp52;
    TNode<HeapObject> tmp53;
    TNode<IntPtrT> tmp54;
    TNode<IntPtrT> tmp55;
    TNode<IntPtrT> tmp56;
    TNode<IntPtrT> tmp57;
    TNode<HeapObject> tmp58;
    TNode<IntPtrT> tmp59;
    ca_.Bind(&block5, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block3, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp58, tmp59);
  }

  if (block4.is_used()) {
    TNode<Context> tmp60;
    TNode<FixedArray> tmp61;
    TNode<Smi> tmp62;
    TNode<FixedArray> tmp63;
    TNode<IntPtrT> tmp64;
    TNode<IntPtrT> tmp65;
    TNode<Smi> tmp66;
    TNode<Smi> tmp67;
    TNode<IntPtrT> tmp68;
    ca_.Bind(&block4, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block3.is_used()) {
    TNode<Context> tmp69;
    TNode<FixedArray> tmp70;
    TNode<Smi> tmp71;
    TNode<FixedArray> tmp72;
    TNode<IntPtrT> tmp73;
    TNode<IntPtrT> tmp74;
    TNode<Smi> tmp75;
    TNode<Smi> tmp76;
    TNode<IntPtrT> tmp77;
    TNode<HeapObject> tmp78;
    TNode<IntPtrT> tmp79;
    ca_.Bind(&block3, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79);
    ca_.Goto(&block2, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp78, tmp79);
  }

  if (block2.is_used()) {
    TNode<Context> tmp80;
    TNode<FixedArray> tmp81;
    TNode<Smi> tmp82;
    TNode<FixedArray> tmp83;
    TNode<IntPtrT> tmp84;
    TNode<IntPtrT> tmp85;
    TNode<Smi> tmp86;
    TNode<Smi> tmp87;
    TNode<HeapObject> tmp88;
    TNode<IntPtrT> tmp89;
    ca_.Bind(&block2, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 37);
    TNode<Object>tmp90 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp88, tmp89});
    TNode<Object> tmp91;
    USE(tmp91);
    tmp91 = UnsafeCast100UT8ATBigInt7ATFalse6ATNull5ATSmi9ATTheHole6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol_1463(state_, TNode<Context>{tmp80}, TNode<Object>{tmp90});
    ca_.SetSourcePosition("../../src/builtins/array.tq", 38);
    TNode<Object> tmp92;
    USE(tmp92);
    tmp92 = ReplaceTheHoleWithUndefined_257(state_, TNode<Object>{tmp91});
    ca_.Goto(&block1, tmp80, tmp81, tmp82, tmp92);
  }

  if (block1.is_used()) {
    TNode<Context> tmp93;
    TNode<FixedArray> tmp94;
    TNode<Smi> tmp95;
    TNode<Object> tmp96;
    ca_.Bind(&block1, &tmp93, &tmp94, &tmp95, &tmp96);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 35);
    ca_.Goto(&block9, tmp93, tmp94, tmp95, tmp96);
  }

    TNode<Context> tmp97;
    TNode<FixedArray> tmp98;
    TNode<Smi> tmp99;
    TNode<Object> tmp100;
    ca_.Bind(&block9, &tmp97, &tmp98, &tmp99, &tmp100);
  return TNode<Object>{tmp100};
}

TNode<Object> LoadElementOrUndefined_52(compiler::CodeAssemblerState* state_, TNode<FixedDoubleArray> p_a, TNode<Smi> p_i) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, FixedDoubleArray, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, FixedDoubleArray, Smi, Float64T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Float64T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_a, p_i);

  if (block0.is_used()) {
    TNode<FixedDoubleArray> tmp0;
    TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 42);
    TNode<Float64T> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).LoadDoubleWithHoleCheck(TNode<FixedDoubleArray>{tmp0}, TNode<Smi>{tmp1}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp0, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp0, tmp1);
    }
  }

  if (block5.is_used()) {
    TNode<FixedDoubleArray> tmp3;
    TNode<Smi> tmp4;
    TNode<FixedDoubleArray> tmp5;
    TNode<Smi> tmp6;
    ca_.Bind(&block5, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block3, tmp3, tmp4);
  }

  if (block4.is_used()) {
    TNode<FixedDoubleArray> tmp7;
    TNode<Smi> tmp8;
    TNode<FixedDoubleArray> tmp9;
    TNode<Smi> tmp10;
    TNode<Float64T> tmp11;
    ca_.Bind(&block4, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block2, tmp7, tmp8, tmp11);
  }

  if (block3.is_used()) {
    TNode<FixedDoubleArray> tmp12;
    TNode<Smi> tmp13;
    ca_.Bind(&block3, &tmp12, &tmp13);
    TNode<Oddball> tmp14;
    USE(tmp14);
    tmp14 = Undefined_64(state_);
    ca_.Goto(&block1, tmp12, tmp13, tmp14);
  }

  if (block2.is_used()) {
    TNode<FixedDoubleArray> tmp15;
    TNode<Smi> tmp16;
    TNode<Float64T> tmp17;
    ca_.Bind(&block2, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 43);
    TNode<HeapNumber> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).AllocateHeapNumberWithValue(TNode<Float64T>{tmp17});
    ca_.Goto(&block1, tmp15, tmp16, tmp18);
  }

  if (block1.is_used()) {
    TNode<FixedDoubleArray> tmp19;
    TNode<Smi> tmp20;
    TNode<Object> tmp21;
    ca_.Bind(&block1, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 41);
    ca_.Goto(&block6, tmp19, tmp20, tmp21);
  }

    TNode<FixedDoubleArray> tmp22;
    TNode<Smi> tmp23;
    TNode<Object> tmp24;
    ca_.Bind(&block6, &tmp22, &tmp23, &tmp24);
  return TNode<Object>{tmp24};
}

void StoreArrayHole_53(compiler::CodeAssemblerState* state_, TNode<FixedDoubleArray> p_elements, TNode<Smi> p_k) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_elements, p_k);

  if (block0.is_used()) {
    TNode<FixedDoubleArray> tmp0;
    TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 47);
    CodeStubAssembler(state_).StoreFixedDoubleArrayHoleSmi(TNode<FixedDoubleArray>{tmp0}, TNode<Smi>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/array.tq", 46);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    TNode<FixedDoubleArray> tmp2;
    TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    TNode<FixedDoubleArray> tmp4;
    TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

void StoreArrayHole_54(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_elements, TNode<Smi> p_k) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_elements, p_k);

  if (block0.is_used()) {
    TNode<FixedArray> tmp0;
    TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 51);
    TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp2);
    TNode<IntPtrT> tmp3 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp3);
    TNode<Smi>tmp4 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp3});
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp4});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    TNode<IntPtrT> tmp6;
    USE(tmp6);
    tmp6 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp7;
    USE(tmp7);
    tmp7 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp6});
    TNode<UintPtrT> tmp8;
    USE(tmp8);
    tmp8 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp5});
    TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp7}, TNode<UintPtrT>{tmp8});
    ca_.Branch(tmp9, &block6, &block7, tmp0, tmp1, tmp0, tmp2, tmp5, tmp1, tmp1, tmp6, tmp0, tmp2, tmp5, tmp6, tmp6);
  }

  if (block6.is_used()) {
    TNode<FixedArray> tmp10;
    TNode<Smi> tmp11;
    TNode<FixedArray> tmp12;
    TNode<IntPtrT> tmp13;
    TNode<IntPtrT> tmp14;
    TNode<Smi> tmp15;
    TNode<Smi> tmp16;
    TNode<IntPtrT> tmp17;
    TNode<HeapObject> tmp18;
    TNode<IntPtrT> tmp19;
    TNode<IntPtrT> tmp20;
    TNode<IntPtrT> tmp21;
    TNode<IntPtrT> tmp22;
    ca_.Bind(&block6, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp23;
    USE(tmp23);
    tmp23 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp22}, TNode<IntPtrT>{tmp23});
    TNode<IntPtrT> tmp25;
    USE(tmp25);
    tmp25 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp19}, TNode<IntPtrT>{tmp24});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp26;
    USE(tmp26);
    TNode<IntPtrT> tmp27;
    USE(tmp27);
    std::tie(tmp26, tmp27) = UnsafeNewReference20UT5ATSmi10HeapObject_1434(state_, TNode<HeapObject>{tmp18}, TNode<IntPtrT>{tmp25}).Flatten();
    ca_.Goto(&block5, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp26, tmp27);
  }

  if (block7.is_used()) {
    TNode<FixedArray> tmp28;
    TNode<Smi> tmp29;
    TNode<FixedArray> tmp30;
    TNode<IntPtrT> tmp31;
    TNode<IntPtrT> tmp32;
    TNode<Smi> tmp33;
    TNode<Smi> tmp34;
    TNode<IntPtrT> tmp35;
    TNode<HeapObject> tmp36;
    TNode<IntPtrT> tmp37;
    TNode<IntPtrT> tmp38;
    TNode<IntPtrT> tmp39;
    TNode<IntPtrT> tmp40;
    ca_.Bind(&block7, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block4, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35);
  }

  if (block5.is_used()) {
    TNode<FixedArray> tmp41;
    TNode<Smi> tmp42;
    TNode<FixedArray> tmp43;
    TNode<IntPtrT> tmp44;
    TNode<IntPtrT> tmp45;
    TNode<Smi> tmp46;
    TNode<Smi> tmp47;
    TNode<IntPtrT> tmp48;
    TNode<HeapObject> tmp49;
    TNode<IntPtrT> tmp50;
    TNode<IntPtrT> tmp51;
    TNode<IntPtrT> tmp52;
    TNode<IntPtrT> tmp53;
    TNode<HeapObject> tmp54;
    TNode<IntPtrT> tmp55;
    ca_.Bind(&block5, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block3, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp54, tmp55);
  }

  if (block4.is_used()) {
    TNode<FixedArray> tmp56;
    TNode<Smi> tmp57;
    TNode<FixedArray> tmp58;
    TNode<IntPtrT> tmp59;
    TNode<IntPtrT> tmp60;
    TNode<Smi> tmp61;
    TNode<Smi> tmp62;
    TNode<IntPtrT> tmp63;
    ca_.Bind(&block4, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block3.is_used()) {
    TNode<FixedArray> tmp64;
    TNode<Smi> tmp65;
    TNode<FixedArray> tmp66;
    TNode<IntPtrT> tmp67;
    TNode<IntPtrT> tmp68;
    TNode<Smi> tmp69;
    TNode<Smi> tmp70;
    TNode<IntPtrT> tmp71;
    TNode<HeapObject> tmp72;
    TNode<IntPtrT> tmp73;
    ca_.Bind(&block3, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73);
    ca_.Goto(&block2, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp72, tmp73);
  }

  if (block2.is_used()) {
    TNode<FixedArray> tmp74;
    TNode<Smi> tmp75;
    TNode<FixedArray> tmp76;
    TNode<IntPtrT> tmp77;
    TNode<IntPtrT> tmp78;
    TNode<Smi> tmp79;
    TNode<Smi> tmp80;
    TNode<HeapObject> tmp81;
    TNode<IntPtrT> tmp82;
    ca_.Bind(&block2, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 51);
    TNode<Oddball> tmp83;
    USE(tmp83);
    tmp83 = TheHole_62(state_);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp81, tmp82}, tmp83);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 50);
    ca_.Goto(&block1, tmp74, tmp75);
  }

  if (block1.is_used()) {
    TNode<FixedArray> tmp84;
    TNode<Smi> tmp85;
    ca_.Bind(&block1, &tmp84, &tmp85);
    ca_.Goto(&block9, tmp84, tmp85);
  }

    TNode<FixedArray> tmp86;
    TNode<Smi> tmp87;
    ca_.Bind(&block9, &tmp86, &tmp87);
}

TNode<Object> UnsafeCast100UT8ATBigInt7ATFalse6ATNull5ATSmi9ATTheHole6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol_1463(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 2846);
    TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = (TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    TNode<Object> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 37);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    TNode<Context> tmp6;
    TNode<Object> tmp7;
    TNode<Object> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return TNode<Object>{tmp8};
}

}  // namespace internal
}  // namespace v8

