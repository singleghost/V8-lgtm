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

TNode<Oddball> TryFastStringCompareSequence_339(compiler::CodeAssemblerState* state_, TNode<String> p_string, TNode<String> p_searchStr, TNode<Number> p_start, TNode<Smi> p_searchLength, compiler::CodeAssemblerLabel* label_Slow) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<String, String, Number, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, String, Number, Smi, String> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, String, Number, Smi, String, String> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, String, Number, Smi, String, String> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, String, Number, Smi, String, String, String> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, String, Number, Smi, String, String, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, String, Number, Smi, String, String, Number, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, String, Number, Smi, String, String, Smi, IntPtrT, IntPtrT, IntPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, String, Number, Smi, String, String, Smi, IntPtrT, IntPtrT, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, String, Number, Smi, String, String, Smi, IntPtrT, IntPtrT, IntPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, String, Number, Smi, String, String, Smi, IntPtrT, IntPtrT, IntPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, String, Number, Smi, String, String, Smi, IntPtrT, IntPtrT, IntPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, String, Number, Smi, Oddball> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, String, Number, Smi, Oddball> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_string, p_searchStr, p_start, p_searchLength);

  if (block0.is_used()) {
    TNode<String> tmp0;
    TNode<String> tmp1;
    TNode<Number> tmp2;
    TNode<Smi> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 9);
    TNode<String> tmp4;
    USE(tmp4);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp4 = Cast14ATDirectString_126(state_, TNode<HeapObject>{tmp0}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp0, tmp4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp0);
    }
  }

  if (block4.is_used()) {
    TNode<String> tmp5;
    TNode<String> tmp6;
    TNode<Number> tmp7;
    TNode<Smi> tmp8;
    TNode<String> tmp9;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    TNode<String> tmp10;
    TNode<String> tmp11;
    TNode<Number> tmp12;
    TNode<Smi> tmp13;
    TNode<String> tmp14;
    TNode<String> tmp15;
    ca_.Bind(&block3, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 10);
    TNode<String> tmp16;
    USE(tmp16);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp16 = Cast14ATDirectString_126(state_, TNode<HeapObject>{tmp11}, &label0);
    ca_.Goto(&block5, tmp10, tmp11, tmp12, tmp13, tmp15, tmp11, tmp16);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp10, tmp11, tmp12, tmp13, tmp15, tmp11);
    }
  }

  if (block6.is_used()) {
    TNode<String> tmp17;
    TNode<String> tmp18;
    TNode<Number> tmp19;
    TNode<Smi> tmp20;
    TNode<String> tmp21;
    TNode<String> tmp22;
    ca_.Bind(&block6, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    TNode<String> tmp23;
    TNode<String> tmp24;
    TNode<Number> tmp25;
    TNode<Smi> tmp26;
    TNode<String> tmp27;
    TNode<String> tmp28;
    TNode<String> tmp29;
    ca_.Bind(&block5, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 11);
    TNode<Smi> tmp30;
    USE(tmp30);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp30 = Cast5ATSmi_83(state_, TNode<Object>{tmp25}, &label0);
    ca_.Goto(&block7, tmp23, tmp24, tmp25, tmp26, tmp27, tmp29, tmp25, tmp30);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp23, tmp24, tmp25, tmp26, tmp27, tmp29, tmp25);
    }
  }

  if (block8.is_used()) {
    TNode<String> tmp31;
    TNode<String> tmp32;
    TNode<Number> tmp33;
    TNode<Smi> tmp34;
    TNode<String> tmp35;
    TNode<String> tmp36;
    TNode<Number> tmp37;
    ca_.Bind(&block8, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37);
    ca_.Goto(&block1);
  }

  if (block7.is_used()) {
    TNode<String> tmp38;
    TNode<String> tmp39;
    TNode<Number> tmp40;
    TNode<Smi> tmp41;
    TNode<String> tmp42;
    TNode<String> tmp43;
    TNode<Number> tmp44;
    TNode<Smi> tmp45;
    ca_.Bind(&block7, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45);
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 13);
    TNode<IntPtrT> tmp46;
    USE(tmp46);
    tmp46 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 14);
    TNode<IntPtrT> tmp47;
    USE(tmp47);
    tmp47 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp45});
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 15);
    TNode<IntPtrT> tmp48;
    USE(tmp48);
    tmp48 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp41});
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 17);
    ca_.Goto(&block11, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp45, tmp46, tmp47, tmp48);
  }

  if (block11.is_used()) {
    TNode<String> tmp49;
    TNode<String> tmp50;
    TNode<Number> tmp51;
    TNode<Smi> tmp52;
    TNode<String> tmp53;
    TNode<String> tmp54;
    TNode<Smi> tmp55;
    TNode<IntPtrT> tmp56;
    TNode<IntPtrT> tmp57;
    TNode<IntPtrT> tmp58;
    ca_.Bind(&block11, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
    TNode<BoolT> tmp59;
    USE(tmp59);
    tmp59 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{tmp56}, TNode<IntPtrT>{tmp58});
    ca_.Branch(tmp59, &block9, &block10, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58);
  }

  if (block9.is_used()) {
    TNode<String> tmp60;
    TNode<String> tmp61;
    TNode<Number> tmp62;
    TNode<Smi> tmp63;
    TNode<String> tmp64;
    TNode<String> tmp65;
    TNode<Smi> tmp66;
    TNode<IntPtrT> tmp67;
    TNode<IntPtrT> tmp68;
    TNode<IntPtrT> tmp69;
    ca_.Bind(&block9, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69);
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 18);
    TNode<Int32T> tmp70;
    USE(tmp70);
    tmp70 = CodeStubAssembler(state_).StringCharCodeAt(TNode<String>{tmp65}, TNode<IntPtrT>{tmp67});
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 19);
    TNode<Int32T> tmp71;
    USE(tmp71);
    tmp71 = CodeStubAssembler(state_).StringCharCodeAt(TNode<String>{tmp64}, TNode<IntPtrT>{tmp68});
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 18);
    TNode<BoolT> tmp72;
    USE(tmp72);
    tmp72 = CodeStubAssembler(state_).Word32NotEqual(TNode<Int32T>{tmp70}, TNode<Int32T>{tmp71});
    ca_.Branch(tmp72, &block12, &block13, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69);
  }

  if (block12.is_used()) {
    TNode<String> tmp73;
    TNode<String> tmp74;
    TNode<Number> tmp75;
    TNode<Smi> tmp76;
    TNode<String> tmp77;
    TNode<String> tmp78;
    TNode<Smi> tmp79;
    TNode<IntPtrT> tmp80;
    TNode<IntPtrT> tmp81;
    TNode<IntPtrT> tmp82;
    ca_.Bind(&block12, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82);
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 20);
    TNode<Oddball> tmp83;
    USE(tmp83);
    tmp83 = False_66(state_);
    ca_.Goto(&block2, tmp73, tmp74, tmp75, tmp76, tmp83);
  }

  if (block13.is_used()) {
    TNode<String> tmp84;
    TNode<String> tmp85;
    TNode<Number> tmp86;
    TNode<Smi> tmp87;
    TNode<String> tmp88;
    TNode<String> tmp89;
    TNode<Smi> tmp90;
    TNode<IntPtrT> tmp91;
    TNode<IntPtrT> tmp92;
    TNode<IntPtrT> tmp93;
    ca_.Bind(&block13, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93);
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 23);
    TNode<IntPtrT> tmp94;
    USE(tmp94);
    tmp94 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<IntPtrT> tmp95;
    USE(tmp95);
    tmp95 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp91}, TNode<IntPtrT>{tmp94});
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 24);
    TNode<IntPtrT> tmp96;
    USE(tmp96);
    tmp96 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<IntPtrT> tmp97;
    USE(tmp97);
    tmp97 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp92}, TNode<IntPtrT>{tmp96});
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 17);
    ca_.Goto(&block11, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp95, tmp97, tmp93);
  }

  if (block10.is_used()) {
    TNode<String> tmp98;
    TNode<String> tmp99;
    TNode<Number> tmp100;
    TNode<Smi> tmp101;
    TNode<String> tmp102;
    TNode<String> tmp103;
    TNode<Smi> tmp104;
    TNode<IntPtrT> tmp105;
    TNode<IntPtrT> tmp106;
    TNode<IntPtrT> tmp107;
    ca_.Bind(&block10, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107);
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 26);
    TNode<Oddball> tmp108;
    USE(tmp108);
    tmp108 = True_65(state_);
    ca_.Goto(&block2, tmp98, tmp99, tmp100, tmp101, tmp108);
  }

  if (block2.is_used()) {
    TNode<String> tmp109;
    TNode<String> tmp110;
    TNode<Number> tmp111;
    TNode<Smi> tmp112;
    TNode<Oddball> tmp113;
    ca_.Bind(&block2, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113);
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 6);
    ca_.Goto(&block14, tmp109, tmp110, tmp111, tmp112, tmp113);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Slow);
  }

    TNode<String> tmp114;
    TNode<String> tmp115;
    TNode<Number> tmp116;
    TNode<Smi> tmp117;
    TNode<Oddball> tmp118;
    ca_.Bind(&block14, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118);
  return TNode<Oddball>{tmp118};
}

