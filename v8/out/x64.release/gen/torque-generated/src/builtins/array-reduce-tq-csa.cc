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

TF_BUILTIN(ArrayReducePreLoopEagerDeoptContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kCallback));
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kLength));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver, Object, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver, JSReceiver, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver, JSReceiver, Object, Number> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver, JSReceiver, Number> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    TNode<Object> tmp2;
    TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 17);
    TNode<JSReceiver> tmp4;
    USE(tmp4);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp4 = Cast10JSReceiver_1433(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp1, tmp4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp1);
    }
  }

  if (block4.is_used()) {
    TNode<Context> tmp5;
    TNode<Object> tmp6;
    TNode<Object> tmp7;
    TNode<Object> tmp8;
    TNode<Object> tmp9;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block2, tmp5, tmp6, tmp7, tmp8);
  }

  if (block3.is_used()) {
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    TNode<Object> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    TNode<JSReceiver> tmp15;
    ca_.Bind(&block3, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.Goto(&block1, tmp10, tmp11, tmp12, tmp13, tmp15);
  }

  if (block2.is_used()) {
    TNode<Context> tmp16;
    TNode<Object> tmp17;
    TNode<Object> tmp18;
    TNode<Object> tmp19;
    ca_.Bind(&block2, &tmp16, &tmp17, &tmp18, &tmp19);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block1.is_used()) {
    TNode<Context> tmp20;
    TNode<Object> tmp21;
    TNode<Object> tmp22;
    TNode<Object> tmp23;
    TNode<JSReceiver> tmp24;
    ca_.Bind(&block1, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 18);
    TNode<JSReceiver> tmp25;
    USE(tmp25);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp25 = Cast71UT19ATCallableApiObject17ATCallableJSProxy15JSBoundFunction10JSFunction_1434(state_, TNode<Context>{tmp20}, TNode<Object>{tmp22}, &label0);
    ca_.Goto(&block7, tmp20, tmp21, tmp22, tmp23, tmp24, tmp22, tmp25);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp20, tmp21, tmp22, tmp23, tmp24, tmp22);
    }
  }

  if (block8.is_used()) {
    TNode<Context> tmp26;
    TNode<Object> tmp27;
    TNode<Object> tmp28;
    TNode<Object> tmp29;
    TNode<JSReceiver> tmp30;
    TNode<Object> tmp31;
    ca_.Bind(&block8, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.Goto(&block6, tmp26, tmp27, tmp28, tmp29, tmp30);
  }

  if (block7.is_used()) {
    TNode<Context> tmp32;
    TNode<Object> tmp33;
    TNode<Object> tmp34;
    TNode<Object> tmp35;
    TNode<JSReceiver> tmp36;
    TNode<Object> tmp37;
    TNode<JSReceiver> tmp38;
    ca_.Bind(&block7, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38);
    ca_.Goto(&block5, tmp32, tmp33, tmp34, tmp35, tmp36, tmp38);
  }

  if (block6.is_used()) {
    TNode<Context> tmp39;
    TNode<Object> tmp40;
    TNode<Object> tmp41;
    TNode<Object> tmp42;
    TNode<JSReceiver> tmp43;
    ca_.Bind(&block6, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block5.is_used()) {
    TNode<Context> tmp44;
    TNode<Object> tmp45;
    TNode<Object> tmp46;
    TNode<Object> tmp47;
    TNode<JSReceiver> tmp48;
    TNode<JSReceiver> tmp49;
    ca_.Bind(&block5, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 19);
    TNode<Number> tmp50;
    USE(tmp50);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp50 = Cast20UT5ATSmi10HeapNumber_85(state_, TNode<Object>{tmp47}, &label0);
    ca_.Goto(&block11, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp47, tmp50);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp47);
    }
  }

  if (block12.is_used()) {
    TNode<Context> tmp51;
    TNode<Object> tmp52;
    TNode<Object> tmp53;
    TNode<Object> tmp54;
    TNode<JSReceiver> tmp55;
    TNode<JSReceiver> tmp56;
    TNode<Object> tmp57;
    ca_.Bind(&block12, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57);
    ca_.Goto(&block10, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56);
  }

  if (block11.is_used()) {
    TNode<Context> tmp58;
    TNode<Object> tmp59;
    TNode<Object> tmp60;
    TNode<Object> tmp61;
    TNode<JSReceiver> tmp62;
    TNode<JSReceiver> tmp63;
    TNode<Object> tmp64;
    TNode<Number> tmp65;
    ca_.Bind(&block11, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65);
    ca_.Goto(&block9, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp65);
  }

  if (block10.is_used()) {
    TNode<Context> tmp66;
    TNode<Object> tmp67;
    TNode<Object> tmp68;
    TNode<Object> tmp69;
    TNode<JSReceiver> tmp70;
    TNode<JSReceiver> tmp71;
    ca_.Bind(&block10, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block9.is_used()) {
    TNode<Context> tmp72;
    TNode<Object> tmp73;
    TNode<Object> tmp74;
    TNode<Object> tmp75;
    TNode<JSReceiver> tmp76;
    TNode<JSReceiver> tmp77;
    TNode<Number> tmp78;
    ca_.Bind(&block9, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 25);
    TNode<Oddball> tmp79;
    USE(tmp79);
    tmp79 = TheHole_62(state_);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 24);
    TNode<Number> tmp80;
    USE(tmp80);
    tmp80 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 0);
    TNode<Object> tmp81;
    tmp81 = CodeStubAssembler(state_).CallBuiltin(Builtins::kArrayReduceLoopContinuation, tmp72, tmp76, tmp77, tmp79, tmp76, tmp80, tmp78);
    USE(tmp81);
    CodeStubAssembler(state_).Return(tmp81);
  }
}

