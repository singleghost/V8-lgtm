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

TNode<Object> LoadWithHoleCheck10FixedArray_19(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArrayBase> p_elements, TNode<Smi> p_index, compiler::CodeAssemblerLabel* label_IfHole) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, FixedArray, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, FixedArray, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, FixedArray, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, FixedArray, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, FixedArray, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, FixedArray, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, FixedArray, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, FixedArray, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_elements, p_index);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<FixedArrayBase> tmp1;
    TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 13);
    TNode<FixedArray> tmp3;
    USE(tmp3);
    tmp3 = UnsafeCast10FixedArray_1438(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 14);
    TNode<IntPtrT> tmp4 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp4);
    TNode<IntPtrT> tmp5 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp5);
    TNode<Smi>tmp6 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp3, tmp5});
    TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp6});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    TNode<IntPtrT> tmp8;
    USE(tmp8);
    tmp8 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp9;
    USE(tmp9);
    tmp9 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp8});
    TNode<UintPtrT> tmp10;
    USE(tmp10);
    tmp10 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp7});
    TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp9}, TNode<UintPtrT>{tmp10});
    ca_.Branch(tmp11, &block7, &block8, tmp0, tmp1, tmp2, tmp3, tmp3, tmp4, tmp7, tmp2, tmp2, tmp8, tmp3, tmp4, tmp7, tmp8, tmp8);
  }

  if (block7.is_used()) {
    TNode<Context> tmp12;
    TNode<FixedArrayBase> tmp13;
    TNode<Smi> tmp14;
    TNode<FixedArray> tmp15;
    TNode<FixedArray> tmp16;
    TNode<IntPtrT> tmp17;
    TNode<IntPtrT> tmp18;
    TNode<Smi> tmp19;
    TNode<Smi> tmp20;
    TNode<IntPtrT> tmp21;
    TNode<HeapObject> tmp22;
    TNode<IntPtrT> tmp23;
    TNode<IntPtrT> tmp24;
    TNode<IntPtrT> tmp25;
    TNode<IntPtrT> tmp26;
    ca_.Bind(&block7, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp27;
    USE(tmp27);
    tmp27 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp28;
    USE(tmp28);
    tmp28 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp26}, TNode<IntPtrT>{tmp27});
    TNode<IntPtrT> tmp29;
    USE(tmp29);
    tmp29 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp23}, TNode<IntPtrT>{tmp28});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp30;
    USE(tmp30);
    TNode<IntPtrT> tmp31;
    USE(tmp31);
    std::tie(tmp30, tmp31) = UnsafeNewReference20UT5ATSmi10HeapObject_1440(state_, TNode<HeapObject>{tmp22}, TNode<IntPtrT>{tmp29}).Flatten();
    ca_.Goto(&block6, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp30, tmp31);
  }

  if (block8.is_used()) {
    TNode<Context> tmp32;
    TNode<FixedArrayBase> tmp33;
    TNode<Smi> tmp34;
    TNode<FixedArray> tmp35;
    TNode<FixedArray> tmp36;
    TNode<IntPtrT> tmp37;
    TNode<IntPtrT> tmp38;
    TNode<Smi> tmp39;
    TNode<Smi> tmp40;
    TNode<IntPtrT> tmp41;
    TNode<HeapObject> tmp42;
    TNode<IntPtrT> tmp43;
    TNode<IntPtrT> tmp44;
    TNode<IntPtrT> tmp45;
    TNode<IntPtrT> tmp46;
    ca_.Bind(&block8, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block5, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41);
  }

  if (block6.is_used()) {
    TNode<Context> tmp47;
    TNode<FixedArrayBase> tmp48;
    TNode<Smi> tmp49;
    TNode<FixedArray> tmp50;
    TNode<FixedArray> tmp51;
    TNode<IntPtrT> tmp52;
    TNode<IntPtrT> tmp53;
    TNode<Smi> tmp54;
    TNode<Smi> tmp55;
    TNode<IntPtrT> tmp56;
    TNode<HeapObject> tmp57;
    TNode<IntPtrT> tmp58;
    TNode<IntPtrT> tmp59;
    TNode<IntPtrT> tmp60;
    TNode<IntPtrT> tmp61;
    TNode<HeapObject> tmp62;
    TNode<IntPtrT> tmp63;
    ca_.Bind(&block6, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block4, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp62, tmp63);
  }

  if (block5.is_used()) {
    TNode<Context> tmp64;
    TNode<FixedArrayBase> tmp65;
    TNode<Smi> tmp66;
    TNode<FixedArray> tmp67;
    TNode<FixedArray> tmp68;
    TNode<IntPtrT> tmp69;
    TNode<IntPtrT> tmp70;
    TNode<Smi> tmp71;
    TNode<Smi> tmp72;
    TNode<IntPtrT> tmp73;
    ca_.Bind(&block5, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block4.is_used()) {
    TNode<Context> tmp74;
    TNode<FixedArrayBase> tmp75;
    TNode<Smi> tmp76;
    TNode<FixedArray> tmp77;
    TNode<FixedArray> tmp78;
    TNode<IntPtrT> tmp79;
    TNode<IntPtrT> tmp80;
    TNode<Smi> tmp81;
    TNode<Smi> tmp82;
    TNode<IntPtrT> tmp83;
    TNode<HeapObject> tmp84;
    TNode<IntPtrT> tmp85;
    ca_.Bind(&block4, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85);
    ca_.Goto(&block3, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp84, tmp85);
  }

  if (block3.is_used()) {
    TNode<Context> tmp86;
    TNode<FixedArrayBase> tmp87;
    TNode<Smi> tmp88;
    TNode<FixedArray> tmp89;
    TNode<FixedArray> tmp90;
    TNode<IntPtrT> tmp91;
    TNode<IntPtrT> tmp92;
    TNode<Smi> tmp93;
    TNode<Smi> tmp94;
    TNode<HeapObject> tmp95;
    TNode<IntPtrT> tmp96;
    ca_.Bind(&block3, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 14);
    TNode<Object>tmp97 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp95, tmp96});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 15);
    TNode<Oddball> tmp98;
    USE(tmp98);
    tmp98 = TheHole_62(state_);
    TNode<BoolT> tmp99;
    USE(tmp99);
    tmp99 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp97}, TNode<HeapObject>{tmp98});
    ca_.Branch(tmp99, &block10, &block11, tmp86, tmp87, tmp88, tmp89, tmp97);
  }

  if (block10.is_used()) {
    TNode<Context> tmp100;
    TNode<FixedArrayBase> tmp101;
    TNode<Smi> tmp102;
    TNode<FixedArray> tmp103;
    TNode<Object> tmp104;
    ca_.Bind(&block10, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.Goto(&block1);
  }

  if (block11.is_used()) {
    TNode<Context> tmp105;
    TNode<FixedArrayBase> tmp106;
    TNode<Smi> tmp107;
    TNode<FixedArray> tmp108;
    TNode<Object> tmp109;
    ca_.Bind(&block11, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 16);
    TNode<Object> tmp110;
    USE(tmp110);
    tmp110 = UnsafeCast90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol_1441(state_, TNode<Context>{tmp105}, TNode<Object>{tmp109});
    ca_.Goto(&block2, tmp105, tmp106, tmp107, tmp110);
  }

  if (block2.is_used()) {
    TNode<Context> tmp111;
    TNode<FixedArrayBase> tmp112;
    TNode<Smi> tmp113;
    TNode<Object> tmp114;
    ca_.Bind(&block2, &tmp111, &tmp112, &tmp113, &tmp114);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 10);
    ca_.Goto(&block12, tmp111, tmp112, tmp113, tmp114);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_IfHole);
  }

    TNode<Context> tmp115;
    TNode<FixedArrayBase> tmp116;
    TNode<Smi> tmp117;
    TNode<Object> tmp118;
    ca_.Bind(&block12, &tmp115, &tmp116, &tmp117, &tmp118);
  return TNode<Object>{tmp118};
}

