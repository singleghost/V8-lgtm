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

void CallThrowTypeErrorIfStrict_320(compiler::CodeAssemblerState* state_, TNode<Context> p_context, MessageTemplate p_message) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 15);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = CodeStubAssembler(state_).SmiConstant(p_message);
    TNode<Oddball> tmp2;
    USE(tmp2);
    tmp2 = Null_63(state_);
    TNode<Oddball> tmp3;
    USE(tmp3);
    tmp3 = Null_63(state_);
    CodeStubAssembler(state_).CallRuntime(Runtime::kThrowTypeErrorIfStrict, tmp0, tmp1, tmp2, tmp3);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 13);
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    TNode<Context> tmp5;
    ca_.Bind(&block1, &tmp5);
    ca_.Goto(&block2, tmp5);
  }

    TNode<Context> tmp6;
    ca_.Bind(&block2, &tmp6);
}

TF_BUILTIN(ProxySetProperty, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSProxy> parameter1 = UncheckedCast<JSProxy>(Parameter(Descriptor::kProxy));
  USE(parameter1);
  TNode<Name> parameter2 = UncheckedCast<Name>(Parameter(Descriptor::kName));
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  TNode<Object> parameter4 = UncheckedCast<Object>(Parameter(Descriptor::kReceiverValue));
  USE(parameter4);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Name, Name, Name> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Name, Name, Name, Symbol> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Name, Name> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Name, Name> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Name, HeapObject> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Name, HeapObject, JSReceiver> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Name, JSReceiver, JSReceiver, JSReceiver> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Name, JSReceiver, JSReceiver, JSReceiver, JSReceiver> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Name, JSReceiver, JSReceiver> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Name, JSReceiver, JSReceiver, JSReceiver> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Name, JSReceiver, JSReceiver, JSReceiver, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Name, JSReceiver, JSReceiver, JSReceiver, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Name, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Name> block6(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3, parameter4);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSProxy> tmp1;
    TNode<Name> tmp2;
    TNode<Object> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 28);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 29);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 30);
    TNode<Symbol> tmp5;
    USE(tmp5);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp5 = Cast15ATPrivateSymbol_125(state_, TNode<HeapObject>{tmp2}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, ca_.Uninitialized<Name>(), tmp2, tmp2, tmp5);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, ca_.Uninitialized<Name>(), tmp2, tmp2);
    }
  }

  if (block4.is_used()) {
    TNode<Context> tmp6;
    TNode<JSProxy> tmp7;
    TNode<Name> tmp8;
    TNode<Object> tmp9;
    TNode<Object> tmp10;
    TNode<Name> tmp11;
    TNode<Name> tmp12;
    TNode<Name> tmp13;
    ca_.Bind(&block4, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block2, tmp6, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12);
  }

  if (block3.is_used()) {
    TNode<Context> tmp14;
    TNode<JSProxy> tmp15;
    TNode<Name> tmp16;
    TNode<Object> tmp17;
    TNode<Object> tmp18;
    TNode<Name> tmp19;
    TNode<Name> tmp20;
    TNode<Name> tmp21;
    TNode<Symbol> tmp22;
    ca_.Bind(&block3, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 31);
    CallThrowTypeErrorIfStrict_320(state_, TNode<Context>{tmp14}, MessageTemplate::kProxyPrivate);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 32);
    TNode<Oddball> tmp23;
    USE(tmp23);
    tmp23 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp23);
  }

  if (block2.is_used()) {
    TNode<Context> tmp24;
    TNode<JSProxy> tmp25;
    TNode<Name> tmp26;
    TNode<Object> tmp27;
    TNode<Object> tmp28;
    TNode<Name> tmp29;
    TNode<Name> tmp30;
    ca_.Bind(&block2, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 34);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 35);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 30);
    ca_.Goto(&block1, tmp24, tmp25, tmp26, tmp27, tmp28, ca_.UncheckedCast<Name>(tmp30), tmp30);
  }

  if (block1.is_used()) {
    TNode<Context> tmp31;
    TNode<JSProxy> tmp32;
    TNode<Name> tmp33;
    TNode<Object> tmp34;
    TNode<Object> tmp35;
    TNode<Name> tmp36;
    TNode<Name> tmp37;
    ca_.Bind(&block1, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 29);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 45);
    TNode<IntPtrT> tmp38 = ca_.IntPtrConstant(JSProxy::kHandlerOffset);
    USE(tmp38);
    TNode<HeapObject>tmp39 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp32, tmp38});
    TNode<JSReceiver> tmp40;
    USE(tmp40);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp40 = Cast10JSReceiver_142(state_, TNode<HeapObject>{tmp39}, &label0);
    ca_.Goto(&block9, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp39, tmp40);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp39);
    }
  }

  if (block10.is_used()) {
    TNode<Context> tmp41;
    TNode<JSProxy> tmp42;
    TNode<Name> tmp43;
    TNode<Object> tmp44;
    TNode<Object> tmp45;
    TNode<Name> tmp46;
    TNode<HeapObject> tmp47;
    ca_.Bind(&block10, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    ca_.Goto(&block6, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46);
  }

  if (block9.is_used()) {
    TNode<Context> tmp48;
    TNode<JSProxy> tmp49;
    TNode<Name> tmp50;
    TNode<Object> tmp51;
    TNode<Object> tmp52;
    TNode<Name> tmp53;
    TNode<HeapObject> tmp54;
    TNode<JSReceiver> tmp55;
    ca_.Bind(&block9, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 48);
    TNode<IntPtrT> tmp56 = ca_.IntPtrConstant(JSProxy::kTargetOffset);
    USE(tmp56);
    TNode<HeapObject>tmp57 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp49, tmp56});
    TNode<JSReceiver> tmp58;
    USE(tmp58);
    tmp58 = UnsafeCast10JSReceiver_1480(state_, TNode<Context>{tmp48}, TNode<Object>{tmp57});
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 52);
    TNode<JSReceiver> tmp59;
    USE(tmp59);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp59 = GetMethod_247(state_, TNode<Context>{tmp48}, TNode<Object>{tmp55}, "set", &label0);
    ca_.Goto(&block13, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp55, tmp58, tmp55, tmp59);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block14, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp55, tmp58, tmp55);
    }
  }

  if (block14.is_used()) {
    TNode<Context> tmp60;
    TNode<JSProxy> tmp61;
    TNode<Name> tmp62;
    TNode<Object> tmp63;
    TNode<Object> tmp64;
    TNode<Name> tmp65;
    TNode<JSReceiver> tmp66;
    TNode<JSReceiver> tmp67;
    TNode<JSReceiver> tmp68;
    ca_.Bind(&block14, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68);
    ca_.Goto(&block12, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67);
  }

  if (block13.is_used()) {
    TNode<Context> tmp69;
    TNode<JSProxy> tmp70;
    TNode<Name> tmp71;
    TNode<Object> tmp72;
    TNode<Object> tmp73;
    TNode<Name> tmp74;
    TNode<JSReceiver> tmp75;
    TNode<JSReceiver> tmp76;
    TNode<JSReceiver> tmp77;
    TNode<JSReceiver> tmp78;
    ca_.Bind(&block13, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78);
    ca_.Goto(&block11, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp78);
  }

  if (block12.is_used()) {
    TNode<Context> tmp79;
    TNode<JSProxy> tmp80;
    TNode<Name> tmp81;
    TNode<Object> tmp82;
    TNode<Object> tmp83;
    TNode<Name> tmp84;
    TNode<JSReceiver> tmp85;
    TNode<JSReceiver> tmp86;
    ca_.Bind(&block12, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 53);
    ca_.Goto(&block8, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp86);
  }

  if (block11.is_used()) {
    TNode<Context> tmp87;
    TNode<JSProxy> tmp88;
    TNode<Name> tmp89;
    TNode<Object> tmp90;
    TNode<Object> tmp91;
    TNode<Name> tmp92;
    TNode<JSReceiver> tmp93;
    TNode<JSReceiver> tmp94;
    TNode<JSReceiver> tmp95;
    ca_.Bind(&block11, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 52);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 70);
    TNode<Object> tmp96;
    USE(tmp96);
    tmp96 = CodeStubAssembler(state_).Call(TNode<Context>{tmp87}, TNode<JSReceiver>{tmp95}, TNode<Object>{tmp93}, TNode<Object>{tmp94}, TNode<Object>{tmp92}, TNode<Object>{tmp90}, TNode<Object>{tmp91});
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 71);
    TNode<BoolT> tmp97;
    USE(tmp97);
    tmp97 = ToBoolean_242(state_, TNode<Object>{tmp96});
    ca_.Branch(tmp97, &block15, &block16, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96);
  }

  if (block15.is_used()) {
    TNode<Context> tmp98;
    TNode<JSProxy> tmp99;
    TNode<Name> tmp100;
    TNode<Object> tmp101;
    TNode<Object> tmp102;
    TNode<Name> tmp103;
    TNode<JSReceiver> tmp104;
    TNode<JSReceiver> tmp105;
    TNode<JSReceiver> tmp106;
    TNode<Object> tmp107;
    ca_.Bind(&block15, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 72);
    ProxiesCodeStubAssembler(state_).CheckGetSetTrapResult(TNode<Context>{tmp98}, TNode<JSReceiver>{tmp105}, TNode<JSProxy>{tmp99}, TNode<Name>{tmp100}, TNode<Object>{tmp101}, JSProxy::AccessKind::kSet);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 73);
    CodeStubAssembler(state_).Return(tmp101);
  }

  if (block16.is_used()) {
    TNode<Context> tmp108;
    TNode<JSProxy> tmp109;
    TNode<Name> tmp110;
    TNode<Object> tmp111;
    TNode<Object> tmp112;
    TNode<Name> tmp113;
    TNode<JSReceiver> tmp114;
    TNode<JSReceiver> tmp115;
    TNode<JSReceiver> tmp116;
    TNode<Object> tmp117;
    ca_.Bind(&block16, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 76);
    TNode<Smi> tmp118;
    USE(tmp118);
    tmp118 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kProxyTrapReturnedFalsishFor);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 75);
    TNode<Object> tmp119;
    USE(tmp119);
    tmp119 = FromConstexpr20UT5ATSmi10HeapObject18ATconstexpr_string_170(state_, "set");
    CodeStubAssembler(state_).CallRuntime(Runtime::kThrowTypeErrorIfStrict, tmp108, tmp118, tmp119, tmp110);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 77);
    CodeStubAssembler(state_).Return(tmp111);
  }

  if (block8.is_used()) {
    TNode<Context> tmp121;
    TNode<JSProxy> tmp122;
    TNode<Name> tmp123;
    TNode<Object> tmp124;
    TNode<Object> tmp125;
    TNode<Name> tmp126;
    TNode<Object> tmp127;
    ca_.Bind(&block8, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 81);
    CodeStubAssembler(state_).CallRuntime(Runtime::kSetPropertyWithReceiver, tmp121, tmp127, tmp123, tmp124, tmp125);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 82);
    CodeStubAssembler(state_).Return(tmp124);
  }

  if (block6.is_used()) {
    TNode<Context> tmp129;
    TNode<JSProxy> tmp130;
    TNode<Name> tmp131;
    TNode<Object> tmp132;
    TNode<Object> tmp133;
    TNode<Name> tmp134;
    ca_.Bind(&block6, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 85);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp129}, MessageTemplate::kProxyRevoked, "set");
  }
}

}  // namespace internal
}  // namespace v8