TF_BUILTIN(ArrayReduceLoopEagerDeoptContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kCallback));
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kInitialK));
  USE(parameter3);
  TNode<Object> parameter4 = UncheckedCast<Object>(Parameter(Descriptor::kLength));
  USE(parameter4);
  TNode<Object> parameter5 = UncheckedCast<Object>(Parameter(Descriptor::kAccumulator));
  USE(parameter5);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, Object, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Object, Number> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Number> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Number, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Number, Object, Number> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Number> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Number, Number> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3, parameter4, parameter5);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    TNode<Object> tmp2;
    TNode<Object> tmp3;
    TNode<Object> tmp4;
    TNode<Object> tmp5;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 40);
    TNode<JSReceiver> tmp6;
    USE(tmp6);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp6 = Cast10JSReceiver_1433(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp1, tmp6);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp1);
    }
  }

  if (block4.is_used()) {
    TNode<Context> tmp7;
    TNode<Object> tmp8;
    TNode<Object> tmp9;
    TNode<Object> tmp10;
    TNode<Object> tmp11;
    TNode<Object> tmp12;
    TNode<Object> tmp13;
    ca_.Bind(&block4, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block2, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12);
  }

  if (block3.is_used()) {
    TNode<Context> tmp14;
    TNode<Object> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    TNode<Object> tmp18;
    TNode<Object> tmp19;
    TNode<Object> tmp20;
    TNode<JSReceiver> tmp21;
    ca_.Bind(&block3, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.Goto(&block1, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp21);
  }

  if (block2.is_used()) {
    TNode<Context> tmp22;
    TNode<Object> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    TNode<Object> tmp26;
    TNode<Object> tmp27;
    ca_.Bind(&block2, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block1.is_used()) {
    TNode<Context> tmp28;
    TNode<Object> tmp29;
    TNode<Object> tmp30;
    TNode<Object> tmp31;
    TNode<Object> tmp32;
    TNode<Object> tmp33;
    TNode<JSReceiver> tmp34;
    ca_.Bind(&block1, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 41);
    TNode<JSReceiver> tmp35;
    USE(tmp35);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp35 = Cast71UT19ATCallableApiObject17ATCallableJSProxy15JSBoundFunction10JSFunction_1434(state_, TNode<Context>{tmp28}, TNode<Object>{tmp30}, &label0);
    ca_.Goto(&block7, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp30, tmp35);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp30);
    }
  }

  if (block8.is_used()) {
    TNode<Context> tmp36;
    TNode<Object> tmp37;
    TNode<Object> tmp38;
    TNode<Object> tmp39;
    TNode<Object> tmp40;
    TNode<Object> tmp41;
    TNode<JSReceiver> tmp42;
    TNode<Object> tmp43;
    ca_.Bind(&block8, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.Goto(&block6, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42);
  }

  if (block7.is_used()) {
    TNode<Context> tmp44;
    TNode<Object> tmp45;
    TNode<Object> tmp46;
    TNode<Object> tmp47;
    TNode<Object> tmp48;
    TNode<Object> tmp49;
    TNode<JSReceiver> tmp50;
    TNode<Object> tmp51;
    TNode<JSReceiver> tmp52;
    ca_.Bind(&block7, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52);
    ca_.Goto(&block5, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp52);
  }

  if (block6.is_used()) {
    TNode<Context> tmp53;
    TNode<Object> tmp54;
    TNode<Object> tmp55;
    TNode<Object> tmp56;
    TNode<Object> tmp57;
    TNode<Object> tmp58;
    TNode<JSReceiver> tmp59;
    ca_.Bind(&block6, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block5.is_used()) {
    TNode<Context> tmp60;
    TNode<Object> tmp61;
    TNode<Object> tmp62;
    TNode<Object> tmp63;
    TNode<Object> tmp64;
    TNode<Object> tmp65;
    TNode<JSReceiver> tmp66;
    TNode<JSReceiver> tmp67;
    ca_.Bind(&block5, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 42);
    TNode<Number> tmp68;
    USE(tmp68);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp68 = Cast20UT5ATSmi10HeapNumber_85(state_, TNode<Object>{tmp63}, &label0);
    ca_.Goto(&block11, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp63, tmp68);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp63);
    }
  }

  if (block12.is_used()) {
    TNode<Context> tmp69;
    TNode<Object> tmp70;
    TNode<Object> tmp71;
    TNode<Object> tmp72;
    TNode<Object> tmp73;
    TNode<Object> tmp74;
    TNode<JSReceiver> tmp75;
    TNode<JSReceiver> tmp76;
    TNode<Object> tmp77;
    ca_.Bind(&block12, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77);
    ca_.Goto(&block10, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76);
  }

  if (block11.is_used()) {
    TNode<Context> tmp78;
    TNode<Object> tmp79;
    TNode<Object> tmp80;
    TNode<Object> tmp81;
    TNode<Object> tmp82;
    TNode<Object> tmp83;
    TNode<JSReceiver> tmp84;
    TNode<JSReceiver> tmp85;
    TNode<Object> tmp86;
    TNode<Number> tmp87;
    ca_.Bind(&block11, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87);
    ca_.Goto(&block9, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp87);
  }

  if (block10.is_used()) {
    TNode<Context> tmp88;
    TNode<Object> tmp89;
    TNode<Object> tmp90;
    TNode<Object> tmp91;
    TNode<Object> tmp92;
    TNode<Object> tmp93;
    TNode<JSReceiver> tmp94;
    TNode<JSReceiver> tmp95;
    ca_.Bind(&block10, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block9.is_used()) {
    TNode<Context> tmp96;
    TNode<Object> tmp97;
    TNode<Object> tmp98;
    TNode<Object> tmp99;
    TNode<Object> tmp100;
    TNode<Object> tmp101;
    TNode<JSReceiver> tmp102;
    TNode<JSReceiver> tmp103;
    TNode<Number> tmp104;
    ca_.Bind(&block9, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 43);
    TNode<Number> tmp105;
    USE(tmp105);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp105 = Cast20UT5ATSmi10HeapNumber_85(state_, TNode<Object>{tmp100}, &label0);
    ca_.Goto(&block15, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp100, tmp105);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp100);
    }
  }

  if (block16.is_used()) {
    TNode<Context> tmp106;
    TNode<Object> tmp107;
    TNode<Object> tmp108;
    TNode<Object> tmp109;
    TNode<Object> tmp110;
    TNode<Object> tmp111;
    TNode<JSReceiver> tmp112;
    TNode<JSReceiver> tmp113;
    TNode<Number> tmp114;
    TNode<Object> tmp115;
    ca_.Bind(&block16, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115);
    ca_.Goto(&block14, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114);
  }

  if (block15.is_used()) {
    TNode<Context> tmp116;
    TNode<Object> tmp117;
    TNode<Object> tmp118;
    TNode<Object> tmp119;
    TNode<Object> tmp120;
    TNode<Object> tmp121;
    TNode<JSReceiver> tmp122;
    TNode<JSReceiver> tmp123;
    TNode<Number> tmp124;
    TNode<Object> tmp125;
    TNode<Number> tmp126;
    ca_.Bind(&block15, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126);
    ca_.Goto(&block13, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp126);
  }

  if (block14.is_used()) {
    TNode<Context> tmp127;
    TNode<Object> tmp128;
    TNode<Object> tmp129;
    TNode<Object> tmp130;
    TNode<Object> tmp131;
    TNode<Object> tmp132;
    TNode<JSReceiver> tmp133;
    TNode<JSReceiver> tmp134;
    TNode<Number> tmp135;
    ca_.Bind(&block14, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block13.is_used()) {
    TNode<Context> tmp136;
    TNode<Object> tmp137;
    TNode<Object> tmp138;
    TNode<Object> tmp139;
    TNode<Object> tmp140;
    TNode<Object> tmp141;
    TNode<JSReceiver> tmp142;
    TNode<JSReceiver> tmp143;
    TNode<Number> tmp144;
    TNode<Number> tmp145;
    ca_.Bind(&block13, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 46);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 45);
    TNode<Object> tmp146;
    tmp146 = CodeStubAssembler(state_).CallBuiltin(Builtins::kArrayReduceLoopContinuation, tmp136, tmp142, tmp143, tmp141, tmp142, tmp144, tmp145);
    USE(tmp146);
    CodeStubAssembler(state_).Return(tmp146);
  }
}

TF_BUILTIN(ArrayReduceLoopLazyDeoptContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kCallback));
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kInitialK));
  USE(parameter3);
  TNode<Object> parameter4 = UncheckedCast<Object>(Parameter(Descriptor::kLength));
  USE(parameter4);
  TNode<Object> parameter5 = UncheckedCast<Object>(Parameter(Descriptor::kResult));
  USE(parameter5);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, Object, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Object, Number> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Number> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Number, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Number, Object, Number> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Number> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Number, Number> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3, parameter4, parameter5);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    TNode<Object> tmp2;
    TNode<Object> tmp3;
    TNode<Object> tmp4;
    TNode<Object> tmp5;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 56);
    TNode<JSReceiver> tmp6;
    USE(tmp6);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp6 = Cast10JSReceiver_1433(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp1, tmp6);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp1);
    }
  }

  if (block4.is_used()) {
    TNode<Context> tmp7;
    TNode<Object> tmp8;
    TNode<Object> tmp9;
    TNode<Object> tmp10;
    TNode<Object> tmp11;
    TNode<Object> tmp12;
    TNode<Object> tmp13;
    ca_.Bind(&block4, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block2, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12);
  }

  if (block3.is_used()) {
    TNode<Context> tmp14;
    TNode<Object> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    TNode<Object> tmp18;
    TNode<Object> tmp19;
    TNode<Object> tmp20;
    TNode<JSReceiver> tmp21;
    ca_.Bind(&block3, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.Goto(&block1, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp21);
  }

  if (block2.is_used()) {
    TNode<Context> tmp22;
    TNode<Object> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    TNode<Object> tmp26;
    TNode<Object> tmp27;
    ca_.Bind(&block2, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block1.is_used()) {
    TNode<Context> tmp28;
    TNode<Object> tmp29;
    TNode<Object> tmp30;
    TNode<Object> tmp31;
    TNode<Object> tmp32;
    TNode<Object> tmp33;
    TNode<JSReceiver> tmp34;
    ca_.Bind(&block1, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 57);
    TNode<JSReceiver> tmp35;
    USE(tmp35);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp35 = Cast71UT19ATCallableApiObject17ATCallableJSProxy15JSBoundFunction10JSFunction_1434(state_, TNode<Context>{tmp28}, TNode<Object>{tmp30}, &label0);
    ca_.Goto(&block7, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp30, tmp35);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp30);
    }
  }

  if (block8.is_used()) {
    TNode<Context> tmp36;
    TNode<Object> tmp37;
    TNode<Object> tmp38;
    TNode<Object> tmp39;
    TNode<Object> tmp40;
    TNode<Object> tmp41;
    TNode<JSReceiver> tmp42;
    TNode<Object> tmp43;
    ca_.Bind(&block8, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.Goto(&block6, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42);
  }

  if (block7.is_used()) {
    TNode<Context> tmp44;
    TNode<Object> tmp45;
    TNode<Object> tmp46;
    TNode<Object> tmp47;
    TNode<Object> tmp48;
    TNode<Object> tmp49;
    TNode<JSReceiver> tmp50;
    TNode<Object> tmp51;
    TNode<JSReceiver> tmp52;
    ca_.Bind(&block7, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52);
    ca_.Goto(&block5, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp52);
  }

  if (block6.is_used()) {
    TNode<Context> tmp53;
    TNode<Object> tmp54;
    TNode<Object> tmp55;
    TNode<Object> tmp56;
    TNode<Object> tmp57;
    TNode<Object> tmp58;
    TNode<JSReceiver> tmp59;
    ca_.Bind(&block6, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block5.is_used()) {
    TNode<Context> tmp60;
    TNode<Object> tmp61;
    TNode<Object> tmp62;
    TNode<Object> tmp63;
    TNode<Object> tmp64;
    TNode<Object> tmp65;
    TNode<JSReceiver> tmp66;
    TNode<JSReceiver> tmp67;
    ca_.Bind(&block5, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 58);
    TNode<Number> tmp68;
    USE(tmp68);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp68 = Cast20UT5ATSmi10HeapNumber_85(state_, TNode<Object>{tmp63}, &label0);
    ca_.Goto(&block11, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp63, tmp68);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp63);
    }
  }

  if (block12.is_used()) {
    TNode<Context> tmp69;
    TNode<Object> tmp70;
    TNode<Object> tmp71;
    TNode<Object> tmp72;
    TNode<Object> tmp73;
    TNode<Object> tmp74;
    TNode<JSReceiver> tmp75;
    TNode<JSReceiver> tmp76;
    TNode<Object> tmp77;
    ca_.Bind(&block12, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77);
    ca_.Goto(&block10, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76);
  }

  if (block11.is_used()) {
    TNode<Context> tmp78;
    TNode<Object> tmp79;
    TNode<Object> tmp80;
    TNode<Object> tmp81;
    TNode<Object> tmp82;
    TNode<Object> tmp83;
    TNode<JSReceiver> tmp84;
    TNode<JSReceiver> tmp85;
    TNode<Object> tmp86;
    TNode<Number> tmp87;
    ca_.Bind(&block11, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87);
    ca_.Goto(&block9, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp87);
  }

  if (block10.is_used()) {
    TNode<Context> tmp88;
    TNode<Object> tmp89;
    TNode<Object> tmp90;
    TNode<Object> tmp91;
    TNode<Object> tmp92;
    TNode<Object> tmp93;
    TNode<JSReceiver> tmp94;
    TNode<JSReceiver> tmp95;
    ca_.Bind(&block10, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block9.is_used()) {
    TNode<Context> tmp96;
    TNode<Object> tmp97;
    TNode<Object> tmp98;
    TNode<Object> tmp99;
    TNode<Object> tmp100;
    TNode<Object> tmp101;
    TNode<JSReceiver> tmp102;
    TNode<JSReceiver> tmp103;
    TNode<Number> tmp104;
    ca_.Bind(&block9, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 59);
    TNode<Number> tmp105;
    USE(tmp105);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp105 = Cast20UT5ATSmi10HeapNumber_85(state_, TNode<Object>{tmp100}, &label0);
    ca_.Goto(&block15, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp100, tmp105);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp100);
    }
  }

  if (block16.is_used()) {
    TNode<Context> tmp106;
    TNode<Object> tmp107;
    TNode<Object> tmp108;
    TNode<Object> tmp109;
    TNode<Object> tmp110;
    TNode<Object> tmp111;
    TNode<JSReceiver> tmp112;
    TNode<JSReceiver> tmp113;
    TNode<Number> tmp114;
    TNode<Object> tmp115;
    ca_.Bind(&block16, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115);
    ca_.Goto(&block14, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114);
  }

  if (block15.is_used()) {
    TNode<Context> tmp116;
    TNode<Object> tmp117;
    TNode<Object> tmp118;
    TNode<Object> tmp119;
    TNode<Object> tmp120;
    TNode<Object> tmp121;
    TNode<JSReceiver> tmp122;
    TNode<JSReceiver> tmp123;
    TNode<Number> tmp124;
    TNode<Object> tmp125;
    TNode<Number> tmp126;
    ca_.Bind(&block15, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126);
    ca_.Goto(&block13, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp126);
  }

  if (block14.is_used()) {
    TNode<Context> tmp127;
    TNode<Object> tmp128;
    TNode<Object> tmp129;
    TNode<Object> tmp130;
    TNode<Object> tmp131;
    TNode<Object> tmp132;
    TNode<JSReceiver> tmp133;
    TNode<JSReceiver> tmp134;
    TNode<Number> tmp135;
    ca_.Bind(&block14, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block13.is_used()) {
    TNode<Context> tmp136;
    TNode<Object> tmp137;
    TNode<Object> tmp138;
    TNode<Object> tmp139;
    TNode<Object> tmp140;
    TNode<Object> tmp141;
    TNode<JSReceiver> tmp142;
    TNode<JSReceiver> tmp143;
    TNode<Number> tmp144;
    TNode<Number> tmp145;
    ca_.Bind(&block13, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 63);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 62);
    TNode<Object> tmp146;
    tmp146 = CodeStubAssembler(state_).CallBuiltin(Builtins::kArrayReduceLoopContinuation, tmp136, tmp142, tmp143, tmp141, tmp142, tmp144, tmp145);
    USE(tmp146);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 64);
    CodeStubAssembler(state_).Return(tmp146);
  }
}