TNode<Object> LoadWithHoleCheck16FixedDoubleArray_20(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArrayBase> p_elements, TNode<Smi> p_index, compiler::CodeAssemblerLabel* label_IfHole) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, FixedDoubleArray, FixedDoubleArray, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, FixedDoubleArray, FixedDoubleArray, Smi, Float64T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_elements, p_index);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<FixedArrayBase> tmp1;
    TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 22);
    TNode<FixedDoubleArray> tmp3;
    USE(tmp3);
    tmp3 = UnsafeCast16FixedDoubleArray_1442(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 23);
    TNode<Float64T> tmp4;
    USE(tmp4);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp4 = CodeStubAssembler(state_).LoadDoubleWithHoleCheck(TNode<FixedDoubleArray>{tmp3}, TNode<Smi>{tmp2}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp3, tmp2, tmp4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp3, tmp2);
    }
  }

  if (block4.is_used()) {
    TNode<Context> tmp5;
    TNode<FixedArrayBase> tmp6;
    TNode<Smi> tmp7;
    TNode<FixedDoubleArray> tmp8;
    TNode<FixedDoubleArray> tmp9;
    TNode<Smi> tmp10;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp11;
    TNode<FixedArrayBase> tmp12;
    TNode<Smi> tmp13;
    TNode<FixedDoubleArray> tmp14;
    TNode<FixedDoubleArray> tmp15;
    TNode<Smi> tmp16;
    TNode<Float64T> tmp17;
    ca_.Bind(&block3, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 25);
    TNode<HeapNumber> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).AllocateHeapNumberWithValue(TNode<Float64T>{tmp17});
    ca_.Goto(&block2, tmp11, tmp12, tmp13, tmp18);
  }

  if (block2.is_used()) {
    TNode<Context> tmp19;
    TNode<FixedArrayBase> tmp20;
    TNode<Smi> tmp21;
    TNode<Object> tmp22;
    ca_.Bind(&block2, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 19);
    ca_.Goto(&block5, tmp19, tmp20, tmp21, tmp22);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_IfHole);
  }

    TNode<Context> tmp23;
    TNode<FixedArrayBase> tmp24;
    TNode<Smi> tmp25;
    TNode<Object> tmp26;
    ca_.Bind(&block5, &tmp23, &tmp24, &tmp25, &tmp26);
  return TNode<Object>{tmp26};
}

