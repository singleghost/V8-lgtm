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

TF_BUILTIN(ArrayFindLoopEagerDeoptContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kCallback));
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kThisArg));
  USE(parameter3);
  TNode<Object> parameter4 = UncheckedCast<Object>(Parameter(Descriptor::kInitialK));
  USE(parameter4);
  TNode<Object> parameter5 = UncheckedCast<Object>(Parameter(Descriptor::kLength));
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
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 17);
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
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 18);
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
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 19);
    TNode<Number> tmp68;
    USE(tmp68);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp68 = Cast20UT5ATSmi10HeapNumber_85(state_, TNode<Object>{tmp64}, &label0);
    ca_.Goto(&block11, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp64, tmp68);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp64);
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
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 20);
    TNode<Number> tmp105;
    USE(tmp105);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp105 = Cast20UT5ATSmi10HeapNumber_85(state_, TNode<Object>{tmp101}, &label0);
    ca_.Goto(&block15, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp101, tmp105);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp101);
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
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 23);
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 22);
    TNode<Object> tmp146;
    tmp146 = CodeStubAssembler(state_).CallBuiltin(Builtins::kArrayFindLoopContinuation, tmp136, tmp142, tmp143, tmp139, tmp142, tmp144, tmp145);
    USE(tmp146);
    CodeStubAssembler(state_).Return(tmp146);
  }
}

TF_BUILTIN(ArrayFindLoopLazyDeoptContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kCallback));
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kThisArg));
  USE(parameter3);
  TNode<Object> parameter4 = UncheckedCast<Object>(Parameter(Descriptor::kInitialK));
  USE(parameter4);
  TNode<Object> parameter5 = UncheckedCast<Object>(Parameter(Descriptor::kLength));
  USE(parameter5);
  TNode<Object> parameter6 = UncheckedCast<Object>(Parameter(Descriptor::kResult));
  USE(parameter6);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3, parameter4, parameter5, parameter6);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    TNode<Object> tmp2;
    TNode<Object> tmp3;
    TNode<Object> tmp4;
    TNode<Object> tmp5;
    TNode<Object> tmp6;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 34);
    CodeStubAssembler(state_).Unreachable();
  }
}

