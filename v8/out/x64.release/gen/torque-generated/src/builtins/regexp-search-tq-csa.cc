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

TNode<Object> RegExpPrototypeSearchBodyFast_330(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSRegExp> p_regexp, TNode<String> p_string) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Smi, JSRegExp, String> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Smi, JSRegExp, String, RegExpMatchInfo> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Smi, RegExpMatchInfo, RegExpMatchInfo, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Smi, RegExpMatchInfo, RegExpMatchInfo, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Smi, RegExpMatchInfo, RegExpMatchInfo, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Smi, RegExpMatchInfo, RegExpMatchInfo, IntPtrT, IntPtrT, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Smi, RegExpMatchInfo, RegExpMatchInfo, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Smi, RegExpMatchInfo, RegExpMatchInfo, IntPtrT, IntPtrT, HeapObject, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_regexp, p_string);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSRegExp> tmp1;
    TNode<String> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 18);
    TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = RegExpBuiltinsAssembler(state_).FastLoadLastIndex(TNode<JSRegExp>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 21);
    TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    RegExpBuiltinsAssembler(state_).FastStoreLastIndex(TNode<JSRegExp>{tmp1}, TNode<Smi>{tmp4});
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 26);
    TNode<RegExpMatchInfo> tmp5;
    USE(tmp5);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp5 = RegExpBuiltinsAssembler(state_).RegExpPrototypeExecBodyWithoutResultFast(TNode<Context>{tmp0}, TNode<JSRegExp>{tmp1}, TNode<String>{tmp2}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp1, tmp2, tmp5);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp1, tmp2);
    }
  }

  if (block5.is_used()) {
    TNode<Context> tmp6;
    TNode<JSRegExp> tmp7;
    TNode<String> tmp8;
    TNode<Smi> tmp9;
    TNode<JSRegExp> tmp10;
    TNode<String> tmp11;
    ca_.Bind(&block5, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block3, tmp6, tmp7, tmp8, tmp9);
  }

  if (block4.is_used()) {
    TNode<Context> tmp12;
    TNode<JSRegExp> tmp13;
    TNode<String> tmp14;
    TNode<Smi> tmp15;
    TNode<JSRegExp> tmp16;
    TNode<String> tmp17;
    TNode<RegExpMatchInfo> tmp18;
    ca_.Bind(&block4, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 25);
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 31);
    RegExpBuiltinsAssembler(state_).FastStoreLastIndex(TNode<JSRegExp>{tmp13}, TNode<Smi>{tmp15});
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 35);
    TNode<IntPtrT> tmp19 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp19);
    TNode<IntPtrT> tmp20 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp20);
    TNode<Smi>tmp21 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp18, tmp20});
    TNode<IntPtrT> tmp22;
    USE(tmp22);
    tmp22 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp21});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 50);
    TNode<IntPtrT> tmp23;
    USE(tmp23);
    tmp23 = Convert8ATintptr17ATconstexpr_int31_1444(state_, RegExpMatchInfo::kFirstCaptureIndex);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 51);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp24;
    USE(tmp24);
    tmp24 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp23});
    TNode<UintPtrT> tmp25;
    USE(tmp25);
    tmp25 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp22});
    TNode<BoolT> tmp26;
    USE(tmp26);
    tmp26 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp24}, TNode<UintPtrT>{tmp25});
    ca_.Branch(tmp26, &block10, &block11, tmp12, tmp13, tmp14, tmp15, tmp18, tmp18, tmp19, tmp22, tmp23, tmp18, tmp19, tmp22, tmp23, tmp23);
  }

  if (block10.is_used()) {
    TNode<Context> tmp27;
    TNode<JSRegExp> tmp28;
    TNode<String> tmp29;
    TNode<Smi> tmp30;
    TNode<RegExpMatchInfo> tmp31;
    TNode<RegExpMatchInfo> tmp32;
    TNode<IntPtrT> tmp33;
    TNode<IntPtrT> tmp34;
    TNode<IntPtrT> tmp35;
    TNode<HeapObject> tmp36;
    TNode<IntPtrT> tmp37;
    TNode<IntPtrT> tmp38;
    TNode<IntPtrT> tmp39;
    TNode<IntPtrT> tmp40;
    ca_.Bind(&block10, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp41;
    USE(tmp41);
    tmp41 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp42;
    USE(tmp42);
    tmp42 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp40}, TNode<IntPtrT>{tmp41});
    TNode<IntPtrT> tmp43;
    USE(tmp43);
    tmp43 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp37}, TNode<IntPtrT>{tmp42});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp44;
    USE(tmp44);
    TNode<IntPtrT> tmp45;
    USE(tmp45);
    std::tie(tmp44, tmp45) = UnsafeNewReference20UT5ATSmi10HeapObject_1440(state_, TNode<HeapObject>{tmp36}, TNode<IntPtrT>{tmp43}).Flatten();
    ca_.Goto(&block9, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp44, tmp45);
  }

  if (block11.is_used()) {
    TNode<Context> tmp46;
    TNode<JSRegExp> tmp47;
    TNode<String> tmp48;
    TNode<Smi> tmp49;
    TNode<RegExpMatchInfo> tmp50;
    TNode<RegExpMatchInfo> tmp51;
    TNode<IntPtrT> tmp52;
    TNode<IntPtrT> tmp53;
    TNode<IntPtrT> tmp54;
    TNode<HeapObject> tmp55;
    TNode<IntPtrT> tmp56;
    TNode<IntPtrT> tmp57;
    TNode<IntPtrT> tmp58;
    TNode<IntPtrT> tmp59;
    ca_.Bind(&block11, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block8, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54);
  }

  if (block9.is_used()) {
    TNode<Context> tmp60;
    TNode<JSRegExp> tmp61;
    TNode<String> tmp62;
    TNode<Smi> tmp63;
    TNode<RegExpMatchInfo> tmp64;
    TNode<RegExpMatchInfo> tmp65;
    TNode<IntPtrT> tmp66;
    TNode<IntPtrT> tmp67;
    TNode<IntPtrT> tmp68;
    TNode<HeapObject> tmp69;
    TNode<IntPtrT> tmp70;
    TNode<IntPtrT> tmp71;
    TNode<IntPtrT> tmp72;
    TNode<IntPtrT> tmp73;
    TNode<HeapObject> tmp74;
    TNode<IntPtrT> tmp75;
    ca_.Bind(&block9, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 51);
    ca_.Goto(&block7, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp74, tmp75);
  }

  if (block8.is_used()) {
    TNode<Context> tmp76;
    TNode<JSRegExp> tmp77;
    TNode<String> tmp78;
    TNode<Smi> tmp79;
    TNode<RegExpMatchInfo> tmp80;
    TNode<RegExpMatchInfo> tmp81;
    TNode<IntPtrT> tmp82;
    TNode<IntPtrT> tmp83;
    TNode<IntPtrT> tmp84;
    ca_.Bind(&block8, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block7.is_used()) {
    TNode<Context> tmp85;
    TNode<JSRegExp> tmp86;
    TNode<String> tmp87;
    TNode<Smi> tmp88;
    TNode<RegExpMatchInfo> tmp89;
    TNode<RegExpMatchInfo> tmp90;
    TNode<IntPtrT> tmp91;
    TNode<IntPtrT> tmp92;
    TNode<IntPtrT> tmp93;
    TNode<HeapObject> tmp94;
    TNode<IntPtrT> tmp95;
    ca_.Bind(&block7, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    ca_.Goto(&block6, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp94, tmp95);
  }

  if (block6.is_used()) {
    TNode<Context> tmp96;
    TNode<JSRegExp> tmp97;
    TNode<String> tmp98;
    TNode<Smi> tmp99;
    TNode<RegExpMatchInfo> tmp100;
    TNode<RegExpMatchInfo> tmp101;
    TNode<IntPtrT> tmp102;
    TNode<IntPtrT> tmp103;
    TNode<HeapObject> tmp104;
    TNode<IntPtrT> tmp105;
    ca_.Bind(&block6, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105);
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 35);
    TNode<Object>tmp106 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp104, tmp105});
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 34);
    TNode<Smi> tmp107;
    USE(tmp107);
    tmp107 = UnsafeCast5ATSmi_1439(state_, TNode<Context>{tmp96}, TNode<Object>{tmp106});
    ca_.Goto(&block1, tmp96, tmp97, tmp98, tmp107);
  }

  if (block3.is_used()) {
    TNode<Context> tmp108;
    TNode<JSRegExp> tmp109;
    TNode<String> tmp110;
    TNode<Smi> tmp111;
    ca_.Bind(&block3, &tmp108, &tmp109, &tmp110, &tmp111);
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 39);
    RegExpBuiltinsAssembler(state_).FastStoreLastIndex(TNode<JSRegExp>{tmp109}, TNode<Smi>{tmp111});
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 40);
    TNode<Smi> tmp112;
    USE(tmp112);
    tmp112 = CodeStubAssembler(state_).SmiConstant(-1);
    ca_.Goto(&block1, tmp108, tmp109, tmp110, tmp112);
  }

  if (block1.is_used()) {
    TNode<Context> tmp113;
    TNode<JSRegExp> tmp114;
    TNode<String> tmp115;
    TNode<Object> tmp116;
    ca_.Bind(&block1, &tmp113, &tmp114, &tmp115, &tmp116);
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 12);
    ca_.Goto(&block13, tmp113, tmp114, tmp115, tmp116);
  }

    TNode<Context> tmp117;
    TNode<JSRegExp> tmp118;
    TNode<String> tmp119;
    TNode<Object> tmp120;
    ca_.Bind(&block13, &tmp117, &tmp118, &tmp119, &tmp120);
  return TNode<Object>{tmp120};
}

