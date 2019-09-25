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

const char* kBuiltinName_371(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
return "%TypedArray%.prototype.slice";
}

void FastCopy_372(compiler::CodeAssemblerState* state_, TNode<JSTypedArray> p_src, TNode<JSTypedArray> p_dest, TNode<IntPtrT> p_k, TNode<Smi> p_count, compiler::CodeAssemblerLabel* label_IfSlow) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi, Int32T, UintPtrT, Int32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi, Int32T, UintPtrT, Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi, Int32T, UintPtrT, Int32T> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi, Int32T, UintPtrT, Int32T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi, Int32T, UintPtrT, Int32T, UintPtrT, Int32T, Smi, Smi, UintPtrT, UintPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi, Int32T, UintPtrT, Int32T, UintPtrT, Int32T, Smi, Smi, UintPtrT, UintPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi, Int32T, UintPtrT, Int32T, UintPtrT, Int32T, Smi, Smi, UintPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi, Int32T, UintPtrT, Int32T> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi, Int32T, UintPtrT, Int32T, UintPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi, Int32T, UintPtrT, Int32T, UintPtrT, UintPtrT, Int32T, Smi, Smi, UintPtrT, UintPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi, Int32T, UintPtrT, Int32T, UintPtrT, UintPtrT, Int32T, Smi, Smi, UintPtrT, UintPtrT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi, Int32T, UintPtrT, Int32T, UintPtrT, UintPtrT, Int32T, Smi, Smi, UintPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi, Int32T, UintPtrT, Int32T, UintPtrT> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi, Int32T, UintPtrT, Int32T, UintPtrT, UintPtrT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_src, p_dest, p_k, p_count);

  if (block0.is_used()) {
    TNode<JSTypedArray> tmp0;
    TNode<JSTypedArray> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Smi> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 16);
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = IsForceSlowPath_241(state_);
    ca_.Branch(tmp4, &block3, &block4, tmp0, tmp1, tmp2, tmp3);
  }

  if (block3.is_used()) {
    TNode<JSTypedArray> tmp5;
    TNode<JSTypedArray> tmp6;
    TNode<IntPtrT> tmp7;
    TNode<Smi> tmp8;
    ca_.Bind(&block3, &tmp5, &tmp6, &tmp7, &tmp8);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    TNode<JSTypedArray> tmp9;
    TNode<JSTypedArray> tmp10;
    TNode<IntPtrT> tmp11;
    TNode<Smi> tmp12;
    ca_.Bind(&block4, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 18);
    TNode<Int32T> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).LoadElementsKind(TNode<JSTypedArray>{tmp9});
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 19);
    TNode<UintPtrT> tmp14;
    USE(tmp14);
    TNode<Int32T> tmp15;
    USE(tmp15);
    std::tie(tmp14, tmp15) = TypedArrayBuiltinsAssembler(state_).GetTypedArrayElementsInfo(TNode<JSTypedArray>{tmp10}).Flatten();
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 25);
    TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = ElementsKindNotEqual_72(state_, TNode<Int32T>{tmp13}, TNode<Int32T>{tmp15});
    ca_.Branch(tmp16, &block5, &block6, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15);
  }

  if (block5.is_used()) {
    TNode<JSTypedArray> tmp17;
    TNode<JSTypedArray> tmp18;
    TNode<IntPtrT> tmp19;
    TNode<Smi> tmp20;
    TNode<Int32T> tmp21;
    TNode<UintPtrT> tmp22;
    TNode<Int32T> tmp23;
    ca_.Bind(&block5, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.Goto(&block1);
  }

  if (block6.is_used()) {
    TNode<JSTypedArray> tmp24;
    TNode<JSTypedArray> tmp25;
    TNode<IntPtrT> tmp26;
    TNode<Smi> tmp27;
    TNode<Int32T> tmp28;
    TNode<UintPtrT> tmp29;
    TNode<Int32T> tmp30;
    ca_.Bind(&block6, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 26);
    TNode<IntPtrT> tmp31 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp31);
    TNode<JSArrayBuffer>tmp32 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp25, tmp31});
    TNode<IntPtrT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).BitcastTaggedToWord(TNode<Object>{tmp32});
    TNode<IntPtrT> tmp34 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp34);
    TNode<JSArrayBuffer>tmp35 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp24, tmp34});
    TNode<IntPtrT> tmp36;
    USE(tmp36);
    tmp36 = CodeStubAssembler(state_).BitcastTaggedToWord(TNode<Object>{tmp35});
    TNode<BoolT> tmp37;
    USE(tmp37);
    tmp37 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp33}, TNode<IntPtrT>{tmp36});
    ca_.Branch(tmp37, &block7, &block8, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30);
  }

  if (block7.is_used()) {
    TNode<JSTypedArray> tmp38;
    TNode<JSTypedArray> tmp39;
    TNode<IntPtrT> tmp40;
    TNode<Smi> tmp41;
    TNode<Int32T> tmp42;
    TNode<UintPtrT> tmp43;
    TNode<Int32T> tmp44;
    ca_.Bind(&block7, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 27);
    ca_.Goto(&block1);
  }

  if (block8.is_used()) {
    TNode<JSTypedArray> tmp45;
    TNode<JSTypedArray> tmp46;
    TNode<IntPtrT> tmp47;
    TNode<Smi> tmp48;
    TNode<Int32T> tmp49;
    TNode<UintPtrT> tmp50;
    TNode<Int32T> tmp51;
    ca_.Bind(&block8, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 31);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 26);
    TNode<UintPtrT> tmp52;
    USE(tmp52);
    tmp52 = Convert9ATuintptr13ATPositiveSmi_189(state_, TNode<Smi>{tmp48});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 27);
    TNode<UintPtrT> tmp53;
    USE(tmp53);
    tmp53 = CodeStubAssembler(state_).WordShl(TNode<UintPtrT>{tmp52}, TNode<UintPtrT>{tmp50});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 30);
    TNode<UintPtrT> tmp54;
    USE(tmp54);
    tmp54 = CodeStubAssembler(state_).WordShr(TNode<UintPtrT>{tmp53}, TNode<UintPtrT>{tmp50});
    TNode<BoolT> tmp55;
    USE(tmp55);
    tmp55 = CodeStubAssembler(state_).WordNotEqual(TNode<UintPtrT>{tmp54}, TNode<UintPtrT>{tmp52});
    ca_.Branch(tmp55, &block12, &block13, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp50, tmp51, tmp48, tmp48, tmp52, tmp53);
  }

  if (block12.is_used()) {
    TNode<JSTypedArray> tmp56;
    TNode<JSTypedArray> tmp57;
    TNode<IntPtrT> tmp58;
    TNode<Smi> tmp59;
    TNode<Int32T> tmp60;
    TNode<UintPtrT> tmp61;
    TNode<Int32T> tmp62;
    TNode<UintPtrT> tmp63;
    TNode<Int32T> tmp64;
    TNode<Smi> tmp65;
    TNode<Smi> tmp66;
    TNode<UintPtrT> tmp67;
    TNode<UintPtrT> tmp68;
    ca_.Bind(&block12, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68);
    ca_.Goto(&block10, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62);
  }

  if (block13.is_used()) {
    TNode<JSTypedArray> tmp69;
    TNode<JSTypedArray> tmp70;
    TNode<IntPtrT> tmp71;
    TNode<Smi> tmp72;
    TNode<Int32T> tmp73;
    TNode<UintPtrT> tmp74;
    TNode<Int32T> tmp75;
    TNode<UintPtrT> tmp76;
    TNode<Int32T> tmp77;
    TNode<Smi> tmp78;
    TNode<Smi> tmp79;
    TNode<UintPtrT> tmp80;
    TNode<UintPtrT> tmp81;
    ca_.Bind(&block13, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 31);
    ca_.Goto(&block11, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp81);
  }

  if (block11.is_used()) {
    TNode<JSTypedArray> tmp82;
    TNode<JSTypedArray> tmp83;
    TNode<IntPtrT> tmp84;
    TNode<Smi> tmp85;
    TNode<Int32T> tmp86;
    TNode<UintPtrT> tmp87;
    TNode<Int32T> tmp88;
    TNode<UintPtrT> tmp89;
    TNode<Int32T> tmp90;
    TNode<Smi> tmp91;
    TNode<Smi> tmp92;
    TNode<UintPtrT> tmp93;
    ca_.Bind(&block11, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 31);
    ca_.Goto(&block9, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp93);
  }

  if (block10.is_used()) {
    TNode<JSTypedArray> tmp94;
    TNode<JSTypedArray> tmp95;
    TNode<IntPtrT> tmp96;
    TNode<Smi> tmp97;
    TNode<Int32T> tmp98;
    TNode<UintPtrT> tmp99;
    TNode<Int32T> tmp100;
    ca_.Bind(&block10, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block9.is_used()) {
    TNode<JSTypedArray> tmp101;
    TNode<JSTypedArray> tmp102;
    TNode<IntPtrT> tmp103;
    TNode<Smi> tmp104;
    TNode<Int32T> tmp105;
    TNode<UintPtrT> tmp106;
    TNode<Int32T> tmp107;
    TNode<UintPtrT> tmp108;
    ca_.Bind(&block9, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 30);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 33);
    TNode<Smi> tmp109;
    USE(tmp109);
    tmp109 = Convert13ATPositiveSmi8ATintptr_191(state_, TNode<IntPtrT>{tmp103});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 26);
    TNode<UintPtrT> tmp110;
    USE(tmp110);
    tmp110 = Convert9ATuintptr13ATPositiveSmi_189(state_, TNode<Smi>{tmp109});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 27);
    TNode<UintPtrT> tmp111;
    USE(tmp111);
    tmp111 = CodeStubAssembler(state_).WordShl(TNode<UintPtrT>{tmp110}, TNode<UintPtrT>{tmp106});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 30);
    TNode<UintPtrT> tmp112;
    USE(tmp112);
    tmp112 = CodeStubAssembler(state_).WordShr(TNode<UintPtrT>{tmp111}, TNode<UintPtrT>{tmp106});
    TNode<BoolT> tmp113;
    USE(tmp113);
    tmp113 = CodeStubAssembler(state_).WordNotEqual(TNode<UintPtrT>{tmp112}, TNode<UintPtrT>{tmp110});
    ca_.Branch(tmp113, &block17, &block18, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp106, tmp107, tmp109, tmp109, tmp110, tmp111);
  }

  if (block17.is_used()) {
    TNode<JSTypedArray> tmp114;
    TNode<JSTypedArray> tmp115;
    TNode<IntPtrT> tmp116;
    TNode<Smi> tmp117;
    TNode<Int32T> tmp118;
    TNode<UintPtrT> tmp119;
    TNode<Int32T> tmp120;
    TNode<UintPtrT> tmp121;
    TNode<UintPtrT> tmp122;
    TNode<Int32T> tmp123;
    TNode<Smi> tmp124;
    TNode<Smi> tmp125;
    TNode<UintPtrT> tmp126;
    TNode<UintPtrT> tmp127;
    ca_.Bind(&block17, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127);
    ca_.Goto(&block15, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121);
  }

  if (block18.is_used()) {
    TNode<JSTypedArray> tmp128;
    TNode<JSTypedArray> tmp129;
    TNode<IntPtrT> tmp130;
    TNode<Smi> tmp131;
    TNode<Int32T> tmp132;
    TNode<UintPtrT> tmp133;
    TNode<Int32T> tmp134;
    TNode<UintPtrT> tmp135;
    TNode<UintPtrT> tmp136;
    TNode<Int32T> tmp137;
    TNode<Smi> tmp138;
    TNode<Smi> tmp139;
    TNode<UintPtrT> tmp140;
    TNode<UintPtrT> tmp141;
    ca_.Bind(&block18, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 31);
    ca_.Goto(&block16, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp141);
  }

  if (block16.is_used()) {
    TNode<JSTypedArray> tmp142;
    TNode<JSTypedArray> tmp143;
    TNode<IntPtrT> tmp144;
    TNode<Smi> tmp145;
    TNode<Int32T> tmp146;
    TNode<UintPtrT> tmp147;
    TNode<Int32T> tmp148;
    TNode<UintPtrT> tmp149;
    TNode<UintPtrT> tmp150;
    TNode<Int32T> tmp151;
    TNode<Smi> tmp152;
    TNode<Smi> tmp153;
    TNode<UintPtrT> tmp154;
    ca_.Bind(&block16, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 33);
    ca_.Goto(&block14, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp154);
  }

  if (block15.is_used()) {
    TNode<JSTypedArray> tmp155;
    TNode<JSTypedArray> tmp156;
    TNode<IntPtrT> tmp157;
    TNode<Smi> tmp158;
    TNode<Int32T> tmp159;
    TNode<UintPtrT> tmp160;
    TNode<Int32T> tmp161;
    TNode<UintPtrT> tmp162;
    ca_.Bind(&block15, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 34);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block14.is_used()) {
    TNode<JSTypedArray> tmp163;
    TNode<JSTypedArray> tmp164;
    TNode<IntPtrT> tmp165;
    TNode<Smi> tmp166;
    TNode<Int32T> tmp167;
    TNode<UintPtrT> tmp168;
    TNode<Int32T> tmp169;
    TNode<UintPtrT> tmp170;
    TNode<UintPtrT> tmp171;
    ca_.Bind(&block14, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 32);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 35);
    TNode<RawPtrT> tmp172;
    USE(tmp172);
    tmp172 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{tmp163});
    TNode<IntPtrT> tmp173;
    USE(tmp173);
    tmp173 = Convert8ATintptr9ATuintptr_190(state_, TNode<UintPtrT>{tmp171});
    TNode<RawPtrT> tmp174;
    USE(tmp174);
    tmp174 = CodeStubAssembler(state_).RawPtrAdd(TNode<RawPtrT>{tmp172}, TNode<IntPtrT>{tmp173});
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 40);
    TNode<RawPtrT> tmp175;
    USE(tmp175);
    tmp175 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{tmp164});
    TypedArrayBuiltinsAssembler(state_).CallCMemmove(TNode<RawPtrT>{tmp175}, TNode<RawPtrT>{tmp174}, TNode<UintPtrT>{tmp170});
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 15);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 13);
    ca_.Goto(&block2, tmp163, tmp164, tmp165, tmp166);
  }

  if (block2.is_used()) {
    TNode<JSTypedArray> tmp176;
    TNode<JSTypedArray> tmp177;
    TNode<IntPtrT> tmp178;
    TNode<Smi> tmp179;
    ca_.Bind(&block2, &tmp176, &tmp177, &tmp178, &tmp179);
    ca_.Goto(&block19, tmp176, tmp177, tmp178, tmp179);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_IfSlow);
  }

    TNode<JSTypedArray> tmp180;
    TNode<JSTypedArray> tmp181;
    TNode<IntPtrT> tmp182;
    TNode<Smi> tmp183;
    ca_.Bind(&block19, &tmp180, &tmp181, &tmp182, &tmp183);
}