TF_BUILTIN(ArrayFindLoopAfterCallbackLazyDeoptContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kCallback));
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kThisArg));
  USE(parameter3);
  TNode<Object> parameter4 = UncheckedCast<Object>(Parameter(Descriptor::kInitialK));
  USE(parameter4);
  TNode<Object> parameter5 = UncheckedCast<Object>(Parameter(Descriptor::kLength));
  USE(parameter5);
  TNode<Object> parameter6 = UncheckedCast<Object>(Parameter(Descriptor::kFoundValue));
  USE(parameter6);
  TNode<Object> parameter7 = UncheckedCast<Object>(Parameter(Descriptor::kIsFound));
  USE(parameter7);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, Object, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver, Object, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Object, Number> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Number> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Number, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Number, Object, Number> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Number> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Number, Number> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Number, Number> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Number, Number> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3, parameter4, parameter5, parameter6, parameter7);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    TNode<Object> tmp2;
    TNode<Object> tmp3;
    TNode<Object> tmp4;
    TNode<Object> tmp5;
    TNode<Object> tmp6;
    TNode<Object> tmp7;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5, &tmp6, &tmp7);
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 48);
    TNode<JSReceiver> tmp8;
    USE(tmp8);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp8 = Cast10JSReceiver_1433(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp1, tmp8);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp1);
    }
  }

  if (block4.is_used()) {
    TNode<Context> tmp9;
    TNode<Object> tmp10;
    TNode<Object> tmp11;
    TNode<Object> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    TNode<Object> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    ca_.Bind(&block4, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16);
  }

  if (block3.is_used()) {
    TNode<Context> tmp18;
    TNode<Object> tmp19;
    TNode<Object> tmp20;
    TNode<Object> tmp21;
    TNode<Object> tmp22;
    TNode<Object> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    TNode<Object> tmp26;
    TNode<JSReceiver> tmp27;
    ca_.Bind(&block3, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.Goto(&block1, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp27);
  }

  if (block2.is_used()) {
    TNode<Context> tmp28;
    TNode<Object> tmp29;
    TNode<Object> tmp30;
    TNode<Object> tmp31;
    TNode<Object> tmp32;
    TNode<Object> tmp33;
    TNode<Object> tmp34;
    TNode<Object> tmp35;
    ca_.Bind(&block2, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block1.is_used()) {
    TNode<Context> tmp36;
    TNode<Object> tmp37;
    TNode<Object> tmp38;
    TNode<Object> tmp39;
    TNode<Object> tmp40;
    TNode<Object> tmp41;
    TNode<Object> tmp42;
    TNode<Object> tmp43;
    TNode<JSReceiver> tmp44;
    ca_.Bind(&block1, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44);
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 49);
    TNode<JSReceiver> tmp45;
    USE(tmp45);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp45 = Cast71UT19ATCallableApiObject17ATCallableJSProxy15JSBoundFunction10JSFunction_1434(state_, TNode<Context>{tmp36}, TNode<Object>{tmp38}, &label0);
    ca_.Goto(&block7, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp38, tmp45);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp38);
    }
  }

  if (block8.is_used()) {
    TNode<Context> tmp46;
    TNode<Object> tmp47;
    TNode<Object> tmp48;
    TNode<Object> tmp49;
    TNode<Object> tmp50;
    TNode<Object> tmp51;
    TNode<Object> tmp52;
    TNode<Object> tmp53;
    TNode<JSReceiver> tmp54;
    TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block6, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54);
  }

  if (block7.is_used()) {
    TNode<Context> tmp56;
    TNode<Object> tmp57;
    TNode<Object> tmp58;
    TNode<Object> tmp59;
    TNode<Object> tmp60;
    TNode<Object> tmp61;
    TNode<Object> tmp62;
    TNode<Object> tmp63;
    TNode<JSReceiver> tmp64;
    TNode<Object> tmp65;
    TNode<JSReceiver> tmp66;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66);
    ca_.Goto(&block5, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp66);
  }

  if (block6.is_used()) {
    TNode<Context> tmp67;
    TNode<Object> tmp68;
    TNode<Object> tmp69;
    TNode<Object> tmp70;
    TNode<Object> tmp71;
    TNode<Object> tmp72;
    TNode<Object> tmp73;
    TNode<Object> tmp74;
    TNode<JSReceiver> tmp75;
    ca_.Bind(&block6, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block5.is_used()) {
    TNode<Context> tmp76;
    TNode<Object> tmp77;
    TNode<Object> tmp78;
    TNode<Object> tmp79;
    TNode<Object> tmp80;
    TNode<Object> tmp81;
    TNode<Object> tmp82;
    TNode<Object> tmp83;
    TNode<JSReceiver> tmp84;
    TNode<JSReceiver> tmp85;
    ca_.Bind(&block5, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85);
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 50);
    TNode<Number> tmp86;
    USE(tmp86);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp86 = Cast20UT5ATSmi10HeapNumber_85(state_, TNode<Object>{tmp80}, &label0);
    ca_.Goto(&block11, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp80, tmp86);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp80);
    }
  }

  if (block12.is_used()) {
    TNode<Context> tmp87;
    TNode<Object> tmp88;
    TNode<Object> tmp89;
    TNode<Object> tmp90;
    TNode<Object> tmp91;
    TNode<Object> tmp92;
    TNode<Object> tmp93;
    TNode<Object> tmp94;
    TNode<JSReceiver> tmp95;
    TNode<JSReceiver> tmp96;
    TNode<Object> tmp97;
    ca_.Bind(&block12, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    ca_.Goto(&block10, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96);
  }

  if (block11.is_used()) {
    TNode<Context> tmp98;
    TNode<Object> tmp99;
    TNode<Object> tmp100;
    TNode<Object> tmp101;
    TNode<Object> tmp102;
    TNode<Object> tmp103;
    TNode<Object> tmp104;
    TNode<Object> tmp105;
    TNode<JSReceiver> tmp106;
    TNode<JSReceiver> tmp107;
    TNode<Object> tmp108;
    TNode<Number> tmp109;
    ca_.Bind(&block11, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109);
    ca_.Goto(&block9, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp109);
  }

  if (block10.is_used()) {
    TNode<Context> tmp110;
    TNode<Object> tmp111;
    TNode<Object> tmp112;
    TNode<Object> tmp113;
    TNode<Object> tmp114;
    TNode<Object> tmp115;
    TNode<Object> tmp116;
    TNode<Object> tmp117;
    TNode<JSReceiver> tmp118;
    TNode<JSReceiver> tmp119;
    ca_.Bind(&block10, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block9.is_used()) {
    TNode<Context> tmp120;
    TNode<Object> tmp121;
    TNode<Object> tmp122;
    TNode<Object> tmp123;
    TNode<Object> tmp124;
    TNode<Object> tmp125;
    TNode<Object> tmp126;
    TNode<Object> tmp127;
    TNode<JSReceiver> tmp128;
    TNode<JSReceiver> tmp129;
    TNode<Number> tmp130;
    ca_.Bind(&block9, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130);
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 51);
    TNode<Number> tmp131;
    USE(tmp131);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp131 = Cast20UT5ATSmi10HeapNumber_85(state_, TNode<Object>{tmp125}, &label0);
    ca_.Goto(&block15, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp125, tmp131);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp125);
    }
  }

  if (block16.is_used()) {
    TNode<Context> tmp132;
    TNode<Object> tmp133;
    TNode<Object> tmp134;
    TNode<Object> tmp135;
    TNode<Object> tmp136;
    TNode<Object> tmp137;
    TNode<Object> tmp138;
    TNode<Object> tmp139;
    TNode<JSReceiver> tmp140;
    TNode<JSReceiver> tmp141;
    TNode<Number> tmp142;
    TNode<Object> tmp143;
    ca_.Bind(&block16, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143);
    ca_.Goto(&block14, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142);
  }

  if (block15.is_used()) {
    TNode<Context> tmp144;
    TNode<Object> tmp145;
    TNode<Object> tmp146;
    TNode<Object> tmp147;
    TNode<Object> tmp148;
    TNode<Object> tmp149;
    TNode<Object> tmp150;
    TNode<Object> tmp151;
    TNode<JSReceiver> tmp152;
    TNode<JSReceiver> tmp153;
    TNode<Number> tmp154;
    TNode<Object> tmp155;
    TNode<Number> tmp156;
    ca_.Bind(&block15, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156);
    ca_.Goto(&block13, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp156);
  }

  if (block14.is_used()) {
    TNode<Context> tmp157;
    TNode<Object> tmp158;
    TNode<Object> tmp159;
    TNode<Object> tmp160;
    TNode<Object> tmp161;
    TNode<Object> tmp162;
    TNode<Object> tmp163;
    TNode<Object> tmp164;
    TNode<JSReceiver> tmp165;
    TNode<JSReceiver> tmp166;
    TNode<Number> tmp167;
    ca_.Bind(&block14, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block13.is_used()) {
    TNode<Context> tmp168;
    TNode<Object> tmp169;
    TNode<Object> tmp170;
    TNode<Object> tmp171;
    TNode<Object> tmp172;
    TNode<Object> tmp173;
    TNode<Object> tmp174;
    TNode<Object> tmp175;
    TNode<JSReceiver> tmp176;
    TNode<JSReceiver> tmp177;
    TNode<Number> tmp178;
    TNode<Number> tmp179;
    ca_.Bind(&block13, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179);
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 58);
    TNode<BoolT> tmp180;
    USE(tmp180);
    tmp180 = ToBoolean_242(state_, TNode<Object>{tmp175});
    ca_.Branch(tmp180, &block17, &block18, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179);
  }

  if (block17.is_used()) {
    TNode<Context> tmp181;
    TNode<Object> tmp182;
    TNode<Object> tmp183;
    TNode<Object> tmp184;
    TNode<Object> tmp185;
    TNode<Object> tmp186;
    TNode<Object> tmp187;
    TNode<Object> tmp188;
    TNode<JSReceiver> tmp189;
    TNode<JSReceiver> tmp190;
    TNode<Number> tmp191;
    TNode<Number> tmp192;
    ca_.Bind(&block17, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192);
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 59);
    CodeStubAssembler(state_).Return(tmp187);
  }

  if (block18.is_used()) {
    TNode<Context> tmp193;
    TNode<Object> tmp194;
    TNode<Object> tmp195;
    TNode<Object> tmp196;
    TNode<Object> tmp197;
    TNode<Object> tmp198;
    TNode<Object> tmp199;
    TNode<Object> tmp200;
    TNode<JSReceiver> tmp201;
    TNode<JSReceiver> tmp202;
    TNode<Number> tmp203;
    TNode<Number> tmp204;
    ca_.Bind(&block18, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204);
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 63);
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 62);
    TNode<Object> tmp205;
    tmp205 = CodeStubAssembler(state_).CallBuiltin(Builtins::kArrayFindLoopContinuation, tmp193, tmp201, tmp202, tmp196, tmp201, tmp203, tmp204);
    USE(tmp205);
    CodeStubAssembler(state_).Return(tmp205);
  }
}