TNode<BoolT> IsFastRegExpResult_331(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_execResult) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, HeapObject> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_execResult);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 54);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    RegExpBuiltinsAssembler(state_).BranchIfFastRegExpResult(TNode<Context>{tmp0}, TNode<Object>{tmp1}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp1);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7, tmp0, tmp1, tmp1);
    }
  }

  if (block6.is_used()) {
    TNode<Context> tmp2;
    TNode<HeapObject> tmp3;
    TNode<HeapObject> tmp4;
    ca_.Bind(&block6, &tmp2, &tmp3, &tmp4);
    ca_.Goto(&block5, tmp2, tmp3);
  }

  if (block7.is_used()) {
    TNode<Context> tmp5;
    TNode<HeapObject> tmp6;
    TNode<HeapObject> tmp7;
    ca_.Bind(&block7, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block3, tmp5, tmp6);
  }

  if (block5.is_used()) {
    TNode<Context> tmp8;
    TNode<HeapObject> tmp9;
    ca_.Bind(&block5, &tmp8, &tmp9);
    TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    ca_.Goto(&block1, tmp8, tmp9, tmp10);
  }

  if (block3.is_used()) {
    TNode<Context> tmp11;
    TNode<HeapObject> tmp12;
    ca_.Bind(&block3, &tmp11, &tmp12);
    TNode<BoolT> tmp13;
    USE(tmp13);
    tmp13 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    ca_.Goto(&block1, tmp11, tmp12, tmp13);
  }

  if (block1.is_used()) {
    TNode<Context> tmp14;
    TNode<HeapObject> tmp15;
    TNode<BoolT> tmp16;
    ca_.Bind(&block1, &tmp14, &tmp15, &tmp16);
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 52);
    ca_.Goto(&block8, tmp14, tmp15, tmp16);
  }

    TNode<Context> tmp17;
    TNode<HeapObject> tmp18;
    TNode<BoolT> tmp19;
    ca_.Bind(&block8, &tmp17, &tmp18, &tmp19);
  return TNode<BoolT>{tmp19};
}

