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

TF_BUILTIN(RegExpSplit, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSRegExp> parameter1 = UncheckedCast<JSRegExp>(Parameter(Descriptor::kRegexp));
  USE(parameter1);
  TNode<String> parameter2 = UncheckedCast<String>(Parameter(Descriptor::kString));
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kLimit));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSRegExp> tmp1;
    TNode<String> tmp2;
    TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/regexp-split.tq", 24);
    ca_.SetSourcePosition("../../src/builtins/regexp-split.tq", 31);
    TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_64(state_);
    TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp3}, TNode<HeapObject>{tmp4});
    ca_.Branch(tmp5, &block1, &block2, tmp0, tmp1, tmp2, tmp3, ca_.Uninitialized<Smi>());
  }

  if (block1.is_used()) {
    TNode<Context> tmp6;
    TNode<JSRegExp> tmp7;
    TNode<String> tmp8;
    TNode<Object> tmp9;
    TNode<Smi> tmp10;
    ca_.Bind(&block1, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../src/builtins/regexp-split.tq", 34);
    TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = CodeStubAssembler(state_).SmiConstant(Smi::kMaxValue);
    ca_.SetSourcePosition("../../src/builtins/regexp-split.tq", 31);
    ca_.Goto(&block3, tmp6, tmp7, tmp8, tmp9, tmp11);
  }

  if (block2.is_used()) {
    TNode<Context> tmp12;
    TNode<JSRegExp> tmp13;
    TNode<String> tmp14;
    TNode<Object> tmp15;
    TNode<Smi> tmp16;
    ca_.Bind(&block2, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.SetSourcePosition("../../src/builtins/regexp-split.tq", 35);
    TNode<BoolT> tmp17;
    USE(tmp17);
    tmp17 = CodeStubAssembler(state_).TaggedIsPositiveSmi(TNode<Object>{tmp15});
    TNode<BoolT> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp17});
    ca_.Branch(tmp18, &block4, &block5, tmp12, tmp13, tmp14, tmp15, tmp16);
  }

  if (block4.is_used()) {
    TNode<Context> tmp19;
    TNode<JSRegExp> tmp20;
    TNode<String> tmp21;
    TNode<Object> tmp22;
    TNode<Smi> tmp23;
    ca_.Bind(&block4, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../src/builtins/regexp-split.tq", 36);
    TNode<Object> tmp24;
    tmp24 = CodeStubAssembler(state_).CallRuntime(Runtime::kRegExpSplit, tmp19, tmp20, tmp21, tmp22); 
    USE(tmp24);
    CodeStubAssembler(state_).Return(tmp24);
  }

  if (block5.is_used()) {
    TNode<Context> tmp25;
    TNode<JSRegExp> tmp26;
    TNode<String> tmp27;
    TNode<Object> tmp28;
    TNode<Smi> tmp29;
    ca_.Bind(&block5, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    ca_.SetSourcePosition("../../src/builtins/regexp-split.tq", 38);
    TNode<Smi> tmp30;
    USE(tmp30);
    tmp30 = UnsafeCast5ATSmi_1439(state_, TNode<Context>{tmp25}, TNode<Object>{tmp28});
    ca_.SetSourcePosition("../../src/builtins/regexp-split.tq", 35);
    ca_.Goto(&block6, tmp25, tmp26, tmp27, tmp28, tmp30);
  }

  if (block6.is_used()) {
    TNode<Context> tmp31;
    TNode<JSRegExp> tmp32;
    TNode<String> tmp33;
    TNode<Object> tmp34;
    TNode<Smi> tmp35;
    ca_.Bind(&block6, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    ca_.SetSourcePosition("../../src/builtins/regexp-split.tq", 31);
    ca_.Goto(&block3, tmp31, tmp32, tmp33, tmp34, tmp35);
  }

  if (block3.is_used()) {
    TNode<Context> tmp36;
    TNode<JSRegExp> tmp37;
    TNode<String> tmp38;
    TNode<Object> tmp39;
    TNode<Smi> tmp40;
    ca_.Bind(&block3, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../src/builtins/regexp-split.tq", 46);
    TNode<BoolT> tmp41;
    USE(tmp41);
    tmp41 = RegExpBuiltinsAssembler(state_).FastFlagGetter(TNode<JSRegExp>{tmp37}, JSRegExp::kSticky);
    ca_.Branch(tmp41, &block7, &block8, tmp36, tmp37, tmp38, tmp39, tmp40);
  }

  if (block7.is_used()) {
    TNode<Context> tmp42;
    TNode<JSRegExp> tmp43;
    TNode<String> tmp44;
    TNode<Object> tmp45;
    TNode<Smi> tmp46;
    ca_.Bind(&block7, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46);
    ca_.SetSourcePosition("../../src/builtins/regexp-split.tq", 47);
    TNode<Object> tmp47;
    tmp47 = CodeStubAssembler(state_).CallRuntime(Runtime::kRegExpSplit, tmp42, tmp43, tmp44, tmp46); 
    USE(tmp47);
    CodeStubAssembler(state_).Return(tmp47);
  }

  if (block8.is_used()) {
    TNode<Context> tmp48;
    TNode<JSRegExp> tmp49;
    TNode<String> tmp50;
    TNode<Object> tmp51;
    TNode<Smi> tmp52;
    ca_.Bind(&block8, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52);
    ca_.SetSourcePosition("../../src/builtins/regexp-split.tq", 51);
    TNode<JSArray> tmp53;
    USE(tmp53);
    tmp53 = RegExpBuiltinsAssembler(state_).RegExpPrototypeSplitBody(TNode<Context>{tmp48}, TNode<JSRegExp>{tmp49}, TNode<String>{tmp50}, TNode<Smi>{tmp52});
    CodeStubAssembler(state_).Return(tmp53);
  }
}

TF_BUILTIN(RegExpPrototypeSplit, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, String, Object, JSReceiver> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, String, Object, JSReceiver, JSRegExp> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, String, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, String, Object, JSRegExp> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/regexp-split.tq", 59);
    ca_.SetSourcePosition("../../src/builtins/regexp-split.tq", 58);
    CodeStubAssembler(state_).ThrowIfNotJSReceiver(TNode<Context>{tmp3}, TNode<Object>{tmp4}, MessageTemplate::kIncompatibleMethodReceiver, "RegExp.prototype.@@split");
    ca_.SetSourcePosition("../../src/builtins/regexp-split.tq", 60);
    TNode<JSReceiver> tmp5;
    USE(tmp5);
    tmp5 = UnsafeCast10JSReceiver_1486(state_, TNode<Context>{tmp3}, TNode<Object>{tmp4});
    ca_.SetSourcePosition("../../src/builtins/regexp-split.tq", 61);
    TNode<IntPtrT> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp0}, TNode<RawPtrT>{tmp1}, TNode<IntPtrT>{tmp2}}, TNode<IntPtrT>{tmp6});
    TNode<String> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{tmp3}, TNode<Object>{tmp7});
    ca_.SetSourcePosition("../../src/builtins/regexp-split.tq", 62);
    TNode<IntPtrT> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp0}, TNode<RawPtrT>{tmp1}, TNode<IntPtrT>{tmp2}}, TNode<IntPtrT>{tmp9});
    ca_.SetSourcePosition("../../src/builtins/regexp-split.tq", 67);
    TNode<JSRegExp> tmp11;
    USE(tmp11);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp11 = Cast14ATFastJSRegExp_136(state_, TNode<Context>{tmp3}, TNode<HeapObject>{tmp5}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp8, tmp10, tmp5, tmp11);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp8, tmp10, tmp5);
    }
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp12;
    TNode<RawPtrT> tmp13;
    TNode<IntPtrT> tmp14;
    TNode<Context> tmp15;
    TNode<Object> tmp16;
    TNode<JSReceiver> tmp17;
    TNode<String> tmp18;
    TNode<Object> tmp19;
    TNode<JSReceiver> tmp20;
    ca_.Bind(&block4, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.Goto(&block2, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp21;
    TNode<RawPtrT> tmp22;
    TNode<IntPtrT> tmp23;
    TNode<Context> tmp24;
    TNode<Object> tmp25;
    TNode<JSReceiver> tmp26;
    TNode<String> tmp27;
    TNode<Object> tmp28;
    TNode<JSReceiver> tmp29;
    TNode<JSRegExp> tmp30;
    ca_.Bind(&block3, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.Goto(&block1, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp30);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp31;
    TNode<RawPtrT> tmp32;
    TNode<IntPtrT> tmp33;
    TNode<Context> tmp34;
    TNode<Object> tmp35;
    TNode<JSReceiver> tmp36;
    TNode<String> tmp37;
    TNode<Object> tmp38;
    ca_.Bind(&block2, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38);
    ca_.SetSourcePosition("../../src/builtins/regexp-split.tq", 68);
    TNode<Object> tmp39;
    tmp39 = CodeStubAssembler(state_).CallRuntime(Runtime::kRegExpSplit, tmp34, tmp36, tmp37, tmp38); 
    USE(tmp39);
    arguments.PopAndReturn(tmp39);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp40;
    TNode<RawPtrT> tmp41;
    TNode<IntPtrT> tmp42;
    TNode<Context> tmp43;
    TNode<Object> tmp44;
    TNode<JSReceiver> tmp45;
    TNode<String> tmp46;
    TNode<Object> tmp47;
    TNode<JSRegExp> tmp48;
    ca_.Bind(&block1, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48);
    ca_.SetSourcePosition("../../src/builtins/regexp-split.tq", 69);
    TNode<Object> tmp49;
    tmp49 = CodeStubAssembler(state_).CallBuiltin(Builtins::kRegExpSplit, tmp43, tmp48, tmp46, tmp47);
    USE(tmp49);
    arguments.PopAndReturn(tmp49);
  }
}

}  // namespace internal
}  // namespace v8