TF_BUILTIN(ArrayFindLoopContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSReceiver> parameter1 = UncheckedCast<JSReceiver>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  TNode<JSReceiver> parameter2 = UncheckedCast<JSReceiver>(Parameter(Descriptor::kCallbackfn));
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kThisArg));
  USE(parameter3);
  TNode<JSReceiver> parameter4 = UncheckedCast<JSReceiver>(Parameter(Descriptor::kO));
  USE(parameter4);
  TNode<Number> parameter5 = UncheckedCast<Number>(Parameter(Descriptor::kInitialK));
  USE(parameter5);
  TNode<Number> parameter6 = UncheckedCast<Number>(Parameter(Descriptor::kLength));
  USE(parameter6);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number, Number, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number, Number, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 71);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp5);
  }

  if (block3.is_used()) {
    TNode<Context> tmp7;
    TNode<JSReceiver> tmp8;
    TNode<JSReceiver> tmp9;
    TNode<Object> tmp10;
    TNode<JSReceiver> tmp11;
    TNode<Number> tmp12;
    TNode<Number> tmp13;
    TNode<Number> tmp14;
    ca_.Bind(&block3, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
    TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = NumberIsLessThan_75(state_, TNode<Number>{tmp14}, TNode<Number>{tmp13});
    ca_.Branch(tmp15, &block1, &block2, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14);
  }

  if (block1.is_used()) {
    TNode<Context> tmp16;
    TNode<JSReceiver> tmp17;
    TNode<JSReceiver> tmp18;
    TNode<Object> tmp19;
    TNode<JSReceiver> tmp20;
    TNode<Number> tmp21;
    TNode<Number> tmp22;
    TNode<Number> tmp23;
    ca_.Bind(&block1, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 77);
    TNode<Object> tmp24;
    USE(tmp24);
    tmp24 = CodeStubAssembler(state_).GetProperty(TNode<Context>{tmp16}, TNode<Object>{tmp20}, TNode<Object>{tmp23});
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 81);
    TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = CodeStubAssembler(state_).Call(TNode<Context>{tmp16}, TNode<JSReceiver>{tmp18}, TNode<Object>{tmp19}, TNode<Object>{tmp24}, TNode<Object>{tmp23}, TNode<Object>{tmp20});
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 84);
    TNode<BoolT> tmp26;
    USE(tmp26);
    tmp26 = ToBoolean_242(state_, TNode<Object>{tmp25});
    ca_.Branch(tmp26, &block5, &block6, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block5.is_used()) {
    TNode<Context> tmp27;
    TNode<JSReceiver> tmp28;
    TNode<JSReceiver> tmp29;
    TNode<Object> tmp30;
    TNode<JSReceiver> tmp31;
    TNode<Number> tmp32;
    TNode<Number> tmp33;
    TNode<Number> tmp34;
    TNode<Object> tmp35;
    TNode<Object> tmp36;
    ca_.Bind(&block5, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 85);
    CodeStubAssembler(state_).Return(tmp35);
  }

  if (block6.is_used()) {
    TNode<Context> tmp37;
    TNode<JSReceiver> tmp38;
    TNode<JSReceiver> tmp39;
    TNode<Object> tmp40;
    TNode<JSReceiver> tmp41;
    TNode<Number> tmp42;
    TNode<Number> tmp43;
    TNode<Number> tmp44;
    TNode<Object> tmp45;
    TNode<Object> tmp46;
    ca_.Bind(&block6, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46);
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 71);
    ca_.Goto(&block4, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44);
  }

  if (block4.is_used()) {
    TNode<Context> tmp47;
    TNode<JSReceiver> tmp48;
    TNode<JSReceiver> tmp49;
    TNode<Object> tmp50;
    TNode<JSReceiver> tmp51;
    TNode<Number> tmp52;
    TNode<Number> tmp53;
    TNode<Number> tmp54;
    ca_.Bind(&block4, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54);
    TNode<Number> tmp55;
    USE(tmp55);
    tmp55 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 1);
    TNode<Number> tmp56;
    USE(tmp56);
    tmp56 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{tmp54}, TNode<Number>{tmp55});
    ca_.Goto(&block3, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp56);
  }

  if (block2.is_used()) {
    TNode<Context> tmp57;
    TNode<JSReceiver> tmp58;
    TNode<JSReceiver> tmp59;
    TNode<Object> tmp60;
    TNode<JSReceiver> tmp61;
    TNode<Number> tmp62;
    TNode<Number> tmp63;
    TNode<Number> tmp64;
    ca_.Bind(&block2, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64);
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 90);
    TNode<Oddball> tmp65;
    USE(tmp65);
    tmp65 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp65);
  }
}