TNode<Number> GetFromIndex_21(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Number> p_length, TorqueStructArguments p_arguments) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Number, RawPtrT, RawPtrT, IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number, RawPtrT, RawPtrT, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number, RawPtrT, RawPtrT, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number, RawPtrT, RawPtrT, IntPtrT, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number, RawPtrT, RawPtrT, IntPtrT, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number, RawPtrT, RawPtrT, IntPtrT, Number, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number, RawPtrT, RawPtrT, IntPtrT, Number, Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number, RawPtrT, RawPtrT, IntPtrT, Number, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number, RawPtrT, RawPtrT, IntPtrT, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number, RawPtrT, RawPtrT, IntPtrT, Number> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_length, p_arguments.frame, p_arguments.base, p_arguments.length);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Number> tmp1;
    TNode<RawPtrT> tmp2;
    TNode<RawPtrT> tmp3;
    TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 65);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 2);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{tmp4}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block2.is_used()) {
    TNode<Context> tmp7;
    TNode<Number> tmp8;
    TNode<RawPtrT> tmp9;
    TNode<RawPtrT> tmp10;
    TNode<IntPtrT> tmp11;
    ca_.Bind(&block2, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 66);
    TNode<Number> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 1);
    TNode<Number> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).NumberSub(TNode<Number>{tmp8}, TNode<Number>{tmp12});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 65);
    ca_.Goto(&block5, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block3.is_used()) {
    TNode<Context> tmp14;
    TNode<Number> tmp15;
    TNode<RawPtrT> tmp16;
    TNode<RawPtrT> tmp17;
    TNode<IntPtrT> tmp18;
    ca_.Bind(&block3, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 67);
    TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp20;
    USE(tmp20);
    tmp20 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp16}, TNode<RawPtrT>{tmp17}, TNode<IntPtrT>{tmp18}}, TNode<IntPtrT>{tmp19});
    TNode<Number> tmp21;
    USE(tmp21);
    tmp21 = CodeStubAssembler(state_).ToInteger_Inline(TNode<Context>{tmp14}, TNode<Object>{tmp20}, CodeStubAssembler::ToIntegerTruncationMode::kTruncateMinusZero);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 65);
    ca_.Goto(&block4, tmp14, tmp15, tmp16, tmp17, tmp18, tmp21);
  }

  if (block5.is_used()) {
    TNode<Context> tmp22;
    TNode<Number> tmp23;
    TNode<RawPtrT> tmp24;
    TNode<RawPtrT> tmp25;
    TNode<IntPtrT> tmp26;
    TNode<Number> tmp27;
    ca_.Bind(&block5, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.Goto(&block4, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27);
  }

  if (block4.is_used()) {
    TNode<Context> tmp28;
    TNode<Number> tmp29;
    TNode<RawPtrT> tmp30;
    TNode<RawPtrT> tmp31;
    TNode<IntPtrT> tmp32;
    TNode<Number> tmp33;
    ca_.Bind(&block4, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 70);
    TNode<Smi> tmp34;
    USE(tmp34);
    tmp34 = CodeStubAssembler(state_).SmiConstant(0);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 71);
    TNode<Number> tmp35;
    USE(tmp35);
    tmp35 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 0);
    TNode<BoolT> tmp36;
    USE(tmp36);
    tmp36 = NumberIsGreaterThanOrEqual_78(state_, TNode<Number>{tmp33}, TNode<Number>{tmp35});
    ca_.Branch(tmp36, &block6, &block7, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34);
  }

  if (block6.is_used()) {
    TNode<Context> tmp37;
    TNode<Number> tmp38;
    TNode<RawPtrT> tmp39;
    TNode<RawPtrT> tmp40;
    TNode<IntPtrT> tmp41;
    TNode<Number> tmp42;
    TNode<Number> tmp43;
    ca_.Bind(&block6, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 74);
    TNode<Number> tmp44;
    USE(tmp44);
    tmp44 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 1);
    TNode<Number> tmp45;
    USE(tmp45);
    tmp45 = CodeStubAssembler(state_).NumberSub(TNode<Number>{tmp38}, TNode<Number>{tmp44});
    TNode<Number> tmp46;
    USE(tmp46);
    tmp46 = Min_80(state_, TNode<Number>{tmp42}, TNode<Number>{tmp45});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 71);
    ca_.Goto(&block8, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp46);
  }

  if (block7.is_used()) {
    TNode<Context> tmp47;
    TNode<Number> tmp48;
    TNode<RawPtrT> tmp49;
    TNode<RawPtrT> tmp50;
    TNode<IntPtrT> tmp51;
    TNode<Number> tmp52;
    TNode<Number> tmp53;
    ca_.Bind(&block7, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 77);
    TNode<Number> tmp54;
    USE(tmp54);
    tmp54 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{tmp48}, TNode<Number>{tmp52});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 71);
    ca_.Goto(&block8, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp54);
  }

  if (block8.is_used()) {
    TNode<Context> tmp55;
    TNode<Number> tmp56;
    TNode<RawPtrT> tmp57;
    TNode<RawPtrT> tmp58;
    TNode<IntPtrT> tmp59;
    TNode<Number> tmp60;
    TNode<Number> tmp61;
    ca_.Bind(&block8, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 79);
    ca_.Goto(&block1, tmp55, tmp56, tmp57, tmp58, tmp59, tmp61);
  }

  if (block1.is_used()) {
    TNode<Context> tmp62;
    TNode<Number> tmp63;
    TNode<RawPtrT> tmp64;
    TNode<RawPtrT> tmp65;
    TNode<IntPtrT> tmp66;
    TNode<Number> tmp67;
    ca_.Bind(&block1, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 61);
    ca_.Goto(&block9, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67);
  }

    TNode<Context> tmp68;
    TNode<Number> tmp69;
    TNode<RawPtrT> tmp70;
    TNode<RawPtrT> tmp71;
    TNode<IntPtrT> tmp72;
    TNode<Number> tmp73;
    ca_.Bind(&block9, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73);
  return TNode<Number>{tmp73};
}

