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

TF_BUILTIN(ProxyConstructor, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kJSNewTarget));
USE(parameter2);
  TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kTarget));
  USE(parameter3);
  TNode<Object> parameter4 = UncheckedCast<Object>(Parameter(Descriptor::kHandler));
  USE(parameter4);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSReceiver> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSReceiver, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSReceiver, Object, JSReceiver> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSReceiver, JSReceiver> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSReceiver, JSReceiver> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3, parameter4);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    TNode<Object> tmp2;
    TNode<Object> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/proxy-constructor.tq", 17);
    TNode<Oddball> tmp5;
    USE(tmp5);
    tmp5 = Undefined_64(state_);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp2}, TNode<HeapObject>{tmp5});
    ca_.Branch(tmp6, &block5, &block6, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block5.is_used()) {
    TNode<Context> tmp7;
    TNode<Object> tmp8;
    TNode<Object> tmp9;
    TNode<Object> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block5, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../src/builtins/proxy-constructor.tq", 18);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp7}, MessageTemplate::kConstructorNotFunction, "Proxy");
  }

  if (block6.is_used()) {
    TNode<Context> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    TNode<Object> tmp15;
    TNode<Object> tmp16;
    ca_.Bind(&block6, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.SetSourcePosition("../../src/builtins/proxy-constructor.tq", 30);
    TNode<JSReceiver> tmp17;
    USE(tmp17);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp17 = Cast10JSReceiver_1433(state_, TNode<Context>{tmp12}, TNode<Object>{tmp15}, &label0);
    ca_.Goto(&block7, tmp12, tmp13, tmp14, tmp15, tmp16, tmp15, tmp17);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp12, tmp13, tmp14, tmp15, tmp16, tmp15);
    }
  }

  if (block8.is_used()) {
    TNode<Context> tmp18;
    TNode<Object> tmp19;
    TNode<Object> tmp20;
    TNode<Object> tmp21;
    TNode<Object> tmp22;
    TNode<Object> tmp23;
    ca_.Bind(&block8, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.Goto(&block4, tmp18, tmp19, tmp20, tmp21, tmp22);
  }

  if (block7.is_used()) {
    TNode<Context> tmp24;
    TNode<Object> tmp25;
    TNode<Object> tmp26;
    TNode<Object> tmp27;
    TNode<Object> tmp28;
    TNode<Object> tmp29;
    TNode<JSReceiver> tmp30;
    ca_.Bind(&block7, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.SetSourcePosition("../../src/builtins/proxy-constructor.tq", 31);
    TNode<BoolT> tmp31;
    USE(tmp31);
    tmp31 = IsRevokedProxy_321(state_, TNode<Context>{tmp24}, TNode<JSReceiver>{tmp30});
    ca_.Branch(tmp31, &block9, &block10, tmp24, tmp25, tmp26, tmp27, tmp28, tmp30);
  }

  if (block9.is_used()) {
    TNode<Context> tmp32;
    TNode<Object> tmp33;
    TNode<Object> tmp34;
    TNode<Object> tmp35;
    TNode<Object> tmp36;
    TNode<JSReceiver> tmp37;
    ca_.Bind(&block9, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37);
    ca_.SetSourcePosition("../../src/builtins/proxy-constructor.tq", 32);
    ca_.Goto(&block2, tmp32, tmp33, tmp34, tmp35, tmp36);
  }

  if (block10.is_used()) {
    TNode<Context> tmp38;
    TNode<Object> tmp39;
    TNode<Object> tmp40;
    TNode<Object> tmp41;
    TNode<Object> tmp42;
    TNode<JSReceiver> tmp43;
    ca_.Bind(&block10, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.SetSourcePosition("../../src/builtins/proxy-constructor.tq", 36);
    TNode<JSReceiver> tmp44;
    USE(tmp44);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp44 = Cast10JSReceiver_1433(state_, TNode<Context>{tmp38}, TNode<Object>{tmp42}, &label0);
    ca_.Goto(&block11, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp42, tmp44);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp42);
    }
  }

  if (block12.is_used()) {
    TNode<Context> tmp45;
    TNode<Object> tmp46;
    TNode<Object> tmp47;
    TNode<Object> tmp48;
    TNode<Object> tmp49;
    TNode<JSReceiver> tmp50;
    TNode<Object> tmp51;
    ca_.Bind(&block12, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51);
    ca_.Goto(&block4, tmp45, tmp46, tmp47, tmp48, tmp49);
  }

  if (block11.is_used()) {
    TNode<Context> tmp52;
    TNode<Object> tmp53;
    TNode<Object> tmp54;
    TNode<Object> tmp55;
    TNode<Object> tmp56;
    TNode<JSReceiver> tmp57;
    TNode<Object> tmp58;
    TNode<JSReceiver> tmp59;
    ca_.Bind(&block11, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    ca_.SetSourcePosition("../../src/builtins/proxy-constructor.tq", 37);
    TNode<BoolT> tmp60;
    USE(tmp60);
    tmp60 = IsRevokedProxy_321(state_, TNode<Context>{tmp52}, TNode<JSReceiver>{tmp59});
    ca_.Branch(tmp60, &block13, &block14, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp59);
  }

  if (block13.is_used()) {
    TNode<Context> tmp61;
    TNode<Object> tmp62;
    TNode<Object> tmp63;
    TNode<Object> tmp64;
    TNode<Object> tmp65;
    TNode<JSReceiver> tmp66;
    TNode<JSReceiver> tmp67;
    ca_.Bind(&block13, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.SetSourcePosition("../../src/builtins/proxy-constructor.tq", 38);
    ca_.Goto(&block2, tmp61, tmp62, tmp63, tmp64, tmp65);
  }

  if (block14.is_used()) {
    TNode<Context> tmp68;
    TNode<Object> tmp69;
    TNode<Object> tmp70;
    TNode<Object> tmp71;
    TNode<Object> tmp72;
    TNode<JSReceiver> tmp73;
    TNode<JSReceiver> tmp74;
    ca_.Bind(&block14, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74);
    ca_.SetSourcePosition("../../src/builtins/proxy-constructor.tq", 51);
    TNode<JSProxy> tmp75;
    USE(tmp75);
    tmp75 = ProxiesCodeStubAssembler(state_).AllocateProxy(TNode<Context>{tmp68}, TNode<JSReceiver>{tmp73}, TNode<JSReceiver>{tmp74});
    CodeStubAssembler(state_).Return(tmp75);
  }

  if (block4.is_used()) {
    TNode<Context> tmp76;
    TNode<Object> tmp77;
    TNode<Object> tmp78;
    TNode<Object> tmp79;
    TNode<Object> tmp80;
    ca_.Bind(&block4, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    ca_.SetSourcePosition("../../src/builtins/proxy-constructor.tq", 54);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp76}, MessageTemplate::kProxyNonObject);
  }

  if (block2.is_used()) {
    TNode<Context> tmp81;
    TNode<Object> tmp82;
    TNode<Object> tmp83;
    TNode<Object> tmp84;
    TNode<Object> tmp85;
    ca_.Bind(&block2, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85);
    ca_.SetSourcePosition("../../src/builtins/proxy-constructor.tq", 57);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp81}, MessageTemplate::kProxyHandlerOrTargetRevoked);
  }
}

}  // namespace internal
}  // namespace v8