TNode<Object> FastArrayFind_5(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Number> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, compiler::CodeAssemblerLabel* label_Bailout, compiler::TypedCodeAssemblerVariable<Smi>* label_Bailout_parameter_0) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Number, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Smi, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Smi, JSReceiver, JSArray> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Smi, JSArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Smi, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Smi, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Smi, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Smi, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Smi, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Smi, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Smi, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Smi, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Smi, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Smi, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, JSArray> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Smi, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Smi, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Smi, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Context, Smi> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Smi, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Context, Smi, JSArray, Smi> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Smi, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Context, Smi, JSArray, Smi, Object> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Smi, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Context, Smi> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Smi, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Context, Smi, JSArray, Smi> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Smi, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Context, Smi, JSArray, Smi, Object> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Smi, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Context, Smi, Object> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Smi, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Smi, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi, Object> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Smi, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Object, Context, JSReceiver, Object, Object, Smi, JSArray> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Smi, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Object, Object> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Smi, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Object, Object> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Smi, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Smi, Smi, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o, p_len, p_callbackfn, p_thisArg);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSReceiver> tmp1;
    TNode<Number> tmp2;
    TNode<JSReceiver> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 96);
    TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 97);
    TNode<Smi> tmp6;
    USE(tmp6);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp6 = Cast5ATSmi_83(state_, TNode<Object>{tmp2}, &label0);
    ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp2, tmp6);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp2);
    }
  }

  if (block6.is_used()) {
    TNode<Context> tmp7;
    TNode<JSReceiver> tmp8;
    TNode<Number> tmp9;
    TNode<JSReceiver> tmp10;
    TNode<Object> tmp11;
    TNode<Smi> tmp12;
    TNode<Number> tmp13;
    ca_.Bind(&block6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12);
  }

  if (block5.is_used()) {
    TNode<Context> tmp14;
    TNode<JSReceiver> tmp15;
    TNode<Number> tmp16;
    TNode<JSReceiver> tmp17;
    TNode<Object> tmp18;
    TNode<Smi> tmp19;
    TNode<Number> tmp20;
    TNode<Smi> tmp21;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp21);
  }

  if (block4.is_used()) {
    TNode<Context> tmp22;
    TNode<JSReceiver> tmp23;
    TNode<Number> tmp24;
    TNode<JSReceiver> tmp25;
    TNode<Object> tmp26;
    TNode<Smi> tmp27;
    ca_.Bind(&block4, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.Goto(&block1, tmp27);
  }

  if (block3.is_used()) {
    TNode<Context> tmp28;
    TNode<JSReceiver> tmp29;
    TNode<Number> tmp30;
    TNode<JSReceiver> tmp31;
    TNode<Object> tmp32;
    TNode<Smi> tmp33;
    TNode<Smi> tmp34;
    ca_.Bind(&block3, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 98);
    TNode<JSArray> tmp35;
    USE(tmp35);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp35 = Cast13ATFastJSArray_137(state_, TNode<Context>{tmp28}, TNode<HeapObject>{tmp29}, &label0);
    ca_.Goto(&block9, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp29, tmp35);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp29);
    }
  }

  if (block10.is_used()) {
    TNode<Context> tmp36;
    TNode<JSReceiver> tmp37;
    TNode<Number> tmp38;
    TNode<JSReceiver> tmp39;
    TNode<Object> tmp40;
    TNode<Smi> tmp41;
    TNode<Smi> tmp42;
    TNode<JSReceiver> tmp43;
    ca_.Bind(&block10, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.Goto(&block8, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42);
  }

  if (block9.is_used()) {
    TNode<Context> tmp44;
    TNode<JSReceiver> tmp45;
    TNode<Number> tmp46;
    TNode<JSReceiver> tmp47;
    TNode<Object> tmp48;
    TNode<Smi> tmp49;
    TNode<Smi> tmp50;
    TNode<JSReceiver> tmp51;
    TNode<JSArray> tmp52;
    ca_.Bind(&block9, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52);
    ca_.Goto(&block7, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp52);
  }

  if (block8.is_used()) {
    TNode<Context> tmp53;
    TNode<JSReceiver> tmp54;
    TNode<Number> tmp55;
    TNode<JSReceiver> tmp56;
    TNode<Object> tmp57;
    TNode<Smi> tmp58;
    TNode<Smi> tmp59;
    ca_.Bind(&block8, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    ca_.Goto(&block1, tmp58);
  }

  if (block7.is_used()) {
    TNode<Context> tmp60;
    TNode<JSReceiver> tmp61;
    TNode<Number> tmp62;
    TNode<JSReceiver> tmp63;
    TNode<Object> tmp64;
    TNode<Smi> tmp65;
    TNode<Smi> tmp66;
    TNode<JSArray> tmp67;
    ca_.Bind(&block7, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 99);
    TNode<JSArray> tmp68;
    USE(tmp68);
    TNode<JSArray> tmp69;
    USE(tmp69);
    TNode<Map> tmp70;
    USE(tmp70);
    TNode<BoolT> tmp71;
    USE(tmp71);
    TNode<BoolT> tmp72;
    USE(tmp72);
    TNode<BoolT> tmp73;
    USE(tmp73);
    std::tie(tmp68, tmp69, tmp70, tmp71, tmp72, tmp73) = NewFastJSArrayWitness_238(state_, TNode<JSArray>{tmp67}).Flatten();
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 102);
    ca_.Goto(&block13, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73);
  }

  if (block13.is_used()) {
    TNode<Context> tmp74;
    TNode<JSReceiver> tmp75;
    TNode<Number> tmp76;
    TNode<JSReceiver> tmp77;
    TNode<Object> tmp78;
    TNode<Smi> tmp79;
    TNode<Smi> tmp80;
    TNode<JSArray> tmp81;
    TNode<JSArray> tmp82;
    TNode<JSArray> tmp83;
    TNode<Map> tmp84;
    TNode<BoolT> tmp85;
    TNode<BoolT> tmp86;
    TNode<BoolT> tmp87;
    ca_.Bind(&block13, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87);
    TNode<BoolT> tmp88;
    USE(tmp88);
    tmp88 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp79}, TNode<Smi>{tmp80});
    ca_.Branch(tmp88, &block11, &block12, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87);
  }

  if (block11.is_used()) {
    TNode<Context> tmp89;
    TNode<JSReceiver> tmp90;
    TNode<Number> tmp91;
    TNode<JSReceiver> tmp92;
    TNode<Object> tmp93;
    TNode<Smi> tmp94;
    TNode<Smi> tmp95;
    TNode<JSArray> tmp96;
    TNode<JSArray> tmp97;
    TNode<JSArray> tmp98;
    TNode<Map> tmp99;
    TNode<BoolT> tmp100;
    TNode<BoolT> tmp101;
    TNode<BoolT> tmp102;
    ca_.Bind(&block11, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3152);
    TNode<IntPtrT> tmp103 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp103);
    TNode<Map>tmp104 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp97, tmp103});
    TNode<BoolT> tmp105;
    USE(tmp105);
    tmp105 = CodeStubAssembler(state_).TaggedNotEqual(TNode<HeapObject>{tmp104}, TNode<HeapObject>{tmp99});
    ca_.Branch(tmp105, &block18, &block19, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102);
  }

  if (block18.is_used()) {
    TNode<Context> tmp106;
    TNode<JSReceiver> tmp107;
    TNode<Number> tmp108;
    TNode<JSReceiver> tmp109;
    TNode<Object> tmp110;
    TNode<Smi> tmp111;
    TNode<Smi> tmp112;
    TNode<JSArray> tmp113;
    TNode<JSArray> tmp114;
    TNode<JSArray> tmp115;
    TNode<Map> tmp116;
    TNode<BoolT> tmp117;
    TNode<BoolT> tmp118;
    TNode<BoolT> tmp119;
    ca_.Bind(&block18, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119);
    ca_.Goto(&block16, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119);
  }

  if (block19.is_used()) {
    TNode<Context> tmp120;
    TNode<JSReceiver> tmp121;
    TNode<Number> tmp122;
    TNode<JSReceiver> tmp123;
    TNode<Object> tmp124;
    TNode<Smi> tmp125;
    TNode<Smi> tmp126;
    TNode<JSArray> tmp127;
    TNode<JSArray> tmp128;
    TNode<JSArray> tmp129;
    TNode<Map> tmp130;
    TNode<BoolT> tmp131;
    TNode<BoolT> tmp132;
    TNode<BoolT> tmp133;
    ca_.Bind(&block19, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3159);
    TNode<BoolT> tmp134;
    USE(tmp134);
    tmp134 = CodeStubAssembler(state_).IsNoElementsProtectorCellInvalid();
    ca_.Branch(tmp134, &block20, &block21, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133);
  }

  if (block20.is_used()) {
    TNode<Context> tmp135;
    TNode<JSReceiver> tmp136;
    TNode<Number> tmp137;
    TNode<JSReceiver> tmp138;
    TNode<Object> tmp139;
    TNode<Smi> tmp140;
    TNode<Smi> tmp141;
    TNode<JSArray> tmp142;
    TNode<JSArray> tmp143;
    TNode<JSArray> tmp144;
    TNode<Map> tmp145;
    TNode<BoolT> tmp146;
    TNode<BoolT> tmp147;
    TNode<BoolT> tmp148;
    ca_.Bind(&block20, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148);
    ca_.Goto(&block16, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148);
  }

  if (block21.is_used()) {
    TNode<Context> tmp149;
    TNode<JSReceiver> tmp150;
    TNode<Number> tmp151;
    TNode<JSReceiver> tmp152;
    TNode<Object> tmp153;
    TNode<Smi> tmp154;
    TNode<Smi> tmp155;
    TNode<JSArray> tmp156;
    TNode<JSArray> tmp157;
    TNode<JSArray> tmp158;
    TNode<Map> tmp159;
    TNode<BoolT> tmp160;
    TNode<BoolT> tmp161;
    TNode<BoolT> tmp162;
    ca_.Bind(&block21, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3160);
    TNode<JSArray> tmp163;
    USE(tmp163);
    tmp163 = (TNode<JSArray>{tmp157});
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 103);
    ca_.Goto(&block17, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp163, tmp159, tmp160, tmp161, tmp162);
  }

  if (block17.is_used()) {
    TNode<Context> tmp164;
    TNode<JSReceiver> tmp165;
    TNode<Number> tmp166;
    TNode<JSReceiver> tmp167;
    TNode<Object> tmp168;
    TNode<Smi> tmp169;
    TNode<Smi> tmp170;
    TNode<JSArray> tmp171;
    TNode<JSArray> tmp172;
    TNode<JSArray> tmp173;
    TNode<Map> tmp174;
    TNode<BoolT> tmp175;
    TNode<BoolT> tmp176;
    TNode<BoolT> tmp177;
    ca_.Bind(&block17, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177);
    ca_.Goto(&block15, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177);
  }

  if (block16.is_used()) {
    TNode<Context> tmp178;
    TNode<JSReceiver> tmp179;
    TNode<Number> tmp180;
    TNode<JSReceiver> tmp181;
    TNode<Object> tmp182;
    TNode<Smi> tmp183;
    TNode<Smi> tmp184;
    TNode<JSArray> tmp185;
    TNode<JSArray> tmp186;
    TNode<JSArray> tmp187;
    TNode<Map> tmp188;
    TNode<BoolT> tmp189;
    TNode<BoolT> tmp190;
    TNode<BoolT> tmp191;
    ca_.Bind(&block16, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191);
    ca_.Goto(&block1, tmp183);
  }

  if (block15.is_used()) {
    TNode<Context> tmp192;
    TNode<JSReceiver> tmp193;
    TNode<Number> tmp194;
    TNode<JSReceiver> tmp195;
    TNode<Object> tmp196;
    TNode<Smi> tmp197;
    TNode<Smi> tmp198;
    TNode<JSArray> tmp199;
    TNode<JSArray> tmp200;
    TNode<JSArray> tmp201;
    TNode<Map> tmp202;
    TNode<BoolT> tmp203;
    TNode<BoolT> tmp204;
    TNode<BoolT> tmp205;
    ca_.Bind(&block15, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205);
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 106);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3148);
    ca_.Goto(&block24, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp197, tmp201);
  }

  if (block24.is_used()) {
    TNode<Context> tmp206;
    TNode<JSReceiver> tmp207;
    TNode<Number> tmp208;
    TNode<JSReceiver> tmp209;
    TNode<Object> tmp210;
    TNode<Smi> tmp211;
    TNode<Smi> tmp212;
    TNode<JSArray> tmp213;
    TNode<JSArray> tmp214;
    TNode<JSArray> tmp215;
    TNode<Map> tmp216;
    TNode<BoolT> tmp217;
    TNode<BoolT> tmp218;
    TNode<BoolT> tmp219;
    TNode<Smi> tmp220;
    TNode<JSArray> tmp221;
    ca_.Bind(&block24, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221);
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 106);
    TNode<Smi> tmp222;
    USE(tmp222);
    tmp222 = CodeStubAssembler(state_).LoadFastJSArrayLength(TNode<JSArray>{tmp221});
    TNode<BoolT> tmp223;
    USE(tmp223);
    tmp223 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(TNode<Smi>{tmp220}, TNode<Smi>{tmp222});
    ca_.Branch(tmp223, &block22, &block23, tmp206, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219);
  }

  if (block22.is_used()) {
    TNode<Context> tmp224;
    TNode<JSReceiver> tmp225;
    TNode<Number> tmp226;
    TNode<JSReceiver> tmp227;
    TNode<Object> tmp228;
    TNode<Smi> tmp229;
    TNode<Smi> tmp230;
    TNode<JSArray> tmp231;
    TNode<JSArray> tmp232;
    TNode<JSArray> tmp233;
    TNode<Map> tmp234;
    TNode<BoolT> tmp235;
    TNode<BoolT> tmp236;
    TNode<BoolT> tmp237;
    ca_.Bind(&block22, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237);
    ca_.Goto(&block1, tmp229);
  }

  if (block23.is_used()) {
    TNode<Context> tmp238;
    TNode<JSReceiver> tmp239;
    TNode<Number> tmp240;
    TNode<JSReceiver> tmp241;
    TNode<Object> tmp242;
    TNode<Smi> tmp243;
    TNode<Smi> tmp244;
    TNode<JSArray> tmp245;
    TNode<JSArray> tmp246;
    TNode<JSArray> tmp247;
    TNode<Map> tmp248;
    TNode<BoolT> tmp249;
    TNode<BoolT> tmp250;
    TNode<BoolT> tmp251;
    ca_.Bind(&block23, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251);
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 108);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3188);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3165);
    ca_.Branch(tmp249, &block29, &block30, tmp238, tmp239, tmp240, tmp241, tmp242, tmp243, tmp244, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp251, tmp243, tmp238, tmp243, tmp243, tmp238, tmp243);
  }

  if (block29.is_used()) {
    TNode<Context> tmp252;
    TNode<JSReceiver> tmp253;
    TNode<Number> tmp254;
    TNode<JSReceiver> tmp255;
    TNode<Object> tmp256;
    TNode<Smi> tmp257;
    TNode<Smi> tmp258;
    TNode<JSArray> tmp259;
    TNode<JSArray> tmp260;
    TNode<JSArray> tmp261;
    TNode<Map> tmp262;
    TNode<BoolT> tmp263;
    TNode<BoolT> tmp264;
    TNode<BoolT> tmp265;
    TNode<Smi> tmp266;
    TNode<Context> tmp267;
    TNode<Smi> tmp268;
    TNode<Smi> tmp269;
    TNode<Context> tmp270;
    TNode<Smi> tmp271;
    ca_.Bind(&block29, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3166);
    TNode<Object> tmp272;
    USE(tmp272);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp272 = LoadElementNoHole16FixedDoubleArray_237(state_, TNode<Context>{tmp270}, TNode<JSArray>{tmp261}, TNode<Smi>{tmp271}, &label0);
    ca_.Goto(&block32, tmp252, tmp253, tmp254, tmp255, tmp256, tmp257, tmp258, tmp259, tmp260, tmp261, tmp262, tmp263, tmp264, tmp265, tmp266, tmp267, tmp268, tmp269, tmp270, tmp271, tmp261, tmp271, tmp272);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block33, tmp252, tmp253, tmp254, tmp255, tmp256, tmp257, tmp258, tmp259, tmp260, tmp261, tmp262, tmp263, tmp264, tmp265, tmp266, tmp267, tmp268, tmp269, tmp270, tmp271, tmp261, tmp271);
    }
  }

  if (block33.is_used()) {
    TNode<Context> tmp273;
    TNode<JSReceiver> tmp274;
    TNode<Number> tmp275;
    TNode<JSReceiver> tmp276;
    TNode<Object> tmp277;
    TNode<Smi> tmp278;
    TNode<Smi> tmp279;
    TNode<JSArray> tmp280;
    TNode<JSArray> tmp281;
    TNode<JSArray> tmp282;
    TNode<Map> tmp283;
    TNode<BoolT> tmp284;
    TNode<BoolT> tmp285;
    TNode<BoolT> tmp286;
    TNode<Smi> tmp287;
    TNode<Context> tmp288;
    TNode<Smi> tmp289;
    TNode<Smi> tmp290;
    TNode<Context> tmp291;
    TNode<Smi> tmp292;
    TNode<JSArray> tmp293;
    TNode<Smi> tmp294;
    ca_.Bind(&block33, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294);
    ca_.Goto(&block27, tmp273, tmp274, tmp275, tmp276, tmp277, tmp278, tmp279, tmp280, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289);
  }

  if (block32.is_used()) {
    TNode<Context> tmp295;
    TNode<JSReceiver> tmp296;
    TNode<Number> tmp297;
    TNode<JSReceiver> tmp298;
    TNode<Object> tmp299;
    TNode<Smi> tmp300;
    TNode<Smi> tmp301;
    TNode<JSArray> tmp302;
    TNode<JSArray> tmp303;
    TNode<JSArray> tmp304;
    TNode<Map> tmp305;
    TNode<BoolT> tmp306;
    TNode<BoolT> tmp307;
    TNode<BoolT> tmp308;
    TNode<Smi> tmp309;
    TNode<Context> tmp310;
    TNode<Smi> tmp311;
    TNode<Smi> tmp312;
    TNode<Context> tmp313;
    TNode<Smi> tmp314;
    TNode<JSArray> tmp315;
    TNode<Smi> tmp316;
    TNode<Object> tmp317;
    ca_.Bind(&block32, &tmp295, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305, &tmp306, &tmp307, &tmp308, &tmp309, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317);
    ca_.Goto(&block28, tmp295, tmp296, tmp297, tmp298, tmp299, tmp300, tmp301, tmp302, tmp303, tmp304, tmp305, tmp306, tmp307, tmp308, tmp309, tmp310, tmp311, tmp312, tmp313, tmp314, tmp317);
  }

  if (block30.is_used()) {
    TNode<Context> tmp318;
    TNode<JSReceiver> tmp319;
    TNode<Number> tmp320;
    TNode<JSReceiver> tmp321;
    TNode<Object> tmp322;
    TNode<Smi> tmp323;
    TNode<Smi> tmp324;
    TNode<JSArray> tmp325;
    TNode<JSArray> tmp326;
    TNode<JSArray> tmp327;
    TNode<Map> tmp328;
    TNode<BoolT> tmp329;
    TNode<BoolT> tmp330;
    TNode<BoolT> tmp331;
    TNode<Smi> tmp332;
    TNode<Context> tmp333;
    TNode<Smi> tmp334;
    TNode<Smi> tmp335;
    TNode<Context> tmp336;
    TNode<Smi> tmp337;
    ca_.Bind(&block30, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3169);
    TNode<Object> tmp338;
    USE(tmp338);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp338 = LoadElementNoHole10FixedArray_236(state_, TNode<Context>{tmp336}, TNode<JSArray>{tmp327}, TNode<Smi>{tmp337}, &label0);
    ca_.Goto(&block34, tmp318, tmp319, tmp320, tmp321, tmp322, tmp323, tmp324, tmp325, tmp326, tmp327, tmp328, tmp329, tmp330, tmp331, tmp332, tmp333, tmp334, tmp335, tmp336, tmp337, tmp327, tmp337, tmp338);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block35, tmp318, tmp319, tmp320, tmp321, tmp322, tmp323, tmp324, tmp325, tmp326, tmp327, tmp328, tmp329, tmp330, tmp331, tmp332, tmp333, tmp334, tmp335, tmp336, tmp337, tmp327, tmp337);
    }
  }

  if (block35.is_used()) {
    TNode<Context> tmp339;
    TNode<JSReceiver> tmp340;
    TNode<Number> tmp341;
    TNode<JSReceiver> tmp342;
    TNode<Object> tmp343;
    TNode<Smi> tmp344;
    TNode<Smi> tmp345;
    TNode<JSArray> tmp346;
    TNode<JSArray> tmp347;
    TNode<JSArray> tmp348;
    TNode<Map> tmp349;
    TNode<BoolT> tmp350;
    TNode<BoolT> tmp351;
    TNode<BoolT> tmp352;
    TNode<Smi> tmp353;
    TNode<Context> tmp354;
    TNode<Smi> tmp355;
    TNode<Smi> tmp356;
    TNode<Context> tmp357;
    TNode<Smi> tmp358;
    TNode<JSArray> tmp359;
    TNode<Smi> tmp360;
    ca_.Bind(&block35, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343, &tmp344, &tmp345, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350, &tmp351, &tmp352, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360);
    ca_.Goto(&block27, tmp339, tmp340, tmp341, tmp342, tmp343, tmp344, tmp345, tmp346, tmp347, tmp348, tmp349, tmp350, tmp351, tmp352, tmp353, tmp354, tmp355);
  }

  if (block34.is_used()) {
    TNode<Context> tmp361;
    TNode<JSReceiver> tmp362;
    TNode<Number> tmp363;
    TNode<JSReceiver> tmp364;
    TNode<Object> tmp365;
    TNode<Smi> tmp366;
    TNode<Smi> tmp367;
    TNode<JSArray> tmp368;
    TNode<JSArray> tmp369;
    TNode<JSArray> tmp370;
    TNode<Map> tmp371;
    TNode<BoolT> tmp372;
    TNode<BoolT> tmp373;
    TNode<BoolT> tmp374;
    TNode<Smi> tmp375;
    TNode<Context> tmp376;
    TNode<Smi> tmp377;
    TNode<Smi> tmp378;
    TNode<Context> tmp379;
    TNode<Smi> tmp380;
    TNode<JSArray> tmp381;
    TNode<Smi> tmp382;
    TNode<Object> tmp383;
    ca_.Bind(&block34, &tmp361, &tmp362, &tmp363, &tmp364, &tmp365, &tmp366, &tmp367, &tmp368, &tmp369, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381, &tmp382, &tmp383);
    ca_.Goto(&block28, tmp361, tmp362, tmp363, tmp364, tmp365, tmp366, tmp367, tmp368, tmp369, tmp370, tmp371, tmp372, tmp373, tmp374, tmp375, tmp376, tmp377, tmp378, tmp379, tmp380, tmp383);
  }

  if (block28.is_used()) {
    TNode<Context> tmp384;
    TNode<JSReceiver> tmp385;
    TNode<Number> tmp386;
    TNode<JSReceiver> tmp387;
    TNode<Object> tmp388;
    TNode<Smi> tmp389;
    TNode<Smi> tmp390;
    TNode<JSArray> tmp391;
    TNode<JSArray> tmp392;
    TNode<JSArray> tmp393;
    TNode<Map> tmp394;
    TNode<BoolT> tmp395;
    TNode<BoolT> tmp396;
    TNode<BoolT> tmp397;
    TNode<Smi> tmp398;
    TNode<Context> tmp399;
    TNode<Smi> tmp400;
    TNode<Smi> tmp401;
    TNode<Context> tmp402;
    TNode<Smi> tmp403;
    TNode<Object> tmp404;
    ca_.Bind(&block28, &tmp384, &tmp385, &tmp386, &tmp387, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395, &tmp396, &tmp397, &tmp398, &tmp399, &tmp400, &tmp401, &tmp402, &tmp403, &tmp404);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3188);
    ca_.Goto(&block25, tmp384, tmp385, tmp386, tmp387, tmp388, tmp389, tmp390, tmp391, tmp392, tmp393, tmp394, tmp395, tmp396, tmp397, tmp398, tmp399, tmp400, tmp404);
  }

  if (block27.is_used()) {
    TNode<Context> tmp405;
    TNode<JSReceiver> tmp406;
    TNode<Number> tmp407;
    TNode<JSReceiver> tmp408;
    TNode<Object> tmp409;
    TNode<Smi> tmp410;
    TNode<Smi> tmp411;
    TNode<JSArray> tmp412;
    TNode<JSArray> tmp413;
    TNode<JSArray> tmp414;
    TNode<Map> tmp415;
    TNode<BoolT> tmp416;
    TNode<BoolT> tmp417;
    TNode<BoolT> tmp418;
    TNode<Smi> tmp419;
    TNode<Context> tmp420;
    TNode<Smi> tmp421;
    ca_.Bind(&block27, &tmp405, &tmp406, &tmp407, &tmp408, &tmp409, &tmp410, &tmp411, &tmp412, &tmp413, &tmp414, &tmp415, &tmp416, &tmp417, &tmp418, &tmp419, &tmp420, &tmp421);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3191);
    TNode<Oddball> tmp422;
    USE(tmp422);
    tmp422 = Undefined_64(state_);
    ca_.Goto(&block25, tmp405, tmp406, tmp407, tmp408, tmp409, tmp410, tmp411, tmp412, tmp413, tmp414, tmp415, tmp416, tmp417, tmp418, tmp419, tmp420, tmp421, tmp422);
  }

  if (block25.is_used()) {
    TNode<Context> tmp423;
    TNode<JSReceiver> tmp424;
    TNode<Number> tmp425;
    TNode<JSReceiver> tmp426;
    TNode<Object> tmp427;
    TNode<Smi> tmp428;
    TNode<Smi> tmp429;
    TNode<JSArray> tmp430;
    TNode<JSArray> tmp431;
    TNode<JSArray> tmp432;
    TNode<Map> tmp433;
    TNode<BoolT> tmp434;
    TNode<BoolT> tmp435;
    TNode<BoolT> tmp436;
    TNode<Smi> tmp437;
    TNode<Context> tmp438;
    TNode<Smi> tmp439;
    TNode<Object> tmp440;
    ca_.Bind(&block25, &tmp423, &tmp424, &tmp425, &tmp426, &tmp427, &tmp428, &tmp429, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434, &tmp435, &tmp436, &tmp437, &tmp438, &tmp439, &tmp440);
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 108);
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 110);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3148);
    ca_.Goto(&block36, tmp423, tmp424, tmp425, tmp426, tmp427, tmp428, tmp429, tmp430, tmp431, tmp432, tmp433, tmp434, tmp435, tmp436, tmp440, tmp423, tmp426, tmp427, tmp440, tmp428, tmp432);
  }

  if (block36.is_used()) {
    TNode<Context> tmp441;
    TNode<JSReceiver> tmp442;
    TNode<Number> tmp443;
    TNode<JSReceiver> tmp444;
    TNode<Object> tmp445;
    TNode<Smi> tmp446;
    TNode<Smi> tmp447;
    TNode<JSArray> tmp448;
    TNode<JSArray> tmp449;
    TNode<JSArray> tmp450;
    TNode<Map> tmp451;
    TNode<BoolT> tmp452;
    TNode<BoolT> tmp453;
    TNode<BoolT> tmp454;
    TNode<Object> tmp455;
    TNode<Context> tmp456;
    TNode<JSReceiver> tmp457;
    TNode<Object> tmp458;
    TNode<Object> tmp459;
    TNode<Smi> tmp460;
    TNode<JSArray> tmp461;
    ca_.Bind(&block36, &tmp441, &tmp442, &tmp443, &tmp444, &tmp445, &tmp446, &tmp447, &tmp448, &tmp449, &tmp450, &tmp451, &tmp452, &tmp453, &tmp454, &tmp455, &tmp456, &tmp457, &tmp458, &tmp459, &tmp460, &tmp461);
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 110);
    TNode<Object> tmp462;
    USE(tmp462);
    tmp462 = CodeStubAssembler(state_).Call(TNode<Context>{tmp456}, TNode<JSReceiver>{tmp457}, TNode<Object>{tmp458}, TNode<Object>{tmp459}, TNode<Object>{tmp460}, TNode<Object>{tmp461});
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 109);
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 111);
    TNode<BoolT> tmp463;
    USE(tmp463);
    tmp463 = ToBoolean_242(state_, TNode<Object>{tmp462});
    ca_.Branch(tmp463, &block37, &block38, tmp441, tmp442, tmp443, tmp444, tmp445, tmp446, tmp447, tmp448, tmp449, tmp450, tmp451, tmp452, tmp453, tmp454, tmp455, tmp462);
  }

  if (block37.is_used()) {
    TNode<Context> tmp464;
    TNode<JSReceiver> tmp465;
    TNode<Number> tmp466;
    TNode<JSReceiver> tmp467;
    TNode<Object> tmp468;
    TNode<Smi> tmp469;
    TNode<Smi> tmp470;
    TNode<JSArray> tmp471;
    TNode<JSArray> tmp472;
    TNode<JSArray> tmp473;
    TNode<Map> tmp474;
    TNode<BoolT> tmp475;
    TNode<BoolT> tmp476;
    TNode<BoolT> tmp477;
    TNode<Object> tmp478;
    TNode<Object> tmp479;
    ca_.Bind(&block37, &tmp464, &tmp465, &tmp466, &tmp467, &tmp468, &tmp469, &tmp470, &tmp471, &tmp472, &tmp473, &tmp474, &tmp475, &tmp476, &tmp477, &tmp478, &tmp479);
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 112);
    ca_.Goto(&block2, tmp464, tmp465, tmp466, tmp467, tmp468, tmp478);
  }

  if (block38.is_used()) {
    TNode<Context> tmp480;
    TNode<JSReceiver> tmp481;
    TNode<Number> tmp482;
    TNode<JSReceiver> tmp483;
    TNode<Object> tmp484;
    TNode<Smi> tmp485;
    TNode<Smi> tmp486;
    TNode<JSArray> tmp487;
    TNode<JSArray> tmp488;
    TNode<JSArray> tmp489;
    TNode<Map> tmp490;
    TNode<BoolT> tmp491;
    TNode<BoolT> tmp492;
    TNode<BoolT> tmp493;
    TNode<Object> tmp494;
    TNode<Object> tmp495;
    ca_.Bind(&block38, &tmp480, &tmp481, &tmp482, &tmp483, &tmp484, &tmp485, &tmp486, &tmp487, &tmp488, &tmp489, &tmp490, &tmp491, &tmp492, &tmp493, &tmp494, &tmp495);
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 102);
    ca_.Goto(&block14, tmp480, tmp481, tmp482, tmp483, tmp484, tmp485, tmp486, tmp487, tmp488, tmp489, tmp490, tmp491, tmp492, tmp493);
  }

  if (block14.is_used()) {
    TNode<Context> tmp496;
    TNode<JSReceiver> tmp497;
    TNode<Number> tmp498;
    TNode<JSReceiver> tmp499;
    TNode<Object> tmp500;
    TNode<Smi> tmp501;
    TNode<Smi> tmp502;
    TNode<JSArray> tmp503;
    TNode<JSArray> tmp504;
    TNode<JSArray> tmp505;
    TNode<Map> tmp506;
    TNode<BoolT> tmp507;
    TNode<BoolT> tmp508;
    TNode<BoolT> tmp509;
    ca_.Bind(&block14, &tmp496, &tmp497, &tmp498, &tmp499, &tmp500, &tmp501, &tmp502, &tmp503, &tmp504, &tmp505, &tmp506, &tmp507, &tmp508, &tmp509);
    TNode<Smi> tmp510;
    USE(tmp510);
    tmp510 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp511;
    USE(tmp511);
    tmp511 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp501}, TNode<Smi>{tmp510});
    ca_.Goto(&block13, tmp496, tmp497, tmp498, tmp499, tmp500, tmp511, tmp502, tmp503, tmp504, tmp505, tmp506, tmp507, tmp508, tmp509);
  }

  if (block12.is_used()) {
    TNode<Context> tmp512;
    TNode<JSReceiver> tmp513;
    TNode<Number> tmp514;
    TNode<JSReceiver> tmp515;
    TNode<Object> tmp516;
    TNode<Smi> tmp517;
    TNode<Smi> tmp518;
    TNode<JSArray> tmp519;
    TNode<JSArray> tmp520;
    TNode<JSArray> tmp521;
    TNode<Map> tmp522;
    TNode<BoolT> tmp523;
    TNode<BoolT> tmp524;
    TNode<BoolT> tmp525;
    ca_.Bind(&block12, &tmp512, &tmp513, &tmp514, &tmp515, &tmp516, &tmp517, &tmp518, &tmp519, &tmp520, &tmp521, &tmp522, &tmp523, &tmp524, &tmp525);
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 115);
    TNode<Oddball> tmp526;
    USE(tmp526);
    tmp526 = Undefined_64(state_);
    ca_.Goto(&block2, tmp512, tmp513, tmp514, tmp515, tmp516, tmp526);
  }

  if (block2.is_used()) {
    TNode<Context> tmp527;
    TNode<JSReceiver> tmp528;
    TNode<Number> tmp529;
    TNode<JSReceiver> tmp530;
    TNode<Object> tmp531;
    TNode<Object> tmp532;
    ca_.Bind(&block2, &tmp527, &tmp528, &tmp529, &tmp530, &tmp531, &tmp532);
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 93);
    ca_.Goto(&block39, tmp527, tmp528, tmp529, tmp530, tmp531, tmp532);
  }

  if (block1.is_used()) {
    TNode<Smi> tmp533;
    ca_.Bind(&block1, &tmp533);
    *label_Bailout_parameter_0 = tmp533;
    ca_.Goto(label_Bailout);
  }

    TNode<Context> tmp534;
    TNode<JSReceiver> tmp535;
    TNode<Number> tmp536;
    TNode<JSReceiver> tmp537;
    TNode<Object> tmp538;
    TNode<Object> tmp539;
    ca_.Bind(&block39, &tmp534, &tmp535, &tmp536, &tmp537, &tmp538, &tmp539);
  return TNode<Object>{tmp539};
}