TNode<Object> TryFastArrayLastIndexOf_22(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_receiver, TNode<Object> p_searchElement, TNode<Number> p_from, compiler::CodeAssemblerLabel* label_Slow) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, JSReceiver> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, JSReceiver, JSArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, JSArray, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, JSArray, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, JSArray, Smi, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, JSArray, Smi, Number, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, JSArray, Smi, Smi, Int32T> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, JSArray, Smi, Smi, Int32T> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_receiver, p_searchElement, p_from);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSReceiver> tmp1;
    TNode<Object> tmp2;
    TNode<Number> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 86);
    TNode<JSArray> tmp4;
    USE(tmp4);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp4 = Cast13ATFastJSArray_137(state_, TNode<Context>{tmp0}, TNode<HeapObject>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp1, tmp4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp1);
    }
  }

  if (block4.is_used()) {
    TNode<Context> tmp5;
    TNode<JSReceiver> tmp6;
    TNode<Object> tmp7;
    TNode<Number> tmp8;
    TNode<JSReceiver> tmp9;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp10;
    TNode<JSReceiver> tmp11;
    TNode<Object> tmp12;
    TNode<Number> tmp13;
    TNode<JSReceiver> tmp14;
    TNode<JSArray> tmp15;
    ca_.Bind(&block3, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 87);
    TNode<Smi> tmp16;
    USE(tmp16);
    tmp16 = CodeStubAssembler(state_).LoadFastJSArrayLength(TNode<JSArray>{tmp15});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 88);
    TNode<Smi> tmp17;
    USE(tmp17);
    tmp17 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<BoolT> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp16}, TNode<Smi>{tmp17});
    ca_.Branch(tmp18, &block5, &block6, tmp10, tmp11, tmp12, tmp13, tmp15, tmp16);
  }

  if (block5.is_used()) {
    TNode<Context> tmp19;
    TNode<JSReceiver> tmp20;
    TNode<Object> tmp21;
    TNode<Number> tmp22;
    TNode<JSArray> tmp23;
    TNode<Smi> tmp24;
    ca_.Bind(&block5, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    TNode<Smi> tmp25;
    USE(tmp25);
    tmp25 = CodeStubAssembler(state_).SmiConstant(-1);
    ca_.Goto(&block2, tmp19, tmp20, tmp21, tmp22, tmp25);
  }

  if (block6.is_used()) {
    TNode<Context> tmp26;
    TNode<JSReceiver> tmp27;
    TNode<Object> tmp28;
    TNode<Number> tmp29;
    TNode<JSArray> tmp30;
    TNode<Smi> tmp31;
    ca_.Bind(&block6, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 90);
    TNode<Smi> tmp32;
    USE(tmp32);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp32 = Cast5ATSmi_83(state_, TNode<Object>{tmp29}, &label0);
    ca_.Goto(&block7, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp29, tmp32);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp29);
    }
  }

  if (block8.is_used()) {
    TNode<Context> tmp33;
    TNode<JSReceiver> tmp34;
    TNode<Object> tmp35;
    TNode<Number> tmp36;
    TNode<JSArray> tmp37;
    TNode<Smi> tmp38;
    TNode<Number> tmp39;
    ca_.Bind(&block8, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    ca_.Goto(&block1);
  }

  if (block7.is_used()) {
    TNode<Context> tmp40;
    TNode<JSReceiver> tmp41;
    TNode<Object> tmp42;
    TNode<Number> tmp43;
    TNode<JSArray> tmp44;
    TNode<Smi> tmp45;
    TNode<Number> tmp46;
    TNode<Smi> tmp47;
    ca_.Bind(&block7, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 91);
    TNode<IntPtrT> tmp48 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp48);
    TNode<Map>tmp49 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp44, tmp48});
    TNode<Int32T> tmp50;
    USE(tmp50);
    tmp50 = CodeStubAssembler(state_).LoadMapElementsKind(TNode<Map>{tmp49});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 92);
    TNode<BoolT> tmp51;
    USE(tmp51);
    tmp51 = CodeStubAssembler(state_).IsFastSmiOrTaggedElementsKind(TNode<Int32T>{tmp50});
    ca_.Branch(tmp51, &block9, &block10, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp47, tmp50);
  }

  if (block9.is_used()) {
    TNode<Context> tmp52;
    TNode<JSReceiver> tmp53;
    TNode<Object> tmp54;
    TNode<Number> tmp55;
    TNode<JSArray> tmp56;
    TNode<Smi> tmp57;
    TNode<Smi> tmp58;
    TNode<Int32T> tmp59;
    ca_.Bind(&block9, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 94);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 93);
    TNode<Smi> tmp60;
    USE(tmp60);
    tmp60 = FastArrayLastIndexOf10FixedArray_1452(state_, TNode<Context>{tmp52}, TNode<JSArray>{tmp56}, TNode<Smi>{tmp58}, TNode<Object>{tmp54});
    ca_.Goto(&block2, tmp52, tmp53, tmp54, tmp55, tmp60);
  }

  if (block10.is_used()) {
    TNode<Context> tmp61;
    TNode<JSReceiver> tmp62;
    TNode<Object> tmp63;
    TNode<Number> tmp64;
    TNode<JSArray> tmp65;
    TNode<Smi> tmp66;
    TNode<Smi> tmp67;
    TNode<Int32T> tmp68;
    ca_.Bind(&block10, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 98);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 97);
    TNode<Smi> tmp69;
    USE(tmp69);
    tmp69 = FastArrayLastIndexOf16FixedDoubleArray_1453(state_, TNode<Context>{tmp61}, TNode<JSArray>{tmp65}, TNode<Smi>{tmp67}, TNode<Object>{tmp63});
    ca_.Goto(&block2, tmp61, tmp62, tmp63, tmp64, tmp69);
  }

  if (block2.is_used()) {
    TNode<Context> tmp70;
    TNode<JSReceiver> tmp71;
    TNode<Object> tmp72;
    TNode<Number> tmp73;
    TNode<Object> tmp74;
    ca_.Bind(&block2, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 82);
    ca_.Goto(&block11, tmp70, tmp71, tmp72, tmp73, tmp74);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Slow);
  }

    TNode<Context> tmp75;
    TNode<JSReceiver> tmp76;
    TNode<Object> tmp77;
    TNode<Number> tmp78;
    TNode<Object> tmp79;
    ca_.Bind(&block11, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79);
  return TNode<Object>{tmp79};
}