TF_BUILTIN(StringPrototypeEndsWith, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object, String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object, String> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object, String, String, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object, String, String, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object, String, String, Number, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object, String, String, Number, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object, String, String, Number, Number, Number, Smi, Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object, String, String, Number, Number, Number, Smi, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object, String, String, Number, Number, Number, Smi, Number, String, String, Number, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object, String, String, Number, Number, Number, Smi, Number, String, String, Number, Smi, Oddball> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object, String, String, Number, Number, Number, Smi, Number> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 32);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp0}, TNode<RawPtrT>{tmp1}, TNode<IntPtrT>{tmp2}}, TNode<IntPtrT>{tmp5});
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 33);
    TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp0}, TNode<RawPtrT>{tmp1}, TNode<IntPtrT>{tmp2}}, TNode<IntPtrT>{tmp7});
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 37);
    TNode<Object> tmp9;
    USE(tmp9);
    tmp9 = RequireObjectCoercible_243(state_, TNode<Context>{tmp3}, TNode<Object>{tmp4}, "String.prototype.endsWith");
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 40);
    TNode<String> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{tmp3}, TNode<Object>{tmp9});
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 44);
    TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = RegExpBuiltinsAssembler(state_).IsRegExp(TNode<Context>{tmp3}, TNode<Object>{tmp6});
    ca_.Branch(tmp11, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, tmp8, tmp9, tmp10);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp12;
    TNode<RawPtrT> tmp13;
    TNode<IntPtrT> tmp14;
    TNode<Context> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    TNode<Object> tmp18;
    TNode<Object> tmp19;
    TNode<String> tmp20;
    ca_.Bind(&block1, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 45);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp15}, MessageTemplate::kFirstArgumentNotRegExp, "String.prototype.endsWith");
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp21;
    TNode<RawPtrT> tmp22;
    TNode<IntPtrT> tmp23;
    TNode<Context> tmp24;
    TNode<Object> tmp25;
    TNode<Object> tmp26;
    TNode<Object> tmp27;
    TNode<Object> tmp28;
    TNode<String> tmp29;
    ca_.Bind(&block2, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 49);
    TNode<String> tmp30;
    USE(tmp30);
    tmp30 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{tmp24}, TNode<Object>{tmp26});
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 52);
    TNode<Smi> tmp31;
    USE(tmp31);
    tmp31 = CodeStubAssembler(state_).LoadStringLengthAsSmi(TNode<String>{tmp29});
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 56);
    TNode<Oddball> tmp32;
    USE(tmp32);
    tmp32 = Undefined_64(state_);
    TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp27}, TNode<HeapObject>{tmp32});
    ca_.Branch(tmp33, &block3, &block4, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp34;
    TNode<RawPtrT> tmp35;
    TNode<IntPtrT> tmp36;
    TNode<Context> tmp37;
    TNode<Object> tmp38;
    TNode<Object> tmp39;
    TNode<Object> tmp40;
    TNode<Object> tmp41;
    TNode<String> tmp42;
    TNode<String> tmp43;
    TNode<Number> tmp44;
    ca_.Bind(&block3, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44);
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 57);
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 56);
    ca_.Goto(&block6, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp44);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp45;
    TNode<RawPtrT> tmp46;
    TNode<IntPtrT> tmp47;
    TNode<Context> tmp48;
    TNode<Object> tmp49;
    TNode<Object> tmp50;
    TNode<Object> tmp51;
    TNode<Object> tmp52;
    TNode<String> tmp53;
    TNode<String> tmp54;
    TNode<Number> tmp55;
    ca_.Bind(&block4, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 58);
    TNode<Number> tmp56;
    USE(tmp56);
    tmp56 = CodeStubAssembler(state_).ToInteger_Inline(TNode<Context>{tmp48}, TNode<Object>{tmp51});
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 56);
    ca_.Goto(&block5, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56);
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp57;
    TNode<RawPtrT> tmp58;
    TNode<IntPtrT> tmp59;
    TNode<Context> tmp60;
    TNode<Object> tmp61;
    TNode<Object> tmp62;
    TNode<Object> tmp63;
    TNode<Object> tmp64;
    TNode<String> tmp65;
    TNode<String> tmp66;
    TNode<Number> tmp67;
    TNode<Number> tmp68;
    ca_.Bind(&block6, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68);
    ca_.Goto(&block5, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68);
  }

  if (block5.is_used()) {
    TNode<RawPtrT> tmp69;
    TNode<RawPtrT> tmp70;
    TNode<IntPtrT> tmp71;
    TNode<Context> tmp72;
    TNode<Object> tmp73;
    TNode<Object> tmp74;
    TNode<Object> tmp75;
    TNode<Object> tmp76;
    TNode<String> tmp77;
    TNode<String> tmp78;
    TNode<Number> tmp79;
    TNode<Number> tmp80;
    ca_.Bind(&block5, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 61);
    TNode<Number> tmp81;
    USE(tmp81);
    tmp81 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 0);
    TNode<Number> tmp82;
    USE(tmp82);
    tmp82 = CodeStubAssembler(state_).NumberMax(TNode<Number>{tmp80}, TNode<Number>{tmp81});
    TNode<Number> tmp83;
    USE(tmp83);
    tmp83 = CodeStubAssembler(state_).NumberMin(TNode<Number>{tmp82}, TNode<Number>{tmp79});
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 64);
    TNode<Smi> tmp84;
    USE(tmp84);
    tmp84 = CodeStubAssembler(state_).LoadStringLengthAsSmi(TNode<String>{tmp78});
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 67);
    TNode<Number> tmp85;
    USE(tmp85);
    tmp85 = CodeStubAssembler(state_).NumberSub(TNode<Number>{tmp83}, TNode<Number>{tmp84});
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 70);
    TNode<Number> tmp86;
    USE(tmp86);
    tmp86 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 0);
    TNode<BoolT> tmp87;
    USE(tmp87);
    tmp87 = NumberIsLessThan_75(state_, TNode<Number>{tmp85}, TNode<Number>{tmp86});
    ca_.Branch(tmp87, &block7, &block8, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp83, tmp84, tmp85);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp88;
    TNode<RawPtrT> tmp89;
    TNode<IntPtrT> tmp90;
    TNode<Context> tmp91;
    TNode<Object> tmp92;
    TNode<Object> tmp93;
    TNode<Object> tmp94;
    TNode<Object> tmp95;
    TNode<String> tmp96;
    TNode<String> tmp97;
    TNode<Number> tmp98;
    TNode<Number> tmp99;
    TNode<Number> tmp100;
    TNode<Smi> tmp101;
    TNode<Number> tmp102;
    ca_.Bind(&block7, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102);
    TNode<Oddball> tmp103;
    USE(tmp103);
    tmp103 = False_66(state_);
    arguments.PopAndReturn(tmp103);
  }

  if (block8.is_used()) {
    TNode<RawPtrT> tmp104;
    TNode<RawPtrT> tmp105;
    TNode<IntPtrT> tmp106;
    TNode<Context> tmp107;
    TNode<Object> tmp108;
    TNode<Object> tmp109;
    TNode<Object> tmp110;
    TNode<Object> tmp111;
    TNode<String> tmp112;
    TNode<String> tmp113;
    TNode<Number> tmp114;
    TNode<Number> tmp115;
    TNode<Number> tmp116;
    TNode<Smi> tmp117;
    TNode<Number> tmp118;
    ca_.Bind(&block8, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118);
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 79);
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 78);
    TNode<Oddball> tmp119;
    USE(tmp119);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp119 = TryFastStringCompareSequence_339(state_, TNode<String>{tmp112}, TNode<String>{tmp113}, TNode<Number>{tmp118}, TNode<Smi>{tmp117}, &label0);
    ca_.Goto(&block11, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp112, tmp113, tmp118, tmp117, tmp119);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp112, tmp113, tmp118, tmp117);
    }
  }

  if (block12.is_used()) {
    TNode<RawPtrT> tmp120;
    TNode<RawPtrT> tmp121;
    TNode<IntPtrT> tmp122;
    TNode<Context> tmp123;
    TNode<Object> tmp124;
    TNode<Object> tmp125;
    TNode<Object> tmp126;
    TNode<Object> tmp127;
    TNode<String> tmp128;
    TNode<String> tmp129;
    TNode<Number> tmp130;
    TNode<Number> tmp131;
    TNode<Number> tmp132;
    TNode<Smi> tmp133;
    TNode<Number> tmp134;
    TNode<String> tmp135;
    TNode<String> tmp136;
    TNode<Number> tmp137;
    TNode<Smi> tmp138;
    ca_.Bind(&block12, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138);
    ca_.Goto(&block10, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134);
  }

  if (block11.is_used()) {
    TNode<RawPtrT> tmp139;
    TNode<RawPtrT> tmp140;
    TNode<IntPtrT> tmp141;
    TNode<Context> tmp142;
    TNode<Object> tmp143;
    TNode<Object> tmp144;
    TNode<Object> tmp145;
    TNode<Object> tmp146;
    TNode<String> tmp147;
    TNode<String> tmp148;
    TNode<Number> tmp149;
    TNode<Number> tmp150;
    TNode<Number> tmp151;
    TNode<Smi> tmp152;
    TNode<Number> tmp153;
    TNode<String> tmp154;
    TNode<String> tmp155;
    TNode<Number> tmp156;
    TNode<Smi> tmp157;
    TNode<Oddball> tmp158;
    ca_.Bind(&block11, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158);
    arguments.PopAndReturn(tmp158);
  }

  if (block10.is_used()) {
    TNode<RawPtrT> tmp159;
    TNode<RawPtrT> tmp160;
    TNode<IntPtrT> tmp161;
    TNode<Context> tmp162;
    TNode<Object> tmp163;
    TNode<Object> tmp164;
    TNode<Object> tmp165;
    TNode<Object> tmp166;
    TNode<String> tmp167;
    TNode<String> tmp168;
    TNode<Number> tmp169;
    TNode<Number> tmp170;
    TNode<Number> tmp171;
    TNode<Smi> tmp172;
    TNode<Number> tmp173;
    ca_.Bind(&block10, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173);
    ca_.SetSourcePosition("../../src/builtins/string-endswith.tq", 83);
    TNode<Oddball> tmp174;
    tmp174 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kStringCompareSequence, tmp162, tmp167, tmp168, tmp173)); 
    USE(tmp174);
    arguments.PopAndReturn(tmp174);
  }
}

}  // namespace internal
}  // namespace v8