TF_BUILTIN(ArrayPrototypeFind, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, JSReceiver, Object, JSReceiver, Number, JSReceiver, Object, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, JSReceiver, Object, JSReceiver, Number, JSReceiver, Object, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, JSReceiver, Object, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 123);
    TNode<Object> tmp5;
    USE(tmp5);
    tmp5 = RequireObjectCoercible_243(state_, TNode<Context>{tmp3}, TNode<Object>{tmp4}, "Array.prototype.find");
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 126);
    TNode<JSReceiver> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).ToObject_Inline(TNode<Context>{tmp3}, TNode<Object>{tmp4});
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 129);
    TNode<Number> tmp7;
    USE(tmp7);
    tmp7 = GetLengthProperty_246(state_, TNode<Context>{tmp3}, TNode<Object>{tmp6});
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 132);
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
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 133);
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
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 136);
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
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 139);
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
    tmp64 = Undefined_64(state_);
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
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 143);
    TNode<Object> tmp83;
    USE(tmp83);
    compiler::TypedCodeAssemblerVariable<Smi> result_0_0(&ca_);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp83 = FastArrayFind_5(state_, TNode<Context>{tmp77}, TNode<JSReceiver>{tmp79}, TNode<Number>{tmp80}, TNode<JSReceiver>{tmp81}, TNode<Object>{tmp82}, &label0, &result_0_0);
    ca_.Goto(&block13, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp79, tmp80, tmp81, tmp82, tmp83);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block14, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp79, tmp80, tmp81, tmp82, result_0_0.value());
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
    TNode<Smi> tmp97;
    ca_.Bind(&block14, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    ca_.Goto(&block12, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp97);
  }

  if (block13.is_used()) {
    TNode<RawPtrT> tmp98;
    TNode<RawPtrT> tmp99;
    TNode<IntPtrT> tmp100;
    TNode<Context> tmp101;
    TNode<Object> tmp102;
    TNode<JSReceiver> tmp103;
    TNode<Number> tmp104;
    TNode<JSReceiver> tmp105;
    TNode<Object> tmp106;
    TNode<JSReceiver> tmp107;
    TNode<Number> tmp108;
    TNode<JSReceiver> tmp109;
    TNode<Object> tmp110;
    TNode<Object> tmp111;
    ca_.Bind(&block13, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111);
    arguments.PopAndReturn(tmp111);
  }

  if (block12.is_used()) {
    TNode<RawPtrT> tmp112;
    TNode<RawPtrT> tmp113;
    TNode<IntPtrT> tmp114;
    TNode<Context> tmp115;
    TNode<Object> tmp116;
    TNode<JSReceiver> tmp117;
    TNode<Number> tmp118;
    TNode<JSReceiver> tmp119;
    TNode<Object> tmp120;
    TNode<Smi> tmp121;
    ca_.Bind(&block12, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121);
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 147);
    TNode<Object> tmp122;
    tmp122 = CodeStubAssembler(state_).CallBuiltin(Builtins::kArrayFindLoopContinuation, tmp115, tmp117, tmp119, tmp120, tmp117, tmp121, tmp118);
    USE(tmp122);
    arguments.PopAndReturn(tmp122);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp123;
    TNode<RawPtrT> tmp124;
    TNode<IntPtrT> tmp125;
    TNode<Context> tmp126;
    TNode<Object> tmp127;
    ca_.Bind(&block2, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127);
    ca_.SetSourcePosition("../../src/builtins/array-find.tq", 151);
    TNode<IntPtrT> tmp128;
    USE(tmp128);
    tmp128 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp129;
    USE(tmp129);
    tmp129 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp123}, TNode<RawPtrT>{tmp124}, TNode<IntPtrT>{tmp125}}, TNode<IntPtrT>{tmp128});
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp126}, MessageTemplate::kCalledNonCallable, TNode<Object>{tmp129});
  }
}

}  // namespace internal
}  // namespace v8