TNode<Object> GenericArrayLastIndexOf_23(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_object, TNode<Object> p_searchElement, TNode<Number> p_from) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, Number, Oddball> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, Number, Oddball, Object, Oddball> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, Number, Oddball, Object, Oddball> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, Number, Oddball> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_object, p_searchElement, p_from);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSReceiver> tmp1;
    TNode<Object> tmp2;
    TNode<Number> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 104);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 107);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp3);
  }

  if (block4.is_used()) {
    TNode<Context> tmp4;
    TNode<JSReceiver> tmp5;
    TNode<Object> tmp6;
    TNode<Number> tmp7;
    TNode<Number> tmp8;
    ca_.Bind(&block4, &tmp4, &tmp5, &tmp6, &tmp7, &tmp8);
    TNode<Number> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 0);
    TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = NumberIsGreaterThanOrEqual_78(state_, TNode<Number>{tmp8}, TNode<Number>{tmp9});
    ca_.Branch(tmp10, &block2, &block3, tmp4, tmp5, tmp6, tmp7, tmp8);
  }

  if (block2.is_used()) {
    TNode<Context> tmp11;
    TNode<JSReceiver> tmp12;
    TNode<Object> tmp13;
    TNode<Number> tmp14;
    TNode<Number> tmp15;
    ca_.Bind(&block2, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 109);
    TNode<Oddball> tmp16;
    tmp16 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kHasProperty, tmp11, tmp12, tmp15));
    USE(tmp16);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 112);
    TNode<Oddball> tmp17;
    USE(tmp17);
    tmp17 = True_65(state_);
    TNode<BoolT> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp16}, TNode<HeapObject>{tmp17});
    ca_.Branch(tmp18, &block5, &block6, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16);
  }

  if (block5.is_used()) {
    TNode<Context> tmp19;
    TNode<JSReceiver> tmp20;
    TNode<Object> tmp21;
    TNode<Number> tmp22;
    TNode<Number> tmp23;
    TNode<Oddball> tmp24;
    ca_.Bind(&block5, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 114);
    TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = CodeStubAssembler(state_).GetProperty(TNode<Context>{tmp19}, TNode<Object>{tmp20}, TNode<Object>{tmp23});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 118);
    TNode<Oddball> tmp26;
    USE(tmp26);
    tmp26 = CodeStubAssembler(state_).StrictEqual(TNode<Object>{tmp21}, TNode<Object>{tmp25});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 121);
    TNode<Oddball> tmp27;
    USE(tmp27);
    tmp27 = True_65(state_);
    TNode<BoolT> tmp28;
    USE(tmp28);
    tmp28 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp26}, TNode<HeapObject>{tmp27});
    ca_.Branch(tmp28, &block7, &block8, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26);
  }

  if (block7.is_used()) {
    TNode<Context> tmp29;
    TNode<JSReceiver> tmp30;
    TNode<Object> tmp31;
    TNode<Number> tmp32;
    TNode<Number> tmp33;
    TNode<Oddball> tmp34;
    TNode<Object> tmp35;
    TNode<Oddball> tmp36;
    ca_.Bind(&block7, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.Goto(&block1, tmp29, tmp30, tmp31, tmp32, tmp33);
  }

  if (block8.is_used()) {
    TNode<Context> tmp37;
    TNode<JSReceiver> tmp38;
    TNode<Object> tmp39;
    TNode<Number> tmp40;
    TNode<Number> tmp41;
    TNode<Oddball> tmp42;
    TNode<Object> tmp43;
    TNode<Oddball> tmp44;
    ca_.Bind(&block8, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 112);
    ca_.Goto(&block6, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42);
  }

  if (block6.is_used()) {
    TNode<Context> tmp45;
    TNode<JSReceiver> tmp46;
    TNode<Object> tmp47;
    TNode<Number> tmp48;
    TNode<Number> tmp49;
    TNode<Oddball> tmp50;
    ca_.Bind(&block6, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 125);
    TNode<Number> tmp51;
    USE(tmp51);
    tmp51 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 1);
    TNode<Number> tmp52;
    USE(tmp52);
    tmp52 = CodeStubAssembler(state_).NumberSub(TNode<Number>{tmp49}, TNode<Number>{tmp51});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 107);
    ca_.Goto(&block4, tmp45, tmp46, tmp47, tmp48, tmp52);
  }

  if (block3.is_used()) {
    TNode<Context> tmp53;
    TNode<JSReceiver> tmp54;
    TNode<Object> tmp55;
    TNode<Number> tmp56;
    TNode<Number> tmp57;
    ca_.Bind(&block3, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 129);
    TNode<Smi> tmp58;
    USE(tmp58);
    tmp58 = CodeStubAssembler(state_).SmiConstant(-1);
    ca_.Goto(&block1, tmp53, tmp54, tmp55, tmp56, tmp58);
  }

  if (block1.is_used()) {
    TNode<Context> tmp59;
    TNode<JSReceiver> tmp60;
    TNode<Object> tmp61;
    TNode<Number> tmp62;
    TNode<Object> tmp63;
    ca_.Bind(&block1, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 101);
    ca_.Goto(&block9, tmp59, tmp60, tmp61, tmp62, tmp63);
  }

    TNode<Context> tmp64;
    TNode<JSReceiver> tmp65;
    TNode<Object> tmp66;
    TNode<Number> tmp67;
    TNode<Object> tmp68;
    ca_.Bind(&block9, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68);
  return TNode<Object>{tmp68};
}

