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

TNode<Object> RegExpPrototypeExecBodyFast_322(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_receiver, TNode<String> p_string) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, String> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, String, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, String, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_receiver, p_string);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSReceiver> tmp1;
    TNode<String> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/regexp-exec.tq", 14);
    TNode<Object> tmp3;
    USE(tmp3);
    tmp3 = RegExpBuiltinsAssembler(state_).RegExpPrototypeExecBody(TNode<Context>{tmp0}, TNode<JSReceiver>{tmp1}, TNode<String>{tmp2}, true);
    ca_.Goto(&block1, tmp0, tmp1, tmp2, tmp3);
  }

  if (block1.is_used()) {
    TNode<Context> tmp4;
    TNode<JSReceiver> tmp5;
    TNode<String> tmp6;
    TNode<Object> tmp7;
    ca_.Bind(&block1, &tmp4, &tmp5, &tmp6, &tmp7);
    ca_.SetSourcePosition("../../src/builtins/regexp-exec.tq", 12);
    ca_.Goto(&block2, tmp4, tmp5, tmp6, tmp7);
  }

    TNode<Context> tmp8;
    TNode<JSReceiver> tmp9;
    TNode<String> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block2, &tmp8, &tmp9, &tmp10, &tmp11);
  return TNode<Object>{tmp11};
}

TNode<Object> RegExpPrototypeExecBodySlow_323(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_receiver, TNode<String> p_string) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, String> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, String, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, String, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_receiver, p_string);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSReceiver> tmp1;
    TNode<String> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/regexp-exec.tq", 19);
    TNode<Object> tmp3;
    USE(tmp3);
    tmp3 = RegExpBuiltinsAssembler(state_).RegExpPrototypeExecBody(TNode<Context>{tmp0}, TNode<JSReceiver>{tmp1}, TNode<String>{tmp2}, false);
    ca_.Goto(&block1, tmp0, tmp1, tmp2, tmp3);
  }

  if (block1.is_used()) {
    TNode<Context> tmp4;
    TNode<JSReceiver> tmp5;
    TNode<String> tmp6;
    TNode<Object> tmp7;
    ca_.Bind(&block1, &tmp4, &tmp5, &tmp6, &tmp7);
    ca_.SetSourcePosition("../../src/builtins/regexp-exec.tq", 17);
    ca_.Goto(&block2, tmp4, tmp5, tmp6, tmp7);
  }

    TNode<Context> tmp8;
    TNode<JSReceiver> tmp9;
    TNode<String> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block2, &tmp8, &tmp9, &tmp10, &tmp11);
  return TNode<Object>{tmp11};
}

TF_BUILTIN(RegExpPrototypeExecSlow, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSRegExp> parameter1 = UncheckedCast<JSRegExp>(Parameter(Descriptor::kRegexp));
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
    ca_.SetSourcePosition("../../src/builtins/regexp-exec.tq", 26);
    TNode<Object> tmp3;
    USE(tmp3);
    tmp3 = RegExpPrototypeExecBodySlow_323(state_, TNode<Context>{tmp0}, TNode<JSReceiver>{tmp1}, TNode<String>{tmp2});
    CodeStubAssembler(state_).Return(tmp3);
  }
}

TF_BUILTIN(RegExpPrototypeExec, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kString));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSRegExp> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSRegExp> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSRegExp, String> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSRegExp, String> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSRegExp, String, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSRegExp, String, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/regexp-exec.tq", 37);
    TNode<JSRegExp> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = Cast8JSRegExp_1496(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, &label0);
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
    TNode<JSRegExp> tmp12;
    ca_.Bind(&block3, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.Goto(&block1, tmp8, tmp9, tmp10, tmp12);
  }

  if (block2.is_used()) {
    TNode<Context> tmp13;
    TNode<Object> tmp14;
    TNode<Object> tmp15;
    ca_.Bind(&block2, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../src/builtins/regexp-exec.tq", 38);
    ca_.SetSourcePosition("../../src/builtins/regexp-exec.tq", 37);
    TNode<Object> tmp16;
    USE(tmp16);
    tmp16 = FromConstexpr20UT5ATSmi10HeapObject18ATconstexpr_string_170(state_, "RegExp.prototype.exec");
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp13}, MessageTemplate::kIncompatibleMethodReceiver, TNode<Object>{tmp16}, TNode<Object>{tmp14});
  }

  if (block1.is_used()) {
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    TNode<Object> tmp19;
    TNode<JSRegExp> tmp20;
    ca_.Bind(&block1, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/regexp-exec.tq", 39);
    TNode<String> tmp21;
    USE(tmp21);
    tmp21 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{tmp17}, TNode<Object>{tmp19});
    ca_.SetSourcePosition("../../src/builtins/regexp-exec.tq", 41);
    TNode<BoolT> tmp22;
    USE(tmp22);
    tmp22 = RegExpBuiltinsAssembler(state_).IsFastRegExpNoPrototype(TNode<Context>{tmp17}, TNode<Object>{tmp20});
    ca_.Branch(tmp22, &block5, &block6, tmp17, tmp18, tmp19, tmp20, tmp21);
  }

  if (block5.is_used()) {
    TNode<Context> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    TNode<JSRegExp> tmp26;
    TNode<String> tmp27;
    ca_.Bind(&block5, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../src/builtins/regexp-exec.tq", 42);
    TNode<Object> tmp28;
    USE(tmp28);
    tmp28 = RegExpPrototypeExecBodyFast_322(state_, TNode<Context>{tmp23}, TNode<JSReceiver>{tmp26}, TNode<String>{tmp27});
    ca_.SetSourcePosition("../../src/builtins/regexp-exec.tq", 41);
    ca_.Goto(&block8, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28);
  }

  if (block6.is_used()) {
    TNode<Context> tmp29;
    TNode<Object> tmp30;
    TNode<Object> tmp31;
    TNode<JSRegExp> tmp32;
    TNode<String> tmp33;
    ca_.Bind(&block6, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../src/builtins/regexp-exec.tq", 43);
    TNode<Object> tmp34;
    tmp34 = CodeStubAssembler(state_).CallBuiltin(Builtins::kRegExpPrototypeExecSlow, tmp29, tmp32, tmp33);
    USE(tmp34);
    ca_.SetSourcePosition("../../src/builtins/regexp-exec.tq", 41);
    ca_.Goto(&block7, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34);
  }

  if (block8.is_used()) {
    TNode<Context> tmp35;
    TNode<Object> tmp36;
    TNode<Object> tmp37;
    TNode<JSRegExp> tmp38;
    TNode<String> tmp39;
    TNode<Object> tmp40;
    ca_.Bind(&block8, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.Goto(&block7, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40);
  }

  if (block7.is_used()) {
    TNode<Context> tmp41;
    TNode<Object> tmp42;
    TNode<Object> tmp43;
    TNode<JSRegExp> tmp44;
    TNode<String> tmp45;
    TNode<Object> tmp46;
    ca_.Bind(&block7, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46);
    CodeStubAssembler(state_).Return(tmp46);
  }
}

TNode<JSRegExp> Cast8JSRegExp_1496(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSRegExp> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSRegExp> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSRegExp> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    TNode<JSRegExp> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = Cast8JSRegExp_130(state_, TNode<HeapObject>{tmp9}, &label0);
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
    TNode<JSRegExp> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    TNode<Context> tmp18;
    TNode<Object> tmp19;
    TNode<JSRegExp> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/regexp-exec.tq", 37);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<JSRegExp> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return TNode<JSRegExp>{tmp23};
}

}  // namespace internal
}  // namespace v8