TNode<Object> RegExpPrototypeSearchBodySlow_332(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_regexp, TNode<String> p_string) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, String> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, String, Object, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, String, Object, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, String, Object, Smi, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, String, Object, Smi, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, String, Object, Smi, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, String, Object, Smi, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, String, Object, Smi, Object, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, String, Object, Smi, Object, Object, Object, JSRegExpResult> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, String, Object, Smi, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, String, Object, Smi, Object, Object, JSRegExpResult> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, String, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, String, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_regexp, p_string);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSReceiver> tmp1;
    TNode<String> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 60);
    TNode<Object> tmp3;
    USE(tmp3);
    tmp3 = RegExpBuiltinsAssembler(state_).SlowLoadLastIndex(TNode<Context>{tmp0}, TNode<Object>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 61);
    TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 64);
    TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = SameValue_244(state_, TNode<Object>{tmp3}, TNode<Object>{tmp4});
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp5});
    ca_.Branch(tmp6, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block2.is_used()) {
    TNode<Context> tmp7;
    TNode<JSReceiver> tmp8;
    TNode<String> tmp9;
    TNode<Object> tmp10;
    TNode<Smi> tmp11;
    ca_.Bind(&block2, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 65);
    RegExpBuiltinsAssembler(state_).SlowStoreLastIndex(TNode<Context>{tmp7}, TNode<Object>{tmp8}, TNode<Object>{tmp11});
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 64);
    ca_.Goto(&block3, tmp7, tmp8, tmp9, tmp10, tmp11);
  }

  if (block3.is_used()) {
    TNode<Context> tmp12;
    TNode<JSReceiver> tmp13;
    TNode<String> tmp14;
    TNode<Object> tmp15;
    TNode<Smi> tmp16;
    ca_.Bind(&block3, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 69);
    TNode<Object> tmp17;
    USE(tmp17);
    tmp17 = RegExpBuiltinsAssembler(state_).RegExpExec(TNode<Context>{tmp12}, TNode<JSReceiver>{tmp13}, TNode<String>{tmp14});
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 72);
    TNode<Object> tmp18;
    USE(tmp18);
    tmp18 = RegExpBuiltinsAssembler(state_).SlowLoadLastIndex(TNode<Context>{tmp12}, TNode<Object>{tmp13});
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 73);
    TNode<BoolT> tmp19;
    USE(tmp19);
    tmp19 = SameValue_244(state_, TNode<Object>{tmp18}, TNode<Object>{tmp15});
    TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp19});
    ca_.Branch(tmp20, &block4, &block5, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18);
  }

  if (block4.is_used()) {
    TNode<Context> tmp21;
    TNode<JSReceiver> tmp22;
    TNode<String> tmp23;
    TNode<Object> tmp24;
    TNode<Smi> tmp25;
    TNode<Object> tmp26;
    TNode<Object> tmp27;
    ca_.Bind(&block4, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 74);
    RegExpBuiltinsAssembler(state_).SlowStoreLastIndex(TNode<Context>{tmp21}, TNode<Object>{tmp22}, TNode<Object>{tmp24});
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 73);
    ca_.Goto(&block5, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27);
  }

  if (block5.is_used()) {
    TNode<Context> tmp28;
    TNode<JSReceiver> tmp29;
    TNode<String> tmp30;
    TNode<Object> tmp31;
    TNode<Smi> tmp32;
    TNode<Object> tmp33;
    TNode<Object> tmp34;
    ca_.Bind(&block5, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 78);
    TNode<Oddball> tmp35;
    USE(tmp35);
    tmp35 = Null_63(state_);
    TNode<BoolT> tmp36;
    USE(tmp36);
    tmp36 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp33}, TNode<HeapObject>{tmp35});
    ca_.Branch(tmp36, &block6, &block7, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34);
  }

  if (block6.is_used()) {
    TNode<Context> tmp37;
    TNode<JSReceiver> tmp38;
    TNode<String> tmp39;
    TNode<Object> tmp40;
    TNode<Smi> tmp41;
    TNode<Object> tmp42;
    TNode<Object> tmp43;
    ca_.Bind(&block6, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 79);
    TNode<Smi> tmp44;
    USE(tmp44);
    tmp44 = CodeStubAssembler(state_).SmiConstant(-1);
    ca_.Goto(&block1, tmp37, tmp38, tmp39, tmp44);
  }

  if (block7.is_used()) {
    TNode<Context> tmp45;
    TNode<JSReceiver> tmp46;
    TNode<String> tmp47;
    TNode<Object> tmp48;
    TNode<Smi> tmp49;
    TNode<Object> tmp50;
    TNode<Object> tmp51;
    ca_.Bind(&block7, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51);
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 83);
    TNode<JSRegExpResult> tmp52;
    USE(tmp52);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp52 = Cast20ATFastJSRegExpResult_1497(state_, TNode<Context>{tmp45}, TNode<Object>{tmp50}, &label0);
    ca_.Goto(&block10, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp50, tmp52);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block11, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp50);
    }
  }

  if (block11.is_used()) {
    TNode<Context> tmp53;
    TNode<JSReceiver> tmp54;
    TNode<String> tmp55;
    TNode<Object> tmp56;
    TNode<Smi> tmp57;
    TNode<Object> tmp58;
    TNode<Object> tmp59;
    TNode<Object> tmp60;
    ca_.Bind(&block11, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60);
    ca_.Goto(&block9, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59);
  }

  if (block10.is_used()) {
    TNode<Context> tmp61;
    TNode<JSReceiver> tmp62;
    TNode<String> tmp63;
    TNode<Object> tmp64;
    TNode<Smi> tmp65;
    TNode<Object> tmp66;
    TNode<Object> tmp67;
    TNode<Object> tmp68;
    TNode<JSRegExpResult> tmp69;
    ca_.Bind(&block10, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69);
    ca_.Goto(&block8, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp69);
  }

  if (block9.is_used()) {
    TNode<Context> tmp70;
    TNode<JSReceiver> tmp71;
    TNode<String> tmp72;
    TNode<Object> tmp73;
    TNode<Smi> tmp74;
    TNode<Object> tmp75;
    TNode<Object> tmp76;
    ca_.Bind(&block9, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76);
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 84);
    TNode<Object> tmp77;
    USE(tmp77);
    tmp77 = FromConstexpr90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol18ATconstexpr_string_171(state_, "index");
    TNode<Object> tmp78;
    USE(tmp78);
    tmp78 = CodeStubAssembler(state_).GetProperty(TNode<Context>{tmp70}, TNode<Object>{tmp75}, TNode<Object>{tmp77});
    ca_.Goto(&block1, tmp70, tmp71, tmp72, tmp78);
  }

  if (block8.is_used()) {
    TNode<Context> tmp79;
    TNode<JSReceiver> tmp80;
    TNode<String> tmp81;
    TNode<Object> tmp82;
    TNode<Smi> tmp83;
    TNode<Object> tmp84;
    TNode<Object> tmp85;
    TNode<JSRegExpResult> tmp86;
    ca_.Bind(&block8, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86);
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 85);
    TNode<IntPtrT> tmp87 = ca_.IntPtrConstant(JSRegExpResult::kIndexOffset);
    USE(tmp87);
    TNode<Object>tmp88 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp86, tmp87});
    ca_.Goto(&block1, tmp79, tmp80, tmp81, tmp88);
  }

  if (block1.is_used()) {
    TNode<Context> tmp89;
    TNode<JSReceiver> tmp90;
    TNode<String> tmp91;
    TNode<Object> tmp92;
    ca_.Bind(&block1, &tmp89, &tmp90, &tmp91, &tmp92);
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 57);
    ca_.Goto(&block12, tmp89, tmp90, tmp91, tmp92);
  }

    TNode<Context> tmp93;
    TNode<JSReceiver> tmp94;
    TNode<String> tmp95;
    TNode<Object> tmp96;
    ca_.Bind(&block12, &tmp93, &tmp94, &tmp95, &tmp96);
  return TNode<Object>{tmp96};
}