TF_BUILTIN(ArrayPrototypeLastIndexOf, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Number, Object, Context, JSReceiver, Object, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Number, Object, Context, JSReceiver, Object, Number, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Number, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 136);
    TNode<JSReceiver> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).ToObject_Inline(TNode<Context>{tmp3}, TNode<Object>{tmp4});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 139);
    TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = GetLengthProperty_246(state_, TNode<Context>{tmp3}, TNode<Object>{tmp5});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 142);
    TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).SmiConstant(0);
    TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = IsNumberEqual_73(state_, TNode<Number>{tmp6}, TNode<Number>{tmp7});
    ca_.Branch(tmp8, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp9;
    TNode<RawPtrT> tmp10;
    TNode<IntPtrT> tmp11;
    TNode<Context> tmp12;
    TNode<Object> tmp13;
    TNode<JSReceiver> tmp14;
    TNode<Number> tmp15;
    ca_.Bind(&block1, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    TNode<Smi> tmp16;
    USE(tmp16);
    tmp16 = CodeStubAssembler(state_).SmiConstant(-1);
    arguments.PopAndReturn(tmp16);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp17;
    TNode<RawPtrT> tmp18;
    TNode<IntPtrT> tmp19;
    TNode<Context> tmp20;
    TNode<Object> tmp21;
    TNode<JSReceiver> tmp22;
    TNode<Number> tmp23;
    ca_.Bind(&block2, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 145);
    TNode<Number> tmp24;
    USE(tmp24);
    tmp24 = GetFromIndex_21(state_, TNode<Context>{tmp20}, TNode<Number>{tmp23}, TorqueStructArguments{TNode<RawPtrT>{tmp17}, TNode<RawPtrT>{tmp18}, TNode<IntPtrT>{tmp19}});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 147);
    TNode<IntPtrT> tmp25;
    USE(tmp25);
    tmp25 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp26;
    USE(tmp26);
    tmp26 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp17}, TNode<RawPtrT>{tmp18}, TNode<IntPtrT>{tmp19}}, TNode<IntPtrT>{tmp25});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 150);
    TNode<Object> tmp27;
    USE(tmp27);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp27 = TryFastArrayLastIndexOf_22(state_, TNode<Context>{tmp20}, TNode<JSReceiver>{tmp22}, TNode<Object>{tmp26}, TNode<Number>{tmp24}, &label0);
    ca_.Goto(&block5, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp26, tmp20, tmp22, tmp26, tmp24, tmp27);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp26, tmp20, tmp22, tmp26, tmp24);
    }
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp28;
    TNode<RawPtrT> tmp29;
    TNode<IntPtrT> tmp30;
    TNode<Context> tmp31;
    TNode<Object> tmp32;
    TNode<JSReceiver> tmp33;
    TNode<Number> tmp34;
    TNode<Number> tmp35;
    TNode<Object> tmp36;
    TNode<Context> tmp37;
    TNode<JSReceiver> tmp38;
    TNode<Object> tmp39;
    TNode<Number> tmp40;
    ca_.Bind(&block6, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.Goto(&block4, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36);
  }

  if (block5.is_used()) {
    TNode<RawPtrT> tmp41;
    TNode<RawPtrT> tmp42;
    TNode<IntPtrT> tmp43;
    TNode<Context> tmp44;
    TNode<Object> tmp45;
    TNode<JSReceiver> tmp46;
    TNode<Number> tmp47;
    TNode<Number> tmp48;
    TNode<Object> tmp49;
    TNode<Context> tmp50;
    TNode<JSReceiver> tmp51;
    TNode<Object> tmp52;
    TNode<Number> tmp53;
    TNode<Object> tmp54;
    ca_.Bind(&block5, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54);
    arguments.PopAndReturn(tmp54);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp55;
    TNode<RawPtrT> tmp56;
    TNode<IntPtrT> tmp57;
    TNode<Context> tmp58;
    TNode<Object> tmp59;
    TNode<JSReceiver> tmp60;
    TNode<Number> tmp61;
    TNode<Number> tmp62;
    TNode<Object> tmp63;
    ca_.Bind(&block4, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 154);
    TNode<Object> tmp64;
    USE(tmp64);
    tmp64 = GenericArrayLastIndexOf_23(state_, TNode<Context>{tmp58}, TNode<JSReceiver>{tmp60}, TNode<Object>{tmp63}, TNode<Number>{tmp62});
    arguments.PopAndReturn(tmp64);
  }
}

