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

TF_BUILTIN(ProxyGetProperty, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSProxy> parameter1 = UncheckedCast<JSProxy>(Parameter(Descriptor::kProxy));
  USE(parameter1);
  TNode<Name> parameter2 = UncheckedCast<Name>(Parameter(Descriptor::kName));
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kReceiverValue));
  USE(parameter3);
  TNode<Smi> parameter4 = UncheckedCast<Smi>(Parameter(Descriptor::kOnNonExistent));
  USE(parameter4);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Smi, JSReceiver, HeapObject, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Smi, JSReceiver, HeapObject, HeapObject, Oddball> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Smi, JSReceiver, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Smi, JSReceiver, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Smi, JSReceiver, HeapObject> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Smi, JSReceiver, HeapObject, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Smi, JSReceiver> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Smi, JSReceiver, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Smi, JSReceiver, JSReceiver, JSReceiver> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Smi, JSReceiver, JSReceiver, JSReceiver, JSReceiver> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Smi, JSReceiver, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Smi, JSReceiver, JSReceiver, JSReceiver> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3, parameter4);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSProxy> tmp1;
    TNode<Name> tmp2;
    TNode<Object> tmp3;
    TNode<Smi> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-property.tq", 18);
    CodeStubAssembler(state_).PerformStackCheck(TNode<Context>{tmp0});
    ca_.SetSourcePosition("../../src/builtins/proxy-get-property.tq", 27);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-property.tq", 28);
    TNode<IntPtrT> tmp5 = ca_.IntPtrConstant(JSProxy::kHandlerOffset);
    USE(tmp5);
    TNode<HeapObject>tmp6 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp1, tmp5});
    ca_.SetSourcePosition("../../src/builtins/proxy-get-property.tq", 29);
    TNode<Oddball> tmp7;
    USE(tmp7);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp7 = Cast6ATNull_101(state_, TNode<HeapObject>{tmp6}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, ca_.Uninitialized<JSReceiver>(), tmp6, tmp6, tmp7);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, ca_.Uninitialized<JSReceiver>(), tmp6, tmp6);
    }
  }

  if (block4.is_used()) {
    TNode<Context> tmp8;
    TNode<JSProxy> tmp9;
    TNode<Name> tmp10;
    TNode<Object> tmp11;
    TNode<Smi> tmp12;
    TNode<JSReceiver> tmp13;
    TNode<HeapObject> tmp14;
    TNode<HeapObject> tmp15;
    ca_.Bind(&block4, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.Goto(&block2, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14);
  }

  if (block3.is_used()) {
    TNode<Context> tmp16;
    TNode<JSProxy> tmp17;
    TNode<Name> tmp18;
    TNode<Object> tmp19;
    TNode<Smi> tmp20;
    TNode<JSReceiver> tmp21;
    TNode<HeapObject> tmp22;
    TNode<HeapObject> tmp23;
    TNode<Oddball> tmp24;
    ca_.Bind(&block3, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-property.tq", 30);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp16}, MessageTemplate::kProxyRevoked, "get");
  }

  if (block2.is_used()) {
    TNode<Context> tmp25;
    TNode<JSProxy> tmp26;
    TNode<Name> tmp27;
    TNode<Object> tmp28;
    TNode<Smi> tmp29;
    TNode<JSReceiver> tmp30;
    TNode<HeapObject> tmp31;
    ca_.Bind(&block2, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-property.tq", 32);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-property.tq", 33);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-property.tq", 29);
    ca_.Goto(&block1, tmp25, tmp26, tmp27, tmp28, tmp29, ca_.UncheckedCast<JSReceiver>(tmp31), tmp31);
  }

  if (block1.is_used()) {
    TNode<Context> tmp32;
    TNode<JSProxy> tmp33;
    TNode<Name> tmp34;
    TNode<Object> tmp35;
    TNode<Smi> tmp36;
    TNode<JSReceiver> tmp37;
    TNode<HeapObject> tmp38;
    ca_.Bind(&block1, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-property.tq", 28);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-property.tq", 38);
    TNode<IntPtrT> tmp39 = ca_.IntPtrConstant(JSProxy::kTargetOffset);
    USE(tmp39);
    TNode<HeapObject>tmp40 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp33, tmp39});
    TNode<JSReceiver> tmp41;
    USE(tmp41);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp41 = Cast10JSReceiver_142(state_, TNode<HeapObject>{tmp40}, &label0);
    ca_.Goto(&block7, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp40, tmp41);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp40);
    }
  }

  if (block8.is_used()) {
    TNode<Context> tmp42;
    TNode<JSProxy> tmp43;
    TNode<Name> tmp44;
    TNode<Object> tmp45;
    TNode<Smi> tmp46;
    TNode<JSReceiver> tmp47;
    TNode<HeapObject> tmp48;
    ca_.Bind(&block8, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48);
    ca_.Goto(&block6, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47);
  }

  if (block7.is_used()) {
    TNode<Context> tmp49;
    TNode<JSProxy> tmp50;
    TNode<Name> tmp51;
    TNode<Object> tmp52;
    TNode<Smi> tmp53;
    TNode<JSReceiver> tmp54;
    TNode<HeapObject> tmp55;
    TNode<JSReceiver> tmp56;
    ca_.Bind(&block7, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    ca_.Goto(&block5, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp56);
  }

  if (block6.is_used()) {
    TNode<Context> tmp57;
    TNode<JSProxy> tmp58;
    TNode<Name> tmp59;
    TNode<Object> tmp60;
    TNode<Smi> tmp61;
    TNode<JSReceiver> tmp62;
    ca_.Bind(&block6, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block5.is_used()) {
    TNode<Context> tmp63;
    TNode<JSProxy> tmp64;
    TNode<Name> tmp65;
    TNode<Object> tmp66;
    TNode<Smi> tmp67;
    TNode<JSReceiver> tmp68;
    TNode<JSReceiver> tmp69;
    ca_.Bind(&block5, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-property.tq", 43);
    TNode<JSReceiver> tmp70;
    USE(tmp70);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp70 = GetMethod_247(state_, TNode<Context>{tmp63}, TNode<Object>{tmp68}, "get", &label0);
    ca_.Goto(&block11, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp68, tmp70);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp68);
    }
  }

  if (block12.is_used()) {
    TNode<Context> tmp71;
    TNode<JSProxy> tmp72;
    TNode<Name> tmp73;
    TNode<Object> tmp74;
    TNode<Smi> tmp75;
    TNode<JSReceiver> tmp76;
    TNode<JSReceiver> tmp77;
    TNode<JSReceiver> tmp78;
    ca_.Bind(&block12, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78);
    ca_.Goto(&block10, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77);
  }

  if (block11.is_used()) {
    TNode<Context> tmp79;
    TNode<JSProxy> tmp80;
    TNode<Name> tmp81;
    TNode<Object> tmp82;
    TNode<Smi> tmp83;
    TNode<JSReceiver> tmp84;
    TNode<JSReceiver> tmp85;
    TNode<JSReceiver> tmp86;
    TNode<JSReceiver> tmp87;
    ca_.Bind(&block11, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87);
    ca_.Goto(&block9, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp87);
  }

  if (block10.is_used()) {
    TNode<Context> tmp88;
    TNode<JSProxy> tmp89;
    TNode<Name> tmp90;
    TNode<Object> tmp91;
    TNode<Smi> tmp92;
    TNode<JSReceiver> tmp93;
    TNode<JSReceiver> tmp94;
    ca_.Bind(&block10, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-property.tq", 45);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-property.tq", 44);
    TNode<Object> tmp95;
    tmp95 = CodeStubAssembler(state_).CallBuiltin(Builtins::kGetPropertyWithReceiver, tmp88, tmp94, tmp90, tmp91, tmp92);
    USE(tmp95);
    CodeStubAssembler(state_).Return(tmp95);
  }

  if (block9.is_used()) {
    TNode<Context> tmp96;
    TNode<JSProxy> tmp97;
    TNode<Name> tmp98;
    TNode<Object> tmp99;
    TNode<Smi> tmp100;
    TNode<JSReceiver> tmp101;
    TNode<JSReceiver> tmp102;
    TNode<JSReceiver> tmp103;
    ca_.Bind(&block9, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-property.tq", 43);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-property.tq", 49);
    TNode<Object> tmp104;
    USE(tmp104);
    tmp104 = CodeStubAssembler(state_).Call(TNode<Context>{tmp96}, TNode<JSReceiver>{tmp103}, TNode<Object>{tmp101}, TNode<Object>{tmp102}, TNode<Object>{tmp98}, TNode<Object>{tmp99});
    ca_.SetSourcePosition("../../src/builtins/proxy-get-property.tq", 62);
    ProxiesCodeStubAssembler(state_).CheckGetSetTrapResult(TNode<Context>{tmp96}, TNode<JSReceiver>{tmp102}, TNode<JSProxy>{tmp97}, TNode<Name>{tmp98}, TNode<Object>{tmp104}, JSProxy::AccessKind::kGet);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-property.tq", 63);
    CodeStubAssembler(state_).Return(tmp104);
  }
}

}  // namespace internal
}  // namespace v8