TF_BUILTIN(ArrayReduceLoopContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSReceiver> parameter1 = UncheckedCast<JSReceiver>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  TNode<JSReceiver> parameter2 = UncheckedCast<JSReceiver>(Parameter(Descriptor::kCallbackfn));
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kInitialAccumulator));
  USE(parameter3);
  TNode<JSReceiver> parameter4 = UncheckedCast<JSReceiver>(Parameter(Descriptor::kO));
  USE(parameter4);
  TNode<Number> parameter5 = UncheckedCast<Number>(Parameter(Descriptor::kInitialK));
  USE(parameter5);
  TNode<Number> parameter6 = UncheckedCast<Number>(Parameter(Descriptor::kLength));
  USE(parameter6);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number, Object, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number, Object, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number, Object, Number, Oddball> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number, Object, Number, Oddball, Object, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number, Object, Number, Oddball, Object, Object, Object, Oddball> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number, Object, Number, Oddball, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number, Object, Number, Oddball, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number, Object, Number, Oddball> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number, Object, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number, Object, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number, Object, Object, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number, Object, Object, Object, Oddball> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number, Object, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3, parameter4, parameter5, parameter6);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSReceiver> tmp1;
    TNode<JSReceiver> tmp2;
    TNode<Object> tmp3;
    TNode<JSReceiver> tmp4;
    TNode<Number> tmp5;
    TNode<Number> tmp6;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 71);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 74);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp3, tmp5);
  }

  if (block3.is_used()) {
    TNode<Context> tmp7;
    TNode<JSReceiver> tmp8;
    TNode<JSReceiver> tmp9;
    TNode<Object> tmp10;
    TNode<JSReceiver> tmp11;
    TNode<Number> tmp12;
    TNode<Number> tmp13;
    TNode<Object> tmp14;
    TNode<Number> tmp15;
    ca_.Bind(&block3, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = NumberIsLessThan_75(state_, TNode<Number>{tmp15}, TNode<Number>{tmp13});
    ca_.Branch(tmp16, &block1, &block2, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15);
  }

  if (block1.is_used()) {
    TNode<Context> tmp17;
    TNode<JSReceiver> tmp18;
    TNode<JSReceiver> tmp19;
    TNode<Object> tmp20;
    TNode<JSReceiver> tmp21;
    TNode<Number> tmp22;
    TNode<Number> tmp23;
    TNode<Object> tmp24;
    TNode<Number> tmp25;
    ca_.Bind(&block1, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 80);
    TNode<Oddball> tmp26;
    USE(tmp26);
    tmp26 = CodeStubAssembler(state_).HasProperty_Inline(TNode<Context>{tmp17}, TNode<JSReceiver>{tmp21}, TNode<Object>{tmp25});
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 83);
    TNode<Oddball> tmp27;
    USE(tmp27);
    tmp27 = True_65(state_);
    TNode<BoolT> tmp28;
    USE(tmp28);
    tmp28 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp26}, TNode<HeapObject>{tmp27});
    ca_.Branch(tmp28, &block5, &block6, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26);
  }

  if (block5.is_used()) {
    TNode<Context> tmp29;
    TNode<JSReceiver> tmp30;
    TNode<JSReceiver> tmp31;
    TNode<Object> tmp32;
    TNode<JSReceiver> tmp33;
    TNode<Number> tmp34;
    TNode<Number> tmp35;
    TNode<Object> tmp36;
    TNode<Number> tmp37;
    TNode<Oddball> tmp38;
    ca_.Bind(&block5, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 85);
    TNode<Object> tmp39;
    USE(tmp39);
    tmp39 = CodeStubAssembler(state_).GetProperty(TNode<Context>{tmp29}, TNode<Object>{tmp33}, TNode<Object>{tmp37});
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 87);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 88);
    TNode<Oddball> tmp40;
    USE(tmp40);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp40 = Cast9ATTheHole_88(state_, TNode<Object>{tmp36}, &label0);
    ca_.Goto(&block9, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp36, tmp36, tmp40);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp36, tmp36);
    }
  }

  if (block10.is_used()) {
    TNode<Context> tmp41;
    TNode<JSReceiver> tmp42;
    TNode<JSReceiver> tmp43;
    TNode<Object> tmp44;
    TNode<JSReceiver> tmp45;
    TNode<Number> tmp46;
    TNode<Number> tmp47;
    TNode<Object> tmp48;
    TNode<Number> tmp49;
    TNode<Oddball> tmp50;
    TNode<Object> tmp51;
    TNode<Object> tmp52;
    TNode<Object> tmp53;
    ca_.Bind(&block10, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53);
    ca_.Goto(&block8, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52);
  }

  if (block9.is_used()) {
    TNode<Context> tmp54;
    TNode<JSReceiver> tmp55;
    TNode<JSReceiver> tmp56;
    TNode<Object> tmp57;
    TNode<JSReceiver> tmp58;
    TNode<Number> tmp59;
    TNode<Number> tmp60;
    TNode<Object> tmp61;
    TNode<Number> tmp62;
    TNode<Oddball> tmp63;
    TNode<Object> tmp64;
    TNode<Object> tmp65;
    TNode<Object> tmp66;
    TNode<Oddball> tmp67;
    ca_.Bind(&block9, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 90);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 88);
    ca_.Goto(&block7, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp64, tmp62, tmp63, tmp64, tmp65);
  }

  if (block8.is_used()) {
    TNode<Context> tmp68;
    TNode<JSReceiver> tmp69;
    TNode<JSReceiver> tmp70;
    TNode<Object> tmp71;
    TNode<JSReceiver> tmp72;
    TNode<Number> tmp73;
    TNode<Number> tmp74;
    TNode<Object> tmp75;
    TNode<Number> tmp76;
    TNode<Oddball> tmp77;
    TNode<Object> tmp78;
    TNode<Object> tmp79;
    ca_.Bind(&block8, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 92);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 96);
    TNode<Oddball> tmp80;
    USE(tmp80);
    tmp80 = Undefined_64(state_);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 97);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 95);
    TNode<Object> tmp81;
    USE(tmp81);
    tmp81 = CodeStubAssembler(state_).Call(TNode<Context>{tmp68}, TNode<JSReceiver>{tmp70}, TNode<Object>{tmp80}, TNode<Object>{ca_.UncheckedCast<Object>(tmp79)}, TNode<Object>{tmp78}, TNode<Object>{tmp76}, TNode<Object>{tmp72});
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 88);
    ca_.Goto(&block7, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp81, tmp76, tmp77, tmp78, tmp79);
  }

  if (block7.is_used()) {
    TNode<Context> tmp82;
    TNode<JSReceiver> tmp83;
    TNode<JSReceiver> tmp84;
    TNode<Object> tmp85;
    TNode<JSReceiver> tmp86;
    TNode<Number> tmp87;
    TNode<Number> tmp88;
    TNode<Object> tmp89;
    TNode<Number> tmp90;
    TNode<Oddball> tmp91;
    TNode<Object> tmp92;
    TNode<Object> tmp93;
    ca_.Bind(&block7, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 87);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 83);
    ca_.Goto(&block6, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91);
  }

  if (block6.is_used()) {
    TNode<Context> tmp94;
    TNode<JSReceiver> tmp95;
    TNode<JSReceiver> tmp96;
    TNode<Object> tmp97;
    TNode<JSReceiver> tmp98;
    TNode<Number> tmp99;
    TNode<Number> tmp100;
    TNode<Object> tmp101;
    TNode<Number> tmp102;
    TNode<Oddball> tmp103;
    ca_.Bind(&block6, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 74);
    ca_.Goto(&block4, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102);
  }

  if (block4.is_used()) {
    TNode<Context> tmp104;
    TNode<JSReceiver> tmp105;
    TNode<JSReceiver> tmp106;
    TNode<Object> tmp107;
    TNode<JSReceiver> tmp108;
    TNode<Number> tmp109;
    TNode<Number> tmp110;
    TNode<Object> tmp111;
    TNode<Number> tmp112;
    ca_.Bind(&block4, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112);
    TNode<Number> tmp113;
    USE(tmp113);
    tmp113 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 1);
    TNode<Number> tmp114;
    USE(tmp114);
    tmp114 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{tmp112}, TNode<Number>{tmp113});
    ca_.Goto(&block3, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp114);
  }

  if (block2.is_used()) {
    TNode<Context> tmp115;
    TNode<JSReceiver> tmp116;
    TNode<JSReceiver> tmp117;
    TNode<Object> tmp118;
    TNode<JSReceiver> tmp119;
    TNode<Number> tmp120;
    TNode<Number> tmp121;
    TNode<Object> tmp122;
    TNode<Number> tmp123;
    ca_.Bind(&block2, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 108);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 109);
    TNode<Oddball> tmp124;
    USE(tmp124);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp124 = Cast9ATTheHole_88(state_, TNode<Object>{tmp122}, &label0);
    ca_.Goto(&block13, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp122, tmp122, tmp124);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block14, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp122, tmp122);
    }
  }

  if (block14.is_used()) {
    TNode<Context> tmp125;
    TNode<JSReceiver> tmp126;
    TNode<JSReceiver> tmp127;
    TNode<Object> tmp128;
    TNode<JSReceiver> tmp129;
    TNode<Number> tmp130;
    TNode<Number> tmp131;
    TNode<Object> tmp132;
    TNode<Object> tmp133;
    TNode<Object> tmp134;
    ca_.Bind(&block14, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134);
    ca_.Goto(&block12, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133);
  }

  if (block13.is_used()) {
    TNode<Context> tmp135;
    TNode<JSReceiver> tmp136;
    TNode<JSReceiver> tmp137;
    TNode<Object> tmp138;
    TNode<JSReceiver> tmp139;
    TNode<Number> tmp140;
    TNode<Number> tmp141;
    TNode<Object> tmp142;
    TNode<Object> tmp143;
    TNode<Object> tmp144;
    TNode<Oddball> tmp145;
    ca_.Bind(&block13, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 110);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp135}, MessageTemplate::kReduceNoInitial, "Array.prototype.reduce");
  }

  if (block12.is_used()) {
    TNode<Context> tmp146;
    TNode<JSReceiver> tmp147;
    TNode<JSReceiver> tmp148;
    TNode<Object> tmp149;
    TNode<JSReceiver> tmp150;
    TNode<Number> tmp151;
    TNode<Number> tmp152;
    TNode<Object> tmp153;
    TNode<Object> tmp154;
    ca_.Bind(&block12, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 112);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 113);
    CodeStubAssembler(state_).Return(ca_.UncheckedCast<Object>(tmp154));
  }
}