TNode<Smi> FastArrayLastIndexOf10FixedArray_1452(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSArray> p_array, TNode<Smi> p_from, TNode<Object> p_searchElement) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi, FixedArrayBase, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi, FixedArrayBase, Smi, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi, Object, Oddball> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi, Object, Oddball> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_array, p_from, p_searchElement);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSArray> tmp1;
    TNode<Smi> tmp2;
    TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 30);
    TNode<IntPtrT> tmp4 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp4);
    TNode<FixedArrayBase>tmp5 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp1, tmp4});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 31);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 37);
    TNode<IntPtrT> tmp6 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp6);
    TNode<Smi>tmp7 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp5, tmp6});
    TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(TNode<Smi>{tmp2}, TNode<Smi>{tmp7});
    ca_.Branch(tmp8, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp5, tmp2);
  }

  if (block2.is_used()) {
    TNode<Context> tmp9;
    TNode<JSArray> tmp10;
    TNode<Smi> tmp11;
    TNode<Object> tmp12;
    TNode<FixedArrayBase> tmp13;
    TNode<Smi> tmp14;
    ca_.Bind(&block2, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 38);
    TNode<IntPtrT> tmp15 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp15);
    TNode<Smi>tmp16 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp13, tmp15});
    TNode<Smi> tmp17;
    USE(tmp17);
    tmp17 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp16}, TNode<Smi>{tmp17});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 37);
    ca_.Goto(&block3, tmp9, tmp10, tmp11, tmp12, tmp13, tmp18);
  }

  if (block3.is_used()) {
    TNode<Context> tmp19;
    TNode<JSArray> tmp20;
    TNode<Smi> tmp21;
    TNode<Object> tmp22;
    TNode<FixedArrayBase> tmp23;
    TNode<Smi> tmp24;
    ca_.Bind(&block3, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 41);
    ca_.Goto(&block6, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24);
  }

  if (block6.is_used()) {
    TNode<Context> tmp25;
    TNode<JSArray> tmp26;
    TNode<Smi> tmp27;
    TNode<Object> tmp28;
    TNode<FixedArrayBase> tmp29;
    TNode<Smi> tmp30;
    ca_.Bind(&block6, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    TNode<Smi> tmp31;
    USE(tmp31);
    tmp31 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<BoolT> tmp32;
    USE(tmp32);
    tmp32 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(TNode<Smi>{tmp30}, TNode<Smi>{tmp31});
    ca_.Branch(tmp32, &block4, &block5, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30);
  }

  if (block4.is_used()) {
    TNode<Context> tmp33;
    TNode<JSArray> tmp34;
    TNode<Smi> tmp35;
    TNode<Object> tmp36;
    TNode<FixedArrayBase> tmp37;
    TNode<Smi> tmp38;
    ca_.Bind(&block4, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 43);
    TNode<Object> tmp39;
    USE(tmp39);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp39 = LoadWithHoleCheck10FixedArray_19(state_, TNode<Context>{tmp33}, TNode<FixedArrayBase>{tmp37}, TNode<Smi>{tmp38}, &label0);
    ca_.Goto(&block9, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp37, tmp38, tmp39);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp37, tmp38);
    }
  }

  if (block10.is_used()) {
    TNode<Context> tmp40;
    TNode<JSArray> tmp41;
    TNode<Smi> tmp42;
    TNode<Object> tmp43;
    TNode<FixedArrayBase> tmp44;
    TNode<Smi> tmp45;
    TNode<FixedArrayBase> tmp46;
    TNode<Smi> tmp47;
    ca_.Bind(&block10, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    ca_.Goto(&block8, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45);
  }

  if (block9.is_used()) {
    TNode<Context> tmp48;
    TNode<JSArray> tmp49;
    TNode<Smi> tmp50;
    TNode<Object> tmp51;
    TNode<FixedArrayBase> tmp52;
    TNode<Smi> tmp53;
    TNode<FixedArrayBase> tmp54;
    TNode<Smi> tmp55;
    TNode<Object> tmp56;
    ca_.Bind(&block9, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 46);
    TNode<Oddball> tmp57;
    USE(tmp57);
    tmp57 = CodeStubAssembler(state_).StrictEqual(TNode<Object>{tmp51}, TNode<Object>{tmp56});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 47);
    TNode<Oddball> tmp58;
    USE(tmp58);
    tmp58 = True_65(state_);
    TNode<BoolT> tmp59;
    USE(tmp59);
    tmp59 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp57}, TNode<HeapObject>{tmp58});
    ca_.Branch(tmp59, &block11, &block12, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp56, tmp57);
  }

  if (block11.is_used()) {
    TNode<Context> tmp60;
    TNode<JSArray> tmp61;
    TNode<Smi> tmp62;
    TNode<Object> tmp63;
    TNode<FixedArrayBase> tmp64;
    TNode<Smi> tmp65;
    TNode<Object> tmp66;
    TNode<Oddball> tmp67;
    ca_.Bind(&block11, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 49);
    ca_.Goto(&block1, tmp60, tmp61, tmp62, tmp63, tmp65);
  }

  if (block12.is_used()) {
    TNode<Context> tmp68;
    TNode<JSArray> tmp69;
    TNode<Smi> tmp70;
    TNode<Object> tmp71;
    TNode<FixedArrayBase> tmp72;
    TNode<Smi> tmp73;
    TNode<Object> tmp74;
    TNode<Oddball> tmp75;
    ca_.Bind(&block12, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 42);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 52);
    ca_.Goto(&block7, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73);
  }

  if (block8.is_used()) {
    TNode<Context> tmp76;
    TNode<JSArray> tmp77;
    TNode<Smi> tmp78;
    TNode<Object> tmp79;
    TNode<FixedArrayBase> tmp80;
    TNode<Smi> tmp81;
    ca_.Bind(&block8, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 42);
    ca_.Goto(&block7, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81);
  }

  if (block7.is_used()) {
    TNode<Context> tmp82;
    TNode<JSArray> tmp83;
    TNode<Smi> tmp84;
    TNode<Object> tmp85;
    TNode<FixedArrayBase> tmp86;
    TNode<Smi> tmp87;
    ca_.Bind(&block7, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 54);
    TNode<Smi> tmp88;
    USE(tmp88);
    tmp88 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp89;
    USE(tmp89);
    tmp89 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp87}, TNode<Smi>{tmp88});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 41);
    ca_.Goto(&block6, tmp82, tmp83, tmp84, tmp85, tmp86, tmp89);
  }

  if (block5.is_used()) {
    TNode<Context> tmp90;
    TNode<JSArray> tmp91;
    TNode<Smi> tmp92;
    TNode<Object> tmp93;
    TNode<FixedArrayBase> tmp94;
    TNode<Smi> tmp95;
    ca_.Bind(&block5, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 58);
    TNode<Smi> tmp96;
    USE(tmp96);
    tmp96 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, -1);
    ca_.Goto(&block1, tmp90, tmp91, tmp92, tmp93, tmp96);
  }

  if (block1.is_used()) {
    TNode<Context> tmp97;
    TNode<JSArray> tmp98;
    TNode<Smi> tmp99;
    TNode<Object> tmp100;
    TNode<Smi> tmp101;
    ca_.Bind(&block1, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 93);
    ca_.Goto(&block13, tmp97, tmp98, tmp99, tmp100, tmp101);
  }

    TNode<Context> tmp102;
    TNode<JSArray> tmp103;
    TNode<Smi> tmp104;
    TNode<Object> tmp105;
    TNode<Smi> tmp106;
    ca_.Bind(&block13, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106);
  return TNode<Smi>{tmp106};
}

