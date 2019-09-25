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

TF_BUILTIN(RegExpPrototypeTest, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kString));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSReceiver, String> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSReceiver, String, JSRegExp, String> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSReceiver, String, JSRegExp, String, RegExpMatchInfo> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSReceiver, String> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSReceiver, String, RegExpMatchInfo> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSReceiver, String> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/regexp-test.tq", 14);
    TNode<JSReceiver> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = Cast10JSReceiver_1427(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp1, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp1);
    }
  }

  if (block4.is_used()) {
    TNode<Context> tmp4;
    TNode<Object> tmp5;
    TNode<Object> tmp6;
    TNode<Object> tmp7;
    ca_.Bind(&block4, &tmp4, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block2, tmp4, tmp5, tmp6);
  }

  if (block3.is_used()) {
    TNode<Context> tmp8;
    TNode<Object> tmp9;
    TNode<Object> tmp10;
    TNode<Object> tmp11;
    TNode<JSReceiver> tmp12;
    ca_.Bind(&block3, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.Goto(&block1, tmp8, tmp9, tmp10, tmp12);
  }

  if (block2.is_used()) {
    TNode<Context> tmp13;
    TNode<Object> tmp14;
    TNode<Object> tmp15;
    ca_.Bind(&block2, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../src/builtins/regexp-test.tq", 15);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp13}, MessageTemplate::kIncompatibleMethodReceiver, "RegExp.prototype.test");
  }

  if (block1.is_used()) {
    TNode<Context> tmp16;
    TNode<Object> tmp17;
    TNode<Object> tmp18;
    TNode<JSReceiver> tmp19;
    ca_.Bind(&block1, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.SetSourcePosition("../../src/builtins/regexp-test.tq", 16);
    TNode<String> tmp20;
    USE(tmp20);
    tmp20 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{tmp16}, TNode<Object>{tmp18});
    ca_.SetSourcePosition("../../src/builtins/regexp-test.tq", 17);
    TNode<BoolT> tmp21;
    USE(tmp21);
    tmp21 = IsFastRegExpPermissive_334(state_, TNode<Context>{tmp16}, TNode<HeapObject>{tmp19});
    ca_.Branch(tmp21, &block5, &block6, tmp16, tmp17, tmp18, tmp19, tmp20);
  }

  if (block5.is_used()) {
    TNode<Context> tmp22;
    TNode<Object> tmp23;
    TNode<Object> tmp24;
    TNode<JSReceiver> tmp25;
    TNode<String> tmp26;
    ca_.Bind(&block5, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.SetSourcePosition("../../src/builtins/regexp-test.tq", 19);
    TNode<JSRegExp> tmp27;
    USE(tmp27);
    tmp27 = UnsafeCast8JSRegExp_1492(state_, TNode<Context>{tmp22}, TNode<Object>{tmp25});
    ca_.SetSourcePosition("../../src/builtins/regexp-test.tq", 18);
    TNode<RegExpMatchInfo> tmp28;
    USE(tmp28);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp28 = RegExpBuiltinsAssembler(state_).RegExpPrototypeExecBodyWithoutResultFast(TNode<Context>{tmp22}, TNode<JSRegExp>{tmp27}, TNode<String>{tmp26}, &label0);
    ca_.Goto(&block9, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp26, tmp28);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp26);
    }
  }

  if (block10.is_used()) {
    TNode<Context> tmp29;
    TNode<Object> tmp30;
    TNode<Object> tmp31;
    TNode<JSReceiver> tmp32;
    TNode<String> tmp33;
    TNode<JSRegExp> tmp34;
    TNode<String> tmp35;
    ca_.Bind(&block10, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    ca_.Goto(&block8, tmp29, tmp30, tmp31, tmp32, tmp33);
  }

  if (block9.is_used()) {
    TNode<Context> tmp36;
    TNode<Object> tmp37;
    TNode<Object> tmp38;
    TNode<JSReceiver> tmp39;
    TNode<String> tmp40;
    TNode<JSRegExp> tmp41;
    TNode<String> tmp42;
    TNode<RegExpMatchInfo> tmp43;
    ca_.Bind(&block9, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.Goto(&block7, tmp36, tmp37, tmp38, tmp39, tmp40, tmp43);
  }

  if (block8.is_used()) {
    TNode<Context> tmp44;
    TNode<Object> tmp45;
    TNode<Object> tmp46;
    TNode<JSReceiver> tmp47;
    TNode<String> tmp48;
    ca_.Bind(&block8, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48);
    ca_.SetSourcePosition("../../src/builtins/regexp-test.tq", 20);
    TNode<Oddball> tmp49;
    USE(tmp49);
    tmp49 = False_66(state_);
    CodeStubAssembler(state_).Return(tmp49);
  }

  if (block7.is_used()) {
    TNode<Context> tmp50;
    TNode<Object> tmp51;
    TNode<Object> tmp52;
    TNode<JSReceiver> tmp53;
    TNode<String> tmp54;
    TNode<RegExpMatchInfo> tmp55;
    ca_.Bind(&block7, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.SetSourcePosition("../../src/builtins/regexp-test.tq", 18);
    ca_.SetSourcePosition("../../src/builtins/regexp-test.tq", 21);
    TNode<Oddball> tmp56;
    USE(tmp56);
    tmp56 = True_65(state_);
    CodeStubAssembler(state_).Return(tmp56);
  }

  if (block6.is_used()) {
    TNode<Context> tmp57;
    TNode<Object> tmp58;
    TNode<Object> tmp59;
    TNode<JSReceiver> tmp60;
    TNode<String> tmp61;
    ca_.Bind(&block6, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    ca_.SetSourcePosition("../../src/builtins/regexp-test.tq", 23);
    TNode<Object> tmp62;
    USE(tmp62);
    tmp62 = RegExpBuiltinsAssembler(state_).RegExpExec(TNode<Context>{tmp57}, TNode<JSReceiver>{tmp60}, TNode<String>{tmp61});
    ca_.SetSourcePosition("../../src/builtins/regexp-test.tq", 24);
    TNode<Oddball> tmp63;
    USE(tmp63);
    tmp63 = Null_63(state_);
    TNode<BoolT> tmp64;
    USE(tmp64);
    tmp64 = CodeStubAssembler(state_).TaggedNotEqual(TNode<Object>{tmp62}, TNode<HeapObject>{tmp63});
    TNode<Oddball> tmp65;
    USE(tmp65);
    tmp65 = CodeStubAssembler(state_).SelectBooleanConstant(TNode<BoolT>{tmp64});
    CodeStubAssembler(state_).Return(tmp65);
  }
}

TF_BUILTIN(RegExpPrototypeTestFast, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSRegExp> parameter1 = UncheckedCast<JSRegExp>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  TNode<String> parameter2 = UncheckedCast<String>(Parameter(Descriptor::kString));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSRegExp, String> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSRegExp, String, RegExpMatchInfo> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, RegExpMatchInfo> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSRegExp> tmp1;
    TNode<String> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/regexp-test.tq", 33);
    TNode<RegExpMatchInfo> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = RegExpBuiltinsAssembler(state_).RegExpPrototypeExecBodyWithoutResultFast(TNode<Context>{tmp0}, TNode<JSRegExp>{tmp1}, TNode<String>{tmp2}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp1, tmp2, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp1, tmp2);
    }
  }

  if (block4.is_used()) {
    TNode<Context> tmp4;
    TNode<JSRegExp> tmp5;
    TNode<String> tmp6;
    TNode<JSRegExp> tmp7;
    TNode<String> tmp8;
    ca_.Bind(&block4, &tmp4, &tmp5, &tmp6, &tmp7, &tmp8);
    ca_.Goto(&block2, tmp4, tmp5, tmp6);
  }

  if (block3.is_used()) {
    TNode<Context> tmp9;
    TNode<JSRegExp> tmp10;
    TNode<String> tmp11;
    TNode<JSRegExp> tmp12;
    TNode<String> tmp13;
    TNode<RegExpMatchInfo> tmp14;
    ca_.Bind(&block3, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.Goto(&block1, tmp9, tmp10, tmp11, tmp14);
  }

  if (block2.is_used()) {
    TNode<Context> tmp15;
    TNode<JSRegExp> tmp16;
    TNode<String> tmp17;
    ca_.Bind(&block2, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../src/builtins/regexp-test.tq", 34);
    TNode<Oddball> tmp18;
    USE(tmp18);
    tmp18 = False_66(state_);
    CodeStubAssembler(state_).Return(tmp18);
  }

  if (block1.is_used()) {
    TNode<Context> tmp19;
    TNode<JSRegExp> tmp20;
    TNode<String> tmp21;
    TNode<RegExpMatchInfo> tmp22;
    ca_.Bind(&block1, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.SetSourcePosition("../../src/builtins/regexp-test.tq", 33);
    ca_.SetSourcePosition("../../src/builtins/regexp-test.tq", 35);
    TNode<Oddball> tmp23;
    USE(tmp23);
    tmp23 = True_65(state_);
    CodeStubAssembler(state_).Return(tmp23);
  }
}

}  // namespace internal
}  // namespace v8