TNode<Object> FastArrayReduce_27(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Number> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_initialAccumulator, compiler::CodeAssemblerLabel* label_Bailout, compiler::TypedCodeAssemblerVariable<Number>* label_Bailout_parameter_0, compiler::TypedCodeAssemblerVariable<Object>* label_Bailout_parameter_1) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Number, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSReceiver, JSArray> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, JSArray> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, Context, Smi> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, Context, Smi, JSArray, Smi> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, Context, Smi, JSArray, Smi, Object> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, Context, Smi> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, Context, Smi, JSArray, Smi> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, Context, Smi, JSArray, Smi, Object> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, Context, Smi, Object> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Object> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Object, Object, Object> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Object, Object, Object, Oddball> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Object, Object> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Object, Object, Object, Context, JSReceiver, Oddball, Object, Object, Smi, JSArray> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Object, Object> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Object, Object> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Object, Object, Oddball> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Object> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o, p_len, p_callbackfn, p_initialAccumulator);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSReceiver> tmp1;
    TNode<Number> tmp2;
    TNode<JSReceiver> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 123);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 124);
    TNode<Smi> tmp5;
    USE(tmp5);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp5 = Cast5ATSmi_83(state_, TNode<Object>{tmp2}, &label0);
    ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp4, tmp4, tmp2, tmp5);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp2, tmp3, tmp4, tmp4, tmp2);
    }
  }

  if (block6.is_used()) {
    TNode<Context> tmp6;
    TNode<JSReceiver> tmp7;
    TNode<Number> tmp8;
    TNode<JSReceiver> tmp9;
    TNode<Object> tmp10;
    TNode<Object> tmp11;
    TNode<Number> tmp12;
    ca_.Bind(&block6, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.Goto(&block4, tmp6, tmp7, tmp8, tmp9, tmp10, tmp11);
  }

  if (block5.is_used()) {
    TNode<Context> tmp13;
    TNode<JSReceiver> tmp14;
    TNode<Number> tmp15;
    TNode<JSReceiver> tmp16;
    TNode<Object> tmp17;
    TNode<Object> tmp18;
    TNode<Number> tmp19;
    TNode<Smi> tmp20;
    ca_.Bind(&block5, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.Goto(&block3, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp20);
  }

  if (block4.is_used()) {
    TNode<Context> tmp21;
    TNode<JSReceiver> tmp22;
    TNode<Number> tmp23;
    TNode<JSReceiver> tmp24;
    TNode<Object> tmp25;
    TNode<Object> tmp26;
    ca_.Bind(&block4, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    TNode<Number> tmp27;
    USE(tmp27);
    tmp27 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 0);
    ca_.Goto(&block1, tmp27, tmp26);
  }

  if (block3.is_used()) {
    TNode<Context> tmp28;
    TNode<JSReceiver> tmp29;
    TNode<Number> tmp30;
    TNode<JSReceiver> tmp31;
    TNode<Object> tmp32;
    TNode<Object> tmp33;
    TNode<Smi> tmp34;
    ca_.Bind(&block3, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 126);
    TNode<JSArray> tmp35;
    USE(tmp35);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp35 = Cast20ATFastJSArrayForRead_138(state_, TNode<Context>{tmp28}, TNode<HeapObject>{tmp29}, &label0);
    ca_.Goto(&block9, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp29, tmp35);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp29);
    }
  }

  if (block10.is_used()) {
    TNode<Context> tmp36;
    TNode<JSReceiver> tmp37;
    TNode<Number> tmp38;
    TNode<JSReceiver> tmp39;
    TNode<Object> tmp40;
    TNode<Object> tmp41;
    TNode<JSReceiver> tmp42;
    ca_.Bind(&block10, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42);
    ca_.Goto(&block8, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41);
  }

  if (block9.is_used()) {
    TNode<Context> tmp43;
    TNode<JSReceiver> tmp44;
    TNode<Number> tmp45;
    TNode<JSReceiver> tmp46;
    TNode<Object> tmp47;
    TNode<Object> tmp48;
    TNode<JSReceiver> tmp49;
    TNode<JSArray> tmp50;
    ca_.Bind(&block9, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    ca_.Goto(&block7, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp50);
  }

  if (block8.is_used()) {
    TNode<Context> tmp51;
    TNode<JSReceiver> tmp52;
    TNode<Number> tmp53;
    TNode<JSReceiver> tmp54;
    TNode<Object> tmp55;
    TNode<Object> tmp56;
    ca_.Bind(&block8, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    TNode<Number> tmp57;
    USE(tmp57);
    tmp57 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 0);
    ca_.Goto(&block1, tmp57, tmp56);
  }

  if (block7.is_used()) {
    TNode<Context> tmp58;
    TNode<JSReceiver> tmp59;
    TNode<Number> tmp60;
    TNode<JSReceiver> tmp61;
    TNode<Object> tmp62;
    TNode<Object> tmp63;
    TNode<JSArray> tmp64;
    ca_.Bind(&block7, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 127);
    TNode<JSArray> tmp65;
    USE(tmp65);
    TNode<JSArray> tmp66;
    USE(tmp66);
    TNode<Map> tmp67;
    USE(tmp67);
    TNode<BoolT> tmp68;
    USE(tmp68);
    std::tie(tmp65, tmp66, tmp67, tmp68) = NewFastJSArrayForReadWitness_239(state_, TNode<JSArray>{tmp64}).Flatten();
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 130);
    TNode<Smi> tmp69;
    USE(tmp69);
    tmp69 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.Goto(&block13, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69);
  }

  if (block13.is_used()) {
    TNode<Context> tmp70;
    TNode<JSReceiver> tmp71;
    TNode<Number> tmp72;
    TNode<JSReceiver> tmp73;
    TNode<Object> tmp74;
    TNode<Object> tmp75;
    TNode<JSArray> tmp76;
    TNode<JSArray> tmp77;
    TNode<JSArray> tmp78;
    TNode<Map> tmp79;
    TNode<BoolT> tmp80;
    TNode<Smi> tmp81;
    ca_.Bind(&block13, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81);
    TNode<BoolT> tmp82;
    USE(tmp82);
    tmp82 = NumberIsLessThan_75(state_, TNode<Number>{tmp81}, TNode<Number>{tmp72});
    ca_.Branch(tmp82, &block11, &block12, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81);
  }

  if (block11.is_used()) {
    TNode<Context> tmp83;
    TNode<JSReceiver> tmp84;
    TNode<Number> tmp85;
    TNode<JSReceiver> tmp86;
    TNode<Object> tmp87;
    TNode<Object> tmp88;
    TNode<JSArray> tmp89;
    TNode<JSArray> tmp90;
    TNode<JSArray> tmp91;
    TNode<Map> tmp92;
    TNode<BoolT> tmp93;
    TNode<Smi> tmp94;
    ca_.Bind(&block11, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3267);
    TNode<IntPtrT> tmp95 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp95);
    TNode<Map>tmp96 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp90, tmp95});
    TNode<BoolT> tmp97;
    USE(tmp97);
    tmp97 = CodeStubAssembler(state_).TaggedNotEqual(TNode<HeapObject>{tmp96}, TNode<HeapObject>{tmp92});
    ca_.Branch(tmp97, &block18, &block19, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94);
  }

  if (block18.is_used()) {
    TNode<Context> tmp98;
    TNode<JSReceiver> tmp99;
    TNode<Number> tmp100;
    TNode<JSReceiver> tmp101;
    TNode<Object> tmp102;
    TNode<Object> tmp103;
    TNode<JSArray> tmp104;
    TNode<JSArray> tmp105;
    TNode<JSArray> tmp106;
    TNode<Map> tmp107;
    TNode<BoolT> tmp108;
    TNode<Smi> tmp109;
    ca_.Bind(&block18, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109);
    ca_.Goto(&block16, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109);
  }

  if (block19.is_used()) {
    TNode<Context> tmp110;
    TNode<JSReceiver> tmp111;
    TNode<Number> tmp112;
    TNode<JSReceiver> tmp113;
    TNode<Object> tmp114;
    TNode<Object> tmp115;
    TNode<JSArray> tmp116;
    TNode<JSArray> tmp117;
    TNode<JSArray> tmp118;
    TNode<Map> tmp119;
    TNode<BoolT> tmp120;
    TNode<Smi> tmp121;
    ca_.Bind(&block19, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3274);
    TNode<BoolT> tmp122;
    USE(tmp122);
    tmp122 = CodeStubAssembler(state_).IsNoElementsProtectorCellInvalid();
    ca_.Branch(tmp122, &block20, &block21, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121);
  }

  if (block20.is_used()) {
    TNode<Context> tmp123;
    TNode<JSReceiver> tmp124;
    TNode<Number> tmp125;
    TNode<JSReceiver> tmp126;
    TNode<Object> tmp127;
    TNode<Object> tmp128;
    TNode<JSArray> tmp129;
    TNode<JSArray> tmp130;
    TNode<JSArray> tmp131;
    TNode<Map> tmp132;
    TNode<BoolT> tmp133;
    TNode<Smi> tmp134;
    ca_.Bind(&block20, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134);
    ca_.Goto(&block16, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134);
  }

  if (block21.is_used()) {
    TNode<Context> tmp135;
    TNode<JSReceiver> tmp136;
    TNode<Number> tmp137;
    TNode<JSReceiver> tmp138;
    TNode<Object> tmp139;
    TNode<Object> tmp140;
    TNode<JSArray> tmp141;
    TNode<JSArray> tmp142;
    TNode<JSArray> tmp143;
    TNode<Map> tmp144;
    TNode<BoolT> tmp145;
    TNode<Smi> tmp146;
    ca_.Bind(&block21, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3275);
    TNode<JSArray> tmp147;
    USE(tmp147);
    tmp147 = (TNode<JSArray>{tmp142});
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 131);
    ca_.Goto(&block17, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp147, tmp144, tmp145, tmp146);
  }

  if (block17.is_used()) {
    TNode<Context> tmp148;
    TNode<JSReceiver> tmp149;
    TNode<Number> tmp150;
    TNode<JSReceiver> tmp151;
    TNode<Object> tmp152;
    TNode<Object> tmp153;
    TNode<JSArray> tmp154;
    TNode<JSArray> tmp155;
    TNode<JSArray> tmp156;
    TNode<Map> tmp157;
    TNode<BoolT> tmp158;
    TNode<Smi> tmp159;
    ca_.Bind(&block17, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159);
    ca_.Goto(&block15, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159);
  }

  if (block16.is_used()) {
    TNode<Context> tmp160;
    TNode<JSReceiver> tmp161;
    TNode<Number> tmp162;
    TNode<JSReceiver> tmp163;
    TNode<Object> tmp164;
    TNode<Object> tmp165;
    TNode<JSArray> tmp166;
    TNode<JSArray> tmp167;
    TNode<JSArray> tmp168;
    TNode<Map> tmp169;
    TNode<BoolT> tmp170;
    TNode<Smi> tmp171;
    ca_.Bind(&block16, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171);
    ca_.Goto(&block1, tmp171, tmp165);
  }

  if (block15.is_used()) {
    TNode<Context> tmp172;
    TNode<JSReceiver> tmp173;
    TNode<Number> tmp174;
    TNode<JSReceiver> tmp175;
    TNode<Object> tmp176;
    TNode<Object> tmp177;
    TNode<JSArray> tmp178;
    TNode<JSArray> tmp179;
    TNode<JSArray> tmp180;
    TNode<Map> tmp181;
    TNode<BoolT> tmp182;
    TNode<Smi> tmp183;
    ca_.Bind(&block15, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 134);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3263);
    ca_.Goto(&block24, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp183, tmp180);
  }

  if (block24.is_used()) {
    TNode<Context> tmp184;
    TNode<JSReceiver> tmp185;
    TNode<Number> tmp186;
    TNode<JSReceiver> tmp187;
    TNode<Object> tmp188;
    TNode<Object> tmp189;
    TNode<JSArray> tmp190;
    TNode<JSArray> tmp191;
    TNode<JSArray> tmp192;
    TNode<Map> tmp193;
    TNode<BoolT> tmp194;
    TNode<Smi> tmp195;
    TNode<Smi> tmp196;
    TNode<JSArray> tmp197;
    ca_.Bind(&block24, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 134);
    TNode<IntPtrT> tmp198 = ca_.IntPtrConstant(JSArray::kLengthOffset);
    USE(tmp198);
    TNode<Number>tmp199 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp197, tmp198});
    TNode<BoolT> tmp200;
    USE(tmp200);
    tmp200 = NumberIsGreaterThanOrEqual_78(state_, TNode<Number>{tmp196}, TNode<Number>{tmp199});
    ca_.Branch(tmp200, &block22, &block23, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195);
  }

  if (block22.is_used()) {
    TNode<Context> tmp201;
    TNode<JSReceiver> tmp202;
    TNode<Number> tmp203;
    TNode<JSReceiver> tmp204;
    TNode<Object> tmp205;
    TNode<Object> tmp206;
    TNode<JSArray> tmp207;
    TNode<JSArray> tmp208;
    TNode<JSArray> tmp209;
    TNode<Map> tmp210;
    TNode<BoolT> tmp211;
    TNode<Smi> tmp212;
    ca_.Bind(&block22, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212);
    ca_.Goto(&block1, tmp212, tmp206);
  }

  if (block23.is_used()) {
    TNode<Context> tmp213;
    TNode<JSReceiver> tmp214;
    TNode<Number> tmp215;
    TNode<JSReceiver> tmp216;
    TNode<Object> tmp217;
    TNode<Object> tmp218;
    TNode<JSArray> tmp219;
    TNode<JSArray> tmp220;
    TNode<JSArray> tmp221;
    TNode<Map> tmp222;
    TNode<BoolT> tmp223;
    TNode<Smi> tmp224;
    ca_.Bind(&block23, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 136);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3280);
    ca_.Branch(tmp223, &block28, &block29, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp224, tmp224, tmp213, tmp224);
  }

  if (block28.is_used()) {
    TNode<Context> tmp225;
    TNode<JSReceiver> tmp226;
    TNode<Number> tmp227;
    TNode<JSReceiver> tmp228;
    TNode<Object> tmp229;
    TNode<Object> tmp230;
    TNode<JSArray> tmp231;
    TNode<JSArray> tmp232;
    TNode<JSArray> tmp233;
    TNode<Map> tmp234;
    TNode<BoolT> tmp235;
    TNode<Smi> tmp236;
    TNode<Smi> tmp237;
    TNode<Context> tmp238;
    TNode<Smi> tmp239;
    ca_.Bind(&block28, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3281);
    TNode<Object> tmp240;
    USE(tmp240);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp240 = LoadElementNoHole16FixedDoubleArray_237(state_, TNode<Context>{tmp238}, TNode<JSArray>{tmp233}, TNode<Smi>{tmp239}, &label0);
    ca_.Goto(&block31, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp233, tmp239, tmp240);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block32, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp233, tmp239);
    }
  }

  if (block32.is_used()) {
    TNode<Context> tmp241;
    TNode<JSReceiver> tmp242;
    TNode<Number> tmp243;
    TNode<JSReceiver> tmp244;
    TNode<Object> tmp245;
    TNode<Object> tmp246;
    TNode<JSArray> tmp247;
    TNode<JSArray> tmp248;
    TNode<JSArray> tmp249;
    TNode<Map> tmp250;
    TNode<BoolT> tmp251;
    TNode<Smi> tmp252;
    TNode<Smi> tmp253;
    TNode<Context> tmp254;
    TNode<Smi> tmp255;
    TNode<JSArray> tmp256;
    TNode<Smi> tmp257;
    ca_.Bind(&block32, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257);
    ca_.Goto(&block26, tmp241, tmp242, tmp243, tmp244, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp251, tmp252);
  }

  if (block31.is_used()) {
    TNode<Context> tmp258;
    TNode<JSReceiver> tmp259;
    TNode<Number> tmp260;
    TNode<JSReceiver> tmp261;
    TNode<Object> tmp262;
    TNode<Object> tmp263;
    TNode<JSArray> tmp264;
    TNode<JSArray> tmp265;
    TNode<JSArray> tmp266;
    TNode<Map> tmp267;
    TNode<BoolT> tmp268;
    TNode<Smi> tmp269;
    TNode<Smi> tmp270;
    TNode<Context> tmp271;
    TNode<Smi> tmp272;
    TNode<JSArray> tmp273;
    TNode<Smi> tmp274;
    TNode<Object> tmp275;
    ca_.Bind(&block31, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275);
    ca_.Goto(&block27, tmp258, tmp259, tmp260, tmp261, tmp262, tmp263, tmp264, tmp265, tmp266, tmp267, tmp268, tmp269, tmp270, tmp271, tmp272, tmp275);
  }

  if (block29.is_used()) {
    TNode<Context> tmp276;
    TNode<JSReceiver> tmp277;
    TNode<Number> tmp278;
    TNode<JSReceiver> tmp279;
    TNode<Object> tmp280;
    TNode<Object> tmp281;
    TNode<JSArray> tmp282;
    TNode<JSArray> tmp283;
    TNode<JSArray> tmp284;
    TNode<Map> tmp285;
    TNode<BoolT> tmp286;
    TNode<Smi> tmp287;
    TNode<Smi> tmp288;
    TNode<Context> tmp289;
    TNode<Smi> tmp290;
    ca_.Bind(&block29, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288, &tmp289, &tmp290);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3284);
    TNode<Object> tmp291;
    USE(tmp291);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp291 = LoadElementNoHole10FixedArray_236(state_, TNode<Context>{tmp289}, TNode<JSArray>{tmp284}, TNode<Smi>{tmp290}, &label0);
    ca_.Goto(&block33, tmp276, tmp277, tmp278, tmp279, tmp280, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289, tmp290, tmp284, tmp290, tmp291);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block34, tmp276, tmp277, tmp278, tmp279, tmp280, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289, tmp290, tmp284, tmp290);
    }
  }

  if (block34.is_used()) {
    TNode<Context> tmp292;
    TNode<JSReceiver> tmp293;
    TNode<Number> tmp294;
    TNode<JSReceiver> tmp295;
    TNode<Object> tmp296;
    TNode<Object> tmp297;
    TNode<JSArray> tmp298;
    TNode<JSArray> tmp299;
    TNode<JSArray> tmp300;
    TNode<Map> tmp301;
    TNode<BoolT> tmp302;
    TNode<Smi> tmp303;
    TNode<Smi> tmp304;
    TNode<Context> tmp305;
    TNode<Smi> tmp306;
    TNode<JSArray> tmp307;
    TNode<Smi> tmp308;
    ca_.Bind(&block34, &tmp292, &tmp293, &tmp294, &tmp295, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305, &tmp306, &tmp307, &tmp308);
    ca_.Goto(&block26, tmp292, tmp293, tmp294, tmp295, tmp296, tmp297, tmp298, tmp299, tmp300, tmp301, tmp302, tmp303);
  }

  if (block33.is_used()) {
    TNode<Context> tmp309;
    TNode<JSReceiver> tmp310;
    TNode<Number> tmp311;
    TNode<JSReceiver> tmp312;
    TNode<Object> tmp313;
    TNode<Object> tmp314;
    TNode<JSArray> tmp315;
    TNode<JSArray> tmp316;
    TNode<JSArray> tmp317;
    TNode<Map> tmp318;
    TNode<BoolT> tmp319;
    TNode<Smi> tmp320;
    TNode<Smi> tmp321;
    TNode<Context> tmp322;
    TNode<Smi> tmp323;
    TNode<JSArray> tmp324;
    TNode<Smi> tmp325;
    TNode<Object> tmp326;
    ca_.Bind(&block33, &tmp309, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322, &tmp323, &tmp324, &tmp325, &tmp326);
    ca_.Goto(&block27, tmp309, tmp310, tmp311, tmp312, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322, tmp323, tmp326);
  }

  if (block27.is_used()) {
    TNode<Context> tmp327;
    TNode<JSReceiver> tmp328;
    TNode<Number> tmp329;
    TNode<JSReceiver> tmp330;
    TNode<Object> tmp331;
    TNode<Object> tmp332;
    TNode<JSArray> tmp333;
    TNode<JSArray> tmp334;
    TNode<JSArray> tmp335;
    TNode<Map> tmp336;
    TNode<BoolT> tmp337;
    TNode<Smi> tmp338;
    TNode<Smi> tmp339;
    TNode<Context> tmp340;
    TNode<Smi> tmp341;
    TNode<Object> tmp342;
    ca_.Bind(&block27, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 136);
    ca_.Goto(&block25, tmp327, tmp328, tmp329, tmp330, tmp331, tmp332, tmp333, tmp334, tmp335, tmp336, tmp337, tmp338, tmp342);
  }

  if (block26.is_used()) {
    TNode<Context> tmp343;
    TNode<JSReceiver> tmp344;
    TNode<Number> tmp345;
    TNode<JSReceiver> tmp346;
    TNode<Object> tmp347;
    TNode<Object> tmp348;
    TNode<JSArray> tmp349;
    TNode<JSArray> tmp350;
    TNode<JSArray> tmp351;
    TNode<Map> tmp352;
    TNode<BoolT> tmp353;
    TNode<Smi> tmp354;
    ca_.Bind(&block26, &tmp343, &tmp344, &tmp345, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350, &tmp351, &tmp352, &tmp353, &tmp354);
    ca_.Goto(&block14, tmp343, tmp344, tmp345, tmp346, tmp347, tmp348, tmp349, tmp350, tmp351, tmp352, tmp353, tmp354);
  }

  if (block25.is_used()) {
    TNode<Context> tmp355;
    TNode<JSReceiver> tmp356;
    TNode<Number> tmp357;
    TNode<JSReceiver> tmp358;
    TNode<Object> tmp359;
    TNode<Object> tmp360;
    TNode<JSArray> tmp361;
    TNode<JSArray> tmp362;
    TNode<JSArray> tmp363;
    TNode<Map> tmp364;
    TNode<BoolT> tmp365;
    TNode<Smi> tmp366;
    TNode<Object> tmp367;
    ca_.Bind(&block25, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363, &tmp364, &tmp365, &tmp366, &tmp367);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 137);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 138);
    TNode<Oddball> tmp368;
    USE(tmp368);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp368 = Cast9ATTheHole_88(state_, TNode<Object>{tmp360}, &label0);
    ca_.Goto(&block37, tmp355, tmp356, tmp357, tmp358, tmp359, tmp360, tmp361, tmp362, tmp363, tmp364, tmp365, tmp366, tmp367, tmp360, tmp360, tmp368);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block38, tmp355, tmp356, tmp357, tmp358, tmp359, tmp360, tmp361, tmp362, tmp363, tmp364, tmp365, tmp366, tmp367, tmp360, tmp360);
    }
  }

  if (block38.is_used()) {
    TNode<Context> tmp369;
    TNode<JSReceiver> tmp370;
    TNode<Number> tmp371;
    TNode<JSReceiver> tmp372;
    TNode<Object> tmp373;
    TNode<Object> tmp374;
    TNode<JSArray> tmp375;
    TNode<JSArray> tmp376;
    TNode<JSArray> tmp377;
    TNode<Map> tmp378;
    TNode<BoolT> tmp379;
    TNode<Smi> tmp380;
    TNode<Object> tmp381;
    TNode<Object> tmp382;
    TNode<Object> tmp383;
    ca_.Bind(&block38, &tmp369, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381, &tmp382, &tmp383);
    ca_.Goto(&block36, tmp369, tmp370, tmp371, tmp372, tmp373, tmp374, tmp375, tmp376, tmp377, tmp378, tmp379, tmp380, tmp381, tmp382);
  }

  if (block37.is_used()) {
    TNode<Context> tmp384;
    TNode<JSReceiver> tmp385;
    TNode<Number> tmp386;
    TNode<JSReceiver> tmp387;
    TNode<Object> tmp388;
    TNode<Object> tmp389;
    TNode<JSArray> tmp390;
    TNode<JSArray> tmp391;
    TNode<JSArray> tmp392;
    TNode<Map> tmp393;
    TNode<BoolT> tmp394;
    TNode<Smi> tmp395;
    TNode<Object> tmp396;
    TNode<Object> tmp397;
    TNode<Object> tmp398;
    TNode<Oddball> tmp399;
    ca_.Bind(&block37, &tmp384, &tmp385, &tmp386, &tmp387, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395, &tmp396, &tmp397, &tmp398, &tmp399);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 139);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 138);
    ca_.Goto(&block35, tmp384, tmp385, tmp386, tmp387, tmp388, tmp396, tmp390, tmp391, tmp392, tmp393, tmp394, tmp395, tmp396, tmp397);
  }

  if (block36.is_used()) {
    TNode<Context> tmp400;
    TNode<JSReceiver> tmp401;
    TNode<Number> tmp402;
    TNode<JSReceiver> tmp403;
    TNode<Object> tmp404;
    TNode<Object> tmp405;
    TNode<JSArray> tmp406;
    TNode<JSArray> tmp407;
    TNode<JSArray> tmp408;
    TNode<Map> tmp409;
    TNode<BoolT> tmp410;
    TNode<Smi> tmp411;
    TNode<Object> tmp412;
    TNode<Object> tmp413;
    ca_.Bind(&block36, &tmp400, &tmp401, &tmp402, &tmp403, &tmp404, &tmp405, &tmp406, &tmp407, &tmp408, &tmp409, &tmp410, &tmp411, &tmp412, &tmp413);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 141);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 143);
    TNode<Oddball> tmp414;
    USE(tmp414);
    tmp414 = Undefined_64(state_);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3263);
    ca_.Goto(&block39, tmp400, tmp401, tmp402, tmp403, tmp404, tmp405, tmp406, tmp407, tmp408, tmp409, tmp410, tmp411, tmp412, tmp413, ca_.UncheckedCast<Object>(tmp413), tmp400, tmp403, tmp414, ca_.UncheckedCast<Object>(tmp413), tmp412, tmp411, tmp408);
  }

  if (block39.is_used()) {
    TNode<Context> tmp415;
    TNode<JSReceiver> tmp416;
    TNode<Number> tmp417;
    TNode<JSReceiver> tmp418;
    TNode<Object> tmp419;
    TNode<Object> tmp420;
    TNode<JSArray> tmp421;
    TNode<JSArray> tmp422;
    TNode<JSArray> tmp423;
    TNode<Map> tmp424;
    TNode<BoolT> tmp425;
    TNode<Smi> tmp426;
    TNode<Object> tmp427;
    TNode<Object> tmp428;
    TNode<Object> tmp429;
    TNode<Context> tmp430;
    TNode<JSReceiver> tmp431;
    TNode<Oddball> tmp432;
    TNode<Object> tmp433;
    TNode<Object> tmp434;
    TNode<Smi> tmp435;
    TNode<JSArray> tmp436;
    ca_.Bind(&block39, &tmp415, &tmp416, &tmp417, &tmp418, &tmp419, &tmp420, &tmp421, &tmp422, &tmp423, &tmp424, &tmp425, &tmp426, &tmp427, &tmp428, &tmp429, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434, &tmp435, &tmp436);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 142);
    TNode<Object> tmp437;
    USE(tmp437);
    tmp437 = CodeStubAssembler(state_).Call(TNode<Context>{tmp430}, TNode<JSReceiver>{tmp431}, TNode<Object>{tmp432}, TNode<Object>{tmp433}, TNode<Object>{tmp434}, TNode<Object>{tmp435}, TNode<Object>{tmp436});
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 138);
    ca_.Goto(&block35, tmp415, tmp416, tmp417, tmp418, tmp419, tmp437, tmp421, tmp422, tmp423, tmp424, tmp425, tmp426, tmp427, tmp428);
  }

  if (block35.is_used()) {
    TNode<Context> tmp438;
    TNode<JSReceiver> tmp439;
    TNode<Number> tmp440;
    TNode<JSReceiver> tmp441;
    TNode<Object> tmp442;
    TNode<Object> tmp443;
    TNode<JSArray> tmp444;
    TNode<JSArray> tmp445;
    TNode<JSArray> tmp446;
    TNode<Map> tmp447;
    TNode<BoolT> tmp448;
    TNode<Smi> tmp449;
    TNode<Object> tmp450;
    TNode<Object> tmp451;
    ca_.Bind(&block35, &tmp438, &tmp439, &tmp440, &tmp441, &tmp442, &tmp443, &tmp444, &tmp445, &tmp446, &tmp447, &tmp448, &tmp449, &tmp450, &tmp451);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 137);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 130);
    ca_.Goto(&block14, tmp438, tmp439, tmp440, tmp441, tmp442, tmp443, tmp444, tmp445, tmp446, tmp447, tmp448, tmp449);
  }

  if (block14.is_used()) {
    TNode<Context> tmp452;
    TNode<JSReceiver> tmp453;
    TNode<Number> tmp454;
    TNode<JSReceiver> tmp455;
    TNode<Object> tmp456;
    TNode<Object> tmp457;
    TNode<JSArray> tmp458;
    TNode<JSArray> tmp459;
    TNode<JSArray> tmp460;
    TNode<Map> tmp461;
    TNode<BoolT> tmp462;
    TNode<Smi> tmp463;
    ca_.Bind(&block14, &tmp452, &tmp453, &tmp454, &tmp455, &tmp456, &tmp457, &tmp458, &tmp459, &tmp460, &tmp461, &tmp462, &tmp463);
    TNode<Smi> tmp464;
    USE(tmp464);
    tmp464 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp465;
    USE(tmp465);
    tmp465 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp463}, TNode<Smi>{tmp464});
    ca_.Goto(&block13, tmp452, tmp453, tmp454, tmp455, tmp456, tmp457, tmp458, tmp459, tmp460, tmp461, tmp462, tmp465);
  }

  if (block12.is_used()) {
    TNode<Context> tmp466;
    TNode<JSReceiver> tmp467;
    TNode<Number> tmp468;
    TNode<JSReceiver> tmp469;
    TNode<Object> tmp470;
    TNode<Object> tmp471;
    TNode<JSArray> tmp472;
    TNode<JSArray> tmp473;
    TNode<JSArray> tmp474;
    TNode<Map> tmp475;
    TNode<BoolT> tmp476;
    TNode<Smi> tmp477;
    ca_.Bind(&block12, &tmp466, &tmp467, &tmp468, &tmp469, &tmp470, &tmp471, &tmp472, &tmp473, &tmp474, &tmp475, &tmp476, &tmp477);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 148);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 149);
    TNode<Oddball> tmp478;
    USE(tmp478);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp478 = Cast9ATTheHole_88(state_, TNode<Object>{tmp471}, &label0);
    ca_.Goto(&block42, tmp466, tmp467, tmp468, tmp469, tmp470, tmp471, tmp472, tmp473, tmp474, tmp475, tmp476, tmp471, tmp471, tmp478);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block43, tmp466, tmp467, tmp468, tmp469, tmp470, tmp471, tmp472, tmp473, tmp474, tmp475, tmp476, tmp471, tmp471);
    }
  }

  if (block43.is_used()) {
    TNode<Context> tmp479;
    TNode<JSReceiver> tmp480;
    TNode<Number> tmp481;
    TNode<JSReceiver> tmp482;
    TNode<Object> tmp483;
    TNode<Object> tmp484;
    TNode<JSArray> tmp485;
    TNode<JSArray> tmp486;
    TNode<JSArray> tmp487;
    TNode<Map> tmp488;
    TNode<BoolT> tmp489;
    TNode<Object> tmp490;
    TNode<Object> tmp491;
    ca_.Bind(&block43, &tmp479, &tmp480, &tmp481, &tmp482, &tmp483, &tmp484, &tmp485, &tmp486, &tmp487, &tmp488, &tmp489, &tmp490, &tmp491);
    ca_.Goto(&block41, tmp479, tmp480, tmp481, tmp482, tmp483, tmp484, tmp485, tmp486, tmp487, tmp488, tmp489, tmp490);
  }

  if (block42.is_used()) {
    TNode<Context> tmp492;
    TNode<JSReceiver> tmp493;
    TNode<Number> tmp494;
    TNode<JSReceiver> tmp495;
    TNode<Object> tmp496;
    TNode<Object> tmp497;
    TNode<JSArray> tmp498;
    TNode<JSArray> tmp499;
    TNode<JSArray> tmp500;
    TNode<Map> tmp501;
    TNode<BoolT> tmp502;
    TNode<Object> tmp503;
    TNode<Object> tmp504;
    TNode<Oddball> tmp505;
    ca_.Bind(&block42, &tmp492, &tmp493, &tmp494, &tmp495, &tmp496, &tmp497, &tmp498, &tmp499, &tmp500, &tmp501, &tmp502, &tmp503, &tmp504, &tmp505);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 150);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp492}, MessageTemplate::kReduceNoInitial, "Array.prototype.reduce");
  }

  if (block41.is_used()) {
    TNode<Context> tmp506;
    TNode<JSReceiver> tmp507;
    TNode<Number> tmp508;
    TNode<JSReceiver> tmp509;
    TNode<Object> tmp510;
    TNode<Object> tmp511;
    TNode<JSArray> tmp512;
    TNode<JSArray> tmp513;
    TNode<JSArray> tmp514;
    TNode<Map> tmp515;
    TNode<BoolT> tmp516;
    TNode<Object> tmp517;
    ca_.Bind(&block41, &tmp506, &tmp507, &tmp508, &tmp509, &tmp510, &tmp511, &tmp512, &tmp513, &tmp514, &tmp515, &tmp516, &tmp517);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 152);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 153);
    ca_.Goto(&block2, tmp506, tmp507, tmp508, tmp509, tmp510, ca_.UncheckedCast<Object>(tmp517));
  }

  if (block2.is_used()) {
    TNode<Context> tmp518;
    TNode<JSReceiver> tmp519;
    TNode<Number> tmp520;
    TNode<JSReceiver> tmp521;
    TNode<Object> tmp522;
    TNode<Object> tmp523;
    ca_.Bind(&block2, &tmp518, &tmp519, &tmp520, &tmp521, &tmp522, &tmp523);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 118);
    ca_.Goto(&block44, tmp518, tmp519, tmp520, tmp521, tmp522, tmp523);
  }

  if (block1.is_used()) {
    TNode<Number> tmp524;
    TNode<Object> tmp525;
    ca_.Bind(&block1, &tmp524, &tmp525);
    *label_Bailout_parameter_1 = tmp525;
    *label_Bailout_parameter_0 = tmp524;
    ca_.Goto(label_Bailout);
  }

    TNode<Context> tmp526;
    TNode<JSReceiver> tmp527;
    TNode<Number> tmp528;
    TNode<JSReceiver> tmp529;
    TNode<Object> tmp530;
    TNode<Object> tmp531;
    ca_.Bind(&block44, &tmp526, &tmp527, &tmp528, &tmp529, &tmp530, &tmp531);
  return TNode<Object>{tmp531};
}