TF_BUILTIN(RegExpSearchFast, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSRegExp> parameter1 = UncheckedCast<JSRegExp>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  TNode<String> parameter2 = UncheckedCast<String>(Parameter(Descriptor::kString));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSRegExp> tmp1;
    TNode<String> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 93);
    TNode<Object> tmp3;
    USE(tmp3);
    tmp3 = RegExpPrototypeSearchBodyFast_330(state_, TNode<Context>{tmp0}, TNode<JSRegExp>{tmp1}, TNode<String>{tmp2});
    CodeStubAssembler(state_).Return(tmp3);
  }
}

TF_BUILTIN(RegExpPrototypeSearch, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kString));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSReceiver, String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSReceiver, String> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 101);
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 100);
    CodeStubAssembler(state_).ThrowIfNotJSReceiver(TNode<Context>{tmp0}, TNode<Object>{tmp1}, MessageTemplate::kIncompatibleMethodReceiver, "RegExp.prototype.@@search");
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 102);
    TNode<JSReceiver> tmp3;
    USE(tmp3);
    tmp3 = UnsafeCast10JSReceiver_1486(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 103);
    TNode<String> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 105);
    TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = IsFastRegExpPermissive_334(state_, TNode<Context>{tmp0}, TNode<HeapObject>{tmp3});
    ca_.Branch(tmp5, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    TNode<Context> tmp6;
    TNode<Object> tmp7;
    TNode<Object> tmp8;
    TNode<JSReceiver> tmp9;
    TNode<String> tmp10;
    ca_.Bind(&block1, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 108);
    TNode<JSRegExp> tmp11;
    USE(tmp11);
    tmp11 = UnsafeCast8JSRegExp_1498(state_, TNode<Context>{tmp6}, TNode<Object>{tmp9});
    TNode<Object> tmp12;
    tmp12 = CodeStubAssembler(state_).CallBuiltin(Builtins::kRegExpSearchFast, tmp6, tmp11, tmp10);
    USE(tmp12);
    CodeStubAssembler(state_).Return(tmp12);
  }

  if (block2.is_used()) {
    TNode<Context> tmp13;
    TNode<Object> tmp14;
    TNode<Object> tmp15;
    TNode<JSReceiver> tmp16;
    TNode<String> tmp17;
    ca_.Bind(&block2, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 110);
    TNode<Object> tmp18;
    USE(tmp18);
    tmp18 = RegExpPrototypeSearchBodySlow_332(state_, TNode<Context>{tmp13}, TNode<JSReceiver>{tmp16}, TNode<String>{tmp17});
    CodeStubAssembler(state_).Return(tmp18);
  }
}

TNode<JSRegExpResult> Cast20ATFastJSRegExpResult_1497(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSRegExpResult> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSRegExpResult> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSRegExpResult> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 2068);
    TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp6;
    TNode<Object> tmp7;
    TNode<Object> tmp8;
    TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    TNode<JSRegExpResult> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = Cast20ATFastJSRegExpResult_131(state_, TNode<Context>{tmp6}, TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    TNode<Context> tmp11;
    TNode<Object> tmp12;
    TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    TNode<Context> tmp14;
    TNode<Object> tmp15;
    TNode<HeapObject> tmp16;
    TNode<JSRegExpResult> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    TNode<Context> tmp18;
    TNode<Object> tmp19;
    TNode<JSRegExpResult> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 83);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<JSRegExpResult> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return TNode<JSRegExpResult>{tmp23};
}

TNode<JSRegExp> UnsafeCast8JSRegExp_1498(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSRegExp> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSRegExp> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 2846);
    TNode<JSRegExp> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    TNode<JSRegExp> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/regexp-search.tq", 108);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    TNode<Context> tmp6;
    TNode<Object> tmp7;
    TNode<JSRegExp> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return TNode<JSRegExp>{tmp8};
}

}  // namespace internal
}  // namespace v8