TNode<Smi> FastArrayLastIndexOf16FixedDoubleArray_1453(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSArray> p_array, TNode<Smi> p_from, TNode<Object> p_searchElement) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi, FixedArrayBase, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi, FixedArrayBase, Smi, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi, Object, Oddball> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi, Object, Oddball> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_array, p_from, p_searchElement);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSArray> tmp1;
    TNode<Smi> tmp2;
    TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 30);
    TNode<IntPtrT> tmp4 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp4);
    TNode<FixedArrayBase>tmp5 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp1, tmp4});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 31);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 37);
    TNode<IntPtrT> tmp6 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp6);
    TNode<Smi>tmp7 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp5, tmp6});
    TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(TNode<Smi>{tmp2}, TNode<Smi>{tmp7});
    ca_.Branch(tmp8, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp5, tmp2);
  }

  if (block2.is_used()) {
    TNode<Context> tmp9;
    TNode<JSArray> tmp10;
    TNode<Smi> tmp11;
    TNode<Object> tmp12;
    TNode<FixedArrayBase> tmp13;
    TNode<Smi> tmp14;
    ca_.Bind(&block2, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 38);
    TNode<IntPtrT> tmp15 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp15);
    TNode<Smi>tmp16 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp13, tmp15});
    TNode<Smi> tmp17;
    USE(tmp17);
    tmp17 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp16}, TNode<Smi>{tmp17});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 37);
    ca_.Goto(&block3, tmp9, tmp10, tmp11, tmp12, tmp13, tmp18);
  }

  if (block3.is_used()) {
    TNode<Context> tmp19;
    TNode<JSArray> tmp20;
    TNode<Smi> tmp21;
    TNode<Object> tmp22;
    TNode<FixedArrayBase> tmp23;
    TNode<Smi> tmp24;
    ca_.Bind(&block3, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 41);
    ca_.Goto(&block6, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24);
  }

  if (block6.is_used()) {
    TNode<Context> tmp25;
    TNode<JSArray> tmp26;
    TNode<Smi> tmp27;
    TNode<Object> tmp28;
    TNode<FixedArrayBase> tmp29;
    TNode<Smi> tmp30;
    ca_.Bind(&block6, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    TNode<Smi> tmp31;
    USE(tmp31);
    tmp31 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<BoolT> tmp32;
    USE(tmp32);
    tmp32 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(TNode<Smi>{tmp30}, TNode<Smi>{tmp31});
    ca_.Branch(tmp32, &block4, &block5, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30);
  }

  if (block4.is_used()) {
    TNode<Context> tmp33;
    TNode<JSArray> tmp34;
    TNode<Smi> tmp35;
    TNode<Object> tmp36;
    TNode<FixedArrayBase> tmp37;
    TNode<Smi> tmp38;
    ca_.Bind(&block4, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 43);
    TNode<Object> tmp39;
    USE(tmp39);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp39 = LoadWithHoleCheck16FixedDoubleArray_20(state_, TNode<Context>{tmp33}, TNode<FixedArrayBase>{tmp37}, TNode<Smi>{tmp38}, &label0);
    ca_.Goto(&block9, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp37, tmp38, tmp39);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp37, tmp38);
    }
  }

  if (block10.is_used()) {
    TNode<Context> tmp40;
    TNode<JSArray> tmp41;
    TNode<Smi> tmp42;
    TNode<Object> tmp43;
    TNode<FixedArrayBase> tmp44;
    TNode<Smi> tmp45;
    TNode<FixedArrayBase> tmp46;
    TNode<Smi> tmp47;
    ca_.Bind(&block10, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    ca_.Goto(&block8, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45);
  }

  if (block9.is_used()) {
    TNode<Context> tmp48;
    TNode<JSArray> tmp49;
    TNode<Smi> tmp50;
    TNode<Object> tmp51;
    TNode<FixedArrayBase> tmp52;
    TNode<Smi> tmp53;
    TNode<FixedArrayBase> tmp54;
    TNode<Smi> tmp55;
    TNode<Object> tmp56;
    ca_.Bind(&block9, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 46);
    TNode<Oddball> tmp57;
    USE(tmp57);
    tmp57 = CodeStubAssembler(state_).StrictEqual(TNode<Object>{tmp51}, TNode<Object>{tmp56});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 47);
    TNode<Oddball> tmp58;
    USE(tmp58);
    tmp58 = True_65(state_);
    TNode<BoolT> tmp59;
    USE(tmp59);
    tmp59 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp57}, TNode<HeapObject>{tmp58});
    ca_.Branch(tmp59, &block11, &block12, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp56, tmp57);
  }

  if (block11.is_used()) {
    TNode<Context> tmp60;
    TNode<JSArray> tmp61;
    TNode<Smi> tmp62;
    TNode<Object> tmp63;
    TNode<FixedArrayBase> tmp64;
    TNode<Smi> tmp65;
    TNode<Object> tmp66;
    TNode<Oddball> tmp67;
    ca_.Bind(&block11, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 49);
    ca_.Goto(&block1, tmp60, tmp61, tmp62, tmp63, tmp65);
  }

  if (block12.is_used()) {
    TNode<Context> tmp68;
    TNode<JSArray> tmp69;
    TNode<Smi> tmp70;
    TNode<Object> tmp71;
    TNode<FixedArrayBase> tmp72;
    TNode<Smi> tmp73;
    TNode<Object> tmp74;
    TNode<Oddball> tmp75;
    ca_.Bind(&block12, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 42);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 52);
    ca_.Goto(&block7, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73);
  }

  if (block8.is_used()) {
    TNode<Context> tmp76;
    TNode<JSArray> tmp77;
    TNode<Smi> tmp78;
    TNode<Object> tmp79;
    TNode<FixedArrayBase> tmp80;
    TNode<Smi> tmp81;
    ca_.Bind(&block8, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 42);
    ca_.Goto(&block7, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81);
  }

  if (block7.is_used()) {
    TNode<Context> tmp82;
    TNode<JSArray> tmp83;
    TNode<Smi> tmp84;
    TNode<Object> tmp85;
    TNode<FixedArrayBase> tmp86;
    TNode<Smi> tmp87;
    ca_.Bind(&block7, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 54);
    TNode<Smi> tmp88;
    USE(tmp88);
    tmp88 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp89;
    USE(tmp89);
    tmp89 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp87}, TNode<Smi>{tmp88});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 41);
    ca_.Goto(&block6, tmp82, tmp83, tmp84, tmp85, tmp86, tmp89);
  }

  if (block5.is_used()) {
    TNode<Context> tmp90;
    TNode<JSArray> tmp91;
    TNode<Smi> tmp92;
    TNode<Object> tmp93;
    TNode<FixedArrayBase> tmp94;
    TNode<Smi> tmp95;
    ca_.Bind(&block5, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 58);
    TNode<Smi> tmp96;
    USE(tmp96);
    tmp96 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, -1);
    ca_.Goto(&block1, tmp90, tmp91, tmp92, tmp93, tmp96);
  }

  if (block1.is_used()) {
    TNode<Context> tmp97;
    TNode<JSArray> tmp98;
    TNode<Smi> tmp99;
    TNode<Object> tmp100;
    TNode<Smi> tmp101;
    ca_.Bind(&block1, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 97);
    ca_.Goto(&block13, tmp97, tmp98, tmp99, tmp100, tmp101);
  }

    TNode<Context> tmp102;
    TNode<JSArray> tmp103;
    TNode<Smi> tmp104;
    TNode<Object> tmp105;
    TNode<Smi> tmp106;
    ca_.Bind(&block13, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106);
  return TNode<Smi>{tmp106};
}

}  // namespace internal
}  // namespace v8