TF_BUILTIN(ArrayReduce, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, JSReceiver> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, JSReceiver, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, JSReceiver, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, JSReceiver, Object, JSReceiver, Number, JSReceiver, Object, Number, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, JSReceiver, Object, JSReceiver, Number, JSReceiver, Object, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, JSReceiver, Object, Number, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 163);
    TNode<Object> tmp5;
    USE(tmp5);
    tmp5 = RequireObjectCoercible_243(state_, TNode<Context>{tmp3}, TNode<Object>{tmp4}, "Array.prototype.reduce");
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 166);
    TNode<JSReceiver> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).ToObject_Inline(TNode<Context>{tmp3}, TNode<Object>{tmp4});
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 169);
    TNode<Number> tmp7;
    USE(tmp7);
    tmp7 = GetLengthProperty_246(state_, TNode<Context>{tmp3}, TNode<Object>{tmp6});
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 172);
    TNode<IntPtrT> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp8});
    ca_.Branch(tmp9, &block3, &block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, tmp7);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp10;
    TNode<RawPtrT> tmp11;
    TNode<IntPtrT> tmp12;
    TNode<Context> tmp13;
    TNode<Object> tmp14;
    TNode<JSReceiver> tmp15;
    TNode<Number> tmp16;
    ca_.Bind(&block3, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 173);
    ca_.Goto(&block2, tmp10, tmp11, tmp12, tmp13, tmp14);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp17;
    TNode<RawPtrT> tmp18;
    TNode<IntPtrT> tmp19;
    TNode<Context> tmp20;
    TNode<Object> tmp21;
    TNode<JSReceiver> tmp22;
    TNode<Number> tmp23;
    ca_.Bind(&block4, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 175);
    TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp17}, TNode<RawPtrT>{tmp18}, TNode<IntPtrT>{tmp19}}, TNode<IntPtrT>{tmp24});
    TNode<JSReceiver> tmp26;
    USE(tmp26);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp26 = Cast71UT19ATCallableApiObject17ATCallableJSProxy15JSBoundFunction10JSFunction_1434(state_, TNode<Context>{tmp20}, TNode<Object>{tmp25}, &label0);
    ca_.Goto(&block5, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp25, tmp26);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp25);
    }
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp27;
    TNode<RawPtrT> tmp28;
    TNode<IntPtrT> tmp29;
    TNode<Context> tmp30;
    TNode<Object> tmp31;
    TNode<JSReceiver> tmp32;
    TNode<Number> tmp33;
    TNode<Object> tmp34;
    ca_.Bind(&block6, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.Goto(&block2, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    TNode<RawPtrT> tmp35;
    TNode<RawPtrT> tmp36;
    TNode<IntPtrT> tmp37;
    TNode<Context> tmp38;
    TNode<Object> tmp39;
    TNode<JSReceiver> tmp40;
    TNode<Number> tmp41;
    TNode<Object> tmp42;
    TNode<JSReceiver> tmp43;
    ca_.Bind(&block5, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 182);
    TNode<IntPtrT> tmp44;
    USE(tmp44);
    tmp44 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<BoolT> tmp45;
    USE(tmp45);
    tmp45 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp37}, TNode<IntPtrT>{tmp44});
    ca_.Branch(tmp45, &block7, &block8, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp43);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp46;
    TNode<RawPtrT> tmp47;
    TNode<IntPtrT> tmp48;
    TNode<Context> tmp49;
    TNode<Object> tmp50;
    TNode<JSReceiver> tmp51;
    TNode<Number> tmp52;
    TNode<JSReceiver> tmp53;
    ca_.Bind(&block7, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53);
    TNode<IntPtrT> tmp54;
    USE(tmp54);
    tmp54 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp55;
    USE(tmp55);
    tmp55 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp46}, TNode<RawPtrT>{tmp47}, TNode<IntPtrT>{tmp48}}, TNode<IntPtrT>{tmp54});
    ca_.Goto(&block10, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp55);
  }

  if (block8.is_used()) {
    TNode<RawPtrT> tmp56;
    TNode<RawPtrT> tmp57;
    TNode<IntPtrT> tmp58;
    TNode<Context> tmp59;
    TNode<Object> tmp60;
    TNode<JSReceiver> tmp61;
    TNode<Number> tmp62;
    TNode<JSReceiver> tmp63;
    ca_.Bind(&block8, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63);
    TNode<Oddball> tmp64;
    USE(tmp64);
    tmp64 = TheHole_62(state_);
    ca_.Goto(&block9, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64);
  }

  if (block10.is_used()) {
    TNode<RawPtrT> tmp65;
    TNode<RawPtrT> tmp66;
    TNode<IntPtrT> tmp67;
    TNode<Context> tmp68;
    TNode<Object> tmp69;
    TNode<JSReceiver> tmp70;
    TNode<Number> tmp71;
    TNode<JSReceiver> tmp72;
    TNode<Object> tmp73;
    ca_.Bind(&block10, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73);
    ca_.Goto(&block9, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73);
  }

  if (block9.is_used()) {
    TNode<RawPtrT> tmp74;
    TNode<RawPtrT> tmp75;
    TNode<IntPtrT> tmp76;
    TNode<Context> tmp77;
    TNode<Object> tmp78;
    TNode<JSReceiver> tmp79;
    TNode<Number> tmp80;
    TNode<JSReceiver> tmp81;
    TNode<Object> tmp82;
    ca_.Bind(&block9, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 181);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 185);
    TNode<Object> tmp83;
    USE(tmp83);
    compiler::TypedCodeAssemblerVariable<Number> result_0_0(&ca_);
    compiler::TypedCodeAssemblerVariable<Object> result_0_1(&ca_);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp83 = FastArrayReduce_27(state_, TNode<Context>{tmp77}, TNode<JSReceiver>{tmp79}, TNode<Number>{tmp80}, TNode<JSReceiver>{tmp81}, TNode<Object>{tmp82}, &label0, &result_0_0, &result_0_1);
    ca_.Goto(&block13, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp79, tmp80, tmp81, tmp82, tmp83);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block14, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp79, tmp80, tmp81, tmp82, result_0_0.value(), result_0_1.value());
    }
  }

  if (block14.is_used()) {
    TNode<RawPtrT> tmp84;
    TNode<RawPtrT> tmp85;
    TNode<IntPtrT> tmp86;
    TNode<Context> tmp87;
    TNode<Object> tmp88;
    TNode<JSReceiver> tmp89;
    TNode<Number> tmp90;
    TNode<JSReceiver> tmp91;
    TNode<Object> tmp92;
    TNode<JSReceiver> tmp93;
    TNode<Number> tmp94;
    TNode<JSReceiver> tmp95;
    TNode<Object> tmp96;
    TNode<Number> tmp97;
    TNode<Object> tmp98;
    ca_.Bind(&block14, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98);
    ca_.Goto(&block12, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp97, tmp98);
  }

  if (block13.is_used()) {
    TNode<RawPtrT> tmp99;
    TNode<RawPtrT> tmp100;
    TNode<IntPtrT> tmp101;
    TNode<Context> tmp102;
    TNode<Object> tmp103;
    TNode<JSReceiver> tmp104;
    TNode<Number> tmp105;
    TNode<JSReceiver> tmp106;
    TNode<Object> tmp107;
    TNode<JSReceiver> tmp108;
    TNode<Number> tmp109;
    TNode<JSReceiver> tmp110;
    TNode<Object> tmp111;
    TNode<Object> tmp112;
    ca_.Bind(&block13, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112);
    arguments.PopAndReturn(tmp112);
  }

  if (block12.is_used()) {
    TNode<RawPtrT> tmp113;
    TNode<RawPtrT> tmp114;
    TNode<IntPtrT> tmp115;
    TNode<Context> tmp116;
    TNode<Object> tmp117;
    TNode<JSReceiver> tmp118;
    TNode<Number> tmp119;
    TNode<JSReceiver> tmp120;
    TNode<Object> tmp121;
    TNode<Number> tmp122;
    TNode<Object> tmp123;
    ca_.Bind(&block12, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 190);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 189);
    TNode<Object> tmp124;
    tmp124 = CodeStubAssembler(state_).CallBuiltin(Builtins::kArrayReduceLoopContinuation, tmp116, tmp118, tmp120, tmp123, tmp118, tmp122, tmp119);
    USE(tmp124);
    arguments.PopAndReturn(tmp124);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp125;
    TNode<RawPtrT> tmp126;
    TNode<IntPtrT> tmp127;
    TNode<Context> tmp128;
    TNode<Object> tmp129;
    ca_.Bind(&block2, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 194);
    TNode<IntPtrT> tmp130;
    USE(tmp130);
    tmp130 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp131;
    USE(tmp131);
    tmp131 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp125}, TNode<RawPtrT>{tmp126}, TNode<IntPtrT>{tmp127}}, TNode<IntPtrT>{tmp130});
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp128}, MessageTemplate::kCalledNonCallable, TNode<Object>{tmp131});
  }
}

}  // namespace internal
}  // namespace v8