void SlowCopy_373(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSTypedArray> p_src, TNode<JSTypedArray> p_dest, TNode<IntPtrT> p_k, TNode<IntPtrT> p_final) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSTypedArray, IntPtrT, IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSTypedArray, IntPtrT, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSTypedArray, IntPtrT, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSTypedArray, IntPtrT, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSTypedArray, IntPtrT, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_src, p_dest, p_k, p_final);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSTypedArray> tmp1;
    TNode<JSTypedArray> tmp2;
    TNode<IntPtrT> tmp3;
    TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 45);
    TNode<Int32T> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).LoadElementsKind(TNode<JSTypedArray>{tmp1});
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = TypedArrayBuiltinsAssembler(state_).IsBigInt64ElementsKind(TNode<Int32T>{tmp5});
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 46);
    TNode<Int32T> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).LoadElementsKind(TNode<JSTypedArray>{tmp2});
    TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = TypedArrayBuiltinsAssembler(state_).IsBigInt64ElementsKind(TNode<Int32T>{tmp7});
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 45);
    TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).Word32NotEqual(TNode<BoolT>{tmp6}, TNode<BoolT>{tmp8});
    ca_.Branch(tmp9, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block2.is_used()) {
    TNode<Context> tmp10;
    TNode<JSTypedArray> tmp11;
    TNode<JSTypedArray> tmp12;
    TNode<IntPtrT> tmp13;
    TNode<IntPtrT> tmp14;
    ca_.Bind(&block2, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 48);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp10}, MessageTemplate::kBigIntMixedTypes);
  }

  if (block3.is_used()) {
    TNode<Context> tmp15;
    TNode<JSTypedArray> tmp16;
    TNode<JSTypedArray> tmp17;
    TNode<IntPtrT> tmp18;
    TNode<IntPtrT> tmp19;
    ca_.Bind(&block3, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 51);
    TypedArrayBuiltinsAssembler(state_).CallCCopyTypedArrayElementsSlice(TNode<JSTypedArray>{tmp16}, TNode<JSTypedArray>{tmp17}, TNode<IntPtrT>{tmp18}, TNode<IntPtrT>{tmp19});
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 43);
    ca_.Goto(&block1, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block1.is_used()) {
    TNode<Context> tmp20;
    TNode<JSTypedArray> tmp21;
    TNode<JSTypedArray> tmp22;
    TNode<IntPtrT> tmp23;
    TNode<IntPtrT> tmp24;
    ca_.Bind(&block1, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.Goto(&block4, tmp20, tmp21, tmp22, tmp23, tmp24);
  }

    TNode<Context> tmp25;
    TNode<JSTypedArray> tmp26;
    TNode<JSTypedArray> tmp27;
    TNode<IntPtrT> tmp28;
    TNode<IntPtrT> tmp29;
    ca_.Bind(&block4, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
}

TF_BUILTIN(TypedArrayPrototypeSlice, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object, IntPtrT, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object, IntPtrT, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, JSTypedArray> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, JSTypedArray, JSTypedArray> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, JSTypedArray, JSTypedArray, JSTypedArray> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, JSTypedArray, JSTypedArray, JSTypedArray, JSTypedArray, IntPtrT, Smi> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, JSTypedArray, JSTypedArray, JSTypedArray, JSTypedArray, IntPtrT, Smi> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, JSTypedArray> block14(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, JSTypedArray> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, JSTypedArray> block12(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, JSTypedArray> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, JSTypedArray> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 63);
    TNode<JSTypedArray> tmp5;
    USE(tmp5);
    tmp5 = TypedArrayBuiltinsAssembler(state_).ValidateTypedArray(TNode<Context>{tmp3}, TNode<Object>{tmp4}, kBuiltinName_371(state_));
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 62);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 66);
    TNode<IntPtrT> tmp6 = ca_.IntPtrConstant(JSTypedArray::kLengthOffset);
    USE(tmp6);
    TNode<UintPtrT>tmp7 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp5, tmp6});
    TNode<IntPtrT> tmp8;
    USE(tmp8);
    tmp8 = Convert8ATintptr9ATuintptr_190(state_, TNode<UintPtrT>{tmp7});
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 71);
    TNode<IntPtrT> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp0}, TNode<RawPtrT>{tmp1}, TNode<IntPtrT>{tmp2}}, TNode<IntPtrT>{tmp9});
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 73);
    TNode<Oddball> tmp11;
    USE(tmp11);
    tmp11 = Undefined_64(state_);
    TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = CodeStubAssembler(state_).TaggedNotEqual(TNode<Object>{tmp10}, TNode<HeapObject>{tmp11});
    ca_.Branch(tmp12, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp8, tmp10);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp13;
    TNode<RawPtrT> tmp14;
    TNode<IntPtrT> tmp15;
    TNode<Context> tmp16;
    TNode<Object> tmp17;
    TNode<JSTypedArray> tmp18;
    TNode<IntPtrT> tmp19;
    TNode<Object> tmp20;
    ca_.Bind(&block1, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    TNode<IntPtrT> tmp21;
    USE(tmp21);
    tmp21 = CodeStubAssembler(state_).ConvertToRelativeIndex(TNode<Context>{tmp16}, TNode<Object>{tmp20}, TNode<IntPtrT>{tmp19});
    ca_.Goto(&block4, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp22;
    TNode<RawPtrT> tmp23;
    TNode<IntPtrT> tmp24;
    TNode<Context> tmp25;
    TNode<Object> tmp26;
    TNode<JSTypedArray> tmp27;
    TNode<IntPtrT> tmp28;
    TNode<Object> tmp29;
    ca_.Bind(&block2, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    TNode<IntPtrT> tmp30;
    USE(tmp30);
    tmp30 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    ca_.Goto(&block3, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp31;
    TNode<RawPtrT> tmp32;
    TNode<IntPtrT> tmp33;
    TNode<Context> tmp34;
    TNode<Object> tmp35;
    TNode<JSTypedArray> tmp36;
    TNode<IntPtrT> tmp37;
    TNode<Object> tmp38;
    TNode<IntPtrT> tmp39;
    ca_.Bind(&block4, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    ca_.Goto(&block3, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp40;
    TNode<RawPtrT> tmp41;
    TNode<IntPtrT> tmp42;
    TNode<Context> tmp43;
    TNode<Object> tmp44;
    TNode<JSTypedArray> tmp45;
    TNode<IntPtrT> tmp46;
    TNode<Object> tmp47;
    TNode<IntPtrT> tmp48;
    ca_.Bind(&block3, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 72);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 79);
    TNode<IntPtrT> tmp49;
    USE(tmp49);
    tmp49 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp50;
    USE(tmp50);
    tmp50 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp40}, TNode<RawPtrT>{tmp41}, TNode<IntPtrT>{tmp42}}, TNode<IntPtrT>{tmp49});
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 81);
    TNode<Oddball> tmp51;
    USE(tmp51);
    tmp51 = Undefined_64(state_);
    TNode<BoolT> tmp52;
    USE(tmp52);
    tmp52 = CodeStubAssembler(state_).TaggedNotEqual(TNode<Object>{tmp50}, TNode<HeapObject>{tmp51});
    ca_.Branch(tmp52, &block5, &block6, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp50);
  }

  if (block5.is_used()) {
    TNode<RawPtrT> tmp53;
    TNode<RawPtrT> tmp54;
    TNode<IntPtrT> tmp55;
    TNode<Context> tmp56;
    TNode<Object> tmp57;
    TNode<JSTypedArray> tmp58;
    TNode<IntPtrT> tmp59;
    TNode<Object> tmp60;
    TNode<IntPtrT> tmp61;
    TNode<Object> tmp62;
    ca_.Bind(&block5, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    TNode<IntPtrT> tmp63;
    USE(tmp63);
    tmp63 = CodeStubAssembler(state_).ConvertToRelativeIndex(TNode<Context>{tmp56}, TNode<Object>{tmp62}, TNode<IntPtrT>{tmp59});
    ca_.Goto(&block8, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63);
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp64;
    TNode<RawPtrT> tmp65;
    TNode<IntPtrT> tmp66;
    TNode<Context> tmp67;
    TNode<Object> tmp68;
    TNode<JSTypedArray> tmp69;
    TNode<IntPtrT> tmp70;
    TNode<Object> tmp71;
    TNode<IntPtrT> tmp72;
    TNode<Object> tmp73;
    ca_.Bind(&block6, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73);
    ca_.Goto(&block7, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp70);
  }

  if (block8.is_used()) {
    TNode<RawPtrT> tmp74;
    TNode<RawPtrT> tmp75;
    TNode<IntPtrT> tmp76;
    TNode<Context> tmp77;
    TNode<Object> tmp78;
    TNode<JSTypedArray> tmp79;
    TNode<IntPtrT> tmp80;
    TNode<Object> tmp81;
    TNode<IntPtrT> tmp82;
    TNode<Object> tmp83;
    TNode<IntPtrT> tmp84;
    ca_.Bind(&block8, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84);
    ca_.Goto(&block7, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp85;
    TNode<RawPtrT> tmp86;
    TNode<IntPtrT> tmp87;
    TNode<Context> tmp88;
    TNode<Object> tmp89;
    TNode<JSTypedArray> tmp90;
    TNode<IntPtrT> tmp91;
    TNode<Object> tmp92;
    TNode<IntPtrT> tmp93;
    TNode<Object> tmp94;
    TNode<IntPtrT> tmp95;
    ca_.Bind(&block7, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 80);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 84);
    TNode<IntPtrT> tmp96;
    USE(tmp96);
    tmp96 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{tmp95}, TNode<IntPtrT>{tmp93});
    TNode<IntPtrT> tmp97;
    USE(tmp97);
    tmp97 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<IntPtrT> tmp98;
    USE(tmp98);
    tmp98 = CodeStubAssembler(state_).IntPtrMax(TNode<IntPtrT>{tmp96}, TNode<IntPtrT>{tmp97});
    TNode<Smi> tmp99;
    USE(tmp99);
    tmp99 = Convert13ATPositiveSmi8ATintptr_191(state_, TNode<IntPtrT>{tmp98});
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 89);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 88);
    TNode<JSTypedArray> tmp100;
    USE(tmp100);
    tmp100 = TypedArraySpeciesCreateByLength_357(state_, TNode<Context>{tmp88}, kBuiltinName_371(state_), TNode<JSTypedArray>{tmp90}, TNode<Smi>{tmp99});
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 87);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 91);
    TNode<Smi> tmp101;
    USE(tmp101);
    tmp101 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<BoolT> tmp102;
    USE(tmp102);
    tmp102 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp99}, TNode<Smi>{tmp101});
    ca_.Branch(tmp102, &block9, &block10, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp99, tmp100);
  }

  if (block9.is_used()) {
    TNode<RawPtrT> tmp103;
    TNode<RawPtrT> tmp104;
    TNode<IntPtrT> tmp105;
    TNode<Context> tmp106;
    TNode<Object> tmp107;
    TNode<JSTypedArray> tmp108;
    TNode<IntPtrT> tmp109;
    TNode<Object> tmp110;
    TNode<IntPtrT> tmp111;
    TNode<Object> tmp112;
    TNode<IntPtrT> tmp113;
    TNode<Smi> tmp114;
    TNode<JSTypedArray> tmp115;
    ca_.Bind(&block9, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 93);
    TNode<JSTypedArray> tmp116;
    USE(tmp116);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp116 = EnsureAttached_376(state_, TNode<JSTypedArray>{tmp108}, &label0);
    ca_.Goto(&block15, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp108, tmp116);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp108);
    }
  }

  if (block16.is_used()) {
    TNode<RawPtrT> tmp117;
    TNode<RawPtrT> tmp118;
    TNode<IntPtrT> tmp119;
    TNode<Context> tmp120;
    TNode<Object> tmp121;
    TNode<JSTypedArray> tmp122;
    TNode<IntPtrT> tmp123;
    TNode<Object> tmp124;
    TNode<IntPtrT> tmp125;
    TNode<Object> tmp126;
    TNode<IntPtrT> tmp127;
    TNode<Smi> tmp128;
    TNode<JSTypedArray> tmp129;
    TNode<JSTypedArray> tmp130;
    ca_.Bind(&block16, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130);
    ca_.Goto(&block14, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129);
  }

  if (block15.is_used()) {
    TNode<RawPtrT> tmp131;
    TNode<RawPtrT> tmp132;
    TNode<IntPtrT> tmp133;
    TNode<Context> tmp134;
    TNode<Object> tmp135;
    TNode<JSTypedArray> tmp136;
    TNode<IntPtrT> tmp137;
    TNode<Object> tmp138;
    TNode<IntPtrT> tmp139;
    TNode<Object> tmp140;
    TNode<IntPtrT> tmp141;
    TNode<Smi> tmp142;
    TNode<JSTypedArray> tmp143;
    TNode<JSTypedArray> tmp144;
    TNode<JSTypedArray> tmp145;
    ca_.Bind(&block15, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 95);
    compiler::CodeAssemblerLabel label0(&ca_);
    FastCopy_372(state_, TNode<JSTypedArray>{tmp145}, TNode<JSTypedArray>{tmp143}, TNode<IntPtrT>{tmp139}, TNode<Smi>{tmp142}, &label0);
    ca_.Goto(&block17, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp145, tmp145, tmp143, tmp139, tmp142);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block18, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp145, tmp145, tmp143, tmp139, tmp142);
    }
  }

  if (block18.is_used()) {
    TNode<RawPtrT> tmp146;
    TNode<RawPtrT> tmp147;
    TNode<IntPtrT> tmp148;
    TNode<Context> tmp149;
    TNode<Object> tmp150;
    TNode<JSTypedArray> tmp151;
    TNode<IntPtrT> tmp152;
    TNode<Object> tmp153;
    TNode<IntPtrT> tmp154;
    TNode<Object> tmp155;
    TNode<IntPtrT> tmp156;
    TNode<Smi> tmp157;
    TNode<JSTypedArray> tmp158;
    TNode<JSTypedArray> tmp159;
    TNode<JSTypedArray> tmp160;
    TNode<JSTypedArray> tmp161;
    TNode<IntPtrT> tmp162;
    TNode<Smi> tmp163;
    ca_.Bind(&block18, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163);
    ca_.Goto(&block12, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158);
  }

  if (block17.is_used()) {
    TNode<RawPtrT> tmp164;
    TNode<RawPtrT> tmp165;
    TNode<IntPtrT> tmp166;
    TNode<Context> tmp167;
    TNode<Object> tmp168;
    TNode<JSTypedArray> tmp169;
    TNode<IntPtrT> tmp170;
    TNode<Object> tmp171;
    TNode<IntPtrT> tmp172;
    TNode<Object> tmp173;
    TNode<IntPtrT> tmp174;
    TNode<Smi> tmp175;
    TNode<JSTypedArray> tmp176;
    TNode<JSTypedArray> tmp177;
    TNode<JSTypedArray> tmp178;
    TNode<JSTypedArray> tmp179;
    TNode<IntPtrT> tmp180;
    TNode<Smi> tmp181;
    ca_.Bind(&block17, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 92);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 97);
    ca_.Goto(&block13, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176);
  }

  if (block14.is_used()) {
    TNode<RawPtrT> tmp182;
    TNode<RawPtrT> tmp183;
    TNode<IntPtrT> tmp184;
    TNode<Context> tmp185;
    TNode<Object> tmp186;
    TNode<JSTypedArray> tmp187;
    TNode<IntPtrT> tmp188;
    TNode<Object> tmp189;
    TNode<IntPtrT> tmp190;
    TNode<Object> tmp191;
    TNode<IntPtrT> tmp192;
    TNode<Smi> tmp193;
    TNode<JSTypedArray> tmp194;
    ca_.Bind(&block14, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 98);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp185}, MessageTemplate::kDetachedOperation, kBuiltinName_371(state_));
  }

  if (block13.is_used()) {
    TNode<RawPtrT> tmp195;
    TNode<RawPtrT> tmp196;
    TNode<IntPtrT> tmp197;
    TNode<Context> tmp198;
    TNode<Object> tmp199;
    TNode<JSTypedArray> tmp200;
    TNode<IntPtrT> tmp201;
    TNode<Object> tmp202;
    TNode<IntPtrT> tmp203;
    TNode<Object> tmp204;
    TNode<IntPtrT> tmp205;
    TNode<Smi> tmp206;
    TNode<JSTypedArray> tmp207;
    ca_.Bind(&block13, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 100);
    ca_.Goto(&block11, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207);
  }

  if (block12.is_used()) {
    TNode<RawPtrT> tmp208;
    TNode<RawPtrT> tmp209;
    TNode<IntPtrT> tmp210;
    TNode<Context> tmp211;
    TNode<Object> tmp212;
    TNode<JSTypedArray> tmp213;
    TNode<IntPtrT> tmp214;
    TNode<Object> tmp215;
    TNode<IntPtrT> tmp216;
    TNode<Object> tmp217;
    TNode<IntPtrT> tmp218;
    TNode<Smi> tmp219;
    TNode<JSTypedArray> tmp220;
    ca_.Bind(&block12, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 101);
    SlowCopy_373(state_, TNode<Context>{tmp211}, TNode<JSTypedArray>{tmp213}, TNode<JSTypedArray>{tmp220}, TNode<IntPtrT>{tmp216}, TNode<IntPtrT>{tmp218});
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 92);
    ca_.Goto(&block11, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220);
  }

  if (block11.is_used()) {
    TNode<RawPtrT> tmp221;
    TNode<RawPtrT> tmp222;
    TNode<IntPtrT> tmp223;
    TNode<Context> tmp224;
    TNode<Object> tmp225;
    TNode<JSTypedArray> tmp226;
    TNode<IntPtrT> tmp227;
    TNode<Object> tmp228;
    TNode<IntPtrT> tmp229;
    TNode<Object> tmp230;
    TNode<IntPtrT> tmp231;
    TNode<Smi> tmp232;
    TNode<JSTypedArray> tmp233;
    ca_.Bind(&block11, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 91);
    ca_.Goto(&block10, tmp221, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233);
  }

  if (block10.is_used()) {
    TNode<RawPtrT> tmp234;
    TNode<RawPtrT> tmp235;
    TNode<IntPtrT> tmp236;
    TNode<Context> tmp237;
    TNode<Object> tmp238;
    TNode<JSTypedArray> tmp239;
    TNode<IntPtrT> tmp240;
    TNode<Object> tmp241;
    TNode<IntPtrT> tmp242;
    TNode<Object> tmp243;
    TNode<IntPtrT> tmp244;
    TNode<Smi> tmp245;
    TNode<JSTypedArray> tmp246;
    ca_.Bind(&block10, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 105);
    arguments.PopAndReturn(tmp246);
  }
}

}  // namespace internal
}  // namespace v8

